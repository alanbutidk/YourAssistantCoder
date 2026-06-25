/* Generated code for Python module 'rsa$key'
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



/* The "module_rsa$key" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$key;
PyDictObject *moduledict_rsa$key;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_n;
PyObject *const_str_plain_e;
PyObject *const_str_plain_blindfac;
PyObject *const_str_plain_blindfac_inverse;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_Lock;
PyObject *const_str_plain_mutex;
PyObject *const_str_plain_PEM;
PyObject *const_str_plain__load_pkcs1_pem;
PyObject *const_str_plain_DER;
PyObject *const_str_plain__load_pkcs1_der;
PyObject *const_str_plain__assert_format_exists;
PyObject *const_str_digest_216adff1f1dd33126c55bdc55e6667b3;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_plain_sorted;
PyObject *const_str_digest_34e6c73451f71d09a518d173b3071255;
PyObject *const_str_digest_3a72a7da5c557593dcc019970b08a602;
PyObject *const_str_plain__save_pkcs1_pem;
PyObject *const_str_plain__save_pkcs1_der;
PyObject *const_str_digest_f82a96d820fd84048156cc822d9ffa01;
PyObject *const_str_plain__update_blinding_factor;
PyObject *const_str_plain_pow;
PyObject *const_str_digest_df7ea500c05d398e3d84c92b2d0507cc;
PyObject *const_str_digest_4d4b7d21bb9895c244fc363727beaf4d;
PyObject *const_xrange_0_1000;
PyObject *const_str_plain_rsa;
PyObject *const_str_plain_randnum;
PyObject *const_str_plain_randint;
PyObject *const_str_plain_self;
PyObject *const_str_plain_prime;
PyObject *const_str_plain_are_relatively_prime;
PyObject *const_str_digest_7de862281324bc7a9bd6b756b409e97e;
PyObject *const_str_plain__initial_blinding_factor;
PyObject *const_str_plain_common;
PyObject *const_str_plain_inverse;
PyObject *const_int_pos_2;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_9fc5ff966ee71fc33eee35510b503454;
PyObject *const_str_digest_e3d09f228ae3d049497c65b626696c31;
PyObject *const_str_digest_81589d204f2ae95bda7a9090a065db9d;
PyObject *const_str_plain_AbstractKey;
PyObject *const_str_digest_267b4de278f37af325164d1452ad8637;
PyObject *const_str_plain_PublicKey;
PyObject *const_str_digest_989622ccef88eb949be48370a129282e;
PyObject *const_tuple_str_plain_decoder_tuple;
PyObject *const_str_plain_decoder;
PyObject *const_str_digest_ee52f19f6eef7462714cc4db074b9a85;
PyObject *const_tuple_str_plain_AsnPubKey_tuple;
PyObject *const_str_plain_AsnPubKey;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_plain_asn1Spec_tuple;
PyObject *const_str_plain_modulus;
PyObject *const_str_plain_publicExponent;
PyObject *const_tuple_str_plain_n_str_plain_e_tuple;
PyObject *const_str_digest_1476cc7a74e677de4afa64b096ef23e8;
PyObject *const_tuple_str_plain_encoder_tuple;
PyObject *const_str_plain_encoder;
PyObject *const_str_plain_setComponentByName;
PyObject *const_str_plain_encode;
PyObject *const_str_digest_0bd3ca995fe4e0ebe5c09af8bc12f1db;
PyObject *const_str_plain_pem;
PyObject *const_str_plain_load_pem;
PyObject *const_str_digest_4e752acef45453c1cfd04a15c03d7e9e;
PyObject *const_str_digest_70995f91f074be082e61baba95152a48;
PyObject *const_str_plain_save_pem;
PyObject *const_str_digest_b304437056564c48cf06dece8b23e6c1;
PyObject *const_str_digest_ee48d63b2bca52210e311acc92124a39;
PyObject *const_str_plain_load_pkcs1_openssl_der;
PyObject *const_str_digest_964a429a0af53bcdac0f8615e0a0b370;
PyObject *const_tuple_str_plain_OpenSSLPubKey_tuple;
PyObject *const_str_plain_OpenSSLPubKey;
PyObject *const_str_digest_7c8c58049edd248f8b1cb370445e702c;
PyObject *const_tuple_str_plain_univ_tuple;
PyObject *const_str_plain_univ;
PyObject *const_str_plain_header;
PyObject *const_str_plain_oid;
PyObject *const_str_plain_ObjectIdentifier;
PyObject *const_tuple_str_digest_8610103a8657fcf057847084d4917365_tuple;
PyObject *const_str_digest_3e03ada9211a1db026444e72f7487146;
PyObject *const_str_plain_key;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_digest_2e148f1423142d095744c24dfceae71c;
PyObject *const_str_plain_d;
PyObject *const_str_plain_p;
PyObject *const_str_plain_q;
PyObject *const_str_plain_exp1;
PyObject *const_str_plain_exp2;
PyObject *const_str_plain_coef;
PyObject *const_str_digest_03d8727fe946864458bcd045bd650204;
PyObject *const_str_plain_PrivateKey;
PyObject *const_str_plain_blind;
PyObject *const_str_plain_unblind;
PyObject *const_str_digest_92dc2dd8f4403187ad6e541985d32d2f;
PyObject *const_str_plain_core;
PyObject *const_str_plain_encrypt_int;
PyObject *const_str_digest_ee8b65f1548fbb314335fc5dea3fb47e;
PyObject *const_str_digest_2e4b903632c26299577dcb6a8e690066;
PyObject *const_slice_int_pos_1_int_pos_6_none;
PyObject *const_slice_int_pos_6_int_pos_9_none;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_09a8726e54c85233c5ca32e446780e79;
PyObject *const_str_plain_UserWarning;
PyObject *const_str_digest_54f59b9b4cc7d3576652cdf800eb8e59;
PyObject *const_tuple_str_plain_univ_str_plain_namedtype_tuple;
PyObject *const_str_plain_namedtype;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_AsnPrivKey;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_d87a867a1da18e127aa595b45709adf5;
PyObject *const_str_digest_e797718f3d5127a0ca8e16d10f3347b5;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_572;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_NamedTypes;
PyObject *const_str_plain_NamedType;
PyObject *const_str_plain_version;
PyObject *const_str_plain_Integer;
PyObject *const_str_plain_privateExponent;
PyObject *const_str_plain_prime1;
PyObject *const_str_plain_prime2;
PyObject *const_str_plain_exponent1;
PyObject *const_str_plain_exponent2;
PyObject *const_str_plain_coefficient;
PyObject *const_str_plain_componentType;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_tuple_str_plain_version_int_0_tuple;
PyObject *const_str_digest_3a3537a9a69c240f5bf406d9ece7a9ac;
PyObject *const_bytes_digest_3f86c5d5ba253ce42a68600892e3f29a;
PyObject *const_str_digest_a811fa673c748cc8d1dfab0dc917a52d;
PyObject *const_str_digest_be7937cb3830227c4fcdcd6c6bc680ed;
PyObject *const_int_pos_16;
PyObject *const_dict_fb8dfe10ba59d3fd99a80323dfcc691c;
PyObject *const_str_digest_12f2c28c337a7ad8065dd2daa74cae71;
PyObject *const_str_plain_is_acceptable;
PyObject *const_str_digest_f1129e914249e8fbd86b412137832989;
PyObject *const_str_plain_change_p;
PyObject *const_str_plain_getprime_func;
PyObject *const_str_plain_pbits;
PyObject *const_str_plain_qbits;
PyObject *const_str_plain_max;
PyObject *const_str_plain_min;
PyObject *const_str_digest_824819913e36f317ca76393644bfbbb5;
PyObject *const_str_plain_accurate;
PyObject *const_str_plain_bit_size;
PyObject *const_str_plain_total_bits;
PyObject *const_str_plain_NotRelativePrimeError;
PyObject *const_str_digest_c199927879c3d545ebc83b67307ef3a0;
PyObject *const_tuple_str_plain_msg_tuple;
PyObject *const_str_digest_9427903ebd0cd60ccd54ba7acfb3921b;
PyObject *const_str_digest_d50e8996bc1a70ca7e8f369e71291f7c;
PyObject *const_str_plain_calculate_keys_custom_exponent;
PyObject *const_str_plain_DEFAULT_EXPONENT;
PyObject *const_str_digest_aa56ab6f4e00ea7362417c585e13c6bc;
PyObject *const_str_plain_find_p_q;
PyObject *const_str_plain_nbits;
PyObject *const_str_plain_exponent;
PyObject *const_tuple_str_plain_exponent_tuple;
PyObject *const_str_digest_d1dae56868f7653d5acff0ff0d8039d0;
PyObject *const_str_digest_be47b3c5a509126ecd463c228c402d3a;
PyObject *const_str_digest_7d3dbb5e620fc143822200bf9a2b46e1;
PyObject *const_tuple_str_plain_parallel_tuple;
PyObject *const_str_plain_parallel;
PyObject *const_dict_fd2086467cf46fd6563d3928a895e41a;
PyObject *const_str_digest_b597751dda24a6e86174ea44a92f9135;
PyObject *const_str_plain_getprime;
PyObject *const_str_plain_gen_keys;
PyObject *const_tuple_str_plain_accurate_str_plain_exponent_tuple;
PyObject *const_str_digest_68b2ea0f0a1ad640a790ae22d4be15b9;
PyObject *const_str_plain_poolsize;
PyObject *const_tuple_str_plain_poolsize_tuple;
PyObject *const_str_digest_ed6904958c06a3e690b26dbd59fb2dd0;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_typing;
PyObject *const_str_digest_eae335f7395ee2b175bb07ef24fa2bea;
PyObject *const_str_digest_10b4a05c1efbc618d78f50cb7defbe0f;
PyObject *const_str_digest_6b3d394b801be02bbc23994592501dc9;
PyObject *const_str_digest_38ae76d41c37a561fb493fd3359762a3;
PyObject *const_str_digest_a899a62361d9cc42adab5d09beed3c11;
PyObject *const_int_pos_65537;
PyObject *const_str_plain_TypeVar;
PyObject *const_tuple_str_plain_T_str_plain_AbstractKey_tuple;
PyObject *const_tuple_str_plain_bound_tuple;
PyObject *const_str_plain_T;
PyObject *const_str_digest_cbe60233bd45d5e5e6afb0482cb3b14f;
PyObject *const_int_pos_51;
PyObject *const_tuple_d0e5b58e7bb5fe02e0dc4b4c65712de4_tuple;
PyObject *const_str_plain___slots__;
PyObject *const_dict_31f6dae38776b224a68e146b788e9d46;
PyObject *const_str_digest_0af4566ea455811e8cf5f663fde3c850;
PyObject *const_str_plain_cls;
PyObject *const_str_plain_Type;
PyObject *const_str_plain_keyfile;
PyObject *const_str_plain_return;
PyObject *const_str_digest_c29a6edfce6ca52793b046e08349ae0c;
PyObject *const_str_digest_6b1ae95778c61af1f5419983522fae05;
PyObject *const_str_digest_58308eeaac42ed7b11392259e5110712;
PyObject *const_str_digest_88f1dd72b66b5812fbe508aa4161a4be;
PyObject *const_dict_86ee5f6d233d9d8a00243cd68c2d9335;
PyObject *const_str_digest_5ac826f1a015ee54d52a37f1f6c59b05;
PyObject *const_str_digest_0962a34b1ab5daf34a0fcfb11f559562;
PyObject *const_str_digest_65f1229dec1a485482a4f1f3aa1ebe90;
PyObject *const_str_digest_d20d5d2dc49b0058eacff1c10c50ac30;
PyObject *const_tuple_str_plain_PEM_tuple;
PyObject *const_str_plain_load_pkcs1;
PyObject *const_str_digest_67ecd0641a7eb0f9336861afb3fa4da6;
PyObject *const_str_plain_file_format;
PyObject *const_str_plain_methods;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_Callable;
PyObject *const_str_digest_b52627a97ca4f4890b874d143a1a57d8;
PyObject *const_dict_2559ec3d086fdea2c91670f6dab68503;
PyObject *const_str_plain_save_pkcs1;
PyObject *const_str_digest_9ce75b515507cb6e25d039a3f2e1c035;
PyObject *const_str_plain_message;
PyObject *const_str_plain_Tuple;
PyObject *const_tuple_type_int_type_int_tuple;
PyObject *const_str_digest_cb64d8eeb18b619d72982a0c7894f3c5;
PyObject *const_dict_c53dff916d1fc501fd4b641465b076a8;
PyObject *const_str_digest_7320fdfc994b4d5ab9e9f72c6c68ff92;
PyObject *const_dict_1259841a0de68bdf7d5f55bbd030b617;
PyObject *const_str_digest_d707a9e106af3ad05cea69442cb940e8;
PyObject *const_str_digest_b1f8bb54ea5698940c57c7f8f7e6dfed;
PyObject *const_str_digest_593257a4ae45b1e1dc0247d4af3ec9c0;
PyObject *const_int_pos_218;
PyObject *const_str_plain_str;
PyObject *const_str_digest_788e78a79180ccea6575e617c897fd8f;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_f7c32e160e42ecb4a5200086b2fedd24;
PyObject *const_str_plain___getstate__;
PyObject *const_str_digest_f9dc88143493349044fd547a61245d13;
PyObject *const_str_plain_state;
PyObject *const_str_plain___setstate__;
PyObject *const_str_digest_ead507bd7d6628bf938033126d244957;
PyObject *const_str_plain_other;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_bool;
PyObject *const_str_plain___eq__;
PyObject *const_str_digest_65146ee0b2d84171edf4b5b67f1d15f3;
PyObject *const_str_plain___ne__;
PyObject *const_str_digest_dc579632862d701d665e93bf67210a4b;
PyObject *const_str_plain___hash__;
PyObject *const_str_digest_1114786e42f696199e368259decb22b1;
PyObject *const_str_digest_1cc93e65e22c78f03cca086916f430ab;
PyObject *const_str_digest_fc827f874680f624d9d2a0fa54fff39e;
PyObject *const_str_digest_4bf8426ab46c24172e742c4d04234580;
PyObject *const_str_digest_2334096e2b7358b302ca8d79b47b76a7;
PyObject *const_str_plain_load_pkcs1_openssl_pem;
PyObject *const_str_digest_f2ebaddc1d19cefba7ffc1cfaf2443a1;
PyObject *const_str_digest_5f3be474dcf26c1632330e35d03f802b;
PyObject *const_str_digest_343e6721029897f6aaa44376485b8329;
PyObject *const_int_pos_383;
PyObject *const_tuple_ba8a256657034d8a966d53e14b2dd275_tuple;
PyObject *const_str_digest_9c8af091b131dc331e3e9905764ff652;
PyObject *const_str_digest_fb534ab14d65ba2103c020178e5a4f5f;
PyObject *const_str_digest_628860bfa6478f39126a1df96e095733;
PyObject *const_str_digest_aad7a899961b1338b939717f879e9b68;
PyObject *const_str_digest_c2b0a4987aa4e560bb2ec061e599dccc;
PyObject *const_str_digest_bc8554abbafdddb346ab90ac39866a6b;
PyObject *const_str_digest_902528698a8a7df5fde3dac02a105065;
PyObject *const_str_digest_e297d6f3b9b877ce2930115052614d96;
PyObject *const_str_plain_encrypted;
PyObject *const_str_plain_blinded_decrypt;
PyObject *const_str_digest_ad71f12457c5dc1b5c5834a710685c4a;
PyObject *const_str_plain_blinded_encrypt;
PyObject *const_str_digest_b2559746321d70b8eabf5391bf93073a;
PyObject *const_str_digest_7a68b03843188d7afdfbddb1ec688c22;
PyObject *const_str_digest_6fe12da162a4aee24a23c2ff39f851e0;
PyObject *const_str_digest_aeff62fd6e9b0332a7dee1ba24e0f138;
PyObject *const_str_digest_e087db1fee359dd9c0122cc127fd1139;
PyObject *const_tuple_adbe2d45083e9d9c142742e3b461c520_tuple;
PyObject *const_tuple_list_type_int_list_type_int_tuple;
PyObject *const_str_plain_calculate_keys;
PyObject *const_tuple_type_int_type_int_type_int_type_int_tuple;
PyObject *const_str_plain_newkeys;
PyObject *const_str_digest_3f7501a9b26cb8976f6b7a328e7850ca;
PyObject *const_str_digest_37eb81d31aa795eec9409cfa40aa5ee2;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain___class___str_plain_namedtype_str_plain_univ_tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_n_str_plain_e_tuple;
PyObject *const_tuple_08df0d72fd72a415e43306690aef1744_tuple;
PyObject *const_tuple_str_plain_self_str_plain_state_tuple;
PyObject *const_tuple_389f2cb53c54845476e38e7af49da0e7_tuple;
PyObject *const_tuple_str_plain_self_str_underscore_str_plain_blind_r_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_keyfile_tuple;
PyObject *const_tuple_968bffa3ec0e03c6ee859f5fd4c97a62_tuple;
PyObject *const_tuple_99e911a0fe117b7d66a43895baea1dd0_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_keyfile_str_plain_der_tuple;
PyObject *const_tuple_145af7cce742876ce79e85a1a612023f_tuple;
PyObject *const_tuple_2942f95c0057d7dfb0e784ef9c3f03b3_tuple;
PyObject *const_tuple_str_plain_self_str_plain_der_tuple;
PyObject *const_tuple_e5551b147ea18fad8c1baf72c74702c9_tuple;
PyObject *const_tuple_3d2625ef26b02a4b771eeb66533b6089_tuple;
PyObject *const_tuple_44837e6726b2a133352100898c25ea92_tuple;
PyObject *const_tuple_str_plain_p_str_plain_q_tuple;
PyObject *const_tuple_ba1f0b5a413e0b9f62e02a582ebc3962_tuple;
PyObject *const_tuple_afe4329f45c2044890713e535b1b37ca_tuple;
PyObject *const_tuple_814b60caa81d0a20490cb66a7b2bc695_tuple;
PyObject *const_tuple_str_plain_nbits_str_plain_parallel_str_plain_poolsize_tuple;
PyObject *const_tuple_str_plain_parallel_str_plain_poolsize_tuple;
PyObject *const_tuple_70eb004f978d31fce1a332db785f8e22_tuple;
PyObject *const_tuple_str_plain_accurate_str_plain_total_bits_tuple;
PyObject *const_tuple_faa805a9c81a8fe7fda708cb9dc4a157_tuple;
PyObject *const_tuple_7073bc916dbcaf37982a36fe649fd0f0_tuple;
PyObject *const_tuple_f68e983026507002238f869894826083_tuple;
PyObject *const_tuple_0eb1d6d0a4f925c4feb7138493829be1_tuple;
PyObject *const_tuple_str_plain_self_str_plain_blinded_str_plain_blindfac_inverse_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[315];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("rsa.key"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_n);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_e);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_blindfac);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_blindfac_inverse);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Lock);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_mutex);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_PEM);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__load_pkcs1_pem);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_DER);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__load_pkcs1_der);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__assert_format_exists);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_216adff1f1dd33126c55bdc55e6667b3);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_sorted);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_34e6c73451f71d09a518d173b3071255);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a72a7da5c557593dcc019970b08a602);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__save_pkcs1_pem);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__save_pkcs1_der);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_f82a96d820fd84048156cc822d9ffa01);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__update_blinding_factor);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_pow);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_df7ea500c05d398e3d84c92b2d0507cc);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d4b7d21bb9895c244fc363727beaf4d);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_xrange_0_1000);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_randnum);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_randint);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_prime);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_are_relatively_prime);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_7de862281324bc7a9bd6b756b409e97e);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__initial_blinding_factor);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_common);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_inverse);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fc5ff966ee71fc33eee35510b503454);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_e3d09f228ae3d049497c65b626696c31);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_81589d204f2ae95bda7a9090a065db9d);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractKey);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_267b4de278f37af325164d1452ad8637);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_PublicKey);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_989622ccef88eb949be48370a129282e);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_decoder_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_decoder);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee52f19f6eef7462714cc4db074b9a85);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsnPubKey_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsnPubKey);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asn1Spec_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_modulus);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_publicExponent);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_n_str_plain_e_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_1476cc7a74e677de4afa64b096ef23e8);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoder_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_encoder);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_setComponentByName);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bd3ca995fe4e0ebe5c09af8bc12f1db);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_pem);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e752acef45453c1cfd04a15c03d7e9e);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_70995f91f074be082e61baba95152a48);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_save_pem);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_b304437056564c48cf06dece8b23e6c1);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee48d63b2bca52210e311acc92124a39);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_pkcs1_openssl_der);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_964a429a0af53bcdac0f8615e0a0b370);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OpenSSLPubKey_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpenSSLPubKey);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_univ_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_univ);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_header);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_oid);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectIdentifier);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8610103a8657fcf057847084d4917365_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e03ada9211a1db026444e72f7487146);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e148f1423142d095744c24dfceae71c);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_d);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_p);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_q);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_exp1);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_exp2);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_coef);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_03d8727fe946864458bcd045bd650204);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateKey);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_blind);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_unblind);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_92dc2dd8f4403187ad6e541985d32d2f);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_core);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt_int);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee8b65f1548fbb314335fc5dea3fb47e);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e4b903632c26299577dcb6a8e690066);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_pos_6_none);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_6_int_pos_9_none);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_09a8726e54c85233c5ca32e446780e79);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_UserWarning);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_54f59b9b4cc7d3576652cdf800eb8e59);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_univ_str_plain_namedtype_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_namedtype);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsnPrivKey);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_d87a867a1da18e127aa595b45709adf5);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_e797718f3d5127a0ca8e16d10f3347b5);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_572);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTypes);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedType);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_Integer);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_privateExponent);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_prime1);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_prime2);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_exponent1);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_exponent2);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_coefficient);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_componentType);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_version_int_0_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a3537a9a69c240f5bf406d9ece7a9ac);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_3f86c5d5ba253ce42a68600892e3f29a);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_a811fa673c748cc8d1dfab0dc917a52d);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_be7937cb3830227c4fcdcd6c6bc680ed);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_fb8dfe10ba59d3fd99a80323dfcc691c);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_12f2c28c337a7ad8065dd2daa74cae71);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_acceptable);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1129e914249e8fbd86b412137832989);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_change_p);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_getprime_func);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_pbits);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_qbits);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_824819913e36f317ca76393644bfbbb5);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_accurate);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_bit_size);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_total_bits);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotRelativePrimeError);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_c199927879c3d545ebc83b67307ef3a0);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_msg_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_9427903ebd0cd60ccd54ba7acfb3921b);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_d50e8996bc1a70ca7e8f369e71291f7c);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_calculate_keys_custom_exponent);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_EXPONENT);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa56ab6f4e00ea7362417c585e13c6bc);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_find_p_q);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_nbits);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_exponent);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exponent_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1dae56868f7653d5acff0ff0d8039d0);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_be47b3c5a509126ecd463c228c402d3a);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d3dbb5e620fc143822200bf9a2b46e1);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parallel_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_parallel);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_fd2086467cf46fd6563d3928a895e41a);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_b597751dda24a6e86174ea44a92f9135);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_getprime);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_gen_keys);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_accurate_str_plain_exponent_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_68b2ea0f0a1ad640a790ae22d4be15b9);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_poolsize);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_poolsize_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed6904958c06a3e690b26dbd59fb2dd0);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_eae335f7395ee2b175bb07ef24fa2bea);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_10b4a05c1efbc618d78f50cb7defbe0f);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b3d394b801be02bbc23994592501dc9);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_38ae76d41c37a561fb493fd3359762a3);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_a899a62361d9cc42adab5d09beed3c11);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_int_pos_65537);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_str_plain_AbstractKey_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbe60233bd45d5e5e6afb0482cb3b14f);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_int_pos_51);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_d0e5b58e7bb5fe02e0dc4b4c65712de4_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_dict_31f6dae38776b224a68e146b788e9d46);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_0af4566ea455811e8cf5f663fde3c850);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_cls);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_Type);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_keyfile);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_c29a6edfce6ca52793b046e08349ae0c);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b1ae95778c61af1f5419983522fae05);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_58308eeaac42ed7b11392259e5110712);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_88f1dd72b66b5812fbe508aa4161a4be);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_dict_86ee5f6d233d9d8a00243cd68c2d9335);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ac826f1a015ee54d52a37f1f6c59b05);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_0962a34b1ab5daf34a0fcfb11f559562);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_65f1229dec1a485482a4f1f3aa1ebe90);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_d20d5d2dc49b0058eacff1c10c50ac30);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PEM_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_pkcs1);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_67ecd0641a7eb0f9336861afb3fa4da6);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_format);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_methods);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_b52627a97ca4f4890b874d143a1a57d8);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_dict_2559ec3d086fdea2c91670f6dab68503);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_save_pkcs1);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ce75b515507cb6e25d039a3f2e1c035);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb64d8eeb18b619d72982a0c7894f3c5);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_dict_c53dff916d1fc501fd4b641465b076a8);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_7320fdfc994b4d5ab9e9f72c6c68ff92);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_dict_1259841a0de68bdf7d5f55bbd030b617);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_digest_d707a9e106af3ad05cea69442cb940e8);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1f8bb54ea5698940c57c7f8f7e6dfed);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_digest_593257a4ae45b1e1dc0247d4af3ec9c0);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_int_pos_218);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_digest_788e78a79180ccea6575e617c897fd8f);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7c32e160e42ecb4a5200086b2fedd24);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_plain___getstate__);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9dc88143493349044fd547a61245d13);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_plain___setstate__);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_digest_ead507bd7d6628bf938033126d244957);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_plain_other);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_plain___eq__);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_str_digest_65146ee0b2d84171edf4b5b67f1d15f3);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_plain___ne__);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc579632862d701d665e93bf67210a4b);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_plain___hash__);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_str_digest_1114786e42f696199e368259decb22b1);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cc93e65e22c78f03cca086916f430ab);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc827f874680f624d9d2a0fa54fff39e);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_str_digest_4bf8426ab46c24172e742c4d04234580);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_str_digest_2334096e2b7358b302ca8d79b47b76a7);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_pkcs1_openssl_pem);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2ebaddc1d19cefba7ffc1cfaf2443a1);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f3be474dcf26c1632330e35d03f802b);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_str_digest_343e6721029897f6aaa44376485b8329);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_int_pos_383);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_tuple_ba8a256657034d8a966d53e14b2dd275_tuple);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c8af091b131dc331e3e9905764ff652);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb534ab14d65ba2103c020178e5a4f5f);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_str_digest_628860bfa6478f39126a1df96e095733);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_str_digest_aad7a899961b1338b939717f879e9b68);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2b0a4987aa4e560bb2ec061e599dccc);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc8554abbafdddb346ab90ac39866a6b);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_str_digest_902528698a8a7df5fde3dac02a105065);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_str_digest_e297d6f3b9b877ce2930115052614d96);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_str_plain_encrypted);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_str_plain_blinded_decrypt);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad71f12457c5dc1b5c5834a710685c4a);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_str_plain_blinded_encrypt);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2559746321d70b8eabf5391bf93073a);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a68b03843188d7afdfbddb1ec688c22);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_str_digest_6fe12da162a4aee24a23c2ff39f851e0);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_str_digest_aeff62fd6e9b0332a7dee1ba24e0f138);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_str_digest_e087db1fee359dd9c0122cc127fd1139);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_tuple_adbe2d45083e9d9c142742e3b461c520_tuple);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_tuple_list_type_int_list_type_int_tuple);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_str_plain_calculate_keys);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_type_int_type_int_tuple);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_str_plain_newkeys);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f7501a9b26cb8976f6b7a328e7850ca);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_str_digest_37eb81d31aa795eec9409cfa40aa5ee2);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___str_plain_namedtype_str_plain_univ_tuple);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[285] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
mod_consts_hash[286] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[287] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_n_str_plain_e_tuple);
mod_consts_hash[288] = DEEP_HASH(tstate, mod_consts.const_tuple_08df0d72fd72a415e43306690aef1744_tuple);
mod_consts_hash[289] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple);
mod_consts_hash[290] = DEEP_HASH(tstate, mod_consts.const_tuple_389f2cb53c54845476e38e7af49da0e7_tuple);
mod_consts_hash[291] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_underscore_str_plain_blind_r_tuple);
mod_consts_hash[292] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_keyfile_tuple);
mod_consts_hash[293] = DEEP_HASH(tstate, mod_consts.const_tuple_968bffa3ec0e03c6ee859f5fd4c97a62_tuple);
mod_consts_hash[294] = DEEP_HASH(tstate, mod_consts.const_tuple_99e911a0fe117b7d66a43895baea1dd0_tuple);
mod_consts_hash[295] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_keyfile_str_plain_der_tuple);
mod_consts_hash[296] = DEEP_HASH(tstate, mod_consts.const_tuple_145af7cce742876ce79e85a1a612023f_tuple);
mod_consts_hash[297] = DEEP_HASH(tstate, mod_consts.const_tuple_2942f95c0057d7dfb0e784ef9c3f03b3_tuple);
mod_consts_hash[298] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_der_tuple);
mod_consts_hash[299] = DEEP_HASH(tstate, mod_consts.const_tuple_e5551b147ea18fad8c1baf72c74702c9_tuple);
mod_consts_hash[300] = DEEP_HASH(tstate, mod_consts.const_tuple_3d2625ef26b02a4b771eeb66533b6089_tuple);
mod_consts_hash[301] = DEEP_HASH(tstate, mod_consts.const_tuple_44837e6726b2a133352100898c25ea92_tuple);
mod_consts_hash[302] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_p_str_plain_q_tuple);
mod_consts_hash[303] = DEEP_HASH(tstate, mod_consts.const_tuple_ba1f0b5a413e0b9f62e02a582ebc3962_tuple);
mod_consts_hash[304] = DEEP_HASH(tstate, mod_consts.const_tuple_afe4329f45c2044890713e535b1b37ca_tuple);
mod_consts_hash[305] = DEEP_HASH(tstate, mod_consts.const_tuple_814b60caa81d0a20490cb66a7b2bc695_tuple);
mod_consts_hash[306] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_nbits_str_plain_parallel_str_plain_poolsize_tuple);
mod_consts_hash[307] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parallel_str_plain_poolsize_tuple);
mod_consts_hash[308] = DEEP_HASH(tstate, mod_consts.const_tuple_70eb004f978d31fce1a332db785f8e22_tuple);
mod_consts_hash[309] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_accurate_str_plain_total_bits_tuple);
mod_consts_hash[310] = DEEP_HASH(tstate, mod_consts.const_tuple_faa805a9c81a8fe7fda708cb9dc4a157_tuple);
mod_consts_hash[311] = DEEP_HASH(tstate, mod_consts.const_tuple_7073bc916dbcaf37982a36fe649fd0f0_tuple);
mod_consts_hash[312] = DEEP_HASH(tstate, mod_consts.const_tuple_f68e983026507002238f869894826083_tuple);
mod_consts_hash[313] = DEEP_HASH(tstate, mod_consts.const_tuple_0eb1d6d0a4f925c4feb7138493829be1_tuple);
mod_consts_hash[314] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_blinded_str_plain_blindfac_inverse_tuple);
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
void checkModuleConstants_rsa$key(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_n));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_n);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_e));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_e);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_blindfac));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blindfac);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_blindfac_inverse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blindfac_inverse);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threading);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Lock);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_mutex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mutex);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_PEM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PEM);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__load_pkcs1_pem));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__load_pkcs1_pem);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_DER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DER);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__load_pkcs1_der));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__load_pkcs1_der);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__assert_format_exists));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__assert_format_exists);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_216adff1f1dd33126c55bdc55e6667b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_216adff1f1dd33126c55bdc55e6667b3);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_sorted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sorted);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_34e6c73451f71d09a518d173b3071255));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34e6c73451f71d09a518d173b3071255);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a72a7da5c557593dcc019970b08a602));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a72a7da5c557593dcc019970b08a602);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__save_pkcs1_pem));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__save_pkcs1_pem);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__save_pkcs1_der));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__save_pkcs1_der);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_f82a96d820fd84048156cc822d9ffa01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f82a96d820fd84048156cc822d9ffa01);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__update_blinding_factor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__update_blinding_factor);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_pow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pow);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_df7ea500c05d398e3d84c92b2d0507cc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df7ea500c05d398e3d84c92b2d0507cc);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d4b7d21bb9895c244fc363727beaf4d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4d4b7d21bb9895c244fc363727beaf4d);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_xrange_0_1000));
CHECK_OBJECT_DEEP(mod_consts.const_xrange_0_1000);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rsa);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_randnum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_randnum);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_randint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_randint);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_prime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prime);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_are_relatively_prime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_are_relatively_prime);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_7de862281324bc7a9bd6b756b409e97e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7de862281324bc7a9bd6b756b409e97e);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__initial_blinding_factor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__initial_blinding_factor);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_common));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_common);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_inverse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inverse);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fc5ff966ee71fc33eee35510b503454));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9fc5ff966ee71fc33eee35510b503454);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_e3d09f228ae3d049497c65b626696c31));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e3d09f228ae3d049497c65b626696c31);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_81589d204f2ae95bda7a9090a065db9d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_81589d204f2ae95bda7a9090a065db9d);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AbstractKey);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_267b4de278f37af325164d1452ad8637));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_267b4de278f37af325164d1452ad8637);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_PublicKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PublicKey);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_989622ccef88eb949be48370a129282e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_989622ccef88eb949be48370a129282e);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_decoder_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_decoder_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_decoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decoder);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee52f19f6eef7462714cc4db074b9a85));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee52f19f6eef7462714cc4db074b9a85);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsnPubKey_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsnPubKey_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsnPubKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsnPubKey);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asn1Spec_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_asn1Spec_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_modulus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modulus);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_publicExponent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_publicExponent);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_n_str_plain_e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_n_str_plain_e_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_1476cc7a74e677de4afa64b096ef23e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1476cc7a74e677de4afa64b096ef23e8);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoder_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_encoder_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_encoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encoder);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_setComponentByName));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setComponentByName);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bd3ca995fe4e0ebe5c09af8bc12f1db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0bd3ca995fe4e0ebe5c09af8bc12f1db);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_pem));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pem);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_pem);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e752acef45453c1cfd04a15c03d7e9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e752acef45453c1cfd04a15c03d7e9e);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_70995f91f074be082e61baba95152a48));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70995f91f074be082e61baba95152a48);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_save_pem));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_save_pem);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_b304437056564c48cf06dece8b23e6c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b304437056564c48cf06dece8b23e6c1);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee48d63b2bca52210e311acc92124a39));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee48d63b2bca52210e311acc92124a39);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_pkcs1_openssl_der));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_pkcs1_openssl_der);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_964a429a0af53bcdac0f8615e0a0b370));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_964a429a0af53bcdac0f8615e0a0b370);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OpenSSLPubKey_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_OpenSSLPubKey_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpenSSLPubKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OpenSSLPubKey);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_univ_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_univ_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_univ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_univ);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_header);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_oid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_oid);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectIdentifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ObjectIdentifier);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8610103a8657fcf057847084d4917365_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8610103a8657fcf057847084d4917365_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e03ada9211a1db026444e72f7487146));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3e03ada9211a1db026444e72f7487146);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e148f1423142d095744c24dfceae71c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e148f1423142d095744c24dfceae71c);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_d);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_p);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_q));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_q);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_exp1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exp1);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_exp2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exp2);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_coef));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_coef);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_03d8727fe946864458bcd045bd650204));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03d8727fe946864458bcd045bd650204);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PrivateKey);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_blind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blind);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_unblind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unblind);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_92dc2dd8f4403187ad6e541985d32d2f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_92dc2dd8f4403187ad6e541985d32d2f);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_core);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encrypt_int);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee8b65f1548fbb314335fc5dea3fb47e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee8b65f1548fbb314335fc5dea3fb47e);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e4b903632c26299577dcb6a8e690066));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e4b903632c26299577dcb6a8e690066);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_pos_6_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_int_pos_6_none);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_6_int_pos_9_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_6_int_pos_9_none);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_09a8726e54c85233c5ca32e446780e79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09a8726e54c85233c5ca32e446780e79);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_UserWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UserWarning);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_54f59b9b4cc7d3576652cdf800eb8e59));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54f59b9b4cc7d3576652cdf800eb8e59);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_univ_str_plain_namedtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_univ_str_plain_namedtype_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_namedtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_namedtype);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsnPrivKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsnPrivKey);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_d87a867a1da18e127aa595b45709adf5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d87a867a1da18e127aa595b45709adf5);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_e797718f3d5127a0ca8e16d10f3347b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e797718f3d5127a0ca8e16d10f3347b5);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_572));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_572);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NamedTypes);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NamedType);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_Integer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Integer);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_privateExponent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_privateExponent);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_prime1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prime1);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_prime2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prime2);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_exponent1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exponent1);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_exponent2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exponent2);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_coefficient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_coefficient);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_componentType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_componentType);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_version_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_version_int_0_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a3537a9a69c240f5bf406d9ece7a9ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a3537a9a69c240f5bf406d9ece7a9ac);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_3f86c5d5ba253ce42a68600892e3f29a));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_3f86c5d5ba253ce42a68600892e3f29a);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_a811fa673c748cc8d1dfab0dc917a52d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a811fa673c748cc8d1dfab0dc917a52d);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_be7937cb3830227c4fcdcd6c6bc680ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be7937cb3830227c4fcdcd6c6bc680ed);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_fb8dfe10ba59d3fd99a80323dfcc691c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fb8dfe10ba59d3fd99a80323dfcc691c);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_12f2c28c337a7ad8065dd2daa74cae71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12f2c28c337a7ad8065dd2daa74cae71);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_acceptable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_acceptable);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1129e914249e8fbd86b412137832989));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f1129e914249e8fbd86b412137832989);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_change_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_change_p);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_getprime_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getprime_func);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_pbits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pbits);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_qbits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_qbits);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_824819913e36f317ca76393644bfbbb5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_824819913e36f317ca76393644bfbbb5);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_accurate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_accurate);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_bit_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bit_size);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_total_bits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_total_bits);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotRelativePrimeError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotRelativePrimeError);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_c199927879c3d545ebc83b67307ef3a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c199927879c3d545ebc83b67307ef3a0);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_msg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_msg_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_9427903ebd0cd60ccd54ba7acfb3921b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9427903ebd0cd60ccd54ba7acfb3921b);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_d50e8996bc1a70ca7e8f369e71291f7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d50e8996bc1a70ca7e8f369e71291f7c);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_calculate_keys_custom_exponent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_calculate_keys_custom_exponent);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_EXPONENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_EXPONENT);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa56ab6f4e00ea7362417c585e13c6bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa56ab6f4e00ea7362417c585e13c6bc);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_find_p_q));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find_p_q);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_nbits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nbits);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_exponent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exponent);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exponent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exponent_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1dae56868f7653d5acff0ff0d8039d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1dae56868f7653d5acff0ff0d8039d0);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_be47b3c5a509126ecd463c228c402d3a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be47b3c5a509126ecd463c228c402d3a);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d3dbb5e620fc143822200bf9a2b46e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d3dbb5e620fc143822200bf9a2b46e1);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parallel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_parallel_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_parallel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parallel);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_fd2086467cf46fd6563d3928a895e41a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fd2086467cf46fd6563d3928a895e41a);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_b597751dda24a6e86174ea44a92f9135));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b597751dda24a6e86174ea44a92f9135);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_getprime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getprime);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_gen_keys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gen_keys);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_accurate_str_plain_exponent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_accurate_str_plain_exponent_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_68b2ea0f0a1ad640a790ae22d4be15b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68b2ea0f0a1ad640a790ae22d4be15b9);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_poolsize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_poolsize);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_poolsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_poolsize_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed6904958c06a3e690b26dbd59fb2dd0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed6904958c06a3e690b26dbd59fb2dd0);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_eae335f7395ee2b175bb07ef24fa2bea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eae335f7395ee2b175bb07ef24fa2bea);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_10b4a05c1efbc618d78f50cb7defbe0f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_10b4a05c1efbc618d78f50cb7defbe0f);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b3d394b801be02bbc23994592501dc9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b3d394b801be02bbc23994592501dc9);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_38ae76d41c37a561fb493fd3359762a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_38ae76d41c37a561fb493fd3359762a3);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_a899a62361d9cc42adab5d09beed3c11));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a899a62361d9cc42adab5d09beed3c11);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_int_pos_65537));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_65537);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_str_plain_AbstractKey_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_str_plain_AbstractKey_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bound_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbe60233bd45d5e5e6afb0482cb3b14f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cbe60233bd45d5e5e6afb0482cb3b14f);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_int_pos_51));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_51);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_d0e5b58e7bb5fe02e0dc4b4c65712de4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d0e5b58e7bb5fe02e0dc4b4c65712de4_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_dict_31f6dae38776b224a68e146b788e9d46));
CHECK_OBJECT_DEEP(mod_consts.const_dict_31f6dae38776b224a68e146b788e9d46);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_0af4566ea455811e8cf5f663fde3c850));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0af4566ea455811e8cf5f663fde3c850);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cls);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_Type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Type);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_keyfile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_keyfile);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_c29a6edfce6ca52793b046e08349ae0c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c29a6edfce6ca52793b046e08349ae0c);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b1ae95778c61af1f5419983522fae05));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b1ae95778c61af1f5419983522fae05);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_58308eeaac42ed7b11392259e5110712));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58308eeaac42ed7b11392259e5110712);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_88f1dd72b66b5812fbe508aa4161a4be));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88f1dd72b66b5812fbe508aa4161a4be);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_dict_86ee5f6d233d9d8a00243cd68c2d9335));
CHECK_OBJECT_DEEP(mod_consts.const_dict_86ee5f6d233d9d8a00243cd68c2d9335);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ac826f1a015ee54d52a37f1f6c59b05));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ac826f1a015ee54d52a37f1f6c59b05);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_0962a34b1ab5daf34a0fcfb11f559562));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0962a34b1ab5daf34a0fcfb11f559562);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_65f1229dec1a485482a4f1f3aa1ebe90));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65f1229dec1a485482a4f1f3aa1ebe90);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_d20d5d2dc49b0058eacff1c10c50ac30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d20d5d2dc49b0058eacff1c10c50ac30);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PEM_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PEM_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_pkcs1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_pkcs1);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_67ecd0641a7eb0f9336861afb3fa4da6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67ecd0641a7eb0f9336861afb3fa4da6);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_format));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_format);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_methods));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_methods);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_b52627a97ca4f4890b874d143a1a57d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b52627a97ca4f4890b874d143a1a57d8);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_dict_2559ec3d086fdea2c91670f6dab68503));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2559ec3d086fdea2c91670f6dab68503);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_save_pkcs1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_save_pkcs1);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ce75b515507cb6e25d039a3f2e1c035));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ce75b515507cb6e25d039a3f2e1c035);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_type_int_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb64d8eeb18b619d72982a0c7894f3c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb64d8eeb18b619d72982a0c7894f3c5);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_dict_c53dff916d1fc501fd4b641465b076a8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c53dff916d1fc501fd4b641465b076a8);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_7320fdfc994b4d5ab9e9f72c6c68ff92));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7320fdfc994b4d5ab9e9f72c6c68ff92);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_dict_1259841a0de68bdf7d5f55bbd030b617));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1259841a0de68bdf7d5f55bbd030b617);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_digest_d707a9e106af3ad05cea69442cb940e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d707a9e106af3ad05cea69442cb940e8);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1f8bb54ea5698940c57c7f8f7e6dfed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1f8bb54ea5698940c57c7f8f7e6dfed);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_digest_593257a4ae45b1e1dc0247d4af3ec9c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_593257a4ae45b1e1dc0247d4af3ec9c0);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_int_pos_218));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_218);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_digest_788e78a79180ccea6575e617c897fd8f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_788e78a79180ccea6575e617c897fd8f);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7c32e160e42ecb4a5200086b2fedd24));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7c32e160e42ecb4a5200086b2fedd24);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_plain___getstate__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getstate__);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9dc88143493349044fd547a61245d13));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9dc88143493349044fd547a61245d13);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_plain___setstate__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setstate__);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_digest_ead507bd7d6628bf938033126d244957));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ead507bd7d6628bf938033126d244957);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_plain_other));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_other);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_plain___eq__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___eq__);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_str_digest_65146ee0b2d84171edf4b5b67f1d15f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65146ee0b2d84171edf4b5b67f1d15f3);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_plain___ne__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ne__);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc579632862d701d665e93bf67210a4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc579632862d701d665e93bf67210a4b);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_plain___hash__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___hash__);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_str_digest_1114786e42f696199e368259decb22b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1114786e42f696199e368259decb22b1);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cc93e65e22c78f03cca086916f430ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cc93e65e22c78f03cca086916f430ab);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc827f874680f624d9d2a0fa54fff39e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc827f874680f624d9d2a0fa54fff39e);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_str_digest_4bf8426ab46c24172e742c4d04234580));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4bf8426ab46c24172e742c4d04234580);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_str_digest_2334096e2b7358b302ca8d79b47b76a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2334096e2b7358b302ca8d79b47b76a7);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_pkcs1_openssl_pem));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_pkcs1_openssl_pem);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2ebaddc1d19cefba7ffc1cfaf2443a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2ebaddc1d19cefba7ffc1cfaf2443a1);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f3be474dcf26c1632330e35d03f802b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f3be474dcf26c1632330e35d03f802b);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_str_digest_343e6721029897f6aaa44376485b8329));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_343e6721029897f6aaa44376485b8329);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_int_pos_383));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_383);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_tuple_ba8a256657034d8a966d53e14b2dd275_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ba8a256657034d8a966d53e14b2dd275_tuple);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c8af091b131dc331e3e9905764ff652));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c8af091b131dc331e3e9905764ff652);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb534ab14d65ba2103c020178e5a4f5f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb534ab14d65ba2103c020178e5a4f5f);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_str_digest_628860bfa6478f39126a1df96e095733));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_628860bfa6478f39126a1df96e095733);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_str_digest_aad7a899961b1338b939717f879e9b68));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aad7a899961b1338b939717f879e9b68);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2b0a4987aa4e560bb2ec061e599dccc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2b0a4987aa4e560bb2ec061e599dccc);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc8554abbafdddb346ab90ac39866a6b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc8554abbafdddb346ab90ac39866a6b);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_str_digest_902528698a8a7df5fde3dac02a105065));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_902528698a8a7df5fde3dac02a105065);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_str_digest_e297d6f3b9b877ce2930115052614d96));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e297d6f3b9b877ce2930115052614d96);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_str_plain_encrypted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encrypted);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_str_plain_blinded_decrypt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blinded_decrypt);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad71f12457c5dc1b5c5834a710685c4a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad71f12457c5dc1b5c5834a710685c4a);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_str_plain_blinded_encrypt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blinded_encrypt);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2559746321d70b8eabf5391bf93073a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2559746321d70b8eabf5391bf93073a);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a68b03843188d7afdfbddb1ec688c22));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a68b03843188d7afdfbddb1ec688c22);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_str_digest_6fe12da162a4aee24a23c2ff39f851e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6fe12da162a4aee24a23c2ff39f851e0);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_str_digest_aeff62fd6e9b0332a7dee1ba24e0f138));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aeff62fd6e9b0332a7dee1ba24e0f138);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_str_digest_e087db1fee359dd9c0122cc127fd1139));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e087db1fee359dd9c0122cc127fd1139);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_tuple_adbe2d45083e9d9c142742e3b461c520_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_adbe2d45083e9d9c142742e3b461c520_tuple);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_tuple_list_type_int_list_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_type_int_list_type_int_tuple);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_str_plain_calculate_keys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_calculate_keys);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_type_int_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_type_int_type_int_type_int_tuple);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_str_plain_newkeys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newkeys);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f7501a9b26cb8976f6b7a328e7850ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f7501a9b26cb8976f6b7a328e7850ca);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_str_digest_37eb81d31aa795eec9409cfa40aa5ee2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37eb81d31aa795eec9409cfa40aa5ee2);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___str_plain_namedtype_str_plain_univ_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___str_plain_namedtype_str_plain_univ_tuple);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[285] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
assert(mod_consts_hash[286] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[287] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_n_str_plain_e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_n_str_plain_e_tuple);
assert(mod_consts_hash[288] == DEEP_HASH(tstate, mod_consts.const_tuple_08df0d72fd72a415e43306690aef1744_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_08df0d72fd72a415e43306690aef1744_tuple);
assert(mod_consts_hash[289] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_state_tuple);
assert(mod_consts_hash[290] == DEEP_HASH(tstate, mod_consts.const_tuple_389f2cb53c54845476e38e7af49da0e7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_389f2cb53c54845476e38e7af49da0e7_tuple);
assert(mod_consts_hash[291] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_underscore_str_plain_blind_r_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_underscore_str_plain_blind_r_tuple);
assert(mod_consts_hash[292] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_keyfile_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_keyfile_tuple);
assert(mod_consts_hash[293] == DEEP_HASH(tstate, mod_consts.const_tuple_968bffa3ec0e03c6ee859f5fd4c97a62_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_968bffa3ec0e03c6ee859f5fd4c97a62_tuple);
assert(mod_consts_hash[294] == DEEP_HASH(tstate, mod_consts.const_tuple_99e911a0fe117b7d66a43895baea1dd0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_99e911a0fe117b7d66a43895baea1dd0_tuple);
assert(mod_consts_hash[295] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_keyfile_str_plain_der_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_keyfile_str_plain_der_tuple);
assert(mod_consts_hash[296] == DEEP_HASH(tstate, mod_consts.const_tuple_145af7cce742876ce79e85a1a612023f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_145af7cce742876ce79e85a1a612023f_tuple);
assert(mod_consts_hash[297] == DEEP_HASH(tstate, mod_consts.const_tuple_2942f95c0057d7dfb0e784ef9c3f03b3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2942f95c0057d7dfb0e784ef9c3f03b3_tuple);
assert(mod_consts_hash[298] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_der_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_der_tuple);
assert(mod_consts_hash[299] == DEEP_HASH(tstate, mod_consts.const_tuple_e5551b147ea18fad8c1baf72c74702c9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e5551b147ea18fad8c1baf72c74702c9_tuple);
assert(mod_consts_hash[300] == DEEP_HASH(tstate, mod_consts.const_tuple_3d2625ef26b02a4b771eeb66533b6089_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3d2625ef26b02a4b771eeb66533b6089_tuple);
assert(mod_consts_hash[301] == DEEP_HASH(tstate, mod_consts.const_tuple_44837e6726b2a133352100898c25ea92_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_44837e6726b2a133352100898c25ea92_tuple);
assert(mod_consts_hash[302] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_p_str_plain_q_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_p_str_plain_q_tuple);
assert(mod_consts_hash[303] == DEEP_HASH(tstate, mod_consts.const_tuple_ba1f0b5a413e0b9f62e02a582ebc3962_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ba1f0b5a413e0b9f62e02a582ebc3962_tuple);
assert(mod_consts_hash[304] == DEEP_HASH(tstate, mod_consts.const_tuple_afe4329f45c2044890713e535b1b37ca_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_afe4329f45c2044890713e535b1b37ca_tuple);
assert(mod_consts_hash[305] == DEEP_HASH(tstate, mod_consts.const_tuple_814b60caa81d0a20490cb66a7b2bc695_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_814b60caa81d0a20490cb66a7b2bc695_tuple);
assert(mod_consts_hash[306] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_nbits_str_plain_parallel_str_plain_poolsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_nbits_str_plain_parallel_str_plain_poolsize_tuple);
assert(mod_consts_hash[307] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parallel_str_plain_poolsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_parallel_str_plain_poolsize_tuple);
assert(mod_consts_hash[308] == DEEP_HASH(tstate, mod_consts.const_tuple_70eb004f978d31fce1a332db785f8e22_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_70eb004f978d31fce1a332db785f8e22_tuple);
assert(mod_consts_hash[309] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_accurate_str_plain_total_bits_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_accurate_str_plain_total_bits_tuple);
assert(mod_consts_hash[310] == DEEP_HASH(tstate, mod_consts.const_tuple_faa805a9c81a8fe7fda708cb9dc4a157_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_faa805a9c81a8fe7fda708cb9dc4a157_tuple);
assert(mod_consts_hash[311] == DEEP_HASH(tstate, mod_consts.const_tuple_7073bc916dbcaf37982a36fe649fd0f0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7073bc916dbcaf37982a36fe649fd0f0_tuple);
assert(mod_consts_hash[312] == DEEP_HASH(tstate, mod_consts.const_tuple_f68e983026507002238f869894826083_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f68e983026507002238f869894826083_tuple);
assert(mod_consts_hash[313] == DEEP_HASH(tstate, mod_consts.const_tuple_0eb1d6d0a4f925c4feb7138493829be1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0eb1d6d0a4f925c4feb7138493829be1_tuple);
assert(mod_consts_hash[314] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_blinded_str_plain_blindfac_inverse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_blinded_str_plain_blindfac_inverse_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 13
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
static PyObject *module_var_accessor_rsa$key$AbstractKey(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AbstractKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AbstractKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AbstractKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AbstractKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractKey);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$key$DEFAULT_EXPONENT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_EXPONENT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_EXPONENT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_EXPONENT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_EXPONENT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_EXPONENT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_EXPONENT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_EXPONENT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_EXPONENT);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$key$PrivateKey(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_PrivateKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PrivateKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PrivateKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PrivateKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PrivateKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_PrivateKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_PrivateKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PrivateKey);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$key$PublicKey(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_PublicKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PublicKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PublicKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PublicKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PublicKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_PublicKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_PublicKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PublicKey);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$key$T(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_T);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_T, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_T);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_T, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$key$UserWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_UserWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UserWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UserWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UserWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UserWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_UserWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_UserWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UserWarning);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$key$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$key$calculate_keys_custom_exponent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_calculate_keys_custom_exponent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_calculate_keys_custom_exponent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_calculate_keys_custom_exponent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_calculate_keys_custom_exponent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_calculate_keys_custom_exponent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_calculate_keys_custom_exponent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_calculate_keys_custom_exponent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_calculate_keys_custom_exponent);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$key$find_p_q(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_find_p_q);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_find_p_q);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_find_p_q, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_find_p_q);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_find_p_q, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_find_p_q);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_find_p_q);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_find_p_q);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$key$gen_keys(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_gen_keys);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_gen_keys);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_gen_keys, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_gen_keys);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_gen_keys, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_gen_keys);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_gen_keys);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_gen_keys);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$key$rsa(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rsa);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rsa, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rsa);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rsa, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$key$threading(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$key$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$key->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_8cd002cfb163a340c38b482105899b36;
static PyCodeObject *code_objects_4100265b08857847a987cc128d6edf30;
static PyCodeObject *code_objects_a809d798c8a39ea870bd56026a957b4f;
static PyCodeObject *code_objects_d3dd2084c90f9757d8ed78bbe6b4d81b;
static PyCodeObject *code_objects_2f21279f6264b1096f20c9e4e02f4801;
static PyCodeObject *code_objects_0836c59f9d2b7e27e61fe8fde56722ec;
static PyCodeObject *code_objects_e01765f27dc9e727d31006ae97045e5c;
static PyCodeObject *code_objects_a6654579fdb6df88f3fab8d09e2b8cf7;
static PyCodeObject *code_objects_7c02497326c3c4361a6a871fa809042f;
static PyCodeObject *code_objects_c8dee5f237fe64cb04f49ea3434100ed;
static PyCodeObject *code_objects_25040ac17f5ffe393848f937d57d18a9;
static PyCodeObject *code_objects_3419e5c10744f0d6e3fea8c4f5598275;
static PyCodeObject *code_objects_06206b0ba50f7e7cc7142a7f879be706;
static PyCodeObject *code_objects_35f4c4c4a212c25eb4592dbbe425f7e3;
static PyCodeObject *code_objects_8120428ca8f37c5048451987d0d14fb7;
static PyCodeObject *code_objects_e56f7011058a9da6e63a2eecd0d91c6e;
static PyCodeObject *code_objects_7abad493e0ea21b5b6003771dadde120;
static PyCodeObject *code_objects_3e0716ebe54c355916f17a1ee1bb9c15;
static PyCodeObject *code_objects_8ef885e33ad9291692dd4e1e6aef8096;
static PyCodeObject *code_objects_f733c099cadad913175e7ea3a0f34ba5;
static PyCodeObject *code_objects_ecf2e4ffcd02d73f15578ed37c5fdd0f;
static PyCodeObject *code_objects_8cb14ba7910db9ce84c3e1f8aa1d6803;
static PyCodeObject *code_objects_e7d735f576ea462f00cf9e6157786b97;
static PyCodeObject *code_objects_db62568525c619aeeea1ff9e53684730;
static PyCodeObject *code_objects_8c475aa0da1346370dbb8c0026ec1681;
static PyCodeObject *code_objects_3fbe3b39382e4a73ba3b47b3875f810f;
static PyCodeObject *code_objects_7e140781b3eeb3300583aabdb14bcddf;
static PyCodeObject *code_objects_0d0faaabcfd30ab2ac97df8e6366b5a0;
static PyCodeObject *code_objects_493557ef213273cfde0f0d78ca76e8cf;
static PyCodeObject *code_objects_70e474cadf2cadfdee94ca34497586b8;
static PyCodeObject *code_objects_42f71baef190a53d2f04b2bafdb6f832;
static PyCodeObject *code_objects_8b7139d5fc50f81abf95811d3196871f;
static PyCodeObject *code_objects_9868c40d36d45b0deee364ef2e817686;
static PyCodeObject *code_objects_47753b35833184f87b895ffbb1020341;
static PyCodeObject *code_objects_2ecf10cbe2e78f6807f920e2493f29cc;
static PyCodeObject *code_objects_efc0039cf184e6138b17fce6655d2fea;
static PyCodeObject *code_objects_d1d2058da903e35ce24195ab74b33c91;
static PyCodeObject *code_objects_2d24b91bdf637ee26d3f1042f8020d1a;
static PyCodeObject *code_objects_051e052a4d7aa16888effd5eb7165546;
static PyCodeObject *code_objects_060cd3cbc11f41d7f085d8041827f9a5;
static PyCodeObject *code_objects_e217558f006c765d503fdd585a3486d1;
static PyCodeObject *code_objects_5dc6f2238a7ad9f8170d9abf67cae5ba;
static PyCodeObject *code_objects_1e21f312252ecfc9b62a3b08ff5b345d;
static PyCodeObject *code_objects_974384b9832fccbc2b3da0fe2dede1cc;
static PyCodeObject *code_objects_8b46a1ae6fc561fe23f314874396c11a;
static PyCodeObject *code_objects_4b2f965cb133599bfc0c5e4867d85974;
static PyCodeObject *code_objects_d7cb842c2b66ae1c69bd89cb2ad49aba;
static PyCodeObject *code_objects_7388574ea28964c77ebf7425c3985951;
static PyCodeObject *code_objects_2010e704973119f1391bfcbb2d50f8b8;
static PyCodeObject *code_objects_9c58de7d8a88f02827df0ffac9a259a1;
static PyCodeObject *code_objects_552ec48dee4ca666c1dc807c2b5f2d5b;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_3f7501a9b26cb8976f6b7a328e7850ca); CHECK_OBJECT(module_filename_obj);
code_objects_8cd002cfb163a340c38b482105899b36 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_37eb81d31aa795eec9409cfa40aa5ee2, mod_consts.const_str_digest_37eb81d31aa795eec9409cfa40aa5ee2, NULL, NULL, 0, 0, 0);
code_objects_4100265b08857847a987cc128d6edf30 = MAKE_CODE_OBJECT(module_filename_obj, 51, 0, mod_consts.const_str_plain_AbstractKey, mod_consts.const_str_plain_AbstractKey, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a809d798c8a39ea870bd56026a957b4f = MAKE_CODE_OBJECT(module_filename_obj, 572, CO_OPTIMIZED, mod_consts.const_str_plain_AsnPrivKey, mod_consts.const_str_digest_e797718f3d5127a0ca8e16d10f3347b5, mod_consts.const_tuple_str_plain___class___str_plain_namedtype_str_plain_univ_tuple, NULL, 0, 0, 0);
code_objects_d3dd2084c90f9757d8ed78bbe6b4d81b = MAKE_CODE_OBJECT(module_filename_obj, 383, 0, mod_consts.const_str_plain_PrivateKey, mod_consts.const_str_plain_PrivateKey, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2f21279f6264b1096f20c9e4e02f4801 = MAKE_CODE_OBJECT(module_filename_obj, 218, 0, mod_consts.const_str_plain_PublicKey, mod_consts.const_str_plain_PublicKey, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0836c59f9d2b7e27e61fe8fde56722ec = MAKE_CODE_OBJECT(module_filename_obj, 441, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_bc8554abbafdddb346ab90ac39866a6b, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_e01765f27dc9e727d31006ae97045e5c = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_65146ee0b2d84171edf4b5b67f1d15f3, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_a6654579fdb6df88f3fab8d09e2b8cf7 = MAKE_CODE_OBJECT(module_filename_obj, 420, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_fb534ab14d65ba2103c020178e5a4f5f, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple, NULL, 2, 0, 0);
code_objects_7c02497326c3c4361a6a871fa809042f = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_788e78a79180ccea6575e617c897fd8f, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple, NULL, 2, 0, 0);
code_objects_c8dee5f237fe64cb04f49ea3434100ed = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getstate__, mod_consts.const_str_digest_aad7a899961b1338b939717f879e9b68, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_25040ac17f5ffe393848f937d57d18a9 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getstate__, mod_consts.const_str_digest_f9dc88143493349044fd547a61245d13, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3419e5c10744f0d6e3fea8c4f5598275 = MAKE_CODE_OBJECT(module_filename_obj, 462, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___hash__, mod_consts.const_str_digest_e297d6f3b9b877ce2930115052614d96, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_06206b0ba50f7e7cc7142a7f879be706 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___hash__, mod_consts.const_str_digest_1114786e42f696199e368259decb22b1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_35f4c4c4a212c25eb4592dbbe425f7e3 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_0af4566ea455811e8cf5f663fde3c850, mod_consts.const_tuple_str_plain_self_str_plain_n_str_plain_e_tuple, NULL, 3, 0, 0);
code_objects_8120428ca8f37c5048451987d0d14fb7 = MAKE_CODE_OBJECT(module_filename_obj, 409, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_9c8af091b131dc331e3e9905764ff652, mod_consts.const_tuple_08df0d72fd72a415e43306690aef1744_tuple, NULL, 6, 0, 0);
code_objects_e56f7011058a9da6e63a2eecd0d91c6e = MAKE_CODE_OBJECT(module_filename_obj, 459, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___ne__, mod_consts.const_str_digest_902528698a8a7df5fde3dac02a105065, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_7abad493e0ea21b5b6003771dadde120 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___ne__, mod_consts.const_str_digest_dc579632862d701d665e93bf67210a4b, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_3e0716ebe54c355916f17a1ee1bb9c15 = MAKE_CODE_OBJECT(module_filename_obj, 423, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_628860bfa6478f39126a1df96e095733, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8ef885e33ad9291692dd4e1e6aef8096 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_f7c32e160e42ecb4a5200086b2fedd24, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f733c099cadad913175e7ea3a0f34ba5 = MAKE_CODE_OBJECT(module_filename_obj, 436, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___setstate__, mod_consts.const_str_digest_c2b0a4987aa4e560bb2ec061e599dccc, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple, NULL, 2, 0, 0);
code_objects_ecf2e4ffcd02d73f15578ed37c5fdd0f = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___setstate__, mod_consts.const_str_digest_ead507bd7d6628bf938033126d244957, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple, NULL, 2, 0, 0);
code_objects_8cb14ba7910db9ce84c3e1f8aa1d6803 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__assert_format_exists, mod_consts.const_str_digest_b52627a97ca4f4890b874d143a1a57d8, mod_consts.const_tuple_389f2cb53c54845476e38e7af49da0e7_tuple, NULL, 2, 0, 0);
code_objects_e7d735f576ea462f00cf9e6157786b97 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__initial_blinding_factor, mod_consts.const_str_digest_d707a9e106af3ad05cea69442cb940e8, mod_consts.const_tuple_str_plain_self_str_underscore_str_plain_blind_r_tuple, NULL, 1, 0, 0);
code_objects_db62568525c619aeeea1ff9e53684730 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__load_pkcs1_der, mod_consts.const_str_digest_88f1dd72b66b5812fbe508aa4161a4be, mod_consts.const_tuple_str_plain_cls_str_plain_keyfile_tuple, NULL, 2, 0, 0);
code_objects_8c475aa0da1346370dbb8c0026ec1681 = MAKE_CODE_OBJECT(module_filename_obj, 504, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__load_pkcs1_der, mod_consts.const_str_digest_7a68b03843188d7afdfbddb1ec688c22, mod_consts.const_tuple_968bffa3ec0e03c6ee859f5fd4c97a62_tuple, NULL, 2, 0, 0);
code_objects_3fbe3b39382e4a73ba3b47b3875f810f = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__load_pkcs1_der, mod_consts.const_str_digest_1cc93e65e22c78f03cca086916f430ab, mod_consts.const_tuple_99e911a0fe117b7d66a43895baea1dd0_tuple, NULL, 2, 0, 0);
code_objects_7e140781b3eeb3300583aabdb14bcddf = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__load_pkcs1_pem, mod_consts.const_str_digest_6b1ae95778c61af1f5419983522fae05, mod_consts.const_tuple_str_plain_cls_str_plain_keyfile_tuple, NULL, 2, 0, 0);
code_objects_0d0faaabcfd30ab2ac97df8e6366b5a0 = MAKE_CODE_OBJECT(module_filename_obj, 600, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__load_pkcs1_pem, mod_consts.const_str_digest_aeff62fd6e9b0332a7dee1ba24e0f138, mod_consts.const_tuple_str_plain_cls_str_plain_keyfile_str_plain_der_tuple, NULL, 2, 0, 0);
code_objects_493557ef213273cfde0f0d78ca76e8cf = MAKE_CODE_OBJECT(module_filename_obj, 319, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__load_pkcs1_pem, mod_consts.const_str_digest_4bf8426ab46c24172e742c4d04234580, mod_consts.const_tuple_str_plain_cls_str_plain_keyfile_str_plain_der_tuple, NULL, 2, 0, 0);
code_objects_70e474cadf2cadfdee94ca34497586b8 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__save_pkcs1_der, mod_consts.const_str_digest_d20d5d2dc49b0058eacff1c10c50ac30, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_42f71baef190a53d2f04b2bafdb6f832 = MAKE_CODE_OBJECT(module_filename_obj, 562, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__save_pkcs1_der, mod_consts.const_str_digest_6fe12da162a4aee24a23c2ff39f851e0, mod_consts.const_tuple_145af7cce742876ce79e85a1a612023f_tuple, NULL, 1, 0, 0);
code_objects_8b7139d5fc50f81abf95811d3196871f = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__save_pkcs1_der, mod_consts.const_str_digest_fc827f874680f624d9d2a0fa54fff39e, mod_consts.const_tuple_2942f95c0057d7dfb0e784ef9c3f03b3_tuple, NULL, 1, 0, 0);
code_objects_9868c40d36d45b0deee364ef2e817686 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__save_pkcs1_pem, mod_consts.const_str_digest_0962a34b1ab5daf34a0fcfb11f559562, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_47753b35833184f87b895ffbb1020341 = MAKE_CODE_OBJECT(module_filename_obj, 615, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__save_pkcs1_pem, mod_consts.const_str_digest_e087db1fee359dd9c0122cc127fd1139, mod_consts.const_tuple_str_plain_self_str_plain_der_tuple, NULL, 1, 0, 0);
code_objects_2ecf10cbe2e78f6807f920e2493f29cc = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__save_pkcs1_pem, mod_consts.const_str_digest_2334096e2b7358b302ca8d79b47b76a7, mod_consts.const_tuple_str_plain_self_str_plain_der_tuple, NULL, 1, 0, 0);
code_objects_efc0039cf184e6138b17fce6655d2fea = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__update_blinding_factor, mod_consts.const_str_digest_b1f8bb54ea5698940c57c7f8f7e6dfed, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d1d2058da903e35ce24195ab74b33c91 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_blind, mod_consts.const_str_digest_cb64d8eeb18b619d72982a0c7894f3c5, mod_consts.const_tuple_e5551b147ea18fad8c1baf72c74702c9_tuple, NULL, 2, 0, 0);
code_objects_2d24b91bdf637ee26d3f1042f8020d1a = MAKE_CODE_OBJECT(module_filename_obj, 465, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_blinded_decrypt, mod_consts.const_str_digest_ad71f12457c5dc1b5c5834a710685c4a, mod_consts.const_tuple_3d2625ef26b02a4b771eeb66533b6089_tuple, NULL, 2, 0, 0);
code_objects_051e052a4d7aa16888effd5eb7165546 = MAKE_CODE_OBJECT(module_filename_obj, 489, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_blinded_encrypt, mod_consts.const_str_digest_b2559746321d70b8eabf5391bf93073a, mod_consts.const_tuple_44837e6726b2a133352100898c25ea92_tuple, NULL, 2, 0, 0);
code_objects_060cd3cbc11f41d7f085d8041827f9a5 = MAKE_CODE_OBJECT(module_filename_obj, 740, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_calculate_keys, mod_consts.const_str_plain_calculate_keys, mod_consts.const_tuple_str_plain_p_str_plain_q_tuple, NULL, 2, 0, 0);
code_objects_e217558f006c765d503fdd585a3486d1 = MAKE_CODE_OBJECT(module_filename_obj, 706, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_calculate_keys_custom_exponent, mod_consts.const_str_plain_calculate_keys_custom_exponent, mod_consts.const_tuple_ba1f0b5a413e0b9f62e02a582ebc3962_tuple, NULL, 3, 0, 0);
code_objects_5dc6f2238a7ad9f8170d9abf67cae5ba = MAKE_CODE_OBJECT(module_filename_obj, 626, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_find_p_q, mod_consts.const_str_plain_find_p_q, mod_consts.const_tuple_afe4329f45c2044890713e535b1b37ca_tuple, NULL, 3, 0, 0);
code_objects_1e21f312252ecfc9b62a3b08ff5b345d = MAKE_CODE_OBJECT(module_filename_obj, 753, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_gen_keys, mod_consts.const_str_plain_gen_keys, mod_consts.const_tuple_814b60caa81d0a20490cb66a7b2bc695_tuple, NULL, 4, 0, 0);
code_objects_974384b9832fccbc2b3da0fe2dede1cc = MAKE_CODE_OBJECT(module_filename_obj, 827, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getprime_func, mod_consts.const_str_digest_b597751dda24a6e86174ea44a92f9135, mod_consts.const_tuple_str_plain_nbits_str_plain_parallel_str_plain_poolsize_tuple, mod_consts.const_tuple_str_plain_parallel_str_plain_poolsize_tuple, 1, 0, 0);
code_objects_8b46a1ae6fc561fe23f314874396c11a = MAKE_CODE_OBJECT(module_filename_obj, 673, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_acceptable, mod_consts.const_str_digest_f1129e914249e8fbd86b412137832989, mod_consts.const_tuple_70eb004f978d31fce1a332db785f8e22_tuple, mod_consts.const_tuple_str_plain_accurate_str_plain_total_bits_tuple, 2, 0, 0);
code_objects_4b2f965cb133599bfc0c5e4867d85974 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_load_pkcs1, mod_consts.const_str_digest_67ecd0641a7eb0f9336861afb3fa4da6, mod_consts.const_tuple_faa805a9c81a8fe7fda708cb9dc4a157_tuple, NULL, 3, 0, 0);
code_objects_d7cb842c2b66ae1c69bd89cb2ad49aba = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_load_pkcs1_openssl_der, mod_consts.const_str_digest_5f3be474dcf26c1632330e35d03f802b, mod_consts.const_tuple_7073bc916dbcaf37982a36fe649fd0f0_tuple, NULL, 2, 0, 0);
code_objects_7388574ea28964c77ebf7425c3985951 = MAKE_CODE_OBJECT(module_filename_obj, 344, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_load_pkcs1_openssl_pem, mod_consts.const_str_digest_f2ebaddc1d19cefba7ffc1cfaf2443a1, mod_consts.const_tuple_str_plain_cls_str_plain_keyfile_str_plain_der_tuple, NULL, 2, 0, 0);
code_objects_2010e704973119f1391bfcbb2d50f8b8 = MAKE_CODE_OBJECT(module_filename_obj, 786, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_newkeys, mod_consts.const_str_plain_newkeys, mod_consts.const_tuple_f68e983026507002238f869894826083_tuple, NULL, 4, 0, 0);
code_objects_9c58de7d8a88f02827df0ffac9a259a1 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_save_pkcs1, mod_consts.const_str_digest_9ce75b515507cb6e25d039a3f2e1c035, mod_consts.const_tuple_0eb1d6d0a4f925c4feb7138493829be1_tuple, NULL, 2, 0, 0);
code_objects_552ec48dee4ca666c1dc807c2b5f2d5b = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_unblind, mod_consts.const_str_digest_7320fdfc994b4d5ab9e9f72c6c68ff92, mod_consts.const_tuple_str_plain_self_str_plain_blinded_str_plain_blindfac_inverse_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__10_unblind(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__11__initial_blinding_factor(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__12__update_blinding_factor(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__13___getitem__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__14___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__15___getstate__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__16___setstate__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__17___eq__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__18___ne__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__19___hash__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__20__load_pkcs1_der(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__21__save_pkcs1_der(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__22__load_pkcs1_pem(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__23__save_pkcs1_pem(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__24_load_pkcs1_openssl_pem(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__25_load_pkcs1_openssl_der(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__26___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__27___getitem__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__28___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__29___getstate__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__2__load_pkcs1_pem(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__30___setstate__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__31___eq__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__32___ne__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__33___hash__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__34_blinded_decrypt(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__35_blinded_encrypt(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__36__load_pkcs1_der(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__37__save_pkcs1_der(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__38__load_pkcs1_pem(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__39__save_pkcs1_pem(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__3__load_pkcs1_der(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__40_find_p_q(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__41_calculate_keys_custom_exponent(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__42_calculate_keys(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__43_gen_keys(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__44_newkeys(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__44_newkeys$$$function__1_getprime_func(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__4__save_pkcs1_pem(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__5__save_pkcs1_der(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__6_load_pkcs1(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__7__assert_format_exists(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__8_save_pkcs1(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$key$$$function__9_blind(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_rsa$key$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_n = python_pars[1];
PyObject *par_e = python_pars[2];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_35f4c4c4a212c25eb4592dbbe425f7e3, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__1___init__->m_type_description == NULL);
frame_frame_rsa$key$$$function__1___init__ = cache_frame_frame_rsa$key$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__1___init__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_n);
tmp_assattr_value_1 = par_n;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_n, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_e);
tmp_assattr_value_2 = par_e;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_e, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = const_int_neg_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_blindfac, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = const_int_neg_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_blindfac_inverse, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_5;
tmp_called_instance_1 = module_var_accessor_rsa$key$threading(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__1___init__->m_frame.f_lineno = 65;
tmp_assattr_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Lock);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_mutex, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__1___init__,
    type_description_1,
    par_self,
    par_n,
    par_e
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__1___init__ == cache_frame_frame_rsa$key$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__1___init__);
    cache_frame_frame_rsa$key$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__1___init__);

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
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
CHECK_OBJECT(par_e);
Py_DECREF(par_e);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
CHECK_OBJECT(par_e);
Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__6_load_pkcs1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_keyfile = python_pars[1];
PyObject *par_format = python_pars[2];
PyObject *var_methods = NULL;
PyObject *var_method = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__6_load_pkcs1;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__6_load_pkcs1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__6_load_pkcs1)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__6_load_pkcs1);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__6_load_pkcs1 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__6_load_pkcs1 = MAKE_FUNCTION_FRAME(tstate, code_objects_4b2f965cb133599bfc0c5e4867d85974, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__6_load_pkcs1->m_type_description == NULL);
frame_frame_rsa$key$$$function__6_load_pkcs1 = cache_frame_frame_rsa$key$$$function__6_load_pkcs1;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__6_load_pkcs1);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__6_load_pkcs1) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_PEM;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__load_pkcs1_pem);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_2;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_DER;
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__load_pkcs1_der);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_methods == NULL);
var_methods = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_cls);
tmp_called_instance_1 = par_cls;
CHECK_OBJECT(par_format);
tmp_args_element_value_1 = par_format;
CHECK_OBJECT(var_methods);
tmp_args_element_value_2 = var_methods;
frame_frame_rsa$key$$$function__6_load_pkcs1->m_frame.f_lineno = 124;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__assert_format_exists,
        call_args
    );
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_method == NULL);
var_method = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_method);
tmp_called_value_1 = var_method;
CHECK_OBJECT(par_keyfile);
tmp_args_element_value_3 = par_keyfile;
frame_frame_rsa$key$$$function__6_load_pkcs1->m_frame.f_lineno = 125;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__6_load_pkcs1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__6_load_pkcs1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__6_load_pkcs1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__6_load_pkcs1,
    type_description_1,
    par_cls,
    par_keyfile,
    par_format,
    var_methods,
    var_method
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__6_load_pkcs1 == cache_frame_frame_rsa$key$$$function__6_load_pkcs1) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__6_load_pkcs1);
    cache_frame_frame_rsa$key$$$function__6_load_pkcs1 = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__6_load_pkcs1);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_methods);
CHECK_OBJECT(var_methods);
Py_DECREF(var_methods);
var_methods = NULL;
CHECK_OBJECT(var_method);
CHECK_OBJECT(var_method);
Py_DECREF(var_method);
var_method = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_methods);
var_methods = NULL;
Py_XDECREF(var_method);
var_method = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);
CHECK_OBJECT(par_format);
Py_DECREF(par_format);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);
CHECK_OBJECT(par_format);
Py_DECREF(par_format);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__7__assert_format_exists(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_file_format = python_pars[0];
PyObject *par_methods = python_pars[1];
PyObject *var_ex = NULL;
PyObject *var_formats = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__7__assert_format_exists;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__7__assert_format_exists = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__7__assert_format_exists)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__7__assert_format_exists);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__7__assert_format_exists == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__7__assert_format_exists = MAKE_FUNCTION_FRAME(tstate, code_objects_8cb14ba7910db9ce84c3e1f8aa1d6803, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__7__assert_format_exists->m_type_description == NULL);
frame_frame_rsa$key$$$function__7__assert_format_exists = cache_frame_frame_rsa$key$$$function__7__assert_format_exists;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__7__assert_format_exists);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__7__assert_format_exists) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_methods);
tmp_expression_value_1 = par_methods;
CHECK_OBJECT(par_file_format);
tmp_subscript_value_1 = par_file_format;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__7__assert_format_exists, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__7__assert_format_exists, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_1); 
assert(var_ex == NULL);
Py_INCREF(tmp_assign_source_1);
var_ex = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
tmp_str_arg_value_1 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_sorted);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_methods);
tmp_expression_value_2 = par_methods;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_keys);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
frame_frame_rsa$key$$$function__7__assert_format_exists->m_frame.f_lineno = 136;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
frame_frame_rsa$key$$$function__7__assert_format_exists->m_frame.f_lineno = 136;
tmp_iterable_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_assign_source_2 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(var_formats == NULL);
var_formats = tmp_assign_source_2;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_raise_cause_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_34e6c73451f71d09a518d173b3071255;
CHECK_OBJECT(par_file_format);
tmp_tuple_element_1 = par_file_format;
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_formats);
tmp_tuple_element_1 = var_formats;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
frame_frame_rsa$key$$$function__7__assert_format_exists->m_frame.f_lineno = 137;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
CHECK_OBJECT(var_ex);
tmp_raise_cause_1 = var_ex;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 139;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooo";
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

Py_XDECREF(var_ex);
var_ex = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 133;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_rsa$key$$$function__7__assert_format_exists->m_frame)) {
        frame_frame_rsa$key$$$function__7__assert_format_exists->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__7__assert_format_exists, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__7__assert_format_exists->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__7__assert_format_exists, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__7__assert_format_exists,
    type_description_1,
    par_file_format,
    par_methods,
    var_ex,
    var_formats
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__7__assert_format_exists == cache_frame_frame_rsa$key$$$function__7__assert_format_exists) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__7__assert_format_exists);
    cache_frame_frame_rsa$key$$$function__7__assert_format_exists = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__7__assert_format_exists);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_formats);
var_formats = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_file_format);
Py_DECREF(par_file_format);
CHECK_OBJECT(par_methods);
Py_DECREF(par_methods);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_file_format);
Py_DECREF(par_file_format);
CHECK_OBJECT(par_methods);
Py_DECREF(par_methods);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__8_save_pkcs1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_format = python_pars[1];
PyObject *var_methods = NULL;
PyObject *var_method = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__8_save_pkcs1;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__8_save_pkcs1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__8_save_pkcs1)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__8_save_pkcs1);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__8_save_pkcs1 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__8_save_pkcs1 = MAKE_FUNCTION_FRAME(tstate, code_objects_9c58de7d8a88f02827df0ffac9a259a1, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__8_save_pkcs1->m_type_description == NULL);
frame_frame_rsa$key$$$function__8_save_pkcs1 = cache_frame_frame_rsa$key$$$function__8_save_pkcs1;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__8_save_pkcs1);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__8_save_pkcs1) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_PEM;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__save_pkcs1_pem);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_2;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_DER;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__save_pkcs1_der);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_methods == NULL);
var_methods = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_format);
tmp_args_element_value_1 = par_format;
CHECK_OBJECT(var_methods);
tmp_args_element_value_2 = var_methods;
frame_frame_rsa$key$$$function__8_save_pkcs1->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__assert_format_exists,
        call_args
    );
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_method == NULL);
var_method = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_method);
tmp_called_value_1 = var_method;
frame_frame_rsa$key$$$function__8_save_pkcs1->m_frame.f_lineno = 156;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__8_save_pkcs1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__8_save_pkcs1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__8_save_pkcs1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__8_save_pkcs1,
    type_description_1,
    par_self,
    par_format,
    var_methods,
    var_method
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__8_save_pkcs1 == cache_frame_frame_rsa$key$$$function__8_save_pkcs1) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__8_save_pkcs1);
    cache_frame_frame_rsa$key$$$function__8_save_pkcs1 = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__8_save_pkcs1);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_methods);
CHECK_OBJECT(var_methods);
Py_DECREF(var_methods);
var_methods = NULL;
CHECK_OBJECT(var_method);
CHECK_OBJECT(var_method);
Py_DECREF(var_method);
var_method = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_methods);
var_methods = NULL;
Py_XDECREF(var_method);
var_method = NULL;
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
CHECK_OBJECT(par_format);
Py_DECREF(par_format);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_format);
Py_DECREF(par_format);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__9_blind(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *var_blindfac = NULL;
PyObject *var_blindfac_inverse = NULL;
PyObject *var_blinded = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__9_blind;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__9_blind = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__9_blind)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__9_blind);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__9_blind == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__9_blind = MAKE_FUNCTION_FRAME(tstate, code_objects_d1d2058da903e35ce24195ab74b33c91, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__9_blind->m_type_description == NULL);
frame_frame_rsa$key$$$function__9_blind = cache_frame_frame_rsa$key$$$function__9_blind;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__9_blind);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__9_blind) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_rsa$key$$$function__9_blind->m_frame.f_lineno = 169;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__update_blinding_factor);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_1 = "ooooo";
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



exception_lineno = 169;
type_description_1 = "ooooo";
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



exception_lineno = 169;
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_blindfac == NULL);
Py_INCREF(tmp_assign_source_4);
var_blindfac = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_blindfac_inverse == NULL);
Py_INCREF(tmp_assign_source_5);
var_blindfac_inverse = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_message);
tmp_mult_expr_left_1 = par_message;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_pow);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(var_blindfac);
tmp_args_element_value_1 = var_blindfac;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_e);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_n);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 170;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__9_blind->m_frame.f_lineno = 170;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_mod_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_n);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mod_expr_left_1);

exception_lineno = 170;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_left_1);
Py_DECREF(tmp_mod_expr_left_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_blinded == NULL);
var_blinded = tmp_assign_source_6;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__9_blind, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__9_blind->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__9_blind, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__9_blind,
    type_description_1,
    par_self,
    par_message,
    var_blindfac,
    var_blindfac_inverse,
    var_blinded
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__9_blind == cache_frame_frame_rsa$key$$$function__9_blind) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__9_blind);
    cache_frame_frame_rsa$key$$$function__9_blind = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__9_blind);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_blinded);
tmp_tuple_element_1 = var_blinded;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_blindfac_inverse);
tmp_tuple_element_1 = var_blindfac_inverse;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_blindfac);
CHECK_OBJECT(var_blindfac);
Py_DECREF(var_blindfac);
var_blindfac = NULL;
CHECK_OBJECT(var_blindfac_inverse);
CHECK_OBJECT(var_blindfac_inverse);
Py_DECREF(var_blindfac_inverse);
var_blindfac_inverse = NULL;
CHECK_OBJECT(var_blinded);
CHECK_OBJECT(var_blinded);
Py_DECREF(var_blinded);
var_blinded = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_blindfac);
var_blindfac = NULL;
Py_XDECREF(var_blindfac_inverse);
var_blindfac_inverse = NULL;
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


static PyObject *impl_rsa$key$$$function__10_unblind(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_blinded = python_pars[1];
PyObject *par_blindfac_inverse = python_pars[2];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__10_unblind;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__10_unblind = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__10_unblind)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__10_unblind);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__10_unblind == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__10_unblind = MAKE_FUNCTION_FRAME(tstate, code_objects_552ec48dee4ca666c1dc807c2b5f2d5b, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__10_unblind->m_type_description == NULL);
frame_frame_rsa$key$$$function__10_unblind = cache_frame_frame_rsa$key$$$function__10_unblind;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__10_unblind);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__10_unblind) == 2);

// Framed code:
{
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_blindfac_inverse);
tmp_mult_expr_left_1 = par_blindfac_inverse;
CHECK_OBJECT(par_blinded);
tmp_mult_expr_right_1 = par_blinded;
tmp_mod_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_mod_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_n);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mod_expr_left_1);

exception_lineno = 184;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_left_1);
Py_DECREF(tmp_mod_expr_left_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__10_unblind, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__10_unblind->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__10_unblind, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__10_unblind,
    type_description_1,
    par_self,
    par_blinded,
    par_blindfac_inverse
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__10_unblind == cache_frame_frame_rsa$key$$$function__10_unblind) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__10_unblind);
    cache_frame_frame_rsa$key$$$function__10_unblind = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__10_unblind);

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
CHECK_OBJECT(par_blinded);
Py_DECREF(par_blinded);
CHECK_OBJECT(par_blindfac_inverse);
Py_DECREF(par_blindfac_inverse);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_blinded);
Py_DECREF(par_blinded);
CHECK_OBJECT(par_blindfac_inverse);
Py_DECREF(par_blindfac_inverse);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__11__initial_blinding_factor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var__ = NULL;
PyObject *var_blind_r = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__11__initial_blinding_factor;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__11__initial_blinding_factor = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_xrange_0_1000;
tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_1 == NULL));
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__11__initial_blinding_factor)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__11__initial_blinding_factor);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__11__initial_blinding_factor == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__11__initial_blinding_factor = MAKE_FUNCTION_FRAME(tstate, code_objects_e7d735f576ea462f00cf9e6157786b97, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__11__initial_blinding_factor->m_type_description == NULL);
frame_frame_rsa$key$$$function__11__initial_blinding_factor = cache_frame_frame_rsa$key$$$function__11__initial_blinding_factor;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__11__initial_blinding_factor);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__11__initial_blinding_factor) == 2);

// Framed code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 187;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var__;
    var__ = tmp_assign_source_3;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_randnum);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_randint);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 188;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_n);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 188;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_args_element_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 188;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_rsa$key$$$function__11__initial_blinding_factor->m_frame.f_lineno = 188;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_blind_r;
    var_blind_r = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_1;
tmp_expression_value_5 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_prime);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_are_relatively_prime);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 189;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_n);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 189;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_blind_r);
tmp_args_element_value_3 = var_blind_r;
frame_frame_rsa$key$$$function__11__initial_blinding_factor->m_frame.f_lineno = 189;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 189;
type_description_1 = "ooo";
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
CHECK_OBJECT(var_blind_r);
tmp_return_value = var_blind_r;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_7de862281324bc7a9bd6b756b409e97e;
frame_frame_rsa$key$$$function__11__initial_blinding_factor->m_frame.f_lineno = 191;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 191;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__11__initial_blinding_factor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__11__initial_blinding_factor->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__11__initial_blinding_factor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__11__initial_blinding_factor,
    type_description_1,
    par_self,
    var__,
    var_blind_r
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__11__initial_blinding_factor == cache_frame_frame_rsa$key$$$function__11__initial_blinding_factor) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__11__initial_blinding_factor);
    cache_frame_frame_rsa$key$$$function__11__initial_blinding_factor = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__11__initial_blinding_factor);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
CHECK_OBJECT(var_blind_r);
CHECK_OBJECT(var_blind_r);
Py_DECREF(var_blind_r);
var_blind_r = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_blind_r);
var_blind_r = NULL;
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


static PyObject *impl_rsa$key$$$function__12__update_blinding_factor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__12__update_blinding_factor;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__12__update_blinding_factor = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__12__update_blinding_factor)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__12__update_blinding_factor);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__12__update_blinding_factor == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__12__update_blinding_factor = MAKE_FUNCTION_FRAME(tstate, code_objects_efc0039cf184e6138b17fce6655d2fea, module_rsa$key, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__12__update_blinding_factor->m_type_description == NULL);
frame_frame_rsa$key$$$function__12__update_blinding_factor = cache_frame_frame_rsa$key$$$function__12__update_blinding_factor;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__12__update_blinding_factor);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__12__update_blinding_factor) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mutex);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame.f_lineno = 205;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_blindfac);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "o";
    goto try_except_handler_3;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame.f_lineno = 208;
tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__initial_blinding_factor);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_blindfac, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "o";
    goto try_except_handler_3;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_2;
tmp_expression_value_6 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_common);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_inverse);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_blindfac);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 209;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_n);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 209;
type_description_1 = "o";
    goto try_except_handler_3;
}
frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame.f_lineno = 209;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_blindfac_inverse, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "o";
    goto try_except_handler_3;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_assattr_target_3;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_pow);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_blindfac);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_args_element_value_4 = mod_consts.const_int_pos_2;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_n);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 212;
type_description_1 = "o";
    goto try_except_handler_3;
}
frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame.f_lineno = 212;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_blindfac, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "o";
    goto try_except_handler_3;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_4;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_pow);
assert(tmp_called_value_4 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_blindfac_inverse);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_args_element_value_7 = mod_consts.const_int_pos_2;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_n);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 213;
type_description_1 = "o";
    goto try_except_handler_3;
}
frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame.f_lineno = 213;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_blindfac_inverse, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "o";
    goto try_except_handler_3;
}
}
branch_end_1:;
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_blindfac);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_blindfac_inverse);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__12__update_blinding_factor, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__12__update_blinding_factor, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
tmp_args_element_value_9 = EXC_TYPE(tstate);
tmp_args_element_value_10 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_10); 
tmp_args_element_value_11 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_11 == NULL) {
    tmp_args_element_value_11 = Py_None;
}
frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame.f_lineno = 205;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "o";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "o";
    goto try_except_handler_4;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 205;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame)) {
        frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_4;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 205;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame)) {
        frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_4;
branch_end_2:;
goto try_end_1;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame.f_lineno = 205;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame.f_lineno = 205;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 205;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_1:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__12__update_blinding_factor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__12__update_blinding_factor->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__12__update_blinding_factor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__12__update_blinding_factor,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__12__update_blinding_factor == cache_frame_frame_rsa$key$$$function__12__update_blinding_factor) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__12__update_blinding_factor);
    cache_frame_frame_rsa$key$$$function__12__update_blinding_factor = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__12__update_blinding_factor);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
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


static PyObject *impl_rsa$key$$$function__13___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__13___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__13___getitem__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__13___getitem__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__13___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__13___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__13___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7c02497326c3c4361a6a871fa809042f, module_rsa$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__13___getitem__->m_type_description == NULL);
frame_frame_rsa$key$$$function__13___getitem__ = cache_frame_frame_rsa$key$$$function__13___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__13___getitem__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__13___getitem__) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
CHECK_OBJECT(par_key);
tmp_name_value_1 = par_key;
tmp_return_value = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, NULL);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__13___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__13___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__13___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__13___getitem__,
    type_description_1,
    par_self,
    par_key
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__13___getitem__ == cache_frame_frame_rsa$key$$$function__13___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__13___getitem__);
    cache_frame_frame_rsa$key$$$function__13___getitem__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__13___getitem__);

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
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__14___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__14___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__14___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__14___repr__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__14___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__14___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__14___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8ef885e33ad9291692dd4e1e6aef8096, module_rsa$key, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__14___repr__->m_type_description == NULL);
frame_frame_rsa$key$$$function__14___repr__ = cache_frame_frame_rsa$key$$$function__14___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__14___repr__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__14___repr__) == 2);

// Framed code:
{
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_e3d09f228ae3d049497c65b626696c31;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_n);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_e);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__14___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__14___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__14___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__14___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__14___repr__ == cache_frame_frame_rsa$key$$$function__14___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__14___repr__);
    cache_frame_frame_rsa$key$$$function__14___repr__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__14___repr__);

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


static PyObject *impl_rsa$key$$$function__15___getstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__15___getstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__15___getstate__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__15___getstate__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__15___getstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__15___getstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__15___getstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_25040ac17f5ffe393848f937d57d18a9, module_rsa$key, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__15___getstate__->m_type_description == NULL);
frame_frame_rsa$key$$$function__15___getstate__ = cache_frame_frame_rsa$key$$$function__15___getstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__15___getstate__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__15___getstate__) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_n);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_e);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__15___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__15___getstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__15___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__15___getstate__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__15___getstate__ == cache_frame_frame_rsa$key$$$function__15___getstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__15___getstate__);
    cache_frame_frame_rsa$key$$$function__15___getstate__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__15___getstate__);

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


static PyObject *impl_rsa$key$$$function__16___setstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_state = python_pars[1];
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__16___setstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__16___setstate__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__16___setstate__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__16___setstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__16___setstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__16___setstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ecf2e4ffcd02d73f15578ed37c5fdd0f, module_rsa$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__16___setstate__->m_type_description == NULL);
frame_frame_rsa$key$$$function__16___setstate__ = cache_frame_frame_rsa$key$$$function__16___setstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__16___setstate__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__16___setstate__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_state);
tmp_iter_arg_1 = par_state;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oo";
    goto try_except_handler_1;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;
type_description_1 = "oo";
    goto try_except_handler_2;
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



exception_lineno = 256;
type_description_1 = "oo";
    goto try_except_handler_2;
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



exception_lineno = 256;
type_description_1 = "oo";
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

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assattr_value_1 = tmp_tuple_unpack_1__element_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_n, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assattr_value_2 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_e, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
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

{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_rsa$key$AbstractKey(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AbstractKey);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_n);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_e);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__16___setstate__->m_frame.f_lineno = 257;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__16___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__16___setstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__16___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__16___setstate__,
    type_description_1,
    par_self,
    par_state
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__16___setstate__ == cache_frame_frame_rsa$key$$$function__16___setstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__16___setstate__);
    cache_frame_frame_rsa$key$$$function__16___setstate__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__16___setstate__);

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


static PyObject *impl_rsa$key$$$function__17___eq__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__17___eq__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__17___eq__ = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_other);
tmp_cmp_expr_left_1 = par_other;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__17___eq__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__17___eq__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__17___eq__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__17___eq__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e01765f27dc9e727d31006ae97045e5c, module_rsa$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__17___eq__->m_type_description == NULL);
frame_frame_rsa$key$$$function__17___eq__ = cache_frame_frame_rsa$key$$$function__17___eq__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__17___eq__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__17___eq__) == 2);

// Framed code:
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_other);
tmp_isinstance_inst_1 = par_other;
tmp_isinstance_cls_1 = module_var_accessor_rsa$key$PublicKey(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PublicKey);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_n);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_2 = par_other;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_n);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 266;
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
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_e);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_4 = par_other;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_e);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__17___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__17___eq__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__17___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__17___eq__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__17___eq__ == cache_frame_frame_rsa$key$$$function__17___eq__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__17___eq__);
    cache_frame_frame_rsa$key$$$function__17___eq__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__17___eq__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__18___ne__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__18___ne__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__18___ne__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__18___ne__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__18___ne__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__18___ne__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__18___ne__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7abad493e0ea21b5b6003771dadde120, module_rsa$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__18___ne__->m_type_description == NULL);
frame_frame_rsa$key$$$function__18___ne__ = cache_frame_frame_rsa$key$$$function__18___ne__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__18___ne__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__18___ne__) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_self);
tmp_cmp_expr_left_1 = par_self;
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__18___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__18___ne__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__18___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__18___ne__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__18___ne__ == cache_frame_frame_rsa$key$$$function__18___ne__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__18___ne__);
    cache_frame_frame_rsa$key$$$function__18___ne__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__18___ne__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__19___hash__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__19___hash__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__19___hash__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__19___hash__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__19___hash__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__19___hash__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__19___hash__ = MAKE_FUNCTION_FRAME(tstate, code_objects_06206b0ba50f7e7cc7142a7f879be706, module_rsa$key, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__19___hash__->m_type_description == NULL);
frame_frame_rsa$key$$$function__19___hash__ = cache_frame_frame_rsa$key$$$function__19___hash__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__19___hash__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__19___hash__) == 2);

// Framed code:
{
PyObject *tmp_hash_arg_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_n);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_hash_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM(tmp_hash_arg_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_e);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_hash_arg_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_hash_arg_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = BUILTIN_HASH(tstate, tmp_hash_arg_1);
CHECK_OBJECT(tmp_hash_arg_1);
Py_DECREF(tmp_hash_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__19___hash__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__19___hash__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__19___hash__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__19___hash__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__19___hash__ == cache_frame_frame_rsa$key$$$function__19___hash__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__19___hash__);
    cache_frame_frame_rsa$key$$$function__19___hash__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__19___hash__);

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


static PyObject *impl_rsa$key$$$function__20__load_pkcs1_der(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_keyfile = python_pars[1];
PyObject *var_decoder = NULL;
PyObject *var_AsnPubKey = NULL;
PyObject *var_priv = NULL;
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__20__load_pkcs1_der;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__20__load_pkcs1_der = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__20__load_pkcs1_der)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__20__load_pkcs1_der);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__20__load_pkcs1_der == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__20__load_pkcs1_der = MAKE_FUNCTION_FRAME(tstate, code_objects_3fbe3b39382e4a73ba3b47b3875f810f, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__20__load_pkcs1_der->m_type_description == NULL);
frame_frame_rsa$key$$$function__20__load_pkcs1_der = cache_frame_frame_rsa$key$$$function__20__load_pkcs1_der;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__20__load_pkcs1_der);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__20__load_pkcs1_der) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_989622ccef88eb949be48370a129282e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_decoder_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_rsa$key$$$function__20__load_pkcs1_der->m_frame.f_lineno = 295;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_rsa$key,
        mod_consts.const_str_plain_decoder,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_decoder);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_decoder == NULL);
var_decoder = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_ee52f19f6eef7462714cc4db074b9a85;
tmp_globals_arg_value_2 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_AsnPubKey_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_rsa$key$$$function__20__load_pkcs1_der->m_frame.f_lineno = 296;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_rsa$key,
        mod_consts.const_str_plain_AsnPubKey,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_AsnPubKey);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_AsnPubKey == NULL);
var_AsnPubKey = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_2;
CHECK_OBJECT(var_decoder);
tmp_expression_value_1 = var_decoder;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_keyfile);
tmp_kw_call_arg_value_0_1 = par_keyfile;
CHECK_OBJECT(var_AsnPubKey);
tmp_called_value_2 = var_AsnPubKey;
frame_frame_rsa$key$$$function__20__load_pkcs1_der->m_frame.f_lineno = 298;
tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 298;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_rsa$key$$$function__20__load_pkcs1_der->m_frame.f_lineno = 298;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_asn1Spec_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
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



exception_lineno = 298;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
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
assert(var_priv == NULL);
Py_INCREF(tmp_assign_source_6);
var_priv = tmp_assign_source_6;
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
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_int_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_int_arg_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_cls);
tmp_called_value_3 = par_cls;
CHECK_OBJECT(var_priv);
tmp_expression_value_2 = var_priv;
tmp_subscript_value_1 = mod_consts.const_str_plain_modulus;
tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_priv);
tmp_expression_value_3 = var_priv;
tmp_subscript_value_2 = mod_consts.const_str_plain_publicExponent;
tmp_int_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 299;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 299;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__20__load_pkcs1_der->m_frame.f_lineno = 299;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_n_str_plain_e_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__20__load_pkcs1_der, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__20__load_pkcs1_der->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__20__load_pkcs1_der, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__20__load_pkcs1_der,
    type_description_1,
    par_cls,
    par_keyfile,
    var_decoder,
    var_AsnPubKey,
    var_priv,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__20__load_pkcs1_der == cache_frame_frame_rsa$key$$$function__20__load_pkcs1_der) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__20__load_pkcs1_der);
    cache_frame_frame_rsa$key$$$function__20__load_pkcs1_der = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__20__load_pkcs1_der);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_decoder);
CHECK_OBJECT(var_decoder);
Py_DECREF(var_decoder);
var_decoder = NULL;
CHECK_OBJECT(var_AsnPubKey);
CHECK_OBJECT(var_AsnPubKey);
Py_DECREF(var_AsnPubKey);
var_AsnPubKey = NULL;
CHECK_OBJECT(var_priv);
CHECK_OBJECT(var_priv);
Py_DECREF(var_priv);
var_priv = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_decoder);
var_decoder = NULL;
Py_XDECREF(var_AsnPubKey);
var_AsnPubKey = NULL;
Py_XDECREF(var_priv);
var_priv = NULL;
Py_XDECREF(var__);
var__ = NULL;
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
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__21__save_pkcs1_der(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_encoder = NULL;
PyObject *var_AsnPubKey = NULL;
PyObject *var_asn_key = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__21__save_pkcs1_der;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__21__save_pkcs1_der = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__21__save_pkcs1_der)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__21__save_pkcs1_der);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__21__save_pkcs1_der == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__21__save_pkcs1_der = MAKE_FUNCTION_FRAME(tstate, code_objects_8b7139d5fc50f81abf95811d3196871f, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__21__save_pkcs1_der->m_type_description == NULL);
frame_frame_rsa$key$$$function__21__save_pkcs1_der = cache_frame_frame_rsa$key$$$function__21__save_pkcs1_der;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__21__save_pkcs1_der);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__21__save_pkcs1_der) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_989622ccef88eb949be48370a129282e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_encoder_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_rsa$key$$$function__21__save_pkcs1_der->m_frame.f_lineno = 308;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_rsa$key,
        mod_consts.const_str_plain_encoder,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_encoder);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_encoder == NULL);
var_encoder = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_ee52f19f6eef7462714cc4db074b9a85;
tmp_globals_arg_value_2 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_AsnPubKey_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_rsa$key$$$function__21__save_pkcs1_der->m_frame.f_lineno = 309;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_rsa$key,
        mod_consts.const_str_plain_AsnPubKey,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_AsnPubKey);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_AsnPubKey == NULL);
var_AsnPubKey = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_AsnPubKey);
tmp_called_value_1 = var_AsnPubKey;
frame_frame_rsa$key$$$function__21__save_pkcs1_der->m_frame.f_lineno = 312;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_asn_key == NULL);
var_asn_key = tmp_assign_source_3;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_asn_key);
tmp_expression_value_1 = var_asn_key;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_setComponentByName);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_modulus;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_n);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 313;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__21__save_pkcs1_der->m_frame.f_lineno = 313;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_asn_key);
tmp_expression_value_3 = var_asn_key;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_setComponentByName);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_publicExponent;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_e);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 314;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__21__save_pkcs1_der->m_frame.f_lineno = 314;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_encoder);
tmp_expression_value_5 = var_encoder;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_encode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_asn_key);
tmp_args_element_value_5 = var_asn_key;
frame_frame_rsa$key$$$function__21__save_pkcs1_der->m_frame.f_lineno = 316;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__21__save_pkcs1_der, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__21__save_pkcs1_der->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__21__save_pkcs1_der, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__21__save_pkcs1_der,
    type_description_1,
    par_self,
    var_encoder,
    var_AsnPubKey,
    var_asn_key
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__21__save_pkcs1_der == cache_frame_frame_rsa$key$$$function__21__save_pkcs1_der) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__21__save_pkcs1_der);
    cache_frame_frame_rsa$key$$$function__21__save_pkcs1_der = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__21__save_pkcs1_der);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_encoder);
CHECK_OBJECT(var_encoder);
Py_DECREF(var_encoder);
var_encoder = NULL;
CHECK_OBJECT(var_AsnPubKey);
CHECK_OBJECT(var_AsnPubKey);
Py_DECREF(var_AsnPubKey);
var_AsnPubKey = NULL;
CHECK_OBJECT(var_asn_key);
CHECK_OBJECT(var_asn_key);
Py_DECREF(var_asn_key);
var_asn_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_encoder);
var_encoder = NULL;
Py_XDECREF(var_AsnPubKey);
var_AsnPubKey = NULL;
Py_XDECREF(var_asn_key);
var_asn_key = NULL;
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


static PyObject *impl_rsa$key$$$function__22__load_pkcs1_pem(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_keyfile = python_pars[1];
PyObject *var_der = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__22__load_pkcs1_pem;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__22__load_pkcs1_pem = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__22__load_pkcs1_pem)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__22__load_pkcs1_pem);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__22__load_pkcs1_pem == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__22__load_pkcs1_pem = MAKE_FUNCTION_FRAME(tstate, code_objects_493557ef213273cfde0f0d78ca76e8cf, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__22__load_pkcs1_pem->m_type_description == NULL);
frame_frame_rsa$key$$$function__22__load_pkcs1_pem = cache_frame_frame_rsa$key$$$function__22__load_pkcs1_pem;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__22__load_pkcs1_pem);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__22__load_pkcs1_pem) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 330;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pem);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_keyfile);
tmp_args_element_value_1 = par_keyfile;
tmp_args_element_value_2 = mod_consts.const_str_digest_4e752acef45453c1cfd04a15c03d7e9e;
frame_frame_rsa$key$$$function__22__load_pkcs1_pem->m_frame.f_lineno = 330;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_load_pem,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_der == NULL);
var_der = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_cls);
tmp_called_instance_2 = par_cls;
CHECK_OBJECT(var_der);
tmp_args_element_value_3 = var_der;
frame_frame_rsa$key$$$function__22__load_pkcs1_pem->m_frame.f_lineno = 331;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__load_pkcs1_der, tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__22__load_pkcs1_pem, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__22__load_pkcs1_pem->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__22__load_pkcs1_pem, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__22__load_pkcs1_pem,
    type_description_1,
    par_cls,
    par_keyfile,
    var_der
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__22__load_pkcs1_pem == cache_frame_frame_rsa$key$$$function__22__load_pkcs1_pem) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__22__load_pkcs1_pem);
    cache_frame_frame_rsa$key$$$function__22__load_pkcs1_pem = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__22__load_pkcs1_pem);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_der);
CHECK_OBJECT(var_der);
Py_DECREF(var_der);
var_der = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_der);
var_der = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__23__save_pkcs1_pem(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_der = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__23__save_pkcs1_pem;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__23__save_pkcs1_pem = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__23__save_pkcs1_pem)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__23__save_pkcs1_pem);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__23__save_pkcs1_pem == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__23__save_pkcs1_pem = MAKE_FUNCTION_FRAME(tstate, code_objects_2ecf10cbe2e78f6807f920e2493f29cc, module_rsa$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__23__save_pkcs1_pem->m_type_description == NULL);
frame_frame_rsa$key$$$function__23__save_pkcs1_pem = cache_frame_frame_rsa$key$$$function__23__save_pkcs1_pem;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__23__save_pkcs1_pem);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__23__save_pkcs1_pem) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_rsa$key$$$function__23__save_pkcs1_pem->m_frame.f_lineno = 340;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__save_pkcs1_der);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_der == NULL);
var_der = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 341;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pem);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_der);
tmp_args_element_value_1 = var_der;
tmp_args_element_value_2 = mod_consts.const_str_digest_4e752acef45453c1cfd04a15c03d7e9e;
frame_frame_rsa$key$$$function__23__save_pkcs1_pem->m_frame.f_lineno = 341;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_save_pem,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__23__save_pkcs1_pem, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__23__save_pkcs1_pem->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__23__save_pkcs1_pem, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__23__save_pkcs1_pem,
    type_description_1,
    par_self,
    var_der
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__23__save_pkcs1_pem == cache_frame_frame_rsa$key$$$function__23__save_pkcs1_pem) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__23__save_pkcs1_pem);
    cache_frame_frame_rsa$key$$$function__23__save_pkcs1_pem = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__23__save_pkcs1_pem);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_der);
CHECK_OBJECT(var_der);
Py_DECREF(var_der);
var_der = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_der);
var_der = NULL;
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


static PyObject *impl_rsa$key$$$function__24_load_pkcs1_openssl_pem(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_keyfile = python_pars[1];
PyObject *var_der = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem = MAKE_FUNCTION_FRAME(tstate, code_objects_7388574ea28964c77ebf7425c3985951, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem->m_type_description == NULL);
frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem = cache_frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pem);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_keyfile);
tmp_args_element_value_1 = par_keyfile;
tmp_args_element_value_2 = mod_consts.const_str_digest_ee48d63b2bca52210e311acc92124a39;
frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem->m_frame.f_lineno = 359;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_load_pem,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_der == NULL);
var_der = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_cls);
tmp_called_instance_2 = par_cls;
CHECK_OBJECT(var_der);
tmp_args_element_value_3 = var_der;
frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem->m_frame.f_lineno = 360;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load_pkcs1_openssl_der, tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem,
    type_description_1,
    par_cls,
    par_keyfile,
    var_der
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem == cache_frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem);
    cache_frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__24_load_pkcs1_openssl_pem);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_der);
CHECK_OBJECT(var_der);
Py_DECREF(var_der);
var_der = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_der);
var_der = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__25_load_pkcs1_openssl_der(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_keyfile = python_pars[1];
PyObject *var_OpenSSLPubKey = NULL;
PyObject *var_decoder = NULL;
PyObject *var_univ = NULL;
PyObject *var_keyinfo = NULL;
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der = MAKE_FUNCTION_FRAME(tstate, code_objects_d7cb842c2b66ae1c69bd89cb2ad49aba, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der->m_type_description == NULL);
frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der = cache_frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_ee52f19f6eef7462714cc4db074b9a85;
tmp_globals_arg_value_1 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_OpenSSLPubKey_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der->m_frame.f_lineno = 371;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_rsa$key,
        mod_consts.const_str_plain_OpenSSLPubKey,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_OpenSSLPubKey);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_OpenSSLPubKey == NULL);
var_OpenSSLPubKey = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_989622ccef88eb949be48370a129282e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_decoder_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der->m_frame.f_lineno = 372;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_rsa$key,
        mod_consts.const_str_plain_decoder,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_decoder);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_decoder == NULL);
var_decoder = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c;
tmp_globals_arg_value_3 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_univ_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der->m_frame.f_lineno = 373;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_rsa$key,
        mod_consts.const_str_plain_univ,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_univ);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_univ == NULL);
var_univ = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_2;
CHECK_OBJECT(var_decoder);
tmp_expression_value_1 = var_decoder;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_keyfile);
tmp_kw_call_arg_value_0_1 = par_keyfile;
CHECK_OBJECT(var_OpenSSLPubKey);
tmp_called_value_2 = var_OpenSSLPubKey;
frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der->m_frame.f_lineno = 375;
tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 375;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der->m_frame.f_lineno = 375;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_asn1Spec_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
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



exception_lineno = 375;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "ooooooo";
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
assert(var_keyinfo == NULL);
Py_INCREF(tmp_assign_source_7);
var_keyinfo = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_8);
var__ = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_value_2;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_keyinfo);
tmp_expression_value_3 = var_keyinfo;
tmp_subscript_value_1 = mod_consts.const_str_plain_header;
tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_oid;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_univ);
tmp_called_instance_1 = var_univ;
frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der->m_frame.f_lineno = 377;
tmp_cmp_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_ObjectIdentifier,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_8610103a8657fcf057847084d4917365_tuple, 0)
);

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 377;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooooooo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_3e03ada9211a1db026444e72f7487146;
frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der->m_frame.f_lineno = 378;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 378;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_3;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_cls);
tmp_expression_value_4 = par_cls;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__load_pkcs1_der);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_keyinfo);
tmp_expression_value_6 = var_keyinfo;
tmp_subscript_value_3 = mod_consts.const_str_plain_key;
tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 380;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_1_none_none;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 380;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der->m_frame.f_lineno = 380;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der,
    type_description_1,
    par_cls,
    par_keyfile,
    var_OpenSSLPubKey,
    var_decoder,
    var_univ,
    var_keyinfo,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der == cache_frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der);
    cache_frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__25_load_pkcs1_openssl_der);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_OpenSSLPubKey);
CHECK_OBJECT(var_OpenSSLPubKey);
Py_DECREF(var_OpenSSLPubKey);
var_OpenSSLPubKey = NULL;
CHECK_OBJECT(var_decoder);
CHECK_OBJECT(var_decoder);
Py_DECREF(var_decoder);
var_decoder = NULL;
CHECK_OBJECT(var_univ);
CHECK_OBJECT(var_univ);
Py_DECREF(var_univ);
var_univ = NULL;
CHECK_OBJECT(var_keyinfo);
CHECK_OBJECT(var_keyinfo);
Py_DECREF(var_keyinfo);
var_keyinfo = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_OpenSSLPubKey);
var_OpenSSLPubKey = NULL;
Py_XDECREF(var_decoder);
var_decoder = NULL;
Py_XDECREF(var_univ);
var_univ = NULL;
Py_XDECREF(var_keyinfo);
var_keyinfo = NULL;
Py_XDECREF(var__);
var__ = NULL;
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
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__26___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_n = python_pars[1];
PyObject *par_e = python_pars[2];
PyObject *par_d = python_pars[3];
PyObject *par_p = python_pars[4];
PyObject *par_q = python_pars[5];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__26___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__26___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__26___init__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__26___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__26___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__26___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8120428ca8f37c5048451987d0d14fb7, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__26___init__->m_type_description == NULL);
frame_frame_rsa$key$$$function__26___init__ = cache_frame_frame_rsa$key$$$function__26___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__26___init__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__26___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_rsa$key$AbstractKey(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AbstractKey);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 410;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_n);
tmp_args_element_value_2 = par_n;
CHECK_OBJECT(par_e);
tmp_args_element_value_3 = par_e;
frame_frame_rsa$key$$$function__26___init__->m_frame.f_lineno = 410;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        const_str_plain___init__,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_d);
tmp_assattr_value_1 = par_d;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_d, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_p);
tmp_assattr_value_2 = par_p;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_p, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_q);
tmp_assattr_value_3 = par_q;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_q, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_int_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_d);
tmp_mod_expr_left_1 = par_d;
CHECK_OBJECT(par_p);
tmp_sub_expr_left_1 = par_p;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_mod_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_int_arg_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_4 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_exp1, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_int_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_d);
tmp_mod_expr_left_2 = par_d;
CHECK_OBJECT(par_q);
tmp_sub_expr_left_2 = par_q;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_mod_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_mod_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_int_arg_2 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_5 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_exp2, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_assattr_target_6;
tmp_expression_value_1 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 418;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_common);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_q);
tmp_args_element_value_4 = par_q;
CHECK_OBJECT(par_p);
tmp_args_element_value_5 = par_p;
frame_frame_rsa$key$$$function__26___init__->m_frame.f_lineno = 418;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assattr_value_6 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_inverse,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_coef, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__26___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__26___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__26___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__26___init__,
    type_description_1,
    par_self,
    par_n,
    par_e,
    par_d,
    par_p,
    par_q
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__26___init__ == cache_frame_frame_rsa$key$$$function__26___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__26___init__);
    cache_frame_frame_rsa$key$$$function__26___init__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__26___init__);

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
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
CHECK_OBJECT(par_e);
Py_DECREF(par_e);
CHECK_OBJECT(par_d);
Py_DECREF(par_d);
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
CHECK_OBJECT(par_e);
Py_DECREF(par_e);
CHECK_OBJECT(par_d);
Py_DECREF(par_d);
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__27___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__27___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__27___getitem__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__27___getitem__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__27___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__27___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__27___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a6654579fdb6df88f3fab8d09e2b8cf7, module_rsa$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__27___getitem__->m_type_description == NULL);
frame_frame_rsa$key$$$function__27___getitem__ = cache_frame_frame_rsa$key$$$function__27___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__27___getitem__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__27___getitem__) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
CHECK_OBJECT(par_key);
tmp_name_value_1 = par_key;
tmp_return_value = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, NULL);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__27___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__27___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__27___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__27___getitem__,
    type_description_1,
    par_self,
    par_key
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__27___getitem__ == cache_frame_frame_rsa$key$$$function__27___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__27___getitem__);
    cache_frame_frame_rsa$key$$$function__27___getitem__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__27___getitem__);

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
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__28___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__28___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__28___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__28___repr__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__28___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__28___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__28___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3e0716ebe54c355916f17a1ee1bb9c15, module_rsa$key, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__28___repr__->m_type_description == NULL);
frame_frame_rsa$key$$$function__28___repr__ = cache_frame_frame_rsa$key$$$function__28___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__28___repr__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__28___repr__) == 2);

// Framed code:
{
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_03d8727fe946864458bcd045bd650204;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_n);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_e);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_d);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_p);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_q);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__28___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__28___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__28___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__28___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__28___repr__ == cache_frame_frame_rsa$key$$$function__28___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__28___repr__);
    cache_frame_frame_rsa$key$$$function__28___repr__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__28___repr__);

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


static PyObject *impl_rsa$key$$$function__29___getstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__29___getstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__29___getstate__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__29___getstate__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__29___getstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__29___getstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__29___getstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c8dee5f237fe64cb04f49ea3434100ed, module_rsa$key, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__29___getstate__->m_type_description == NULL);
frame_frame_rsa$key$$$function__29___getstate__ = cache_frame_frame_rsa$key$$$function__29___getstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__29___getstate__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__29___getstate__) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_n);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 8);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_e);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_d);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_p);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_q);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_exp1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 5, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_exp2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 6, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_coef);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 7, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__29___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__29___getstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__29___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__29___getstate__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__29___getstate__ == cache_frame_frame_rsa$key$$$function__29___getstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__29___getstate__);
    cache_frame_frame_rsa$key$$$function__29___getstate__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__29___getstate__);

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


static PyObject *impl_rsa$key$$$function__30___setstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_state = python_pars[1];
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__element_5 = NULL;
PyObject *tmp_tuple_unpack_1__element_6 = NULL;
PyObject *tmp_tuple_unpack_1__element_7 = NULL;
PyObject *tmp_tuple_unpack_1__element_8 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__30___setstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__30___setstate__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__30___setstate__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__30___setstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__30___setstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__30___setstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f733c099cadad913175e7ea3a0f34ba5, module_rsa$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__30___setstate__->m_type_description == NULL);
frame_frame_rsa$key$$$function__30___setstate__ = cache_frame_frame_rsa$key$$$function__30___setstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__30___setstate__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__30___setstate__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_state);
tmp_iter_arg_1 = par_state;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_1;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 8);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 8);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 8);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 8);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 4, 8);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__element_5 == NULL);
tmp_tuple_unpack_1__element_5 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 5, 8);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__element_6 == NULL);
tmp_tuple_unpack_1__element_6 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 6, 8);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__element_7 == NULL);
tmp_tuple_unpack_1__element_7 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 7, 8);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__element_8 == NULL);
tmp_tuple_unpack_1__element_8 = tmp_assign_source_9;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 8);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oo";
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

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assattr_value_1 = tmp_tuple_unpack_1__element_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_n, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assattr_value_2 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_e, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assattr_value_3 = tmp_tuple_unpack_1__element_3;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_d, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assattr_value_4 = tmp_tuple_unpack_1__element_4;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_p, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
tmp_assattr_value_5 = tmp_tuple_unpack_1__element_5;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_q, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;

{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
tmp_assattr_value_6 = tmp_tuple_unpack_1__element_6;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_exp1, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_6);
tmp_tuple_unpack_1__element_6 = NULL;

{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
tmp_assattr_value_7 = tmp_tuple_unpack_1__element_7;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_exp2, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_7);
tmp_tuple_unpack_1__element_7 = NULL;

{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_8);
tmp_assattr_value_8 = tmp_tuple_unpack_1__element_8;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_coef, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
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
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_6);
tmp_tuple_unpack_1__element_6 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_7);
tmp_tuple_unpack_1__element_7 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_8);
tmp_tuple_unpack_1__element_8 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_tuple_unpack_1__element_8);
tmp_tuple_unpack_1__element_8 = NULL;

{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_rsa$key$AbstractKey(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AbstractKey);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 439;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_n);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 439;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_e);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 439;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__30___setstate__->m_frame.f_lineno = 439;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__30___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__30___setstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__30___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__30___setstate__,
    type_description_1,
    par_self,
    par_state
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__30___setstate__ == cache_frame_frame_rsa$key$$$function__30___setstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__30___setstate__);
    cache_frame_frame_rsa$key$$$function__30___setstate__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__30___setstate__);

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


static PyObject *impl_rsa$key$$$function__31___eq__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__31___eq__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__31___eq__ = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_other);
tmp_cmp_expr_left_1 = par_other;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__31___eq__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__31___eq__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__31___eq__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__31___eq__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0836c59f9d2b7e27e61fe8fde56722ec, module_rsa$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__31___eq__->m_type_description == NULL);
frame_frame_rsa$key$$$function__31___eq__ = cache_frame_frame_rsa$key$$$function__31___eq__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__31___eq__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__31___eq__) == 2);

// Framed code:
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_other);
tmp_isinstance_inst_1 = par_other;
tmp_isinstance_cls_1 = module_var_accessor_rsa$key$PrivateKey(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PrivateKey);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
int tmp_and_left_truth_4;
PyObject *tmp_and_left_value_4;
PyObject *tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
int tmp_and_left_truth_5;
PyObject *tmp_and_left_value_5;
PyObject *tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
int tmp_and_left_truth_6;
PyObject *tmp_and_left_value_6;
PyObject *tmp_and_right_value_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
int tmp_and_left_truth_7;
PyObject *tmp_and_left_value_7;
PyObject *tmp_and_right_value_7;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_n);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_2 = par_other;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_n);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 449;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 449;
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
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_e);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_4 = par_other;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_e);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 450;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 450;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(tmp_and_left_value_2);
Py_DECREF(tmp_and_left_value_2);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_d);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_6 = par_other;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_d);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 451;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_and_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_3);

exception_lineno = 451;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(tmp_and_left_value_3);
Py_DECREF(tmp_and_left_value_3);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_p);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_8 = par_other;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_p);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 452;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_and_left_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_4);

exception_lineno = 452;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(tmp_and_left_value_4);
Py_DECREF(tmp_and_left_value_4);
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_q);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_10 = par_other;
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_q);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 453;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_5 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_and_left_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_5 = CHECK_IF_TRUE(tmp_and_left_value_5);
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_5);

exception_lineno = 453;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(tmp_and_left_value_5);
Py_DECREF(tmp_and_left_value_5);
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_exp1);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_12 = par_other;
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_exp1);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 454;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_6 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_and_left_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_6 = CHECK_IF_TRUE(tmp_and_left_value_6);
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_6);

exception_lineno = 454;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(tmp_and_left_value_6);
Py_DECREF(tmp_and_left_value_6);
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_exp2);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_14 = par_other;
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_exp2);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 455;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_7 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_and_left_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_7 = CHECK_IF_TRUE(tmp_and_left_value_7);
if (tmp_and_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_7);

exception_lineno = 455;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
CHECK_OBJECT(tmp_and_left_value_7);
Py_DECREF(tmp_and_left_value_7);
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_coef);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_16 = par_other;
tmp_cmp_expr_right_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_coef);
if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_9);

exception_lineno = 456;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_7 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
CHECK_OBJECT(tmp_cmp_expr_right_9);
Py_DECREF(tmp_cmp_expr_right_9);
if (tmp_and_right_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_6 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
tmp_and_right_value_6 = tmp_and_left_value_7;
and_end_7:;
tmp_and_right_value_5 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_and_right_value_5 = tmp_and_left_value_6;
and_end_6:;
tmp_and_right_value_4 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_and_right_value_4 = tmp_and_left_value_5;
and_end_5:;
tmp_and_right_value_3 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_and_right_value_3 = tmp_and_left_value_4;
and_end_4:;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__31___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__31___eq__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__31___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__31___eq__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__31___eq__ == cache_frame_frame_rsa$key$$$function__31___eq__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__31___eq__);
    cache_frame_frame_rsa$key$$$function__31___eq__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__31___eq__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__32___ne__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__32___ne__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__32___ne__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__32___ne__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__32___ne__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__32___ne__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__32___ne__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e56f7011058a9da6e63a2eecd0d91c6e, module_rsa$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__32___ne__->m_type_description == NULL);
frame_frame_rsa$key$$$function__32___ne__ = cache_frame_frame_rsa$key$$$function__32___ne__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__32___ne__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__32___ne__) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_self);
tmp_cmp_expr_left_1 = par_self;
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__32___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__32___ne__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__32___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__32___ne__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__32___ne__ == cache_frame_frame_rsa$key$$$function__32___ne__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__32___ne__);
    cache_frame_frame_rsa$key$$$function__32___ne__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__32___ne__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__33___hash__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__33___hash__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__33___hash__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__33___hash__)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__33___hash__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__33___hash__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__33___hash__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3419e5c10744f0d6e3fea8c4f5598275, module_rsa$key, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__33___hash__->m_type_description == NULL);
frame_frame_rsa$key$$$function__33___hash__ = cache_frame_frame_rsa$key$$$function__33___hash__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__33___hash__);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__33___hash__) == 2);

// Framed code:
{
PyObject *tmp_hash_arg_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_n);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_hash_arg_1 = MAKE_TUPLE_EMPTY(tstate, 8);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyTuple_SET_ITEM(tmp_hash_arg_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_e);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_hash_arg_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_d);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_hash_arg_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_p);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_hash_arg_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_q);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_hash_arg_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_exp1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_hash_arg_1, 5, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_exp2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_hash_arg_1, 6, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_coef);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_hash_arg_1, 7, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_hash_arg_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = BUILTIN_HASH(tstate, tmp_hash_arg_1);
CHECK_OBJECT(tmp_hash_arg_1);
Py_DECREF(tmp_hash_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__33___hash__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__33___hash__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__33___hash__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__33___hash__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__33___hash__ == cache_frame_frame_rsa$key$$$function__33___hash__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__33___hash__);
    cache_frame_frame_rsa$key$$$function__33___hash__ = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__33___hash__);

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


static PyObject *impl_rsa$key$$$function__34_blinded_decrypt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_encrypted = python_pars[1];
PyObject *var_blinded = NULL;
PyObject *var_blindfac_inverse = NULL;
PyObject *var_s1 = NULL;
PyObject *var_s2 = NULL;
PyObject *var_h = NULL;
PyObject *var_decrypted = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__34_blinded_decrypt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__34_blinded_decrypt = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__34_blinded_decrypt)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__34_blinded_decrypt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__34_blinded_decrypt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__34_blinded_decrypt = MAKE_FUNCTION_FRAME(tstate, code_objects_2d24b91bdf637ee26d3f1042f8020d1a, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__34_blinded_decrypt->m_type_description == NULL);
frame_frame_rsa$key$$$function__34_blinded_decrypt = cache_frame_frame_rsa$key$$$function__34_blinded_decrypt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__34_blinded_decrypt);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__34_blinded_decrypt) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_encrypted);
tmp_args_element_value_1 = par_encrypted;
frame_frame_rsa$key$$$function__34_blinded_decrypt->m_frame.f_lineno = 476;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_blind, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "oooooooo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 476;
type_description_1 = "oooooooo";
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



exception_lineno = 476;
type_description_1 = "oooooooo";
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



exception_lineno = 476;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_blinded == NULL);
Py_INCREF(tmp_assign_source_4);
var_blinded = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_blindfac_inverse == NULL);
Py_INCREF(tmp_assign_source_5);
var_blindfac_inverse = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_pow);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(var_blinded);
tmp_args_element_value_2 = var_blinded;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_exp1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_p);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 482;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__34_blinded_decrypt->m_frame.f_lineno = 482;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_s1 == NULL);
var_s1 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_4;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_pow);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(var_blinded);
tmp_args_element_value_5 = var_blinded;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_exp2);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_q);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 483;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__34_blinded_decrypt->m_frame.f_lineno = 483;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_s2 == NULL);
var_s2 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_s1);
tmp_sub_expr_left_1 = var_s1;
CHECK_OBJECT(var_s2);
tmp_sub_expr_right_1 = var_s2;
tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_coef);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 484;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_mod_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_p);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mod_expr_left_1);

exception_lineno = 484;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_left_1);
Py_DECREF(tmp_mod_expr_left_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_h == NULL);
var_h = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_s2);
tmp_add_expr_left_1 = var_s2;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_mult_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_q);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_h);
tmp_mult_expr_right_2 = var_h;
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_decrypted == NULL);
var_decrypted = tmp_assign_source_9;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_decrypted);
tmp_args_element_value_8 = var_decrypted;
CHECK_OBJECT(var_blindfac_inverse);
tmp_args_element_value_9 = var_blindfac_inverse;
frame_frame_rsa$key$$$function__34_blinded_decrypt->m_frame.f_lineno = 487;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_unblind,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__34_blinded_decrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__34_blinded_decrypt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__34_blinded_decrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__34_blinded_decrypt,
    type_description_1,
    par_self,
    par_encrypted,
    var_blinded,
    var_blindfac_inverse,
    var_s1,
    var_s2,
    var_h,
    var_decrypted
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__34_blinded_decrypt == cache_frame_frame_rsa$key$$$function__34_blinded_decrypt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__34_blinded_decrypt);
    cache_frame_frame_rsa$key$$$function__34_blinded_decrypt = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__34_blinded_decrypt);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_blinded);
CHECK_OBJECT(var_blinded);
Py_DECREF(var_blinded);
var_blinded = NULL;
CHECK_OBJECT(var_blindfac_inverse);
CHECK_OBJECT(var_blindfac_inverse);
Py_DECREF(var_blindfac_inverse);
var_blindfac_inverse = NULL;
CHECK_OBJECT(var_s1);
CHECK_OBJECT(var_s1);
Py_DECREF(var_s1);
var_s1 = NULL;
CHECK_OBJECT(var_s2);
CHECK_OBJECT(var_s2);
Py_DECREF(var_s2);
var_s2 = NULL;
CHECK_OBJECT(var_h);
CHECK_OBJECT(var_h);
Py_DECREF(var_h);
var_h = NULL;
CHECK_OBJECT(var_decrypted);
CHECK_OBJECT(var_decrypted);
Py_DECREF(var_decrypted);
var_decrypted = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_blinded);
var_blinded = NULL;
Py_XDECREF(var_blindfac_inverse);
var_blindfac_inverse = NULL;
Py_XDECREF(var_s1);
var_s1 = NULL;
Py_XDECREF(var_s2);
var_s2 = NULL;
Py_XDECREF(var_h);
var_h = NULL;
Py_XDECREF(var_decrypted);
var_decrypted = NULL;
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
CHECK_OBJECT(par_encrypted);
Py_DECREF(par_encrypted);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_encrypted);
Py_DECREF(par_encrypted);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__35_blinded_encrypt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *var_blinded = NULL;
PyObject *var_blindfac_inverse = NULL;
PyObject *var_encrypted = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__35_blinded_encrypt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__35_blinded_encrypt = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__35_blinded_encrypt)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__35_blinded_encrypt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__35_blinded_encrypt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__35_blinded_encrypt = MAKE_FUNCTION_FRAME(tstate, code_objects_051e052a4d7aa16888effd5eb7165546, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__35_blinded_encrypt->m_type_description == NULL);
frame_frame_rsa$key$$$function__35_blinded_encrypt = cache_frame_frame_rsa$key$$$function__35_blinded_encrypt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__35_blinded_encrypt);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__35_blinded_encrypt) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_rsa$key$$$function__35_blinded_encrypt->m_frame.f_lineno = 499;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_blind, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 499;
type_description_1 = "ooooo";
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



exception_lineno = 499;
type_description_1 = "ooooo";
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



exception_lineno = 499;
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_blinded == NULL);
Py_INCREF(tmp_assign_source_4);
var_blinded = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_blindfac_inverse == NULL);
Py_INCREF(tmp_assign_source_5);
var_blindfac_inverse = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
tmp_expression_value_2 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_core);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encrypt_int);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_blinded);
tmp_args_element_value_2 = var_blinded;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_d);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 500;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_n);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 500;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__35_blinded_encrypt->m_frame.f_lineno = 500;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_encrypted == NULL);
var_encrypted = tmp_assign_source_6;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_encrypted);
tmp_args_element_value_5 = var_encrypted;
CHECK_OBJECT(var_blindfac_inverse);
tmp_args_element_value_6 = var_blindfac_inverse;
frame_frame_rsa$key$$$function__35_blinded_encrypt->m_frame.f_lineno = 501;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_unblind,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__35_blinded_encrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__35_blinded_encrypt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__35_blinded_encrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__35_blinded_encrypt,
    type_description_1,
    par_self,
    par_message,
    var_blinded,
    var_blindfac_inverse,
    var_encrypted
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__35_blinded_encrypt == cache_frame_frame_rsa$key$$$function__35_blinded_encrypt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__35_blinded_encrypt);
    cache_frame_frame_rsa$key$$$function__35_blinded_encrypt = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__35_blinded_encrypt);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_blinded);
CHECK_OBJECT(var_blinded);
Py_DECREF(var_blinded);
var_blinded = NULL;
CHECK_OBJECT(var_blindfac_inverse);
CHECK_OBJECT(var_blindfac_inverse);
Py_DECREF(var_blindfac_inverse);
var_blindfac_inverse = NULL;
CHECK_OBJECT(var_encrypted);
CHECK_OBJECT(var_encrypted);
Py_DECREF(var_encrypted);
var_encrypted = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_blinded);
var_blinded = NULL;
Py_XDECREF(var_blindfac_inverse);
var_blindfac_inverse = NULL;
Py_XDECREF(var_encrypted);
var_encrypted = NULL;
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


static PyObject *impl_rsa$key$$$function__36__load_pkcs1_der(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_keyfile = python_pars[1];
PyObject *var_decoder = NULL;
PyObject *var_priv = NULL;
PyObject *var__ = NULL;
PyObject *var_as_ints = NULL;
PyObject *var_key = NULL;
PyObject *var_exp1 = NULL;
PyObject *var_exp2 = NULL;
PyObject *var_coef = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__36__load_pkcs1_der;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__36__load_pkcs1_der = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__36__load_pkcs1_der)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__36__load_pkcs1_der);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__36__load_pkcs1_der == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__36__load_pkcs1_der = MAKE_FUNCTION_FRAME(tstate, code_objects_8c475aa0da1346370dbb8c0026ec1681, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__36__load_pkcs1_der->m_type_description == NULL);
frame_frame_rsa$key$$$function__36__load_pkcs1_der = cache_frame_frame_rsa$key$$$function__36__load_pkcs1_der;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__36__load_pkcs1_der);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__36__load_pkcs1_der) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_989622ccef88eb949be48370a129282e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_decoder_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_rsa$key$$$function__36__load_pkcs1_der->m_frame.f_lineno = 525;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_rsa$key,
        mod_consts.const_str_plain_decoder,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_decoder);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_decoder == NULL);
var_decoder = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_decoder);
tmp_expression_value_1 = var_decoder;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_keyfile);
tmp_args_element_value_1 = par_keyfile;
frame_frame_rsa$key$$$function__36__load_pkcs1_der->m_frame.f_lineno = 527;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 527;
type_description_1 = "oooooooooo";
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



exception_lineno = 527;
type_description_1 = "oooooooooo";
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



exception_lineno = 527;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
assert(var_priv == NULL);
Py_INCREF(tmp_assign_source_5);
var_priv = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_6);
var__ = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_priv);
tmp_expression_value_2 = var_priv;
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
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
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_2e4b903632c26299577dcb6a8e690066;
CHECK_OBJECT(var_priv);
tmp_expression_value_3 = var_priv;
tmp_subscript_value_2 = const_int_0;
tmp_mod_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 0);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__36__load_pkcs1_der->m_frame.f_lineno = 545;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 545;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
tmp_called_value_2 = (PyObject *)&PyMap_Type;
tmp_args_element_value_2 = (PyObject *)&PyLong_Type;
CHECK_OBJECT(var_priv);
tmp_expression_value_4 = var_priv;
tmp_subscript_value_3 = mod_consts.const_slice_int_pos_1_int_pos_6_none;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__36__load_pkcs1_der->m_frame.f_lineno = 547;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_as_ints == NULL);
var_as_ints = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(par_cls);
tmp_direct_call_arg1_1 = par_cls;
CHECK_OBJECT(var_as_ints);
tmp_direct_call_arg2_1 = var_as_ints;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_8 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 548;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_key == NULL);
var_key = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_4;
tmp_called_value_3 = (PyObject *)&PyMap_Type;
tmp_args_element_value_4 = (PyObject *)&PyLong_Type;
CHECK_OBJECT(var_priv);
tmp_expression_value_5 = var_priv;
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_6_int_pos_9_none;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
frame_frame_rsa$key$$$function__36__load_pkcs1_der->m_frame.f_lineno = 550;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 550;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 550;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 550;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_3 == NULL);
tmp_tuple_unpack_2__element_3 = tmp_assign_source_12;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 550;
type_description_1 = "oooooooooo";
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
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
assert(var_exp1 == NULL);
Py_INCREF(tmp_assign_source_13);
var_exp1 = tmp_assign_source_13;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
assert(var_exp2 == NULL);
Py_INCREF(tmp_assign_source_14);
var_exp2 = tmp_assign_source_14;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
assert(var_coef == NULL);
Py_INCREF(tmp_assign_source_15);
var_coef = tmp_assign_source_15;
}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_key);
tmp_expression_value_6 = var_key;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_exp1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyTuple_SET_ITEM(tmp_cmp_expr_left_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_key);
tmp_expression_value_7 = var_key;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_exp2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_left_2, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_key);
tmp_expression_value_8 = var_key;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_coef);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_left_2, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_left_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
CHECK_OBJECT(var_exp1);
tmp_tuple_element_2 = var_exp1;
tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_exp2);
tmp_tuple_element_2 = var_exp2;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_coef);
tmp_tuple_element_2 = var_coef;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 2, tmp_tuple_element_2);
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_TUPLE_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "oooooooooo";
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
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_9 = module_var_accessor_rsa$key$warnings(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 553;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_warn);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = mod_consts.const_str_digest_09a8726e54c85233c5ca32e446780e79;
tmp_args_element_value_7 = module_var_accessor_rsa$key$UserWarning(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UserWarning);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 557;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__36__load_pkcs1_der->m_frame.f_lineno = 553;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__36__load_pkcs1_der, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__36__load_pkcs1_der->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__36__load_pkcs1_der, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__36__load_pkcs1_der,
    type_description_1,
    par_cls,
    par_keyfile,
    var_decoder,
    var_priv,
    var__,
    var_as_ints,
    var_key,
    var_exp1,
    var_exp2,
    var_coef
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__36__load_pkcs1_der == cache_frame_frame_rsa$key$$$function__36__load_pkcs1_der) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__36__load_pkcs1_der);
    cache_frame_frame_rsa$key$$$function__36__load_pkcs1_der = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__36__load_pkcs1_der);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_key);
tmp_return_value = var_key;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_decoder);
CHECK_OBJECT(var_decoder);
Py_DECREF(var_decoder);
var_decoder = NULL;
CHECK_OBJECT(var_priv);
CHECK_OBJECT(var_priv);
Py_DECREF(var_priv);
var_priv = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
CHECK_OBJECT(var_as_ints);
CHECK_OBJECT(var_as_ints);
Py_DECREF(var_as_ints);
var_as_ints = NULL;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
CHECK_OBJECT(var_exp1);
CHECK_OBJECT(var_exp1);
Py_DECREF(var_exp1);
var_exp1 = NULL;
CHECK_OBJECT(var_exp2);
CHECK_OBJECT(var_exp2);
Py_DECREF(var_exp2);
var_exp2 = NULL;
CHECK_OBJECT(var_coef);
CHECK_OBJECT(var_coef);
Py_DECREF(var_coef);
var_coef = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_decoder);
var_decoder = NULL;
Py_XDECREF(var_priv);
var_priv = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_as_ints);
var_as_ints = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_exp1);
var_exp1 = NULL;
Py_XDECREF(var_exp2);
var_exp2 = NULL;
Py_XDECREF(var_coef);
var_coef = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__37__save_pkcs1_der(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_univ = NULL;
PyObject *var_namedtype = NULL;
PyObject *var_encoder = NULL;
PyObject *var_AsnPrivKey = NULL;
PyObject *var_asn_key = NULL;
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__37__save_pkcs1_der;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der = MAKE_FUNCTION_FRAME(tstate, code_objects_42f71baef190a53d2f04b2bafdb6f832, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_type_description == NULL);
frame_frame_rsa$key$$$function__37__save_pkcs1_der = cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__37__save_pkcs1_der);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__37__save_pkcs1_der) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c;
tmp_globals_arg_value_1 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_univ_str_plain_namedtype_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 569;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_1 = "oooooo";
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
        (PyObject *)moduledict_rsa$key,
        mod_consts.const_str_plain_univ,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_univ);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_univ == NULL);
var_univ = tmp_assign_source_2;
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
        (PyObject *)moduledict_rsa$key,
        mod_consts.const_str_plain_namedtype,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_namedtype);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_namedtype == NULL);
var_namedtype = tmp_assign_source_3;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_989622ccef88eb949be48370a129282e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_encoder_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 570;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_rsa$key,
        mod_consts.const_str_plain_encoder,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_encoder);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_encoder == NULL);
var_encoder = tmp_assign_source_4;
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_univ);
tmp_expression_value_1 = var_univ;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Sequence);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_assign_source_5 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_5, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_6 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
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


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_3;
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


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_8 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_8;
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


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_9;
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


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_AsnPrivKey;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 572;
tmp_assign_source_9 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_9;
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


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_3;
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
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_3;
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


exception_lineno = 572;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 572;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 572;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_10;
}
branch_end_1:;
{
PyObject *tmp_assign_source_11;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_d87a867a1da18e127aa595b45709adf5;
tmp_res = PyObject_SetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_e797718f3d5127a0ca8e16d10f3347b5;
tmp_res = PyObject_SetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_572;
tmp_res = PyObject_SetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2 = MAKE_CLASS_FRAME(tstate, code_objects_a809d798c8a39ea870bd56026a957b4f, module_rsa$key, NULL, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_type_description == NULL);
frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2 = cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_16;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_22;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_25;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
PyObject *tmp_called_instance_9;
tmp_expression_value_8 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_namedtype);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_namedtype);
tmp_expression_value_8 = var_namedtype;
        Py_INCREF(tmp_expression_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_NamedTypes);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_expression_value_9 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_namedtype);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_namedtype);
tmp_expression_value_9 = var_namedtype;
        Py_INCREF(tmp_expression_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_NamedType);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 574;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_version;
tmp_called_instance_1 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_univ);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_univ);
tmp_called_instance_1 = var_univ;
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 574;
tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Integer);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_3);

exception_lineno = 574;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 574;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 574;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_expression_value_10 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_namedtype);

if (tmp_expression_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_namedtype);
tmp_expression_value_10 = var_namedtype;
        Py_INCREF(tmp_expression_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_NamedType);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 575;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_args_element_value_5 = mod_consts.const_str_plain_modulus;
tmp_called_instance_2 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_univ);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_univ);
tmp_called_instance_2 = var_univ;
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 575;
tmp_args_element_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_Integer);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_4);

exception_lineno = 575;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 575;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 575;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_expression_value_11 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_namedtype);

if (tmp_expression_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_namedtype);
tmp_expression_value_11 = var_namedtype;
        Py_INCREF(tmp_expression_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_NamedType);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 576;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_args_element_value_8 = mod_consts.const_str_plain_publicExponent;
tmp_called_instance_3 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_univ);

if (tmp_called_instance_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_univ);
tmp_called_instance_3 = var_univ;
        Py_INCREF(tmp_called_instance_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 576;
tmp_args_element_value_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_Integer);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 576;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 576;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 576;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_expression_value_12 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_namedtype);

if (tmp_expression_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_namedtype);
tmp_expression_value_12 = var_namedtype;
        Py_INCREF(tmp_expression_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_NamedType);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 577;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_args_element_value_11 = mod_consts.const_str_plain_privateExponent;
tmp_called_instance_4 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_univ);

if (tmp_called_instance_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_univ);
tmp_called_instance_4 = var_univ;
        Py_INCREF(tmp_called_instance_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 577;
tmp_args_element_value_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_Integer);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_called_value_6);

exception_lineno = 577;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 577;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 577;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_expression_value_13 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_namedtype);

if (tmp_expression_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_namedtype);
tmp_expression_value_13 = var_namedtype;
        Py_INCREF(tmp_expression_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_NamedType);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);

exception_lineno = 578;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_args_element_value_14 = mod_consts.const_str_plain_prime1;
tmp_called_instance_5 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_univ);

if (tmp_called_instance_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_univ);
tmp_called_instance_5 = var_univ;
        Py_INCREF(tmp_called_instance_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 578;
tmp_args_element_value_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_Integer);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_called_value_7);

exception_lineno = 578;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 578;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_args_element_value_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);

exception_lineno = 578;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_expression_value_14 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_namedtype);

if (tmp_expression_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_namedtype);
tmp_expression_value_14 = var_namedtype;
        Py_INCREF(tmp_expression_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_NamedType);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 579;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_args_element_value_17 = mod_consts.const_str_plain_prime2;
tmp_called_instance_6 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_univ);

if (tmp_called_instance_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_univ);
tmp_called_instance_6 = var_univ;
        Py_INCREF(tmp_called_instance_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 579;
tmp_args_element_value_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_Integer);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_called_value_8);

exception_lineno = 579;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 579;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_args_element_value_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 579;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_expression_value_15 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_namedtype);

if (tmp_expression_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_namedtype);
tmp_expression_value_15 = var_namedtype;
        Py_INCREF(tmp_expression_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_NamedType);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_16);

exception_lineno = 580;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_args_element_value_20 = mod_consts.const_str_plain_exponent1;
tmp_called_instance_7 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_univ);

if (tmp_called_instance_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_univ);
tmp_called_instance_7 = var_univ;
        Py_INCREF(tmp_called_instance_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 580;
tmp_args_element_value_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_Integer);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_called_value_9);

exception_lineno = 580;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 580;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_args_element_value_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_16);

exception_lineno = 580;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_expression_value_16 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_namedtype);

if (tmp_expression_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_namedtype);
tmp_expression_value_16 = var_namedtype;
        Py_INCREF(tmp_expression_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_NamedType);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 581;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_args_element_value_23 = mod_consts.const_str_plain_exponent2;
tmp_called_instance_8 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_univ);

if (tmp_called_instance_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_univ);
tmp_called_instance_8 = var_univ;
        Py_INCREF(tmp_called_instance_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 581;
tmp_args_element_value_24 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts.const_str_plain_Integer);
CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
if (tmp_args_element_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_called_value_10);

exception_lineno = 581;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 581;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_args_element_value_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 581;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_expression_value_17 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_namedtype);

if (tmp_expression_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_namedtype);
tmp_expression_value_17 = var_namedtype;
        Py_INCREF(tmp_expression_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_NamedType);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_22);

exception_lineno = 582;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_args_element_value_26 = mod_consts.const_str_plain_coefficient;
tmp_called_instance_9 = PyObject_GetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_univ);

if (tmp_called_instance_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
CHECK_OBJECT(var_univ);
tmp_called_instance_9 = var_univ;
        Py_INCREF(tmp_called_instance_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 582;
tmp_args_element_value_27 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts.const_str_plain_Integer);
CHECK_OBJECT(tmp_called_instance_9);
Py_DECREF(tmp_called_instance_9);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_22);
Py_DECREF(tmp_called_value_11);

exception_lineno = 582;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 582;
{
    PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
    tmp_args_element_value_25 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_22);

exception_lineno = 582;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame.f_lineno = 573;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4, tmp_args_element_value_7, tmp_args_element_value_10, tmp_args_element_value_13, tmp_args_element_value_16, tmp_args_element_value_19, tmp_args_element_value_22, tmp_args_element_value_25};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS9(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_2 = "ooo";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain_componentType, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_2 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2,
    type_description_2,
    outline_0_var___class__,
    var_namedtype,
    var_univ
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2 == cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2);
    cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2 = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;
type_description_1 = "oooooo";
goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_5;
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


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_5;
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
tmp_res = PyObject_SetItem(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_AsnPrivKey;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 572;
tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_12;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_11 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_11);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572);
locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572);
locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
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
exception_lineno = 572;
goto try_except_handler_3;
outline_result_2:;
assert(var_AsnPrivKey == NULL);
var_AsnPrivKey = tmp_assign_source_11;
}
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_13;
CHECK_OBJECT(var_AsnPrivKey);
tmp_called_value_13 = var_AsnPrivKey;
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 586;
tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_asn_key == NULL);
var_asn_key = tmp_assign_source_13;
}
{
PyObject *tmp_called_instance_10;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_asn_key);
tmp_called_instance_10 = var_asn_key;
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 587;
tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_10,
    mod_consts.const_str_plain_setComponentByName,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_version_int_0_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_18;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(var_asn_key);
tmp_expression_value_18 = var_asn_key;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_setComponentByName);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_28 = mod_consts.const_str_plain_modulus;
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_n);
if (tmp_args_element_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 588;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 588;
{
    PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_20;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_30;
PyObject *tmp_args_element_value_31;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(var_asn_key);
tmp_expression_value_20 = var_asn_key;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_setComponentByName);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_30 = mod_consts.const_str_plain_publicExponent;
CHECK_OBJECT(par_self);
tmp_expression_value_21 = par_self;
tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_e);
if (tmp_args_element_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 589;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 589;
{
    PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(var_asn_key);
tmp_expression_value_22 = var_asn_key;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_setComponentByName);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_32 = mod_consts.const_str_plain_privateExponent;
CHECK_OBJECT(par_self);
tmp_expression_value_23 = par_self;
tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_d);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 590;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 590;
{
    PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_34;
PyObject *tmp_args_element_value_35;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(var_asn_key);
tmp_expression_value_24 = var_asn_key;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_setComponentByName);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_34 = mod_consts.const_str_plain_prime1;
CHECK_OBJECT(par_self);
tmp_expression_value_25 = par_self;
tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_p);
if (tmp_args_element_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 591;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 591;
{
    PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_35);
Py_DECREF(tmp_args_element_value_35);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_26;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_36;
PyObject *tmp_args_element_value_37;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(var_asn_key);
tmp_expression_value_26 = var_asn_key;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_setComponentByName);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_36 = mod_consts.const_str_plain_prime2;
CHECK_OBJECT(par_self);
tmp_expression_value_27 = par_self;
tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_q);
if (tmp_args_element_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 592;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 592;
{
    PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_37);
Py_DECREF(tmp_args_element_value_37);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_38;
PyObject *tmp_args_element_value_39;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(var_asn_key);
tmp_expression_value_28 = var_asn_key;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_setComponentByName);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_38 = mod_consts.const_str_plain_exponent1;
CHECK_OBJECT(par_self);
tmp_expression_value_29 = par_self;
tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_exp1);
if (tmp_args_element_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);

exception_lineno = 593;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 593;
{
    PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_30;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_40;
PyObject *tmp_args_element_value_41;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(var_asn_key);
tmp_expression_value_30 = var_asn_key;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_setComponentByName);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_40 = mod_consts.const_str_plain_exponent2;
CHECK_OBJECT(par_self);
tmp_expression_value_31 = par_self;
tmp_args_element_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_exp2);
if (tmp_args_element_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 594;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 594;
{
    PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41};
    tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_41);
Py_DECREF(tmp_args_element_value_41);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_32;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_42;
PyObject *tmp_args_element_value_43;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(var_asn_key);
tmp_expression_value_32 = var_asn_key;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_setComponentByName);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 595;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_42 = mod_consts.const_str_plain_coefficient;
CHECK_OBJECT(par_self);
tmp_expression_value_33 = par_self;
tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_coef);
if (tmp_args_element_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_21);

exception_lineno = 595;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 595;
{
    PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43};
    tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
}

CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_43);
Py_DECREF(tmp_args_element_value_43);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 595;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_34;
PyObject *tmp_args_element_value_44;
CHECK_OBJECT(var_encoder);
tmp_expression_value_34 = var_encoder;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_encode);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_asn_key);
tmp_args_element_value_44 = var_asn_key;
frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame.f_lineno = 597;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_44);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__37__save_pkcs1_der, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__37__save_pkcs1_der->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__37__save_pkcs1_der, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__37__save_pkcs1_der,
    type_description_1,
    par_self,
    var_univ,
    var_namedtype,
    var_encoder,
    var_AsnPrivKey,
    var_asn_key
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__37__save_pkcs1_der == cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der);
    cache_frame_frame_rsa$key$$$function__37__save_pkcs1_der = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__37__save_pkcs1_der);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_univ);
CHECK_OBJECT(var_univ);
Py_DECREF(var_univ);
var_univ = NULL;
CHECK_OBJECT(var_namedtype);
CHECK_OBJECT(var_namedtype);
Py_DECREF(var_namedtype);
var_namedtype = NULL;
CHECK_OBJECT(var_encoder);
CHECK_OBJECT(var_encoder);
Py_DECREF(var_encoder);
var_encoder = NULL;
CHECK_OBJECT(var_AsnPrivKey);
CHECK_OBJECT(var_AsnPrivKey);
Py_DECREF(var_AsnPrivKey);
var_AsnPrivKey = NULL;
CHECK_OBJECT(var_asn_key);
CHECK_OBJECT(var_asn_key);
Py_DECREF(var_asn_key);
var_asn_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_univ);
var_univ = NULL;
Py_XDECREF(var_namedtype);
var_namedtype = NULL;
Py_XDECREF(var_encoder);
var_encoder = NULL;
Py_XDECREF(var_AsnPrivKey);
var_AsnPrivKey = NULL;
Py_XDECREF(var_asn_key);
var_asn_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
Py_XDECREF(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572);

CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
Py_XDECREF(locals_rsa$key$$$function__37__save_pkcs1_der$$$class__1_AsnPrivKey_572);

CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__38__load_pkcs1_pem(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_keyfile = python_pars[1];
PyObject *var_der = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__38__load_pkcs1_pem;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__38__load_pkcs1_pem = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__38__load_pkcs1_pem)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__38__load_pkcs1_pem);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__38__load_pkcs1_pem == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__38__load_pkcs1_pem = MAKE_FUNCTION_FRAME(tstate, code_objects_0d0faaabcfd30ab2ac97df8e6366b5a0, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__38__load_pkcs1_pem->m_type_description == NULL);
frame_frame_rsa$key$$$function__38__load_pkcs1_pem = cache_frame_frame_rsa$key$$$function__38__load_pkcs1_pem;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__38__load_pkcs1_pem);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__38__load_pkcs1_pem) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 612;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pem);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_keyfile);
tmp_args_element_value_1 = par_keyfile;
tmp_args_element_value_2 = mod_consts.const_bytes_digest_3f86c5d5ba253ce42a68600892e3f29a;
frame_frame_rsa$key$$$function__38__load_pkcs1_pem->m_frame.f_lineno = 612;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_load_pem,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_der == NULL);
var_der = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_cls);
tmp_called_instance_2 = par_cls;
CHECK_OBJECT(var_der);
tmp_args_element_value_3 = var_der;
frame_frame_rsa$key$$$function__38__load_pkcs1_pem->m_frame.f_lineno = 613;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__load_pkcs1_der, tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 613;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__38__load_pkcs1_pem, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__38__load_pkcs1_pem->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__38__load_pkcs1_pem, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__38__load_pkcs1_pem,
    type_description_1,
    par_cls,
    par_keyfile,
    var_der
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__38__load_pkcs1_pem == cache_frame_frame_rsa$key$$$function__38__load_pkcs1_pem) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__38__load_pkcs1_pem);
    cache_frame_frame_rsa$key$$$function__38__load_pkcs1_pem = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__38__load_pkcs1_pem);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_der);
CHECK_OBJECT(var_der);
Py_DECREF(var_der);
var_der = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_der);
var_der = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__39__save_pkcs1_pem(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_der = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__39__save_pkcs1_pem;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__39__save_pkcs1_pem = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__39__save_pkcs1_pem)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__39__save_pkcs1_pem);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__39__save_pkcs1_pem == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__39__save_pkcs1_pem = MAKE_FUNCTION_FRAME(tstate, code_objects_47753b35833184f87b895ffbb1020341, module_rsa$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__39__save_pkcs1_pem->m_type_description == NULL);
frame_frame_rsa$key$$$function__39__save_pkcs1_pem = cache_frame_frame_rsa$key$$$function__39__save_pkcs1_pem;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__39__save_pkcs1_pem);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__39__save_pkcs1_pem) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_rsa$key$$$function__39__save_pkcs1_pem->m_frame.f_lineno = 622;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__save_pkcs1_der);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_der == NULL);
var_der = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 623;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pem);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 623;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_der);
tmp_args_element_value_1 = var_der;
tmp_args_element_value_2 = mod_consts.const_bytes_digest_3f86c5d5ba253ce42a68600892e3f29a;
frame_frame_rsa$key$$$function__39__save_pkcs1_pem->m_frame.f_lineno = 623;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_save_pem,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 623;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__39__save_pkcs1_pem, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__39__save_pkcs1_pem->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__39__save_pkcs1_pem, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__39__save_pkcs1_pem,
    type_description_1,
    par_self,
    var_der
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__39__save_pkcs1_pem == cache_frame_frame_rsa$key$$$function__39__save_pkcs1_pem) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__39__save_pkcs1_pem);
    cache_frame_frame_rsa$key$$$function__39__save_pkcs1_pem = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__39__save_pkcs1_pem);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_der);
CHECK_OBJECT(var_der);
Py_DECREF(var_der);
var_der = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_der);
var_der = NULL;
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


static PyObject *impl_rsa$key$$$function__40_find_p_q(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_nbits = python_pars[0];
PyObject *par_getprime_func = python_pars[1];
struct Nuitka_CellObject *par_accurate = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *var_total_bits = Nuitka_Cell_NewEmpty();
PyObject *var_shift = NULL;
PyObject *var_pbits = NULL;
PyObject *var_qbits = NULL;
PyObject *var_p = NULL;
PyObject *var_q = NULL;
PyObject *var_is_acceptable = NULL;
nuitka_bool var_change_p = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__40_find_p_q;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__40_find_p_q = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__40_find_p_q)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__40_find_p_q);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__40_find_p_q == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__40_find_p_q = MAKE_FUNCTION_FRAME(tstate, code_objects_5dc6f2238a7ad9f8170d9abf67cae5ba, module_rsa$key, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__40_find_p_q->m_type_description == NULL);
frame_frame_rsa$key$$$function__40_find_p_q = cache_frame_frame_rsa$key$$$function__40_find_p_q;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__40_find_p_q);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__40_find_p_q) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
CHECK_OBJECT(par_nbits);
tmp_mult_expr_left_1 = par_nbits;
tmp_mult_expr_right_1 = mod_consts.const_int_pos_2;
tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_total_bits) == NULL);
Nuitka_Cell_SET(var_total_bits, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
CHECK_OBJECT(par_nbits);
tmp_floordiv_expr_left_1 = par_nbits;
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_16;
tmp_assign_source_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 665;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}
assert(var_shift == NULL);
var_shift = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_nbits);
tmp_add_expr_left_1 = par_nbits;
CHECK_OBJECT(var_shift);
tmp_add_expr_right_1 = var_shift;
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}
assert(var_pbits == NULL);
var_pbits = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(par_nbits);
tmp_sub_expr_left_1 = par_nbits;
CHECK_OBJECT(var_shift);
tmp_sub_expr_right_1 = var_shift;
tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}
assert(var_qbits == NULL);
var_qbits = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_getprime_func);
tmp_called_value_1 = par_getprime_func;
CHECK_OBJECT(var_pbits);
tmp_args_element_value_1 = var_pbits;
frame_frame_rsa$key$$$function__40_find_p_q->m_frame.f_lineno = 670;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}
assert(var_p == NULL);
var_p = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_getprime_func);
tmp_called_value_2 = par_getprime_func;
CHECK_OBJECT(var_qbits);
tmp_args_element_value_2 = var_qbits;
frame_frame_rsa$key$$$function__40_find_p_q->m_frame.f_lineno = 671;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 671;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}
assert(var_q == NULL);
var_q = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_fb8dfe10ba59d3fd99a80323dfcc691c);
tmp_closure_1[0] = par_accurate;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_total_bits;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_7 = MAKE_FUNCTION_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_is_acceptable == NULL);
var_is_acceptable = tmp_assign_source_7;
}
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
var_change_p = tmp_assign_source_8;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (var_is_acceptable == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_acceptable);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 692;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}

tmp_called_value_3 = var_is_acceptable;
if (var_p == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_p);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 692;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = var_p;
if (var_q == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_q);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 692;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = var_q;
frame_frame_rsa$key$$$function__40_find_p_q->m_frame.f_lineno = 692;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "ooccoooooob";
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
goto loop_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
if (var_change_p == NUITKA_BOOL_UNASSIGNED) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_change_p);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 694;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}

tmp_condition_result_2 = var_change_p;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
if (par_getprime_func == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getprime_func);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 695;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}

tmp_called_value_4 = par_getprime_func;
if (var_pbits == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pbits);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 695;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = var_pbits;
frame_frame_rsa$key$$$function__40_find_p_q->m_frame.f_lineno = 695;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 695;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_p;
    var_p = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
if (par_getprime_func == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getprime_func);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 697;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}

tmp_called_value_5 = par_getprime_func;
if (var_qbits == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_qbits);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 697;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = var_qbits;
frame_frame_rsa$key$$$function__40_find_p_q->m_frame.f_lineno = 697;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 697;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_q;
    var_q = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
branch_end_2:;
{
nuitka_bool tmp_assign_source_11;
PyObject *tmp_operand_value_3;
if (var_change_p == NUITKA_BOOL_UNASSIGNED) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_change_p);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 699;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}

tmp_operand_value_3 = (var_change_p == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 699;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_change_p = tmp_assign_source_11;
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_6 != NULL);
if (var_p == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_p);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 703;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = var_p;
if (var_q == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_q);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 703;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = var_q;
frame_frame_rsa$key$$$function__40_find_p_q->m_frame.f_lineno = 703;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 703;
type_description_1 = "ooccoooooob";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_7 != NULL);
if (var_p == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_p);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 703;
type_description_1 = "ooccoooooob";
    goto tuple_build_exception_1;
}

tmp_args_element_value_9 = var_p;
if (var_q == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_q);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 703;
type_description_1 = "ooccoooooob";
    goto tuple_build_exception_1;
}

tmp_args_element_value_10 = var_q;
frame_frame_rsa$key$$$function__40_find_p_q->m_frame.f_lineno = 703;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 703;
type_description_1 = "ooccoooooob";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__40_find_p_q, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__40_find_p_q->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__40_find_p_q, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__40_find_p_q,
    type_description_1,
    par_nbits,
    par_getprime_func,
    par_accurate,
    var_total_bits,
    var_shift,
    var_pbits,
    var_qbits,
    var_p,
    var_q,
    var_is_acceptable,
    (int)var_change_p
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__40_find_p_q == cache_frame_frame_rsa$key$$$function__40_find_p_q) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__40_find_p_q);
    cache_frame_frame_rsa$key$$$function__40_find_p_q = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__40_find_p_q);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_accurate);
CHECK_OBJECT(par_accurate);
Py_DECREF(par_accurate);
par_accurate = NULL;
CHECK_OBJECT(var_total_bits);
CHECK_OBJECT(var_total_bits);
Py_DECREF(var_total_bits);
var_total_bits = NULL;
CHECK_OBJECT(var_shift);
CHECK_OBJECT(var_shift);
Py_DECREF(var_shift);
var_shift = NULL;
Py_XDECREF(var_pbits);
var_pbits = NULL;
Py_XDECREF(var_qbits);
var_qbits = NULL;
Py_XDECREF(var_p);
var_p = NULL;
Py_XDECREF(var_q);
var_q = NULL;
Py_XDECREF(var_is_acceptable);
var_is_acceptable = NULL;
var_change_p = NUITKA_BOOL_UNASSIGNED;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_accurate);
CHECK_OBJECT(par_accurate);
Py_DECREF(par_accurate);
par_accurate = NULL;
CHECK_OBJECT(var_total_bits);
CHECK_OBJECT(var_total_bits);
Py_DECREF(var_total_bits);
var_total_bits = NULL;
Py_XDECREF(var_shift);
var_shift = NULL;
Py_XDECREF(var_pbits);
var_pbits = NULL;
Py_XDECREF(var_qbits);
var_qbits = NULL;
Py_XDECREF(var_p);
var_p = NULL;
Py_XDECREF(var_q);
var_q = NULL;
Py_XDECREF(var_is_acceptable);
var_is_acceptable = NULL;
var_change_p = NUITKA_BOOL_UNASSIGNED;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);
CHECK_OBJECT(par_getprime_func);
Py_DECREF(par_getprime_func);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);
CHECK_OBJECT(par_getprime_func);
Py_DECREF(par_getprime_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_p = python_pars[0];
PyObject *par_q = python_pars[1];
PyObject *var_found_size = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable = MAKE_FUNCTION_FRAME(tstate, code_objects_8b46a1ae6fc561fe23f314874396c11a, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable->m_type_description == NULL);
frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable = cache_frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_p);
tmp_cmp_expr_left_1 = par_p;
CHECK_OBJECT(par_q);
tmp_cmp_expr_right_1 = par_q;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 680;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
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
PyObject *tmp_operand_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_accurate);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 683;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 683;
type_description_1 = "ooocc";
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
tmp_expression_value_2 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 687;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_common);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 687;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_bit_size);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 687;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_p);
tmp_mult_expr_left_1 = par_p;
CHECK_OBJECT(par_q);
tmp_mult_expr_right_1 = par_q;
tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 687;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable->m_frame.f_lineno = 687;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 687;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
assert(var_found_size == NULL);
var_found_size = tmp_assign_source_1;
}
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_total_bits);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 688;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(var_found_size);
tmp_cmp_expr_right_2 = var_found_size;
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "ooocc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable,
    type_description_1,
    par_p,
    par_q,
    var_found_size,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable == cache_frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable);
    cache_frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_found_size);
var_found_size = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_found_size);
var_found_size = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__41_calculate_keys_custom_exponent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_p = python_pars[0];
PyObject *par_q = python_pars[1];
PyObject *par_exponent = python_pars[2];
PyObject *var_phi_n = NULL;
PyObject *var_d = NULL;
PyObject *var_ex = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent = MAKE_FUNCTION_FRAME(tstate, code_objects_e217558f006c765d503fdd585a3486d1, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent->m_type_description == NULL);
frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent = cache_frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
CHECK_OBJECT(par_p);
tmp_sub_expr_left_1 = par_p;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 719;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_q);
tmp_sub_expr_left_2 = par_q;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 719;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 719;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_phi_n == NULL);
var_phi_n = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 722;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_common);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 722;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_exponent);
tmp_args_element_value_1 = par_exponent;
CHECK_OBJECT(var_phi_n);
tmp_args_element_value_2 = var_phi_n;
frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent->m_frame.f_lineno = 722;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_inverse,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 722;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_d == NULL);
var_d = tmp_assign_source_2;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_3 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 723;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_common);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_NotRelativePrimeError);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_3); 
assert(var_ex == NULL);
Py_INCREF(tmp_assign_source_3);
var_ex = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_raise_cause_1;
tmp_expression_value_5 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 724;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_common);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 724;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_NotRelativePrimeError);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 724;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_exponent);
tmp_kw_call_arg_value_0_1 = par_exponent;
CHECK_OBJECT(var_phi_n);
tmp_kw_call_arg_value_1_1 = var_phi_n;
CHECK_OBJECT(var_ex);
tmp_expression_value_6 = var_ex;
tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_d);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 727;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_mod_expr_left_1 = mod_consts.const_str_digest_c199927879c3d545ebc83b67307ef3a0;
CHECK_OBJECT(par_exponent);
tmp_tuple_element_1 = par_exponent;
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_7;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_phi_n);
tmp_tuple_element_1 = var_phi_n;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_ex);
tmp_expression_value_7 = var_ex;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_d);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 729;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kw_call_dict_value_0_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 729;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent->m_frame.f_lineno = 724;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_msg_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 724;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 724;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_ex);
tmp_raise_cause_1 = var_ex;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 730;
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

Py_XDECREF(var_ex);
var_ex = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 721;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent->m_frame)) {
        frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_3;
branch_end_1:;
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
CHECK_OBJECT(par_exponent);
tmp_mult_expr_left_2 = par_exponent;
CHECK_OBJECT(var_d);
tmp_mult_expr_right_2 = var_d;
tmp_mod_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_mod_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 732;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_phi_n);
tmp_mod_expr_right_2 = var_phi_n;
tmp_cmp_expr_left_2 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_left_2);
Py_DECREF(tmp_mod_expr_left_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 732;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 732;
type_description_1 = "oooooo";
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
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_2;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_9427903ebd0cd60ccd54ba7acfb3921b;
CHECK_OBJECT(par_exponent);
tmp_tuple_element_2 = par_exponent;
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_d);
tmp_tuple_element_2 = var_d;
PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_phi_n);
tmp_tuple_element_2 = var_phi_n;
PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 2, tmp_tuple_element_2);
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 734;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent->m_frame.f_lineno = 733;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 733;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent,
    type_description_1,
    par_p,
    par_q,
    par_exponent,
    var_phi_n,
    var_d,
    var_ex
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent == cache_frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent);
    cache_frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__41_calculate_keys_custom_exponent);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(par_exponent);
tmp_tuple_element_3 = par_exponent;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_d);
tmp_tuple_element_3 = var_d;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_phi_n);
CHECK_OBJECT(var_phi_n);
Py_DECREF(var_phi_n);
var_phi_n = NULL;
CHECK_OBJECT(var_d);
CHECK_OBJECT(var_d);
Py_DECREF(var_d);
var_d = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_phi_n);
var_phi_n = NULL;
Py_XDECREF(var_d);
var_d = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
CHECK_OBJECT(par_exponent);
Py_DECREF(par_exponent);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
CHECK_OBJECT(par_exponent);
Py_DECREF(par_exponent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__42_calculate_keys(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_p = python_pars[0];
PyObject *par_q = python_pars[1];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__42_calculate_keys;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__42_calculate_keys = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__42_calculate_keys)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__42_calculate_keys);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__42_calculate_keys == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__42_calculate_keys = MAKE_FUNCTION_FRAME(tstate, code_objects_060cd3cbc11f41d7f085d8041827f9a5, module_rsa$key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__42_calculate_keys->m_type_description == NULL);
frame_frame_rsa$key$$$function__42_calculate_keys = cache_frame_frame_rsa$key$$$function__42_calculate_keys;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__42_calculate_keys);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__42_calculate_keys) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_rsa$key$calculate_keys_custom_exponent(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_calculate_keys_custom_exponent);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 750;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_p);
tmp_args_element_value_1 = par_p;
CHECK_OBJECT(par_q);
tmp_args_element_value_2 = par_q;
tmp_args_element_value_3 = module_var_accessor_rsa$key$DEFAULT_EXPONENT(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_EXPONENT);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 750;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__42_calculate_keys->m_frame.f_lineno = 750;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 750;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__42_calculate_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__42_calculate_keys->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__42_calculate_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__42_calculate_keys,
    type_description_1,
    par_p,
    par_q
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__42_calculate_keys == cache_frame_frame_rsa$key$$$function__42_calculate_keys) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__42_calculate_keys);
    cache_frame_frame_rsa$key$$$function__42_calculate_keys = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__42_calculate_keys);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__43_gen_keys(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_nbits = python_pars[0];
PyObject *par_getprime_func = python_pars[1];
PyObject *par_accurate = python_pars[2];
PyObject *par_exponent = python_pars[3];
PyObject *var_p = NULL;
PyObject *var_q = NULL;
PyObject *var_e = NULL;
PyObject *var_d = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__43_gen_keys;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__43_gen_keys = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__43_gen_keys)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__43_gen_keys);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__43_gen_keys == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__43_gen_keys = MAKE_FUNCTION_FRAME(tstate, code_objects_1e21f312252ecfc9b62a3b08ff5b345d, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__43_gen_keys->m_type_description == NULL);
frame_frame_rsa$key$$$function__43_gen_keys = cache_frame_frame_rsa$key$$$function__43_gen_keys;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__43_gen_keys);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__43_gen_keys) == 2);

// Framed code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_rsa$key$find_p_q(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_find_p_q);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 776;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (par_nbits == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nbits);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 776;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_floordiv_expr_left_1 = par_nbits;
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_args_element_value_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 776;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (par_getprime_func == NULL) {
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getprime_func);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 776;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = par_getprime_func;
if (par_accurate == NULL) {
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_accurate);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 776;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = par_accurate;
frame_frame_rsa$key$$$function__43_gen_keys->m_frame.f_lineno = 776;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 776;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 776;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    Py_XDECREF(old);
}

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



exception_lineno = 776;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 776;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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



exception_lineno = 776;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_p;
    var_p = tmp_assign_source_4;
    Py_INCREF(var_p);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_q;
    var_q = tmp_assign_source_5;
    Py_INCREF(var_q);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_2 = module_var_accessor_rsa$key$calculate_keys_custom_exponent(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_calculate_keys_custom_exponent);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 778;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_p);
tmp_kw_call_arg_value_0_1 = var_p;
CHECK_OBJECT(var_q);
tmp_kw_call_arg_value_1_1 = var_q;
if (par_exponent == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exponent);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 778;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}

tmp_kw_call_dict_value_0_1 = par_exponent;
frame_frame_rsa$key$$$function__43_gen_keys->m_frame.f_lineno = 778;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_exponent_tuple);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 778;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 778;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 778;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
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

goto try_except_handler_5;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_9);
var_e = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
assert(var_d == NULL);
Py_INCREF(tmp_assign_source_10);
var_d = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

goto loop_end_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__43_gen_keys, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__43_gen_keys, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 777;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_rsa$key$$$function__43_gen_keys->m_frame)) {
        frame_frame_rsa$key$$$function__43_gen_keys->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_7;
branch_no_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_6;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 775;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__43_gen_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__43_gen_keys->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__43_gen_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__43_gen_keys,
    type_description_1,
    par_nbits,
    par_getprime_func,
    par_accurate,
    par_exponent,
    var_p,
    var_q,
    var_e,
    var_d
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__43_gen_keys == cache_frame_frame_rsa$key$$$function__43_gen_keys) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__43_gen_keys);
    cache_frame_frame_rsa$key$$$function__43_gen_keys = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__43_gen_keys);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_p);
tmp_tuple_element_1 = var_p;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_q);
tmp_tuple_element_1 = var_q;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_e);
tmp_tuple_element_1 = var_e;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_d);
tmp_tuple_element_1 = var_d;
PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_p);
CHECK_OBJECT(var_p);
Py_DECREF(var_p);
var_p = NULL;
CHECK_OBJECT(var_q);
CHECK_OBJECT(var_q);
Py_DECREF(var_q);
var_q = NULL;
CHECK_OBJECT(var_e);
CHECK_OBJECT(var_e);
Py_DECREF(var_e);
var_e = NULL;
CHECK_OBJECT(var_d);
CHECK_OBJECT(var_d);
Py_DECREF(var_d);
var_d = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_p);
var_p = NULL;
Py_XDECREF(var_q);
var_q = NULL;
Py_XDECREF(var_e);
var_e = NULL;
Py_XDECREF(var_d);
var_d = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);
CHECK_OBJECT(par_getprime_func);
Py_DECREF(par_getprime_func);
CHECK_OBJECT(par_accurate);
Py_DECREF(par_accurate);
CHECK_OBJECT(par_exponent);
Py_DECREF(par_exponent);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);
CHECK_OBJECT(par_getprime_func);
Py_DECREF(par_getprime_func);
CHECK_OBJECT(par_accurate);
Py_DECREF(par_accurate);
CHECK_OBJECT(par_exponent);
Py_DECREF(par_exponent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__44_newkeys(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_nbits = python_pars[0];
PyObject *par_accurate = python_pars[1];
struct Nuitka_CellObject *par_poolsize = Nuitka_Cell_New1(python_pars[2]);
PyObject *par_exponent = python_pars[3];
struct Nuitka_CellObject *var_parallel = Nuitka_Cell_NewEmpty();
PyObject *var_getprime_func = NULL;
PyObject *var_p = NULL;
PyObject *var_q = NULL;
PyObject *var_e = NULL;
PyObject *var_d = NULL;
PyObject *var_n = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__44_newkeys;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__44_newkeys = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__44_newkeys)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__44_newkeys);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__44_newkeys == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__44_newkeys = MAKE_FUNCTION_FRAME(tstate, code_objects_2010e704973119f1391bfcbb2d50f8b8, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__44_newkeys->m_type_description == NULL);
frame_frame_rsa$key$$$function__44_newkeys = cache_frame_frame_rsa$key$$$function__44_newkeys;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__44_newkeys);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__44_newkeys) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_nbits);
tmp_cmp_expr_left_1 = par_nbits;
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_16;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 817;
type_description_1 = "oococoooooo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_be47b3c5a509126ecd463c228c402d3a;
frame_frame_rsa$key$$$function__44_newkeys->m_frame.f_lineno = 818;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 818;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oococoooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(Nuitka_Cell_GET(par_poolsize));
tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_poolsize);
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 820;
type_description_1 = "oococoooooo";
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
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_7d3dbb5e620fc143822200bf9a2b46e1;
CHECK_OBJECT(Nuitka_Cell_GET(par_poolsize));
tmp_mod_expr_right_1 = Nuitka_Cell_GET(par_poolsize);
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 821;
type_description_1 = "oococoooooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$key$$$function__44_newkeys->m_frame.f_lineno = 821;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 821;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oococoooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_poolsize));
tmp_cmp_expr_left_3 = Nuitka_Cell_GET(par_poolsize);
tmp_cmp_expr_right_3 = const_int_pos_1;
tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 824;
type_description_1 = "oococoooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_rsa;
tmp_globals_arg_value_1 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_parallel_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_rsa$key$$$function__44_newkeys->m_frame.f_lineno = 825;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 825;
type_description_1 = "oococoooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_rsa$key,
        mod_consts.const_str_plain_parallel,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_parallel);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 825;
type_description_1 = "oococoooooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_parallel) == NULL);
Nuitka_Cell_SET(var_parallel, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_fd2086467cf46fd6563d3928a895e41a);
tmp_closure_1[0] = var_parallel;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_poolsize;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_2 = MAKE_FUNCTION_rsa$key$$$function__44_newkeys$$$function__1_getprime_func(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_getprime_func == NULL);
var_getprime_func = tmp_assign_source_2;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 831;
type_description_1 = "oococoooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_prime);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 831;
type_description_1 = "oococoooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getprime);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 831;
type_description_1 = "oococoooooo";
    goto frame_exception_exit_1;
}
assert(var_getprime_func == NULL);
var_getprime_func = tmp_assign_source_3;
}
branch_end_3:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_rsa$key$gen_keys(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_gen_keys);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 834;
type_description_1 = "oococoooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_nbits);
tmp_kw_call_arg_value_0_1 = par_nbits;
CHECK_OBJECT(var_getprime_func);
tmp_kw_call_arg_value_1_1 = var_getprime_func;
CHECK_OBJECT(par_accurate);
tmp_kw_call_dict_value_0_1 = par_accurate;
CHECK_OBJECT(par_exponent);
tmp_kw_call_dict_value_1_1 = par_exponent;
frame_frame_rsa$key$$$function__44_newkeys->m_frame.f_lineno = 834;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_accurate_str_plain_exponent_tuple);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 834;
type_description_1 = "oococoooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 834;
type_description_1 = "oococoooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 834;
type_description_1 = "oococoooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 834;
type_description_1 = "oococoooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 834;
type_description_1 = "oococoooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 834;
type_description_1 = "oococoooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_8;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 834;
type_description_1 = "oococoooooo";
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
assert(var_p == NULL);
Py_INCREF(tmp_assign_source_9);
var_p = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
assert(var_q == NULL);
Py_INCREF(tmp_assign_source_10);
var_q = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_11);
var_e = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_4;
assert(var_d == NULL);
Py_INCREF(tmp_assign_source_12);
var_d = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assign_source_13;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
CHECK_OBJECT(var_p);
tmp_mult_expr_left_1 = var_p;
CHECK_OBJECT(var_q);
tmp_mult_expr_right_1 = var_q;
tmp_assign_source_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 837;
type_description_1 = "oococoooooo";
    goto frame_exception_exit_1;
}
assert(var_n == NULL);
var_n = tmp_assign_source_13;
}
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_rsa$key$PublicKey(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PublicKey);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 839;
type_description_1 = "oococoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_n);
tmp_args_element_value_1 = var_n;
CHECK_OBJECT(var_e);
tmp_args_element_value_2 = var_e;
frame_frame_rsa$key$$$function__44_newkeys->m_frame.f_lineno = 839;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 839;
type_description_1 = "oococoooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
tmp_called_value_3 = module_var_accessor_rsa$key$PrivateKey(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PrivateKey);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 839;
type_description_1 = "oococoooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_n);
tmp_args_element_value_3 = var_n;
CHECK_OBJECT(var_e);
tmp_args_element_value_4 = var_e;
CHECK_OBJECT(var_d);
tmp_args_element_value_5 = var_d;
CHECK_OBJECT(var_p);
tmp_args_element_value_6 = var_p;
CHECK_OBJECT(var_q);
tmp_args_element_value_7 = var_q;
frame_frame_rsa$key$$$function__44_newkeys->m_frame.f_lineno = 839;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_3, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 839;
type_description_1 = "oococoooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__44_newkeys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__44_newkeys->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__44_newkeys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__44_newkeys,
    type_description_1,
    par_nbits,
    par_accurate,
    par_poolsize,
    par_exponent,
    var_parallel,
    var_getprime_func,
    var_p,
    var_q,
    var_e,
    var_d,
    var_n
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__44_newkeys == cache_frame_frame_rsa$key$$$function__44_newkeys) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__44_newkeys);
    cache_frame_frame_rsa$key$$$function__44_newkeys = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__44_newkeys);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_poolsize);
CHECK_OBJECT(par_poolsize);
Py_DECREF(par_poolsize);
par_poolsize = NULL;
CHECK_OBJECT(var_parallel);
CHECK_OBJECT(var_parallel);
Py_DECREF(var_parallel);
var_parallel = NULL;
CHECK_OBJECT(var_getprime_func);
CHECK_OBJECT(var_getprime_func);
Py_DECREF(var_getprime_func);
var_getprime_func = NULL;
CHECK_OBJECT(var_p);
CHECK_OBJECT(var_p);
Py_DECREF(var_p);
var_p = NULL;
CHECK_OBJECT(var_q);
CHECK_OBJECT(var_q);
Py_DECREF(var_q);
var_q = NULL;
CHECK_OBJECT(var_e);
CHECK_OBJECT(var_e);
Py_DECREF(var_e);
var_e = NULL;
CHECK_OBJECT(var_d);
CHECK_OBJECT(var_d);
Py_DECREF(var_d);
var_d = NULL;
CHECK_OBJECT(var_n);
CHECK_OBJECT(var_n);
Py_DECREF(var_n);
var_n = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_poolsize);
CHECK_OBJECT(par_poolsize);
Py_DECREF(par_poolsize);
par_poolsize = NULL;
CHECK_OBJECT(var_parallel);
CHECK_OBJECT(var_parallel);
Py_DECREF(var_parallel);
var_parallel = NULL;
Py_XDECREF(var_getprime_func);
var_getprime_func = NULL;
Py_XDECREF(var_p);
var_p = NULL;
Py_XDECREF(var_q);
var_q = NULL;
Py_XDECREF(var_e);
var_e = NULL;
Py_XDECREF(var_d);
var_d = NULL;
Py_XDECREF(var_n);
var_n = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);
CHECK_OBJECT(par_accurate);
Py_DECREF(par_accurate);
CHECK_OBJECT(par_exponent);
Py_DECREF(par_exponent);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);
CHECK_OBJECT(par_accurate);
Py_DECREF(par_accurate);
CHECK_OBJECT(par_exponent);
Py_DECREF(par_exponent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$key$$$function__44_newkeys$$$function__1_getprime_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_nbits = python_pars[0];
struct Nuitka_FrameObject *frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func)) {
    Py_XDECREF(cache_frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func = MAKE_FUNCTION_FRAME(tstate, code_objects_974384b9832fccbc2b3da0fe2dede1cc, module_rsa$key, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func->m_type_description == NULL);
frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func = cache_frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func);
assert(Py_REFCNT(frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parallel);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 828;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getprime);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 828;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_nbits);
tmp_kw_call_arg_value_0_1 = par_nbits;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_poolsize);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 828;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(self->m_closure[1]);
frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func->m_frame.f_lineno = 828;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_poolsize_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 828;
type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func,
    type_description_1,
    par_nbits,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func == cache_frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func);
    cache_frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func = NULL;
}

assertFrameObject(frame_frame_rsa$key$$$function__44_newkeys$$$function__1_getprime_func);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__10_unblind(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__10_unblind,
        mod_consts.const_str_plain_unblind,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7320fdfc994b4d5ab9e9f72c6c68ff92,
#endif
        code_objects_552ec48dee4ca666c1dc807c2b5f2d5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_4d4b7d21bb9895c244fc363727beaf4d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__11__initial_blinding_factor(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__11__initial_blinding_factor,
        mod_consts.const_str_plain__initial_blinding_factor,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d707a9e106af3ad05cea69442cb940e8,
#endif
        code_objects_e7d735f576ea462f00cf9e6157786b97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__12__update_blinding_factor(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__12__update_blinding_factor,
        mod_consts.const_str_plain__update_blinding_factor,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b1f8bb54ea5698940c57c7f8f7e6dfed,
#endif
        code_objects_efc0039cf184e6138b17fce6655d2fea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_9fc5ff966ee71fc33eee35510b503454,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__13___getitem__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__13___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_788e78a79180ccea6575e617c897fd8f,
#endif
        code_objects_7c02497326c3c4361a6a871fa809042f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__14___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__14___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f7c32e160e42ecb4a5200086b2fedd24,
#endif
        code_objects_8ef885e33ad9291692dd4e1e6aef8096,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__15___getstate__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__15___getstate__,
        mod_consts.const_str_plain___getstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f9dc88143493349044fd547a61245d13,
#endif
        code_objects_25040ac17f5ffe393848f937d57d18a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_81589d204f2ae95bda7a9090a065db9d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__16___setstate__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__16___setstate__,
        mod_consts.const_str_plain___setstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ead507bd7d6628bf938033126d244957,
#endif
        code_objects_ecf2e4ffcd02d73f15578ed37c5fdd0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_267b4de278f37af325164d1452ad8637,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__17___eq__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__17___eq__,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_65146ee0b2d84171edf4b5b67f1d15f3,
#endif
        code_objects_e01765f27dc9e727d31006ae97045e5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__18___ne__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__18___ne__,
        mod_consts.const_str_plain___ne__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dc579632862d701d665e93bf67210a4b,
#endif
        code_objects_7abad493e0ea21b5b6003771dadde120,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__19___hash__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__19___hash__,
        mod_consts.const_str_plain___hash__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1114786e42f696199e368259decb22b1,
#endif
        code_objects_06206b0ba50f7e7cc7142a7f879be706,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0af4566ea455811e8cf5f663fde3c850,
#endif
        code_objects_35f4c4c4a212c25eb4592dbbe425f7e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__20__load_pkcs1_der(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__20__load_pkcs1_der,
        mod_consts.const_str_plain__load_pkcs1_der,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1cc93e65e22c78f03cca086916f430ab,
#endif
        code_objects_3fbe3b39382e4a73ba3b47b3875f810f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_1476cc7a74e677de4afa64b096ef23e8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__21__save_pkcs1_der(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__21__save_pkcs1_der,
        mod_consts.const_str_plain__save_pkcs1_der,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fc827f874680f624d9d2a0fa54fff39e,
#endif
        code_objects_8b7139d5fc50f81abf95811d3196871f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_0bd3ca995fe4e0ebe5c09af8bc12f1db,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__22__load_pkcs1_pem(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__22__load_pkcs1_pem,
        mod_consts.const_str_plain__load_pkcs1_pem,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4bf8426ab46c24172e742c4d04234580,
#endif
        code_objects_493557ef213273cfde0f0d78ca76e8cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_70995f91f074be082e61baba95152a48,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__23__save_pkcs1_pem(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__23__save_pkcs1_pem,
        mod_consts.const_str_plain__save_pkcs1_pem,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2334096e2b7358b302ca8d79b47b76a7,
#endif
        code_objects_2ecf10cbe2e78f6807f920e2493f29cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_b304437056564c48cf06dece8b23e6c1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__24_load_pkcs1_openssl_pem(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__24_load_pkcs1_openssl_pem,
        mod_consts.const_str_plain_load_pkcs1_openssl_pem,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f2ebaddc1d19cefba7ffc1cfaf2443a1,
#endif
        code_objects_7388574ea28964c77ebf7425c3985951,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_964a429a0af53bcdac0f8615e0a0b370,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__25_load_pkcs1_openssl_der(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__25_load_pkcs1_openssl_der,
        mod_consts.const_str_plain_load_pkcs1_openssl_der,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5f3be474dcf26c1632330e35d03f802b,
#endif
        code_objects_d7cb842c2b66ae1c69bd89cb2ad49aba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_2e148f1423142d095744c24dfceae71c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__26___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__26___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9c8af091b131dc331e3e9905764ff652,
#endif
        code_objects_8120428ca8f37c5048451987d0d14fb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__27___getitem__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__27___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fb534ab14d65ba2103c020178e5a4f5f,
#endif
        code_objects_a6654579fdb6df88f3fab8d09e2b8cf7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__28___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__28___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_628860bfa6478f39126a1df96e095733,
#endif
        code_objects_3e0716ebe54c355916f17a1ee1bb9c15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__29___getstate__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__29___getstate__,
        mod_consts.const_str_plain___getstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aad7a899961b1338b939717f879e9b68,
#endif
        code_objects_c8dee5f237fe64cb04f49ea3434100ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_81589d204f2ae95bda7a9090a065db9d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__2__load_pkcs1_pem(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__load_pkcs1_pem,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6b1ae95778c61af1f5419983522fae05,
#endif
        code_objects_7e140781b3eeb3300583aabdb14bcddf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_c29a6edfce6ca52793b046e08349ae0c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__30___setstate__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__30___setstate__,
        mod_consts.const_str_plain___setstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c2b0a4987aa4e560bb2ec061e599dccc,
#endif
        code_objects_f733c099cadad913175e7ea3a0f34ba5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_267b4de278f37af325164d1452ad8637,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__31___eq__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__31___eq__,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bc8554abbafdddb346ab90ac39866a6b,
#endif
        code_objects_0836c59f9d2b7e27e61fe8fde56722ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__32___ne__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__32___ne__,
        mod_consts.const_str_plain___ne__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_902528698a8a7df5fde3dac02a105065,
#endif
        code_objects_e56f7011058a9da6e63a2eecd0d91c6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__33___hash__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__33___hash__,
        mod_consts.const_str_plain___hash__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e297d6f3b9b877ce2930115052614d96,
#endif
        code_objects_3419e5c10744f0d6e3fea8c4f5598275,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__34_blinded_decrypt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__34_blinded_decrypt,
        mod_consts.const_str_plain_blinded_decrypt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ad71f12457c5dc1b5c5834a710685c4a,
#endif
        code_objects_2d24b91bdf637ee26d3f1042f8020d1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_92dc2dd8f4403187ad6e541985d32d2f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__35_blinded_encrypt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__35_blinded_encrypt,
        mod_consts.const_str_plain_blinded_encrypt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b2559746321d70b8eabf5391bf93073a,
#endif
        code_objects_051e052a4d7aa16888effd5eb7165546,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_ee8b65f1548fbb314335fc5dea3fb47e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__36__load_pkcs1_der(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__36__load_pkcs1_der,
        mod_consts.const_str_plain__load_pkcs1_der,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7a68b03843188d7afdfbddb1ec688c22,
#endif
        code_objects_8c475aa0da1346370dbb8c0026ec1681,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_54f59b9b4cc7d3576652cdf800eb8e59,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__37__save_pkcs1_der(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__37__save_pkcs1_der,
        mod_consts.const_str_plain__save_pkcs1_der,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6fe12da162a4aee24a23c2ff39f851e0,
#endif
        code_objects_42f71baef190a53d2f04b2bafdb6f832,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_3a3537a9a69c240f5bf406d9ece7a9ac,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__38__load_pkcs1_pem(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__38__load_pkcs1_pem,
        mod_consts.const_str_plain__load_pkcs1_pem,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aeff62fd6e9b0332a7dee1ba24e0f138,
#endif
        code_objects_0d0faaabcfd30ab2ac97df8e6366b5a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_a811fa673c748cc8d1dfab0dc917a52d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__39__save_pkcs1_pem(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__39__save_pkcs1_pem,
        mod_consts.const_str_plain__save_pkcs1_pem,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e087db1fee359dd9c0122cc127fd1139,
#endif
        code_objects_47753b35833184f87b895ffbb1020341,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_be7937cb3830227c4fcdcd6c6bc680ed,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__3__load_pkcs1_der(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__load_pkcs1_der,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_88f1dd72b66b5812fbe508aa4161a4be,
#endif
        code_objects_db62568525c619aeeea1ff9e53684730,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_58308eeaac42ed7b11392259e5110712,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__40_find_p_q(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__40_find_p_q,
        mod_consts.const_str_plain_find_p_q,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5dc6f2238a7ad9f8170d9abf67cae5ba,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_824819913e36f317ca76393644bfbbb5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable,
        mod_consts.const_str_plain_is_acceptable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f1129e914249e8fbd86b412137832989,
#endif
        code_objects_8b46a1ae6fc561fe23f314874396c11a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_12f2c28c337a7ad8065dd2daa74cae71,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__41_calculate_keys_custom_exponent(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__41_calculate_keys_custom_exponent,
        mod_consts.const_str_plain_calculate_keys_custom_exponent,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e217558f006c765d503fdd585a3486d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_d50e8996bc1a70ca7e8f369e71291f7c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__42_calculate_keys(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__42_calculate_keys,
        mod_consts.const_str_plain_calculate_keys,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_060cd3cbc11f41d7f085d8041827f9a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_aa56ab6f4e00ea7362417c585e13c6bc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__43_gen_keys(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__43_gen_keys,
        mod_consts.const_str_plain_gen_keys,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1e21f312252ecfc9b62a3b08ff5b345d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_d1dae56868f7653d5acff0ff0d8039d0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__44_newkeys(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__44_newkeys,
        mod_consts.const_str_plain_newkeys,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2010e704973119f1391bfcbb2d50f8b8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_68b2ea0f0a1ad640a790ae22d4be15b9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__44_newkeys$$$function__1_getprime_func(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__44_newkeys$$$function__1_getprime_func,
        mod_consts.const_str_plain_getprime_func,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b597751dda24a6e86174ea44a92f9135,
#endif
        code_objects_974384b9832fccbc2b3da0fe2dede1cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__4__save_pkcs1_pem(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__save_pkcs1_pem,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0962a34b1ab5daf34a0fcfb11f559562,
#endif
        code_objects_9868c40d36d45b0deee364ef2e817686,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_5ac826f1a015ee54d52a37f1f6c59b05,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__5__save_pkcs1_der(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__save_pkcs1_der,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d20d5d2dc49b0058eacff1c10c50ac30,
#endif
        code_objects_70e474cadf2cadfdee94ca34497586b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_65f1229dec1a485482a4f1f3aa1ebe90,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__6_load_pkcs1(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__6_load_pkcs1,
        mod_consts.const_str_plain_load_pkcs1,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_67ecd0641a7eb0f9336861afb3fa4da6,
#endif
        code_objects_4b2f965cb133599bfc0c5e4867d85974,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_216adff1f1dd33126c55bdc55e6667b3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__7__assert_format_exists(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__7__assert_format_exists,
        mod_consts.const_str_plain__assert_format_exists,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b52627a97ca4f4890b874d143a1a57d8,
#endif
        code_objects_8cb14ba7910db9ce84c3e1f8aa1d6803,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_3a72a7da5c557593dcc019970b08a602,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__8_save_pkcs1(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__8_save_pkcs1,
        mod_consts.const_str_plain_save_pkcs1,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9ce75b515507cb6e25d039a3f2e1c035,
#endif
        code_objects_9c58de7d8a88f02827df0ffac9a259a1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_f82a96d820fd84048156cc822d9ffa01,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$key$$$function__9_blind(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$key$$$function__9_blind,
        mod_consts.const_str_plain_blind,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cb64d8eeb18b619d72982a0c7894f3c5,
#endif
        code_objects_d1d2058da903e35ce24195ab74b33c91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$key,
        mod_consts.const_str_digest_df7ea500c05d398e3d84c92b2d0507cc,
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

static function_impl_code const function_table_rsa$key[] = {
impl_rsa$key$$$function__40_find_p_q$$$function__1_is_acceptable,
impl_rsa$key$$$function__44_newkeys$$$function__1_getprime_func,
impl_rsa$key$$$function__1___init__,
impl_rsa$key$$$function__6_load_pkcs1,
impl_rsa$key$$$function__7__assert_format_exists,
impl_rsa$key$$$function__8_save_pkcs1,
impl_rsa$key$$$function__9_blind,
impl_rsa$key$$$function__10_unblind,
impl_rsa$key$$$function__11__initial_blinding_factor,
impl_rsa$key$$$function__12__update_blinding_factor,
impl_rsa$key$$$function__13___getitem__,
impl_rsa$key$$$function__14___repr__,
impl_rsa$key$$$function__15___getstate__,
impl_rsa$key$$$function__16___setstate__,
impl_rsa$key$$$function__17___eq__,
impl_rsa$key$$$function__18___ne__,
impl_rsa$key$$$function__19___hash__,
impl_rsa$key$$$function__20__load_pkcs1_der,
impl_rsa$key$$$function__21__save_pkcs1_der,
impl_rsa$key$$$function__22__load_pkcs1_pem,
impl_rsa$key$$$function__23__save_pkcs1_pem,
impl_rsa$key$$$function__24_load_pkcs1_openssl_pem,
impl_rsa$key$$$function__25_load_pkcs1_openssl_der,
impl_rsa$key$$$function__26___init__,
impl_rsa$key$$$function__27___getitem__,
impl_rsa$key$$$function__28___repr__,
impl_rsa$key$$$function__29___getstate__,
impl_rsa$key$$$function__30___setstate__,
impl_rsa$key$$$function__31___eq__,
impl_rsa$key$$$function__32___ne__,
impl_rsa$key$$$function__33___hash__,
impl_rsa$key$$$function__34_blinded_decrypt,
impl_rsa$key$$$function__35_blinded_encrypt,
impl_rsa$key$$$function__36__load_pkcs1_der,
impl_rsa$key$$$function__37__save_pkcs1_der,
impl_rsa$key$$$function__38__load_pkcs1_pem,
impl_rsa$key$$$function__39__save_pkcs1_pem,
impl_rsa$key$$$function__40_find_p_q,
impl_rsa$key$$$function__41_calculate_keys_custom_exponent,
impl_rsa$key$$$function__42_calculate_keys,
impl_rsa$key$$$function__43_gen_keys,
impl_rsa$key$$$function__44_newkeys,
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

    return Nuitka_Function_GetFunctionState(function, function_table_rsa$key);
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
        module_rsa$key,
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
        function_table_rsa$key,
        sizeof(function_table_rsa$key) / sizeof(function_impl_code)
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
static char const *module_full_name = "rsa.key";
#endif

// Internal entry point for module code.
PyObject *module_code_rsa$key(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("rsa$key");

    // Store the module for future use.
    module_rsa$key = module;

    moduledict_rsa$key = MODULE_DICT(module_rsa$key);

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
        PRINT_STRING("rsa$key: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("rsa$key: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("rsa$key: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "rsa.key" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrsa$key\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_rsa$key,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_rsa$key,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_rsa$key,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_rsa$key,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_rsa$key,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_rsa$key);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_rsa$key);
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

        UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
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
struct Nuitka_FrameObject *frame_frame_rsa$key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_rsa$key$$$class__1_AbstractKey_51 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$class__1_AbstractKey_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_rsa$key$$$class__2_PublicKey_218 = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$class__2_PublicKey_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_rsa$key$$$class__3_PrivateKey_383 = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$key$$$class__3_PrivateKey_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_ed6904958c06a3e690b26dbd59fb2dd0;
UPDATE_STRING_DICT0(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_rsa$key = MAKE_MODULE_FRAME(code_objects_8cd002cfb163a340c38b482105899b36, module_rsa$key);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key);
assert(Py_REFCNT(frame_frame_rsa$key) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_rsa$key$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_rsa$key$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_1 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_rsa$key->m_frame.f_lineno = 34;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_2 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_rsa$key->m_frame.f_lineno = 36;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_eae335f7395ee2b175bb07ef24fa2bea;
tmp_globals_arg_value_3 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_rsa$key->m_frame.f_lineno = 38;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_10b4a05c1efbc618d78f50cb7defbe0f;
tmp_globals_arg_value_4 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_rsa$key->m_frame.f_lineno = 39;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_6b3d394b801be02bbc23994592501dc9;
tmp_globals_arg_value_5 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_rsa$key->m_frame.f_lineno = 40;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_38ae76d41c37a561fb493fd3359762a3;
tmp_globals_arg_value_6 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_rsa$key->m_frame.f_lineno = 41;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_a899a62361d9cc42adab5d09beed3c11;
tmp_globals_arg_value_7 = (PyObject *)moduledict_rsa$key;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = Py_None;
tmp_level_value_7 = const_int_0;
frame_frame_rsa$key->m_frame.f_lineno = 42;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_int_pos_65537;
UPDATE_STRING_DICT0(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_EXPONENT, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_TypeVar);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
frame_frame_rsa$key->m_frame.f_lineno = 48;
tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_T_str_plain_AbstractKey_tuple, 0), mod_consts.const_tuple_str_plain_bound_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_T, tmp_assign_source_13);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_rsa$key$$$class__1_AbstractKey_51 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_d87a867a1da18e127aa595b45709adf5;
tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_cbe60233bd45d5e5e6afb0482cb3b14f;
tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AbstractKey;
tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_51;
tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_d0e5b58e7bb5fe02e0dc4b4c65712de4_tuple;
tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain___slots__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_31f6dae38776b224a68e146b788e9d46);

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_rsa$key$$$class__1_AbstractKey_2 = MAKE_CLASS_FRAME(tstate, code_objects_4100265b08857847a987cc128d6edf30, module_rsa$key, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$class__1_AbstractKey_2);
assert(Py_REFCNT(frame_frame_rsa$key$$$class__1_AbstractKey_2) == 2);

// Framed code:
{
PyObject *tmp_classmethod_arg_1;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_cls;
tmp_expression_value_3 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Type);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_1 = module_var_accessor_rsa$key$T(tstate);
assert(!(tmp_subscript_value_1 == NULL));
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_2 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_keyfile;
tmp_dict_value_1 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = module_var_accessor_rsa$key$T(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_classmethod_arg_1 = MAKE_FUNCTION_rsa$key$$$function__2__load_pkcs1_pem(tstate, tmp_annotations_2);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
CHECK_OBJECT(tmp_classmethod_arg_1);
Py_DECREF(tmp_classmethod_arg_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain__load_pkcs1_pem, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_classmethod_arg_2;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_cls;
tmp_expression_value_5 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_5 == NULL));
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Type);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_2 = module_var_accessor_rsa$key$T(tstate);
if (unlikely(tmp_subscript_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_subscript_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_4);

exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_3 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_keyfile;
tmp_dict_value_2 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = module_var_accessor_rsa$key$T(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_classmethod_arg_2 = MAKE_FUNCTION_rsa$key$$$function__3__load_pkcs1_der(tstate, tmp_annotations_3);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_2);
CHECK_OBJECT(tmp_classmethod_arg_2);
Py_DECREF(tmp_classmethod_arg_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain__load_pkcs1_der, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_86ee5f6d233d9d8a00243cd68c2d9335);

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__4__save_pkcs1_pem(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain__save_pkcs1_pem, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_86ee5f6d233d9d8a00243cd68c2d9335);

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__5__save_pkcs1_der(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain__save_pkcs1_der, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_classmethod_arg_3;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
tmp_defaults_1 = mod_consts.const_tuple_str_plain_PEM_tuple;
tmp_dict_key_3 = mod_consts.const_str_plain_cls;
tmp_expression_value_7 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_7 == NULL));
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Type);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_3 = module_var_accessor_rsa$key$T(tstate);
if (unlikely(tmp_subscript_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_subscript_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_6);

exception_lineno = 106;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_6 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_keyfile;
tmp_dict_value_3 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = const_str_plain_format;
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = module_var_accessor_rsa$key$T(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_annotations_6);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
Py_INCREF(tmp_defaults_1);

tmp_classmethod_arg_3 = MAKE_FUNCTION_rsa$key$$$function__6_load_pkcs1(tstate, tmp_defaults_1, tmp_annotations_6);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_3);
CHECK_OBJECT(tmp_classmethod_arg_3);
Py_DECREF(tmp_classmethod_arg_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain_load_pkcs1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_staticmethod_arg_1;
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_file_format;
tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
tmp_annotations_7 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_11;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_methods;
tmp_expression_value_9 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_9 == NULL));
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Mapping);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_1);
tmp_expression_value_10 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_10 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_Callable);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_8);
Py_DECREF(tmp_subscript_value_4);
goto dict_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_expression_value_11 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_11 == NULL));
tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_Callable);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_annotations_7);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;

tmp_staticmethod_arg_1 = MAKE_FUNCTION_rsa$key$$$function__7__assert_format_exists(tstate, tmp_annotations_7);

tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_1);
CHECK_OBJECT(tmp_staticmethod_arg_1);
Py_DECREF(tmp_staticmethod_arg_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain__assert_format_exists, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_8;
tmp_defaults_2 = mod_consts.const_tuple_str_plain_PEM_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_2559ec3d086fdea2c91670f6dab68503);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__8_save_pkcs1(tstate, tmp_defaults_2, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain_save_pkcs1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_9;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
tmp_dict_key_5 = mod_consts.const_str_plain_message;
tmp_dict_value_5 = (PyObject *)&PyLong_Type;
tmp_annotations_9 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_5;
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_expression_value_13 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_13 == NULL));
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_subscript_value_5 = mod_consts.const_tuple_type_int_type_int_tuple;
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_annotations_9);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__9_blind(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain_blind, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_c53dff916d1fc501fd4b641465b076a8);

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__10_unblind(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain_unblind, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_1259841a0de68bdf7d5f55bbd030b617);

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__11__initial_blinding_factor(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain__initial_blinding_factor, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_12;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_6;
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_expression_value_15 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_15 == NULL));
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_6 = mod_consts.const_tuple_type_int_type_int_tuple;
tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_12 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__12__update_blinding_factor(tstate, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain__update_blinding_factor, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$class__1_AbstractKey_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$class__1_AbstractKey_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$class__1_AbstractKey_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$class__1_AbstractKey_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_rsa$key$$$class__1_AbstractKey_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_d0e5b58e7bb5fe02e0dc4b4c65712de4_tuple;
tmp_result = DICT_SET_ITEM(locals_rsa$key$$$class__1_AbstractKey_51, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = (PyObject *)&PyType_Type;
tmp_tuple_element_2 = mod_consts.const_str_plain_AbstractKey;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_rsa$key$$$class__1_AbstractKey_51;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_rsa$key->m_frame.f_lineno = 51;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_17;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_16 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_16);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_rsa$key$$$class__1_AbstractKey_51);
locals_rsa$key$$$class__1_AbstractKey_51 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_rsa$key$$$class__1_AbstractKey_51);
locals_rsa$key$$$class__1_AbstractKey_51 = NULL;
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
exception_lineno = 51;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractKey, tmp_assign_source_16);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_rsa$key$AbstractKey(tstate);
assert(!(tmp_tuple_element_3 == NULL));
tmp_assign_source_18 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_19 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_4;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_16 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_7, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_21 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_21;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

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
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_4;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_PublicKey;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_rsa$key->m_frame.f_lineno = 218;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_22;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_19 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_20, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_4;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_21 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_4;
}
frame_frame_rsa$key->m_frame.f_lineno = 218;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 218;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_23;
}
branch_end_1:;
{
PyObject *tmp_assign_source_24;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_rsa$key$$$class__2_PublicKey_218 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_d87a867a1da18e127aa595b45709adf5;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_593257a4ae45b1e1dc0247d4af3ec9c0;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_PublicKey;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_218;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_6;
}
frame_frame_rsa$key$$$class__2_PublicKey_3 = MAKE_CLASS_FRAME(tstate, code_objects_2f21279f6264b1096f20c9e4e02f4801, module_rsa$key, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$class__2_PublicKey_3);
assert(Py_REFCNT(frame_frame_rsa$key$$$class__2_PublicKey_3) == 2);

// Framed code:
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_annotations_13;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
tmp_dict_key_7 = mod_consts.const_str_plain_key;
tmp_dict_value_7 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain_str);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_13 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_dict_value_7 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_int);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__13___getitem__(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_14;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
tmp_dict_key_8 = mod_consts.const_str_plain_return;
tmp_dict_value_8 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain_str);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_14 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__14___repr__(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_15;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_8;
PyObject *tmp_tuple_element_6;
tmp_dict_key_9 = mod_consts.const_str_plain_return;
tmp_expression_value_23 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_23 == NULL));
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_tuple_element_6 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_int);

if (tmp_tuple_element_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_6 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_int);

if (tmp_tuple_element_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_6 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_6);
tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_dict_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_15 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__15___getstate__(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain___getstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_16;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_9;
PyObject *tmp_tuple_element_7;
tmp_dict_key_10 = mod_consts.const_str_plain_state;
tmp_expression_value_25 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_25 == NULL));
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_tuple_element_7 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_int);

if (tmp_tuple_element_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_7 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_9, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_int);

if (tmp_tuple_element_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_7 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_7);
tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_dict_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_16 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_return;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__16___setstate__(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain___setstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_17;
PyObject *tmp_dict_key_11;
PyObject *tmp_dict_value_11;
PyObject *tmp_expression_value_26;
tmp_dict_key_11 = mod_consts.const_str_plain_other;
tmp_expression_value_26 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_26 == NULL));
tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_Any);
if (tmp_dict_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_17 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_return;
tmp_dict_value_11 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain_bool);

if (tmp_dict_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_11 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__17___eq__(tstate, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_18;
PyObject *tmp_dict_key_12;
PyObject *tmp_dict_value_12;
PyObject *tmp_expression_value_27;
tmp_dict_key_12 = mod_consts.const_str_plain_other;
tmp_expression_value_27 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_27 == NULL));
tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_Any);
if (tmp_dict_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_18 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_return;
tmp_dict_value_12 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain_bool);

if (tmp_dict_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_12 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__18___ne__(tstate, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain___ne__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_19;
PyObject *tmp_dict_key_13;
PyObject *tmp_dict_value_13;
tmp_dict_key_13 = mod_consts.const_str_plain_return;
tmp_dict_value_13 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_int);

if (tmp_dict_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_13 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_19 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__19___hash__(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain___hash__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_20;
PyObject *tmp_dict_key_14;
PyObject *tmp_dict_value_14;
tmp_called_value_4 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_classmethod);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_dict_key_14 = mod_consts.const_str_plain_keyfile;
tmp_dict_value_14 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_bytes);

if (tmp_dict_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_14 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_dict_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_20 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_14, tmp_dict_value_14);
Py_DECREF(tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_return;
tmp_dict_value_14 = mod_consts.const_str_plain_PublicKey;
tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_14, tmp_dict_value_14);
assert(!(tmp_res != 0));

tmp_args_element_value_1 = MAKE_FUNCTION_rsa$key$$$function__20__load_pkcs1_der(tstate, tmp_annotations_20);

frame_frame_rsa$key$$$class__2_PublicKey_3->m_frame.f_lineno = 274;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain__load_pkcs1_der, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_21;
PyObject *tmp_dict_key_15;
PyObject *tmp_dict_value_15;
tmp_dict_key_15 = mod_consts.const_str_plain_return;
tmp_dict_value_15 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_bytes);

if (tmp_dict_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_15 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_dict_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_21 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_15, tmp_dict_value_15);
Py_DECREF(tmp_dict_value_15);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__21__save_pkcs1_der(tstate, tmp_annotations_21);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain__save_pkcs1_der, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_22;
PyObject *tmp_dict_key_16;
PyObject *tmp_dict_value_16;
tmp_called_value_5 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_classmethod);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_dict_key_16 = mod_consts.const_str_plain_keyfile;
tmp_dict_value_16 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_bytes);

if (tmp_dict_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_16 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_dict_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_22 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_16, tmp_dict_value_16);
Py_DECREF(tmp_dict_value_16);
assert(!(tmp_res != 0));
tmp_dict_key_16 = mod_consts.const_str_plain_return;
tmp_dict_value_16 = mod_consts.const_str_plain_PublicKey;
tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_16, tmp_dict_value_16);
assert(!(tmp_res != 0));

tmp_args_element_value_2 = MAKE_FUNCTION_rsa$key$$$function__22__load_pkcs1_pem(tstate, tmp_annotations_22);

frame_frame_rsa$key$$$class__2_PublicKey_3->m_frame.f_lineno = 318;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain__load_pkcs1_pem, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_23;
PyObject *tmp_dict_key_17;
PyObject *tmp_dict_value_17;
tmp_dict_key_17 = mod_consts.const_str_plain_return;
tmp_dict_value_17 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_bytes);

if (tmp_dict_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_17 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_dict_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_23 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_17, tmp_dict_value_17);
Py_DECREF(tmp_dict_value_17);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__23__save_pkcs1_pem(tstate, tmp_annotations_23);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain__save_pkcs1_pem, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_24;
PyObject *tmp_dict_key_18;
PyObject *tmp_dict_value_18;
tmp_called_value_6 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_classmethod);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_dict_key_18 = mod_consts.const_str_plain_keyfile;
tmp_dict_value_18 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_bytes);

if (tmp_dict_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_18 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_dict_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_24 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_18, tmp_dict_value_18);
Py_DECREF(tmp_dict_value_18);
assert(!(tmp_res != 0));
tmp_dict_key_18 = mod_consts.const_str_plain_return;
tmp_dict_value_18 = mod_consts.const_str_plain_PublicKey;
tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_18, tmp_dict_value_18);
assert(!(tmp_res != 0));

tmp_args_element_value_3 = MAKE_FUNCTION_rsa$key$$$function__24_load_pkcs1_openssl_pem(tstate, tmp_annotations_24);

frame_frame_rsa$key$$$class__2_PublicKey_3->m_frame.f_lineno = 343;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain_load_pkcs1_openssl_pem, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_25;
PyObject *tmp_dict_key_19;
PyObject *tmp_dict_value_19;
tmp_called_value_7 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_classmethod);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_dict_key_19 = mod_consts.const_str_plain_keyfile;
tmp_dict_value_19 = PyObject_GetItem(locals_rsa$key$$$class__2_PublicKey_218, const_str_plain_bytes);

if (tmp_dict_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_19 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_dict_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_25 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_19, tmp_dict_value_19);
Py_DECREF(tmp_dict_value_19);
assert(!(tmp_res != 0));
tmp_dict_key_19 = mod_consts.const_str_plain_return;
tmp_dict_value_19 = mod_consts.const_str_plain_PublicKey;
tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_19, tmp_dict_value_19);
assert(!(tmp_res != 0));

tmp_args_element_value_4 = MAKE_FUNCTION_rsa$key$$$function__25_load_pkcs1_openssl_der(tstate, tmp_annotations_25);

frame_frame_rsa$key$$$class__2_PublicKey_3->m_frame.f_lineno = 362;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain_load_pkcs1_openssl_der, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$class__2_PublicKey_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$class__2_PublicKey_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$class__2_PublicKey_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$class__2_PublicKey_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_rsa$key$$$class__2_PublicKey_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_n_str_plain_e_tuple;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_6;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__2_PublicKey_218, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_6;
}
branch_no_3:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_PublicKey;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_rsa$key$$$class__2_PublicKey_218;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_rsa$key->m_frame.f_lineno = 218;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_25;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_24 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_rsa$key$$$class__2_PublicKey_218);
locals_rsa$key$$$class__2_PublicKey_218 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_rsa$key$$$class__2_PublicKey_218);
locals_rsa$key$$$class__2_PublicKey_218 = NULL;
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
exception_lineno = 218;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_PublicKey, tmp_assign_source_24);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
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
PyObject *tmp_assign_source_26;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_rsa$key$AbstractKey(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AbstractKey);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 383;

    goto try_except_handler_7;
}
tmp_assign_source_26 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_27 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_7;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_28 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_10, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_7;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_7;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_29;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

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
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_7;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_PrivateKey;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_rsa$key->m_frame.f_lineno = 383;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_30;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_31 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

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
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_32;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_32, tmp_name_value_9, tmp_default_value_2);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_7;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_33;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_33 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_33 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_7;
}
frame_frame_rsa$key->m_frame.f_lineno = 383;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 383;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_31;
}
branch_end_4:;
{
PyObject *tmp_assign_source_32;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_rsa$key$$$class__3_PrivateKey_383 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_d87a867a1da18e127aa595b45709adf5;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_343e6721029897f6aaa44376485b8329;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_PrivateKey;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_383;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_9;
}
frame_frame_rsa$key$$$class__3_PrivateKey_4 = MAKE_CLASS_FRAME(tstate, code_objects_d3dd2084c90f9757d8ed78bbe6b4d81b, module_rsa$key, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$key$$$class__3_PrivateKey_4);
assert(Py_REFCNT(frame_frame_rsa$key$$$class__3_PrivateKey_4) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_tuple_ba8a256657034d8a966d53e14b2dd275_tuple;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_annotations_26;
PyObject *tmp_dict_key_20;
PyObject *tmp_dict_value_20;
tmp_dict_key_20 = mod_consts.const_str_plain_n;
tmp_dict_value_20 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_dict_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_20 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_26 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_20, tmp_dict_value_20);
Py_DECREF(tmp_dict_value_20);
assert(!(tmp_res != 0));
tmp_dict_key_20 = mod_consts.const_str_plain_e;
tmp_dict_value_20 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_dict_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_20 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_20, tmp_dict_value_20);
Py_DECREF(tmp_dict_value_20);
assert(!(tmp_res != 0));
tmp_dict_key_20 = mod_consts.const_str_plain_d;
tmp_dict_value_20 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_dict_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_20 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_20, tmp_dict_value_20);
Py_DECREF(tmp_dict_value_20);
assert(!(tmp_res != 0));
tmp_dict_key_20 = mod_consts.const_str_plain_p;
tmp_dict_value_20 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_dict_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_20 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_20, tmp_dict_value_20);
Py_DECREF(tmp_dict_value_20);
assert(!(tmp_res != 0));
tmp_dict_key_20 = mod_consts.const_str_plain_q;
tmp_dict_value_20 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_dict_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_20 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_20, tmp_dict_value_20);
Py_DECREF(tmp_dict_value_20);
assert(!(tmp_res != 0));
tmp_dict_key_20 = mod_consts.const_str_plain_return;
tmp_dict_value_20 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_20, tmp_dict_value_20);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__26___init__(tstate, tmp_annotations_26);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_27;
PyObject *tmp_dict_key_21;
PyObject *tmp_dict_value_21;
tmp_dict_key_21 = mod_consts.const_str_plain_key;
tmp_dict_value_21 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain_str);

if (tmp_dict_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_21 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_27 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_21, tmp_dict_value_21);
Py_DECREF(tmp_dict_value_21);
assert(!(tmp_res != 0));
tmp_dict_key_21 = mod_consts.const_str_plain_return;
tmp_dict_value_21 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_dict_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_21 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_21, tmp_dict_value_21);
Py_DECREF(tmp_dict_value_21);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__27___getitem__(tstate, tmp_annotations_27);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_28;
PyObject *tmp_dict_key_22;
PyObject *tmp_dict_value_22;
tmp_dict_key_22 = mod_consts.const_str_plain_return;
tmp_dict_value_22 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain_str);

if (tmp_dict_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_22 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_28 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_22, tmp_dict_value_22);
Py_DECREF(tmp_dict_value_22);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__28___repr__(tstate, tmp_annotations_28);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_29;
PyObject *tmp_dict_key_23;
PyObject *tmp_dict_value_23;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_11;
PyObject *tmp_tuple_element_12;
tmp_dict_key_23 = mod_consts.const_str_plain_return;
tmp_expression_value_35 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_35 == NULL));
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_tuple_element_12 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(tstate, 8);
PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_11, 2, tmp_tuple_element_12);
tmp_tuple_element_12 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_11, 3, tmp_tuple_element_12);
tmp_tuple_element_12 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_11, 4, tmp_tuple_element_12);
tmp_tuple_element_12 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_11, 5, tmp_tuple_element_12);
tmp_tuple_element_12 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_11, 6, tmp_tuple_element_12);
tmp_tuple_element_12 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_11, 7, tmp_tuple_element_12);
tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_11);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
CHECK_OBJECT(tmp_subscript_value_11);
Py_DECREF(tmp_subscript_value_11);
if (tmp_dict_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_29 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_23, tmp_dict_value_23);
Py_DECREF(tmp_dict_value_23);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__29___getstate__(tstate, tmp_annotations_29);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain___getstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_30;
PyObject *tmp_dict_key_24;
PyObject *tmp_dict_value_24;
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_12;
PyObject *tmp_tuple_element_13;
tmp_dict_key_24 = mod_consts.const_str_plain_state;
tmp_expression_value_37 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_37 == NULL));
tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_tuple_element_13 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_13 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(tstate, 8);
PyTuple_SET_ITEM(tmp_subscript_value_12, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_13 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_13 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_12, 2, tmp_tuple_element_13);
tmp_tuple_element_13 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_13 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_12, 3, tmp_tuple_element_13);
tmp_tuple_element_13 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_13 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_12, 4, tmp_tuple_element_13);
tmp_tuple_element_13 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_13 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_12, 5, tmp_tuple_element_13);
tmp_tuple_element_13 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_13 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_12, 6, tmp_tuple_element_13);
tmp_tuple_element_13 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_tuple_element_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_13 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_12, 7, tmp_tuple_element_13);
tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_12);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_dict_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_30 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_24, tmp_dict_value_24);
Py_DECREF(tmp_dict_value_24);
assert(!(tmp_res != 0));
tmp_dict_key_24 = mod_consts.const_str_plain_return;
tmp_dict_value_24 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_24, tmp_dict_value_24);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__30___setstate__(tstate, tmp_annotations_30);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain___setstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_31;
PyObject *tmp_dict_key_25;
PyObject *tmp_dict_value_25;
PyObject *tmp_expression_value_38;
tmp_dict_key_25 = mod_consts.const_str_plain_other;
tmp_expression_value_38 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_38 == NULL));
tmp_dict_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_Any);
if (tmp_dict_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_31 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_25, tmp_dict_value_25);
Py_DECREF(tmp_dict_value_25);
assert(!(tmp_res != 0));
tmp_dict_key_25 = mod_consts.const_str_plain_return;
tmp_dict_value_25 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain_bool);

if (tmp_dict_value_25 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_25 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_25);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_25, tmp_dict_value_25);
Py_DECREF(tmp_dict_value_25);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__31___eq__(tstate, tmp_annotations_31);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_32;
PyObject *tmp_dict_key_26;
PyObject *tmp_dict_value_26;
PyObject *tmp_expression_value_39;
tmp_dict_key_26 = mod_consts.const_str_plain_other;
tmp_expression_value_39 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_39 == NULL));
tmp_dict_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_Any);
if (tmp_dict_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_32 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_26, tmp_dict_value_26);
Py_DECREF(tmp_dict_value_26);
assert(!(tmp_res != 0));
tmp_dict_key_26 = mod_consts.const_str_plain_return;
tmp_dict_value_26 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain_bool);

if (tmp_dict_value_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_26 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_26, tmp_dict_value_26);
Py_DECREF(tmp_dict_value_26);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__32___ne__(tstate, tmp_annotations_32);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain___ne__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_33;
PyObject *tmp_dict_key_27;
PyObject *tmp_dict_value_27;
tmp_dict_key_27 = mod_consts.const_str_plain_return;
tmp_dict_value_27 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_dict_value_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_27 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_33 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_27, tmp_dict_value_27);
Py_DECREF(tmp_dict_value_27);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__33___hash__(tstate, tmp_annotations_33);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain___hash__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_34;
PyObject *tmp_dict_key_28;
PyObject *tmp_dict_value_28;
tmp_dict_key_28 = mod_consts.const_str_plain_encrypted;
tmp_dict_value_28 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_dict_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_28 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_34 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_28, tmp_dict_value_28);
Py_DECREF(tmp_dict_value_28);
assert(!(tmp_res != 0));
tmp_dict_key_28 = mod_consts.const_str_plain_return;
tmp_dict_value_28 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_dict_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_28 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_28, tmp_dict_value_28);
Py_DECREF(tmp_dict_value_28);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__34_blinded_decrypt(tstate, tmp_annotations_34);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain_blinded_decrypt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_35;
PyObject *tmp_dict_key_29;
PyObject *tmp_dict_value_29;
tmp_dict_key_29 = mod_consts.const_str_plain_message;
tmp_dict_value_29 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_dict_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_29 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_35 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_29, tmp_dict_value_29);
Py_DECREF(tmp_dict_value_29);
assert(!(tmp_res != 0));
tmp_dict_key_29 = mod_consts.const_str_plain_return;
tmp_dict_value_29 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_int);

if (tmp_dict_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_29 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_29, tmp_dict_value_29);
Py_DECREF(tmp_dict_value_29);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__35_blinded_encrypt(tstate, tmp_annotations_35);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain_blinded_encrypt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_36;
PyObject *tmp_dict_key_30;
PyObject *tmp_dict_value_30;
tmp_called_value_10 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_classmethod);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_dict_key_30 = mod_consts.const_str_plain_keyfile;
tmp_dict_value_30 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_bytes);

if (tmp_dict_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_30 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_dict_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_36 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_30, tmp_dict_value_30);
Py_DECREF(tmp_dict_value_30);
assert(!(tmp_res != 0));
tmp_dict_key_30 = mod_consts.const_str_plain_return;
tmp_dict_value_30 = mod_consts.const_str_plain_PrivateKey;
tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_30, tmp_dict_value_30);
assert(!(tmp_res != 0));

tmp_args_element_value_5 = MAKE_FUNCTION_rsa$key$$$function__36__load_pkcs1_der(tstate, tmp_annotations_36);

frame_frame_rsa$key$$$class__3_PrivateKey_4->m_frame.f_lineno = 503;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain__load_pkcs1_der, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_37;
PyObject *tmp_dict_key_31;
PyObject *tmp_dict_value_31;
tmp_dict_key_31 = mod_consts.const_str_plain_return;
tmp_dict_value_31 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_bytes);

if (tmp_dict_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_31 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_dict_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_37 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_31, tmp_dict_value_31);
Py_DECREF(tmp_dict_value_31);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__37__save_pkcs1_der(tstate, tmp_annotations_37);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain__save_pkcs1_der, tmp_dictset_value);
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
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_38;
PyObject *tmp_dict_key_32;
PyObject *tmp_dict_value_32;
tmp_called_value_11 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_classmethod);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_dict_key_32 = mod_consts.const_str_plain_keyfile;
tmp_dict_value_32 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_bytes);

if (tmp_dict_value_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_32 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_dict_value_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_38 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_32, tmp_dict_value_32);
Py_DECREF(tmp_dict_value_32);
assert(!(tmp_res != 0));
tmp_dict_key_32 = mod_consts.const_str_plain_return;
tmp_dict_value_32 = mod_consts.const_str_plain_PrivateKey;
tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_32, tmp_dict_value_32);
assert(!(tmp_res != 0));

tmp_args_element_value_6 = MAKE_FUNCTION_rsa$key$$$function__38__load_pkcs1_pem(tstate, tmp_annotations_38);

frame_frame_rsa$key$$$class__3_PrivateKey_4->m_frame.f_lineno = 599;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain__load_pkcs1_pem, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_39;
PyObject *tmp_dict_key_33;
PyObject *tmp_dict_value_33;
tmp_dict_key_33 = mod_consts.const_str_plain_return;
tmp_dict_value_33 = PyObject_GetItem(locals_rsa$key$$$class__3_PrivateKey_383, const_str_plain_bytes);

if (tmp_dict_value_33 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_33 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_dict_value_33);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_39 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_33, tmp_dict_value_33);
Py_DECREF(tmp_dict_value_33);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_rsa$key$$$function__39__save_pkcs1_pem(tstate, tmp_annotations_39);

tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain__save_pkcs1_pem, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key$$$class__3_PrivateKey_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key$$$class__3_PrivateKey_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key$$$class__3_PrivateKey_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$key$$$class__3_PrivateKey_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_rsa$key$$$class__3_PrivateKey_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_9;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_adbe2d45083e9d9c142742e3b461c520_tuple;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_9;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_rsa$key$$$class__3_PrivateKey_383, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_9;
}
branch_no_6:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_PrivateKey;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_rsa$key$$$class__3_PrivateKey_383;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_rsa$key->m_frame.f_lineno = 383;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_33;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_32 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_32);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_rsa$key$$$class__3_PrivateKey_383);
locals_rsa$key$$$class__3_PrivateKey_383 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_rsa$key$$$class__3_PrivateKey_383);
locals_rsa$key$$$class__3_PrivateKey_383 = NULL;
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
exception_lineno = 383;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_PrivateKey, tmp_assign_source_32);
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
PyObject *tmp_assign_source_34;
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_annotations_40;
PyObject *tmp_dict_key_34;
PyObject *tmp_dict_value_34;
tmp_expression_value_41 = module_var_accessor_rsa$key$rsa(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 628;

    goto frame_exception_exit_1;
}
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_prime);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;

    goto frame_exception_exit_1;
}
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_getprime);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;

    goto frame_exception_exit_1;
}
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_15);
tmp_tuple_element_15 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_15);
tmp_dict_key_34 = mod_consts.const_str_plain_nbits;
tmp_dict_value_34 = (PyObject *)&PyLong_Type;
tmp_annotations_40 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_42;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_13;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_subscript_value_14;
tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_34, tmp_dict_value_34);
assert(!(tmp_res != 0));
tmp_dict_key_34 = mod_consts.const_str_plain_getprime_func;
tmp_expression_value_43 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_43 == NULL));
tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;

    goto dict_build_exception_6;
}
tmp_subscript_value_13 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_type_int_list_type_int_tuple, "li");
tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_13);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
CHECK_OBJECT(tmp_subscript_value_13);
Py_DECREF(tmp_subscript_value_13);
if (tmp_dict_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_34, tmp_dict_value_34);
Py_DECREF(tmp_dict_value_34);
assert(!(tmp_res != 0));
tmp_dict_key_34 = mod_consts.const_str_plain_accurate;
tmp_dict_value_34 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_34, tmp_dict_value_34);
assert(!(tmp_res != 0));
tmp_dict_key_34 = mod_consts.const_str_plain_return;
tmp_expression_value_45 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_45 == NULL));
tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 630;

    goto dict_build_exception_6;
}
tmp_subscript_value_14 = mod_consts.const_tuple_type_int_type_int_tuple;
tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_14);
CHECK_OBJECT(tmp_expression_value_44);
Py_DECREF(tmp_expression_value_44);
if (tmp_dict_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 630;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_34, tmp_dict_value_34);
Py_DECREF(tmp_dict_value_34);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_defaults_3);
Py_DECREF(tmp_annotations_40);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;

tmp_assign_source_34 = MAKE_FUNCTION_rsa$key$$$function__40_find_p_q(tstate, tmp_defaults_3, tmp_annotations_40);

UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_find_p_q, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_annotations_41;
PyObject *tmp_dict_key_35;
PyObject *tmp_dict_value_35;
tmp_dict_key_35 = mod_consts.const_str_plain_p;
tmp_dict_value_35 = (PyObject *)&PyLong_Type;
tmp_annotations_41 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_46;
PyObject *tmp_expression_value_47;
PyObject *tmp_subscript_value_15;
tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_35, tmp_dict_value_35);
assert(!(tmp_res != 0));
tmp_dict_key_35 = mod_consts.const_str_plain_q;
tmp_dict_value_35 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_35, tmp_dict_value_35);
assert(!(tmp_res != 0));
tmp_dict_key_35 = mod_consts.const_str_plain_exponent;
tmp_dict_value_35 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_35, tmp_dict_value_35);
assert(!(tmp_res != 0));
tmp_dict_key_35 = mod_consts.const_str_plain_return;
tmp_expression_value_47 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_47 == NULL));
tmp_expression_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;

    goto dict_build_exception_7;
}
tmp_subscript_value_15 = mod_consts.const_tuple_type_int_type_int_tuple;
tmp_dict_value_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_15);
CHECK_OBJECT(tmp_expression_value_46);
Py_DECREF(tmp_expression_value_46);
if (tmp_dict_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;

    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_35, tmp_dict_value_35);
Py_DECREF(tmp_dict_value_35);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_annotations_41);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;

tmp_assign_source_35 = MAKE_FUNCTION_rsa$key$$$function__41_calculate_keys_custom_exponent(tstate, tmp_annotations_41);

UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_calculate_keys_custom_exponent, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_annotations_42;
PyObject *tmp_dict_key_36;
PyObject *tmp_dict_value_36;
tmp_dict_key_36 = mod_consts.const_str_plain_p;
tmp_dict_value_36 = (PyObject *)&PyLong_Type;
tmp_annotations_42 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_48;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_16;
tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_36, tmp_dict_value_36);
assert(!(tmp_res != 0));
tmp_dict_key_36 = mod_consts.const_str_plain_q;
tmp_dict_value_36 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_36, tmp_dict_value_36);
assert(!(tmp_res != 0));
tmp_dict_key_36 = mod_consts.const_str_plain_return;
tmp_expression_value_49 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_49 == NULL));
tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 740;

    goto dict_build_exception_8;
}
tmp_subscript_value_16 = mod_consts.const_tuple_type_int_type_int_tuple;
tmp_dict_value_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_16);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_dict_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 740;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_36, tmp_dict_value_36);
Py_DECREF(tmp_dict_value_36);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_8;
// Exception handling pass through code for dict_build:
dict_build_exception_8:;
Py_DECREF(tmp_annotations_42);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_8:;

tmp_assign_source_36 = MAKE_FUNCTION_rsa$key$$$function__42_calculate_keys(tstate, tmp_annotations_42);

UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_calculate_keys, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_defaults_4;
PyObject *tmp_tuple_element_16;
PyObject *tmp_annotations_43;
PyObject *tmp_dict_key_37;
PyObject *tmp_dict_value_37;
tmp_tuple_element_16 = Py_True;
tmp_defaults_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_16);
tmp_tuple_element_16 = module_var_accessor_rsa$key$DEFAULT_EXPONENT(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_EXPONENT);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 757;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_defaults_4, 1, tmp_tuple_element_16);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_defaults_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_dict_key_37 = mod_consts.const_str_plain_nbits;
tmp_dict_value_37 = (PyObject *)&PyLong_Type;
tmp_annotations_43 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_expression_value_50;
PyObject *tmp_expression_value_51;
PyObject *tmp_subscript_value_17;
PyObject *tmp_expression_value_52;
PyObject *tmp_expression_value_53;
PyObject *tmp_subscript_value_18;
tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_37, tmp_dict_value_37);
assert(!(tmp_res != 0));
tmp_dict_key_37 = mod_consts.const_str_plain_getprime_func;
tmp_expression_value_51 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_51 == NULL));
tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 755;

    goto dict_build_exception_9;
}
tmp_subscript_value_17 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_type_int_list_type_int_tuple, "li");
tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_17);
CHECK_OBJECT(tmp_expression_value_50);
Py_DECREF(tmp_expression_value_50);
CHECK_OBJECT(tmp_subscript_value_17);
Py_DECREF(tmp_subscript_value_17);
if (tmp_dict_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 755;

    goto dict_build_exception_9;
}
tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_37, tmp_dict_value_37);
Py_DECREF(tmp_dict_value_37);
assert(!(tmp_res != 0));
tmp_dict_key_37 = mod_consts.const_str_plain_accurate;
tmp_dict_value_37 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_37, tmp_dict_value_37);
assert(!(tmp_res != 0));
tmp_dict_key_37 = mod_consts.const_str_plain_exponent;
tmp_dict_value_37 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_37, tmp_dict_value_37);
assert(!(tmp_res != 0));
tmp_dict_key_37 = mod_consts.const_str_plain_return;
tmp_expression_value_53 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_53 == NULL));
tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 758;

    goto dict_build_exception_9;
}
tmp_subscript_value_18 = mod_consts.const_tuple_type_int_type_int_type_int_type_int_tuple;
tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_18);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
if (tmp_dict_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 758;

    goto dict_build_exception_9;
}
tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_37, tmp_dict_value_37);
Py_DECREF(tmp_dict_value_37);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_9;
// Exception handling pass through code for dict_build:
dict_build_exception_9:;
Py_DECREF(tmp_defaults_4);
Py_DECREF(tmp_annotations_43);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_9:;

tmp_assign_source_37 = MAKE_FUNCTION_rsa$key$$$function__43_gen_keys(tstate, tmp_defaults_4, tmp_annotations_43);

UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_gen_keys, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_defaults_5;
PyObject *tmp_tuple_element_17;
PyObject *tmp_annotations_44;
PyObject *tmp_dict_key_38;
PyObject *tmp_dict_value_38;
tmp_tuple_element_17 = Py_True;
tmp_defaults_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_17);
tmp_tuple_element_17 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_defaults_5, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = module_var_accessor_rsa$key$DEFAULT_EXPONENT(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_EXPONENT);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 790;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_defaults_5, 2, tmp_tuple_element_17);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_defaults_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_dict_key_38 = mod_consts.const_str_plain_nbits;
tmp_dict_value_38 = (PyObject *)&PyLong_Type;
tmp_annotations_44 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_expression_value_54;
PyObject *tmp_expression_value_55;
PyObject *tmp_subscript_value_19;
PyObject *tmp_tuple_element_18;
tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_38, tmp_dict_value_38);
assert(!(tmp_res != 0));
tmp_dict_key_38 = mod_consts.const_str_plain_accurate;
tmp_dict_value_38 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_38, tmp_dict_value_38);
assert(!(tmp_res != 0));
tmp_dict_key_38 = mod_consts.const_str_plain_poolsize;
tmp_dict_value_38 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_38, tmp_dict_value_38);
assert(!(tmp_res != 0));
tmp_dict_key_38 = mod_consts.const_str_plain_exponent;
tmp_dict_value_38 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_38, tmp_dict_value_38);
assert(!(tmp_res != 0));
tmp_dict_key_38 = mod_consts.const_str_plain_return;
tmp_expression_value_55 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_55 == NULL));
tmp_expression_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_Tuple);
if (tmp_expression_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 791;

    goto dict_build_exception_10;
}
tmp_tuple_element_18 = module_var_accessor_rsa$key$PublicKey(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PublicKey);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_54);

exception_lineno = 791;

    goto dict_build_exception_10;
}
tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_19, 0, tmp_tuple_element_18);
tmp_tuple_element_18 = module_var_accessor_rsa$key$PrivateKey(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PrivateKey);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 791;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_18);
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_expression_value_54);
Py_DECREF(tmp_subscript_value_19);
goto dict_build_exception_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_dict_value_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_19);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
CHECK_OBJECT(tmp_subscript_value_19);
Py_DECREF(tmp_subscript_value_19);
if (tmp_dict_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 791;

    goto dict_build_exception_10;
}
tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_38, tmp_dict_value_38);
Py_DECREF(tmp_dict_value_38);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_10;
// Exception handling pass through code for dict_build:
dict_build_exception_10:;
Py_DECREF(tmp_defaults_5);
Py_DECREF(tmp_annotations_44);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_10:;

tmp_assign_source_38 = MAKE_FUNCTION_rsa$key$$$function__44_newkeys(tstate, tmp_defaults_5, tmp_annotations_44);

UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)mod_consts.const_str_plain_newkeys, tmp_assign_source_38);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_rsa$key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_LIST3(tstate, mod_consts.const_str_plain_PublicKey,mod_consts.const_str_plain_PrivateKey,mod_consts.const_str_plain_newkeys);
UPDATE_STRING_DICT1(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_39);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("rsa$key", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "rsa.key" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_rsa$key);
    return module_rsa$key;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$key, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("rsa$key", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

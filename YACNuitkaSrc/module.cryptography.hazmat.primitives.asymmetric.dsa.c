/* Generated code for Python module 'cryptography$hazmat$primitives$asymmetric$dsa'
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



/* The "module_cryptography$hazmat$primitives$asymmetric$dsa" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$asymmetric$dsa;
PyDictObject *moduledict_cryptography$hazmat$primitives$asymmetric$dsa;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_int_pos_1024_int_pos_2048_int_pos_3072_int_pos_4096_tuple;
PyObject *const_str_digest_313a9822aacd79de32d01aa2d56e63ef;
PyObject *const_str_plain_rust_openssl;
PyObject *const_str_plain_dsa;
PyObject *const_str_plain_generate_parameters;
PyObject *const_str_plain_generate_private_key;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_typing;
PyObject *const_str_digest_8079781454ad481b13cb6caedf4dbb9e;
PyObject *const_tuple_str_plain_openssl_tuple;
PyObject *const_str_plain_openssl;
PyObject *const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
PyObject *const_tuple_str_plain__serialization_str_plain_hashes_tuple;
PyObject *const_str_plain__serialization;
PyObject *const_str_plain_hashes;
PyObject *const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
PyObject *const_tuple_str_plain_utils_tuple;
PyObject *const_str_plain_utils;
PyObject *const_str_plain_asym_utils;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_ABCMeta;
PyObject *const_str_plain___prepare__;
PyObject *const_tuple_str_plain_DSAParameters_tuple_empty_tuple;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_0baaa18942fac18d0a13e347e08109be;
PyObject *const_str_plain_DSAParameters;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_15;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_abstractmethod;
PyObject *const_dict_c54ff5ca4cdea644569f7756f23e2d9e;
PyObject *const_str_digest_45ca7bb7ea051991c7234020bc4a86e3;
PyObject *const_str_digest_f3e70a162fba0ee0d6e30f37e1fc602c;
PyObject *const_dict_dcf2b4c48003aa853f208708fc1c4f2e;
PyObject *const_str_digest_e2da2d9cd42efde670207354d635c024;
PyObject *const_str_plain_parameter_numbers;
PyObject *const_str_digest_2f542c2394cc015ddd2856c71d4bc119;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_DSAParametersWithNumbers;
PyObject *const_tuple_str_plain_DSAPrivateKey_tuple_empty_tuple;
PyObject *const_str_plain_DSAPrivateKey;
PyObject *const_int_pos_33;
PyObject *const_str_plain_property;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_7ed3a7a8a582e335cfe9c8bbb1cf36ef;
PyObject *const_str_plain_key_size;
PyObject *const_str_digest_9438fa9e8eedf677315bfe0338110442;
PyObject *const_dict_e5b6ae5652830d5f33a963376038fc7b;
PyObject *const_str_digest_5f33c5c8abaaa64f8fed2007e90e924b;
PyObject *const_str_plain_public_key;
PyObject *const_str_digest_b869f381920be2d59fef7fa3f1191489;
PyObject *const_dict_917f06b1d1b7dcf07f6a2760e78dfde7;
PyObject *const_str_digest_74333baabcd71bd4b20abec0d5d78780;
PyObject *const_str_plain_parameters;
PyObject *const_str_digest_2e6dcb7bc27710a420978e0bd48dce51;
PyObject *const_dict_dda0d131d7dc0e51773eed43637eed97;
PyObject *const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3;
PyObject *const_str_plain_sign;
PyObject *const_str_digest_5504f4b2fa175697afc0a75e2cdcd17e;
PyObject *const_dict_1dfc0f687b98e0cab6eb3eb70cedd75f;
PyObject *const_str_digest_b0f5f7de398dfdd9348933f42f5edda6;
PyObject *const_str_plain_private_numbers;
PyObject *const_str_digest_1cf2d129398c0f1922b5e6078c9b78d7;
PyObject *const_dict_efc8da0e94d28ac00c67fdffcef957e4;
PyObject *const_str_digest_6aab55c26a1ed998ca3af322fce98750;
PyObject *const_str_plain_private_bytes;
PyObject *const_str_digest_88a2b8471e7365708faba9eb93fc7f37;
PyObject *const_str_plain_DSAPrivateKeyWithSerialization;
PyObject *const_tuple_str_plain_DSAPublicKey_tuple_empty_tuple;
PyObject *const_str_plain_DSAPublicKey;
PyObject *const_int_pos_85;
PyObject *const_str_digest_302910355976c63e04019085c9c61006;
PyObject *const_str_digest_6af3cf6ecdf3f2768afcce5db083e9db;
PyObject *const_str_digest_24e52073d8bead6cd982e2181fe13a6f;
PyObject *const_dict_a1a2bdab2d3c10756ab90943f05a43e9;
PyObject *const_str_digest_dcd3fa364e51215486135a33aae80b61;
PyObject *const_str_plain_public_numbers;
PyObject *const_str_digest_f2c133badf2c0c221a7654c128b162c4;
PyObject *const_dict_c44861dc21ab09a200a6d15af811a095;
PyObject *const_str_plain_public_bytes;
PyObject *const_str_digest_2638c3c27381754c8e58707c86f885ae;
PyObject *const_dict_ea71eebeca8b0380bbb1b9e5124b1b88;
PyObject *const_str_digest_b65598126c9dc80c52681ec668ff8678;
PyObject *const_str_plain_verify;
PyObject *const_str_digest_3f0cf660a3d0d64c3e4b829e514ebe09;
PyObject *const_dict_48da6b0499a992d8a0861b3c7131d274;
PyObject *const_str_digest_a0bfeac94e21ff744538259cfd62359c;
PyObject *const_str_plain___eq__;
PyObject *const_str_digest_a4c8f1b0e9dbcc3baca9fd95b13d06ab;
PyObject *const_str_plain_DSAPublicKeyWithSerialization;
PyObject *const_str_plain_DSAPrivateNumbers;
PyObject *const_str_plain_DSAPublicNumbers;
PyObject *const_str_plain_DSAParameterNumbers;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_95727427722e04bc420a6ca81e605085;
PyObject *const_dict_44af15e17938348341c65616aae48ce3;
PyObject *const_str_digest_ec77dca3839f7c701ce1b39fed64d6fb;
PyObject *const_str_digest_0868dd0fbefea91dad95900f7537215d;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_str_plain_key_size_str_plain_backend_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_key_size_str_plain_backend_str_plain_parameters_tuple;
PyObject *const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple;
PyObject *const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_algorithm_tuple;
PyObject *const_tuple_78c9c71a1ce650dcc3c4bc7920b8a5ea_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[112];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("cryptography.hazmat.primitives.asymmetric.dsa"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_int_pos_2048_int_pos_3072_int_pos_4096_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_313a9822aacd79de32d01aa2d56e63ef);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_rust_openssl);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_dsa);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_parameters);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_private_key);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openssl_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_openssl);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__serialization);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashes);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_asym_utils);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DSAParameters_tuple_empty_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_0baaa18942fac18d0a13e347e08109be);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSAParameters);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_15);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_c54ff5ca4cdea644569f7756f23e2d9e);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_45ca7bb7ea051991c7234020bc4a86e3);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3e70a162fba0ee0d6e30f37e1fc602c);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_dict_dcf2b4c48003aa853f208708fc1c4f2e);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2da2d9cd42efde670207354d635c024);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_parameter_numbers);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f542c2394cc015ddd2856c71d4bc119);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSAParametersWithNumbers);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DSAPrivateKey_tuple_empty_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPrivateKey);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_int_pos_33);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ed3a7a8a582e335cfe9c8bbb1cf36ef);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_size);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_9438fa9e8eedf677315bfe0338110442);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_dict_e5b6ae5652830d5f33a963376038fc7b);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f33c5c8abaaa64f8fed2007e90e924b);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_public_key);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_b869f381920be2d59fef7fa3f1191489);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_dict_917f06b1d1b7dcf07f6a2760e78dfde7);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_74333baabcd71bd4b20abec0d5d78780);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_parameters);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e6dcb7bc27710a420978e0bd48dce51);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_dda0d131d7dc0e51773eed43637eed97);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_sign);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_5504f4b2fa175697afc0a75e2cdcd17e);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_dict_1dfc0f687b98e0cab6eb3eb70cedd75f);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0f5f7de398dfdd9348933f42f5edda6);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_private_numbers);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cf2d129398c0f1922b5e6078c9b78d7);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_private_bytes);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_88a2b8471e7365708faba9eb93fc7f37);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPrivateKeyWithSerialization);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DSAPublicKey_tuple_empty_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPublicKey);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_int_pos_85);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_302910355976c63e04019085c9c61006);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_6af3cf6ecdf3f2768afcce5db083e9db);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_24e52073d8bead6cd982e2181fe13a6f);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_dict_a1a2bdab2d3c10756ab90943f05a43e9);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcd3fa364e51215486135a33aae80b61);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_public_numbers);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2c133badf2c0c221a7654c128b162c4);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_public_bytes);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_2638c3c27381754c8e58707c86f885ae);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_dict_ea71eebeca8b0380bbb1b9e5124b1b88);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f0cf660a3d0d64c3e4b829e514ebe09);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain___eq__);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4c8f1b0e9dbcc3baca9fd95b13d06ab);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPublicKeyWithSerialization);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPrivateNumbers);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPublicNumbers);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSAParameterNumbers);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_dict_95727427722e04bc420a6ca81e605085);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_dict_44af15e17938348341c65616aae48ce3);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec77dca3839f7c701ce1b39fed64d6fb);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_0868dd0fbefea91dad95900f7537215d);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_size_str_plain_backend_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_size_str_plain_backend_str_plain_parameters_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_algorithm_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_78c9c71a1ce650dcc3c4bc7920b8a5ea_tuple);
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
void checkModuleConstants_cryptography$hazmat$primitives$asymmetric$dsa(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_int_pos_2048_int_pos_3072_int_pos_4096_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1024_int_pos_2048_int_pos_3072_int_pos_4096_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_313a9822aacd79de32d01aa2d56e63ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_313a9822aacd79de32d01aa2d56e63ef);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_rust_openssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rust_openssl);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_dsa));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dsa);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_parameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate_parameters);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_private_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate_private_key);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openssl_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_openssl_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_openssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_openssl);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__serialization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__serialization);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hashes);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_utils_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utils);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_asym_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asym_utils);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DSAParameters_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DSAParameters_tuple_empty_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_0baaa18942fac18d0a13e347e08109be));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0baaa18942fac18d0a13e347e08109be);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSAParameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DSAParameters);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_15));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_15);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_c54ff5ca4cdea644569f7756f23e2d9e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c54ff5ca4cdea644569f7756f23e2d9e);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_45ca7bb7ea051991c7234020bc4a86e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45ca7bb7ea051991c7234020bc4a86e3);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3e70a162fba0ee0d6e30f37e1fc602c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3e70a162fba0ee0d6e30f37e1fc602c);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_dict_dcf2b4c48003aa853f208708fc1c4f2e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dcf2b4c48003aa853f208708fc1c4f2e);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2da2d9cd42efde670207354d635c024));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2da2d9cd42efde670207354d635c024);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_parameter_numbers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parameter_numbers);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f542c2394cc015ddd2856c71d4bc119));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f542c2394cc015ddd2856c71d4bc119);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSAParametersWithNumbers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DSAParametersWithNumbers);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DSAPrivateKey_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DSAPrivateKey_tuple_empty_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPrivateKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DSAPrivateKey);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_int_pos_33));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_33);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ed3a7a8a582e335cfe9c8bbb1cf36ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ed3a7a8a582e335cfe9c8bbb1cf36ef);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_size);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_9438fa9e8eedf677315bfe0338110442));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9438fa9e8eedf677315bfe0338110442);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_dict_e5b6ae5652830d5f33a963376038fc7b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e5b6ae5652830d5f33a963376038fc7b);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f33c5c8abaaa64f8fed2007e90e924b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f33c5c8abaaa64f8fed2007e90e924b);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_public_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_public_key);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_b869f381920be2d59fef7fa3f1191489));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b869f381920be2d59fef7fa3f1191489);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_dict_917f06b1d1b7dcf07f6a2760e78dfde7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_917f06b1d1b7dcf07f6a2760e78dfde7);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_74333baabcd71bd4b20abec0d5d78780));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74333baabcd71bd4b20abec0d5d78780);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_parameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parameters);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e6dcb7bc27710a420978e0bd48dce51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e6dcb7bc27710a420978e0bd48dce51);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_dda0d131d7dc0e51773eed43637eed97));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dda0d131d7dc0e51773eed43637eed97);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_sign));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sign);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_5504f4b2fa175697afc0a75e2cdcd17e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5504f4b2fa175697afc0a75e2cdcd17e);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_dict_1dfc0f687b98e0cab6eb3eb70cedd75f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1dfc0f687b98e0cab6eb3eb70cedd75f);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0f5f7de398dfdd9348933f42f5edda6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0f5f7de398dfdd9348933f42f5edda6);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_private_numbers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_private_numbers);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cf2d129398c0f1922b5e6078c9b78d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cf2d129398c0f1922b5e6078c9b78d7);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_private_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_private_bytes);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_88a2b8471e7365708faba9eb93fc7f37));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88a2b8471e7365708faba9eb93fc7f37);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPrivateKeyWithSerialization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DSAPrivateKeyWithSerialization);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DSAPublicKey_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DSAPublicKey_tuple_empty_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPublicKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DSAPublicKey);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_int_pos_85));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_85);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_302910355976c63e04019085c9c61006));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_302910355976c63e04019085c9c61006);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_6af3cf6ecdf3f2768afcce5db083e9db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6af3cf6ecdf3f2768afcce5db083e9db);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_24e52073d8bead6cd982e2181fe13a6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24e52073d8bead6cd982e2181fe13a6f);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_dict_a1a2bdab2d3c10756ab90943f05a43e9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a1a2bdab2d3c10756ab90943f05a43e9);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcd3fa364e51215486135a33aae80b61));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcd3fa364e51215486135a33aae80b61);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_public_numbers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_public_numbers);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2c133badf2c0c221a7654c128b162c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2c133badf2c0c221a7654c128b162c4);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_public_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_public_bytes);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_2638c3c27381754c8e58707c86f885ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2638c3c27381754c8e58707c86f885ae);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_dict_ea71eebeca8b0380bbb1b9e5124b1b88));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ea71eebeca8b0380bbb1b9e5124b1b88);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verify);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f0cf660a3d0d64c3e4b829e514ebe09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f0cf660a3d0d64c3e4b829e514ebe09);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274));
CHECK_OBJECT_DEEP(mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain___eq__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___eq__);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4c8f1b0e9dbcc3baca9fd95b13d06ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4c8f1b0e9dbcc3baca9fd95b13d06ab);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPublicKeyWithSerialization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DSAPublicKeyWithSerialization);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPrivateNumbers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DSAPrivateNumbers);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPublicNumbers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DSAPublicNumbers);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSAParameterNumbers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DSAParameterNumbers);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_dict_95727427722e04bc420a6ca81e605085));
CHECK_OBJECT_DEEP(mod_consts.const_dict_95727427722e04bc420a6ca81e605085);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_dict_44af15e17938348341c65616aae48ce3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_44af15e17938348341c65616aae48ce3);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec77dca3839f7c701ce1b39fed64d6fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ec77dca3839f7c701ce1b39fed64d6fb);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_0868dd0fbefea91dad95900f7537215d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0868dd0fbefea91dad95900f7537215d);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_size_str_plain_backend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_size_str_plain_backend_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_size_str_plain_backend_str_plain_parameters_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_size_str_plain_backend_str_plain_parameters_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_algorithm_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_algorithm_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_78c9c71a1ce650dcc3c4bc7920b8a5ea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_78c9c71a1ce650dcc3c4bc7920b8a5ea_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 7
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
static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$DSAParameters(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAParameters);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DSAParameters);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DSAParameters, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DSAParameters);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DSAParameters, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAParameters);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAParameters);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAParameters);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$DSAPrivateKey(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPrivateKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DSAPrivateKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DSAPrivateKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DSAPrivateKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DSAPrivateKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPrivateKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPrivateKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPrivateKey);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$DSAPublicKey(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPublicKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DSAPublicKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DSAPublicKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DSAPublicKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DSAPublicKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPublicKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPublicKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPublicKey);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$generate_parameters(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_parameters);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_generate_parameters);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_generate_parameters, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_generate_parameters);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_generate_parameters, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_parameters);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_parameters);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_parameters);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$rust_openssl(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$dsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rust_openssl);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rust_openssl, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rust_openssl);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rust_openssl, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_0946ac983580b00c292cf25ce8129022;
static PyCodeObject *code_objects_fc32293240735252a7226ccc46852984;
static PyCodeObject *code_objects_42ddf1818cb2dd011eaa0e2277df9436;
static PyCodeObject *code_objects_b6485cf057c63d90c5a848d29c016ac7;
static PyCodeObject *code_objects_2a746ae8de1d4235c21e39f4205db42c;
static PyCodeObject *code_objects_a545a06aa29eec6ad52d03b101767177;
static PyCodeObject *code_objects_0d835fa7117b049f9f7bef8d49e7481d;
static PyCodeObject *code_objects_e70faed9f3f73d1e52340a40ccff5f8e;
static PyCodeObject *code_objects_cb593eaba122846e1e36ca3a9a062604;
static PyCodeObject *code_objects_c5ec1472ed5d926ad070c4a890f5fae4;
static PyCodeObject *code_objects_eb70fce34d87feae50e0acdebd436e13;
static PyCodeObject *code_objects_57e96886aac941748d07a53d2acbbf6a;
static PyCodeObject *code_objects_fe2b9051072cd484cf24b116d33c840b;
static PyCodeObject *code_objects_5f824a620afaae0449381ce208812ed7;
static PyCodeObject *code_objects_7a5cfcd1a683097e4481b2ad2bf88641;
static PyCodeObject *code_objects_900b13e8ceb1c9fa4c8053ec7e360443;
static PyCodeObject *code_objects_e7365c4b91de1a6790760badf5f66424;
static PyCodeObject *code_objects_3b38b8aaa0eb4d53f1c4c2478082e2b5;
static PyCodeObject *code_objects_971b39c2531efcbb1a43d695ed13cf74;
static PyCodeObject *code_objects_1e9ef41abc7a0e85d428aa7440a1508a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ec77dca3839f7c701ce1b39fed64d6fb); CHECK_OBJECT(module_filename_obj);
code_objects_0946ac983580b00c292cf25ce8129022 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_0868dd0fbefea91dad95900f7537215d, mod_consts.const_str_digest_0868dd0fbefea91dad95900f7537215d, NULL, NULL, 0, 0, 0);
code_objects_fc32293240735252a7226ccc46852984 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_DSAParameters, mod_consts.const_str_plain_DSAParameters, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_42ddf1818cb2dd011eaa0e2277df9436 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_DSAPrivateKey, mod_consts.const_str_plain_DSAPrivateKey, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b6485cf057c63d90c5a848d29c016ac7 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_DSAPublicKey, mod_consts.const_str_plain_DSAPublicKey, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2a746ae8de1d4235c21e39f4205db42c = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_a4c8f1b0e9dbcc3baca9fd95b13d06ab, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_a545a06aa29eec6ad52d03b101767177 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_generate_parameters, mod_consts.const_str_plain_generate_parameters, mod_consts.const_tuple_str_plain_key_size_str_plain_backend_tuple, NULL, 2, 0, 0);
code_objects_0d835fa7117b049f9f7bef8d49e7481d = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_generate_private_key, mod_consts.const_str_digest_f3e70a162fba0ee0d6e30f37e1fc602c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e70faed9f3f73d1e52340a40ccff5f8e = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_generate_private_key, mod_consts.const_str_plain_generate_private_key, mod_consts.const_tuple_str_plain_key_size_str_plain_backend_str_plain_parameters_tuple, NULL, 2, 0, 0);
code_objects_cb593eaba122846e1e36ca3a9a062604 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_key_size, mod_consts.const_str_digest_9438fa9e8eedf677315bfe0338110442, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c5ec1472ed5d926ad070c4a890f5fae4 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_key_size, mod_consts.const_str_digest_302910355976c63e04019085c9c61006, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_eb70fce34d87feae50e0acdebd436e13 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parameter_numbers, mod_consts.const_str_digest_2f542c2394cc015ddd2856c71d4bc119, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_57e96886aac941748d07a53d2acbbf6a = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parameters, mod_consts.const_str_digest_2e6dcb7bc27710a420978e0bd48dce51, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fe2b9051072cd484cf24b116d33c840b = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parameters, mod_consts.const_str_digest_24e52073d8bead6cd982e2181fe13a6f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5f824a620afaae0449381ce208812ed7 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_private_bytes, mod_consts.const_str_digest_88a2b8471e7365708faba9eb93fc7f37, mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple, NULL, 4, 0, 0);
code_objects_7a5cfcd1a683097e4481b2ad2bf88641 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_private_numbers, mod_consts.const_str_digest_1cf2d129398c0f1922b5e6078c9b78d7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_900b13e8ceb1c9fa4c8053ec7e360443 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_public_bytes, mod_consts.const_str_digest_2638c3c27381754c8e58707c86f885ae, mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple, NULL, 3, 0, 0);
code_objects_e7365c4b91de1a6790760badf5f66424 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_public_key, mod_consts.const_str_digest_b869f381920be2d59fef7fa3f1191489, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3b38b8aaa0eb4d53f1c4c2478082e2b5 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_public_numbers, mod_consts.const_str_digest_f2c133badf2c0c221a7654c128b162c4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_971b39c2531efcbb1a43d695ed13cf74 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sign, mod_consts.const_str_digest_5504f4b2fa175697afc0a75e2cdcd17e, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_algorithm_tuple, NULL, 3, 0, 0);
code_objects_1e9ef41abc7a0e85d428aa7440a1508a = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_verify, mod_consts.const_str_digest_3f0cf660a3d0d64c3e4b829e514ebe09, mod_consts.const_tuple_78c9c71a1ce650dcc3c4bc7920b8a5ea_tuple, NULL, 4, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__10_parameters(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__11_public_numbers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__12_public_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__13_verify(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__14___eq__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__1_generate_private_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__2_parameter_numbers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__3_key_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__4_public_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__5_parameters(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__6_sign(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__7_private_numbers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__8_private_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__9_key_size(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key_size = python_pars[0];
PyObject *par_backend = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters = MAKE_FUNCTION_FRAME(tstate, code_objects_a545a06aa29eec6ad52d03b101767177, module_cryptography$hazmat$primitives$asymmetric$dsa, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_key_size);
tmp_cmp_expr_left_1 = par_key_size;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_int_pos_1024_int_pos_2048_int_pos_3072_int_pos_4096_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_313a9822aacd79de32d01aa2d56e63ef;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters->m_frame.f_lineno = 145;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 145;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$rust_openssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_dsa);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key_size);
tmp_args_element_value_1 = par_key_size;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters->m_frame.f_lineno = 147;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_generate_parameters, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters,
    type_description_1,
    par_key_size,
    par_backend
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_key_size);
Py_DECREF(par_key_size);
CHECK_OBJECT(par_backend);
Py_DECREF(par_backend);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key_size);
Py_DECREF(par_key_size);
CHECK_OBJECT(par_backend);
Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key_size = python_pars[0];
PyObject *par_backend = python_pars[1];
PyObject *var_parameters = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key = MAKE_FUNCTION_FRAME(tstate, code_objects_e70faed9f3f73d1e52340a40ccff5f8e, module_cryptography$hazmat$primitives$asymmetric$dsa, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$generate_parameters(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_generate_parameters);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key_size);
tmp_args_element_value_1 = par_key_size;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key->m_frame.f_lineno = 153;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_parameters == NULL);
var_parameters = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_parameters);
tmp_called_instance_1 = var_parameters;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key->m_frame.f_lineno = 154;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_generate_private_key);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key,
    type_description_1,
    par_key_size,
    par_backend,
    var_parameters
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_parameters);
CHECK_OBJECT(var_parameters);
Py_DECREF(var_parameters);
var_parameters = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_parameters);
var_parameters = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_key_size);
Py_DECREF(par_key_size);
CHECK_OBJECT(par_backend);
Py_DECREF(par_backend);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key_size);
Py_DECREF(par_key_size);
CHECK_OBJECT(par_backend);
Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__10_parameters(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_parameters,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_24e52073d8bead6cd982e2181fe13a6f,
#endif
        code_objects_fe2b9051072cd484cf24b116d33c840b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_6af3cf6ecdf3f2768afcce5db083e9db,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__11_public_numbers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_public_numbers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f2c133badf2c0c221a7654c128b162c4,
#endif
        code_objects_3b38b8aaa0eb4d53f1c4c2478082e2b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_dcd3fa364e51215486135a33aae80b61,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__12_public_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_public_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2638c3c27381754c8e58707c86f885ae,
#endif
        code_objects_900b13e8ceb1c9fa4c8053ec7e360443,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__13_verify(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_verify,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3f0cf660a3d0d64c3e4b829e514ebe09,
#endif
        code_objects_1e9ef41abc7a0e85d428aa7440a1508a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__14___eq__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a4c8f1b0e9dbcc3baca9fd95b13d06ab,
#endif
        code_objects_2a746ae8de1d4235c21e39f4205db42c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters,
        mod_consts.const_str_plain_generate_parameters,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a545a06aa29eec6ad52d03b101767177,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key,
        mod_consts.const_str_plain_generate_private_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e70faed9f3f73d1e52340a40ccff5f8e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__1_generate_private_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_generate_private_key,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f3e70a162fba0ee0d6e30f37e1fc602c,
#endif
        code_objects_0d835fa7117b049f9f7bef8d49e7481d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_45ca7bb7ea051991c7234020bc4a86e3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__2_parameter_numbers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_parameter_numbers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2f542c2394cc015ddd2856c71d4bc119,
#endif
        code_objects_eb70fce34d87feae50e0acdebd436e13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_e2da2d9cd42efde670207354d635c024,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__3_key_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_key_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9438fa9e8eedf677315bfe0338110442,
#endif
        code_objects_cb593eaba122846e1e36ca3a9a062604,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_7ed3a7a8a582e335cfe9c8bbb1cf36ef,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__4_public_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_public_key,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b869f381920be2d59fef7fa3f1191489,
#endif
        code_objects_e7365c4b91de1a6790760badf5f66424,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_5f33c5c8abaaa64f8fed2007e90e924b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__5_parameters(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_parameters,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2e6dcb7bc27710a420978e0bd48dce51,
#endif
        code_objects_57e96886aac941748d07a53d2acbbf6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_74333baabcd71bd4b20abec0d5d78780,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__6_sign(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_sign,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5504f4b2fa175697afc0a75e2cdcd17e,
#endif
        code_objects_971b39c2531efcbb1a43d695ed13cf74,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__7_private_numbers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_private_numbers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1cf2d129398c0f1922b5e6078c9b78d7,
#endif
        code_objects_7a5cfcd1a683097e4481b2ad2bf88641,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_b0f5f7de398dfdd9348933f42f5edda6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__8_private_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_private_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_88a2b8471e7365708faba9eb93fc7f37,
#endif
        code_objects_5f824a620afaae0449381ce208812ed7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__9_key_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_key_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_302910355976c63e04019085c9c61006,
#endif
        code_objects_c5ec1472ed5d926ad070c4a890f5fae4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_digest_7ed3a7a8a582e335cfe9c8bbb1cf36ef,
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

static function_impl_code const function_table_cryptography$hazmat$primitives$asymmetric$dsa[] = {
impl_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters,
impl_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key,
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

    return Nuitka_Function_GetFunctionState(function, function_table_cryptography$hazmat$primitives$asymmetric$dsa);
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
        module_cryptography$hazmat$primitives$asymmetric$dsa,
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
        function_table_cryptography$hazmat$primitives$asymmetric$dsa,
        sizeof(function_table_cryptography$hazmat$primitives$asymmetric$dsa) / sizeof(function_impl_code)
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
static char const *module_full_name = "cryptography.hazmat.primitives.asymmetric.dsa";
#endif

// Internal entry point for module code.
PyObject *module_code_cryptography$hazmat$primitives$asymmetric$dsa(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("cryptography$hazmat$primitives$asymmetric$dsa");

    // Store the module for future use.
    module_cryptography$hazmat$primitives$asymmetric$dsa = module;

    moduledict_cryptography$hazmat$primitives$asymmetric$dsa = MODULE_DICT(module_cryptography$hazmat$primitives$asymmetric$dsa);

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
        PRINT_STRING("cryptography$hazmat$primitives$asymmetric$dsa: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography$hazmat$primitives$asymmetric$dsa: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("cryptography$hazmat$primitives$asymmetric$dsa: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.primitives.asymmetric.dsa" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcryptography$hazmat$primitives$asymmetric$dsa\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_cryptography$hazmat$primitives$asymmetric$dsa,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$asymmetric$dsa,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$asymmetric$dsa,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$dsa,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$dsa,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$primitives$asymmetric$dsa);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_cryptography$hazmat$primitives$asymmetric$dsa);
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$dsa;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa = MAKE_MODULE_FRAME(code_objects_0946ac983580b00c292cf25ce8129022, module_cryptography$hazmat$primitives$asymmetric$dsa);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$dsa);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$dsa;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 7;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$dsa;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_openssl_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 10;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_plain_openssl,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_openssl);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
tmp_globals_arg_value_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$dsa;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 11;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
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
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_plain__serialization,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__serialization);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain__serialization, tmp_assign_source_9);
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
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_plain_hashes,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_hashes);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
tmp_globals_arg_value_4 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$dsa;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_utils_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 12;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$dsa,
        mod_consts.const_str_plain_utils,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_utils);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_asym_utils, tmp_assign_source_11);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;

    goto try_except_handler_2;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
tmp_assign_source_12 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
bool tmp_condition_result_1;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
tmp_key_value_1 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_key_value_2 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_13 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_13 == NULL) {
    tmp_assign_source_13 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_13);
}
assert(!(tmp_assign_source_13 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_13 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_13);
condexpr_end_1:;
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_13;
}
{
bool tmp_condition_result_2;
PyObject *tmp_key_value_3;
PyObject *tmp_dict_arg_value_3;
tmp_key_value_3 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_3 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_1__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
tmp_args_value_1 = mod_consts.const_tuple_str_plain_DSAParameters_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 15;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
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
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_1;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_1 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 15;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 15;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
branch_end_2:;
{
PyObject *tmp_assign_source_16;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_0baaa18942fac18d0a13e347e08109be;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_DSAParameters;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_15;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_2 = MAKE_CLASS_FRAME(tstate, code_objects_fc32293240735252a7226ccc46852984, module_cryptography$hazmat$primitives$asymmetric$dsa, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_2);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_2) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_instance_1 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15, mod_consts.const_str_plain_abc);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c54ff5ca4cdea644569f7756f23e2d9e);

tmp_args_element_value_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__1_generate_private_key(tstate, tmp_annotations_1);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_2->m_frame.f_lineno = 16;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15, mod_consts.const_str_plain_generate_private_key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_2;
tmp_called_instance_2 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15, mod_consts.const_str_plain_abc);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_dcf2b4c48003aa853f208708fc1c4f2e);

tmp_args_element_value_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__2_parameter_numbers(tstate, tmp_annotations_2);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_2->m_frame.f_lineno = 22;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15, mod_consts.const_str_plain_parameter_numbers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_2 = mod_consts.const_str_plain_DSAParameters;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 15;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_17;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_16 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_16);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15);
locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15);
locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__1_DSAParameters_15 = NULL;
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
exception_lineno = 15;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAParameters, tmp_assign_source_16);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$DSAParameters(tstate);
if (unlikely(tmp_assign_source_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DSAParameters);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAParametersWithNumbers, tmp_assign_source_18);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
tmp_expression_value_7 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$DSAParameters(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DSAParameters);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_register);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$rust_openssl(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_dsa);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_DSAParameters);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 30;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 30;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_10;
tmp_dict_key_2 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_10 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto try_except_handler_5;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_5;
}
tmp_assign_source_19 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
bool tmp_condition_result_5;
PyObject *tmp_key_value_4;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_key_value_5;
tmp_key_value_4 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_4, tmp_key_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_5 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_key_value_5 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_20 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_5, tmp_key_value_5);
if (tmp_assign_source_20 == NULL) {
    tmp_assign_source_20 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_20);
}
assert(!(tmp_assign_source_20 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_20 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_20);
condexpr_end_2:;
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_20;
}
{
bool tmp_condition_result_6;
PyObject *tmp_key_value_6;
PyObject *tmp_dict_arg_value_6;
tmp_key_value_6 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_6 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_6, tmp_key_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_2__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_5;
}
branch_no_4:;
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_value_3;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_5;
}
tmp_args_value_3 = mod_consts.const_tuple_str_plain_DSAPrivateKey_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 33;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_21;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_13 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_5;
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
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_6, tmp_default_value_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_15 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_5;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 33;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 33;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_22;
}
branch_end_5:;
{
PyObject *tmp_assign_source_23;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_0baaa18942fac18d0a13e347e08109be;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_DSAPrivateKey;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_33;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_7;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3 = MAKE_CLASS_FRAME(tstate, code_objects_42ddf1818cb2dd011eaa0e2277df9436, module_cryptography$hazmat$primitives$asymmetric$dsa, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_3;
tmp_called_value_5 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_instance_3 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_abc);

if (tmp_called_instance_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_3 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_5 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__3_key_size(tstate, tmp_annotations_3);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3->m_frame.f_lineno = 35;
tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3->m_frame.f_lineno = 34;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_key_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_4;
tmp_called_instance_4 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_abc);

if (tmp_called_instance_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_4 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e5b6ae5652830d5f33a963376038fc7b);

tmp_args_element_value_6 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__4_public_key(tstate, tmp_annotations_4);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3->m_frame.f_lineno = 41;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_public_key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_5;
tmp_called_instance_5 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_abc);

if (tmp_called_instance_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_5 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_917f06b1d1b7dcf07f6a2760e78dfde7);

tmp_args_element_value_7 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__5_parameters(tstate, tmp_annotations_5);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3->m_frame.f_lineno = 47;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_parameters, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_6;
tmp_called_instance_6 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_abc);

if (tmp_called_instance_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_dda0d131d7dc0e51773eed43637eed97);

tmp_args_element_value_8 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__6_sign(tstate, tmp_annotations_6);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3->m_frame.f_lineno = 53;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_sign, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_7;
tmp_called_instance_7 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_abc);

if (tmp_called_instance_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_7 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_1dfc0f687b98e0cab6eb3eb70cedd75f);

tmp_args_element_value_9 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__7_private_numbers(tstate, tmp_annotations_7);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3->m_frame.f_lineno = 63;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_private_numbers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_8;
tmp_called_instance_8 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_abc);

if (tmp_called_instance_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_8 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4);

tmp_args_element_value_10 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__8_private_bytes(tstate, tmp_annotations_8);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3->m_frame.f_lineno = 69;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain_private_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_7;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_DSAPrivateKey;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 33;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_24;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_23 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_23);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33);
locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33);
locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__2_DSAPrivateKey_33 = NULL;
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
exception_lineno = 33;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPrivateKey, tmp_assign_source_23);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$DSAPrivateKey(tstate);
if (unlikely(tmp_assign_source_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DSAPrivateKey);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPrivateKeyWithSerialization, tmp_assign_source_25);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
tmp_expression_value_16 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$DSAPrivateKey(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DSAPrivateKey);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_register);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_expression_value_18 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$rust_openssl(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_dsa);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_DSAPrivateKey);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 82;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_19;
tmp_dict_key_3 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_19 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto try_except_handler_8;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
tmp_assign_source_26 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
bool tmp_condition_result_9;
PyObject *tmp_key_value_7;
PyObject *tmp_dict_arg_value_7;
PyObject *tmp_dict_arg_value_8;
PyObject *tmp_key_value_8;
tmp_key_value_7 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dict_arg_value_7 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_7, tmp_key_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dict_arg_value_8 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_key_value_8 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_27 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_8, tmp_key_value_8);
if (tmp_assign_source_27 == NULL) {
    tmp_assign_source_27 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_27);
}
assert(!(tmp_assign_source_27 == NULL));
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_27 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_27);
condexpr_end_3:;
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_27;
}
{
bool tmp_condition_result_10;
PyObject *tmp_key_value_9;
PyObject *tmp_dict_arg_value_9;
tmp_key_value_9 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dict_arg_value_9 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_9, tmp_key_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_3__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
branch_no_7:;
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_5;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
tmp_args_value_5 = mod_consts.const_tuple_str_plain_DSAPublicKey_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 85;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_28;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_7, tmp_default_value_3);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_3 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 85;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 85;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_9:;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_29;
}
branch_end_8:;
{
PyObject *tmp_assign_source_30;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_0baaa18942fac18d0a13e347e08109be;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_DSAPublicKey;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_85;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_10;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4 = MAKE_CLASS_FRAME(tstate, code_objects_b6485cf057c63d90c5a848d29c016ac7, module_cryptography$hazmat$primitives$asymmetric$dsa, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4) == 2);

// Framed code:
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_9;
tmp_called_value_9 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_called_instance_9 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_9 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_instance_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_13 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__9_key_size(tstate, tmp_annotations_9);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4->m_frame.f_lineno = 87;
tmp_args_element_value_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_instance_9);
Py_DECREF(tmp_called_instance_9);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4->m_frame.f_lineno = 86;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain_key_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_instance_10;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_10;
tmp_called_instance_10 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_10 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_instance_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_917f06b1d1b7dcf07f6a2760e78dfde7);

tmp_args_element_value_14 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__10_parameters(tstate, tmp_annotations_10);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4->m_frame.f_lineno = 93;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_instance_10);
Py_DECREF(tmp_called_instance_10);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain_parameters, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_instance_11;
PyObject *tmp_args_element_value_15;
PyObject *tmp_annotations_11;
tmp_called_instance_11 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_11 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_instance_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_a1a2bdab2d3c10756ab90943f05a43e9);

tmp_args_element_value_15 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__11_public_numbers(tstate, tmp_annotations_11);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4->m_frame.f_lineno = 99;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_instance_11);
Py_DECREF(tmp_called_instance_11);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain_public_numbers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_instance_12;
PyObject *tmp_args_element_value_16;
PyObject *tmp_annotations_12;
tmp_called_instance_12 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_12 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_instance_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095);

tmp_args_element_value_16 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__12_public_bytes(tstate, tmp_annotations_12);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4->m_frame.f_lineno = 105;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_instance_12);
Py_DECREF(tmp_called_instance_12);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain_public_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_instance_13;
PyObject *tmp_args_element_value_17;
PyObject *tmp_annotations_13;
tmp_called_instance_13 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_13 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_instance_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_ea71eebeca8b0380bbb1b9e5124b1b88);

tmp_args_element_value_17 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__13_verify(tstate, tmp_annotations_13);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4->m_frame.f_lineno = 115;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_13, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_instance_13);
Py_DECREF(tmp_called_instance_13);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain_verify, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_instance_14;
PyObject *tmp_args_element_value_18;
PyObject *tmp_annotations_14;
tmp_called_instance_14 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_14 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$abc(tstate);
if (unlikely(tmp_called_instance_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_instance_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);

tmp_args_element_value_18 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__14___eq__(tstate, tmp_annotations_14);

frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4->m_frame.f_lineno = 126;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_14, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_instance_14);
Py_DECREF(tmp_called_instance_14);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_10;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_10;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_DSAPublicKey;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 85;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_31;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_30 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_30);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85);
locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85);
locals_cryptography$hazmat$primitives$asymmetric$dsa$$$class__3_DSAPublicKey_85 = NULL;
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
exception_lineno = 85;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPublicKey, tmp_assign_source_30);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$DSAPublicKey(tstate);
if (unlikely(tmp_assign_source_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DSAPublicKey);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPublicKeyWithSerialization, tmp_assign_source_32);
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_25;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
tmp_expression_value_25 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$DSAPublicKey(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DSAPublicKey);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;

    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain_register);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto frame_exception_exit_1;
}
tmp_expression_value_27 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$rust_openssl(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 134;

    goto frame_exception_exit_1;
}
tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_dsa);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 134;

    goto frame_exception_exit_1;
}
tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_DSAPublicKey);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 134;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame.f_lineno = 134;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
tmp_expression_value_29 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$rust_openssl(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;

    goto frame_exception_exit_1;
}
tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_dsa);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto frame_exception_exit_1;
}
tmp_assign_source_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_DSAPrivateNumbers);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPrivateNumbers, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
tmp_expression_value_31 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$rust_openssl(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;

    goto frame_exception_exit_1;
}
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_dsa);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto frame_exception_exit_1;
}
tmp_assign_source_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_DSAPublicNumbers);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAPublicNumbers, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
tmp_expression_value_33 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$dsa$rust_openssl(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;

    goto frame_exception_exit_1;
}
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_dsa);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto frame_exception_exit_1;
}
tmp_assign_source_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_DSAParameterNumbers);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DSAParameterNumbers, tmp_assign_source_35);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$dsa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$dsa, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$dsa);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_15;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_95727427722e04bc420a6ca81e605085);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_36 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__15_generate_parameters(tstate, tmp_defaults_1, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_parameters, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_16;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_44af15e17938348341c65616aae48ce3);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_37 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$dsa$$$function__16_generate_private_key(tstate, tmp_defaults_2, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_private_key, tmp_assign_source_37);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("cryptography$hazmat$primitives$asymmetric$dsa", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.primitives.asymmetric.dsa" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_cryptography$hazmat$primitives$asymmetric$dsa);
    return module_cryptography$hazmat$primitives$asymmetric$dsa;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$dsa, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("cryptography$hazmat$primitives$asymmetric$dsa", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'google$auth$crypt$_python_rsa'
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



/* The "module_google$auth$crypt$_python_rsa" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$crypt$_python_rsa;
PyDictObject *moduledict_google$auth$crypt$_python_rsa;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e;
PyObject *const_int_pos_8;
PyObject *const_str_plain__POW2;
PyObject *const_str_plain_byte_vals;
PyObject *const_str_plain_append;
PyObject *const_str_digest_5c2aeda62c7ccf963c278663237621dd;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_af9e385751b86062e286eb411dbdbc18;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_plain__warning_msg;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_int_pos_2;
PyObject *const_tuple_str_plain_category_str_plain_stacklevel_tuple;
PyObject *const_str_plain__pubkey;
PyObject *const_str_plain__helpers;
PyObject *const_str_plain_to_bytes;
PyObject *const_str_plain_rsa;
PyObject *const_str_plain_pkcs1;
PyObject *const_str_plain_verify;
PyObject *const_str_plain_VerificationError;
PyObject *const_str_plain__CERTIFICATE_MARKER;
PyObject *const_str_plain_pem;
PyObject *const_str_plain_load_pem;
PyObject *const_str_plain_CERTIFICATE;
PyObject *const_str_plain_decoder;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_Certificate;
PyObject *const_tuple_str_plain_asn1Spec_tuple;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_InvalidValue;
PyObject *const_str_digest_3abae97ff508781b0efc0eb33745e42c;
PyObject *const_str_plain_tbsCertificate;
PyObject *const_str_plain_subjectPublicKeyInfo;
PyObject *const_str_plain__bit_list_to_bytes;
PyObject *const_str_plain_subjectPublicKey;
PyObject *const_str_plain_PublicKey;
PyObject *const_str_plain_load_pkcs1;
PyObject *const_str_plain_DER;
PyObject *const_str_plain_PEM;
PyObject *const_str_digest_91b0abfb1706c36201f6c7d81a22c13c;
PyObject *const_str_plain__key;
PyObject *const_str_plain__key_id;
PyObject *const_str_plain_sign;
PyObject *const_str_digest_1e080f858ef601c43605cc71a556333d;
PyObject *const_str_plain_from_bytes;
PyObject *const_str_plain_readPemBlocksFromFile;
PyObject *const_str_plain_StringIO;
PyObject *const_str_plain__PKCS1_MARKER;
PyObject *const_str_plain__PKCS8_MARKER;
PyObject *const_str_plain_key;
PyObject *const_str_plain_PrivateKey;
PyObject *const_dict_f3d7fe3507922dabbc7806c0e0a78179;
PyObject *const_str_plain__PKCS8_SPEC;
PyObject *const_str_plain_getComponentByName;
PyObject *const_tuple_str_plain_privateKey_tuple;
PyObject *const_str_plain_asOctets;
PyObject *const_str_plain_MalformedError;
PyObject *const_tuple_str_digest_cbc60aab7a6cdb6e547a1a7e2aeb3237_tuple;
PyObject *const_tuple_str_plain_key_id_tuple;
PyObject *const_str_digest_3aee3ad0d424fce10ce83443cbc5af79;
PyObject *const_str_digest_d535c7ab39558e7507bc5f1f0715aa84;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_absolute_import;
PyObject *const_str_plain_io;
PyObject *const_str_digest_989622ccef88eb949be48370a129282e;
PyObject *const_tuple_str_plain_decoder_tuple;
PyObject *const_str_plain_pyasn1_modules;
PyObject *const_tuple_str_plain_pem_tuple;
PyObject *const_str_digest_b83d619ed514569b08445bc5b0371ab4;
PyObject *const_tuple_str_plain_Certificate_tuple;
PyObject *const_str_digest_8947bd4d08ec292fb8cc06cd2bed3bd5;
PyObject *const_tuple_str_plain_PrivateKeyInfo_tuple;
PyObject *const_str_plain_PrivateKeyInfo;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__helpers_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7;
PyObject *const_tuple_str_plain_base_tuple;
PyObject *const_str_plain_base;
PyObject *const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple;
PyObject *const_bytes_digest_aa03b53f00f09b71d5b8d2120793323c;
PyObject *const_tuple_4155d13b440c6fad27842a27d920b50c_tuple;
PyObject *const_tuple_559e0b39a91f9272e569fe7bdbca06c5_tuple;
PyObject *const_str_digest_379abdd8182b86a799894bdea505aaf3;
PyObject *const_str_plain_Verifier;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_RSAVerifier;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_ea5880beef39624554d92803beb06d56;
PyObject *const_str_digest_e56e0c21d8e966d45181e2fdcd6c3940;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_70;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_8356d3653fb8d7ca0ffa8a00b5517d29;
PyObject *const_str_plain_copy_docstring;
PyObject *const_str_digest_5ec2f387337fc91a58a7e83b73f7e3ae;
PyObject *const_str_plain_from_string;
PyObject *const_str_digest_9c44944f10b3a0c62541431e4060deac;
PyObject *const_tuple_str_plain__pubkey_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_Signer;
PyObject *const_str_plain_FromServiceAccountMixin;
PyObject *const_str_plain_RSASigner;
PyObject *const_str_digest_ef183f69a48bfc9e5d870cfd99924b37;
PyObject *const_int_pos_131;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_229b3442d31158e0ec91b3d232bd8be4;
PyObject *const_str_plain_property;
PyObject *const_str_plain_key_id;
PyObject *const_str_digest_ca9e7119ef5dfbd5dd8f6030a4e66050;
PyObject *const_str_digest_21e8bd7873f5910f4273a1a0227d26fd;
PyObject *const_str_digest_92399f4b92af0050703037f558be65d1;
PyObject *const_tuple_str_plain__key_str_plain__key_id_tuple;
PyObject *const_str_digest_0b17bd753c73b25db141edff869ae153;
PyObject *const_tuple_e3cc7f81b678bf3f0426d2af34be19b9_tuple;
PyObject *const_str_digest_7e9c4329dbc7acc3318202faa5ab050f;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_private_key_str_plain_key_id_tuple;
PyObject *const_tuple_str_plain_self_str_plain_public_key_tuple;
PyObject *const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple;
PyObject *const_tuple_95eb871511eb683d3c2db3c9bc0586f9_tuple;
PyObject *const_tuple_34c19e1a075433da9a839015964dceb9_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_message_tuple;
PyObject *const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[130];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.crypt._python_rsa"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__POW2);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_byte_vals);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c2aeda62c7ccf963c278663237621dd);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_af9e385751b86062e286eb411dbdbc18);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__warning_msg);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__pubkey);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_bytes);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_pkcs1);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_VerificationError);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__CERTIFICATE_MARKER);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_pem);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_CERTIFICATE);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_decoder);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Certificate);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asn1Spec_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_3abae97ff508781b0efc0eb33745e42c);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_tbsCertificate);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_subjectPublicKeyInfo);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__bit_list_to_bytes);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_subjectPublicKey);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_PublicKey);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_pkcs1);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_DER);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_PEM);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_91b0abfb1706c36201f6c7d81a22c13c);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__key);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__key_id);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_sign);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_bytes);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_readPemBlocksFromFile);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_StringIO);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__PKCS1_MARKER);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__PKCS8_MARKER);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateKey);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_dict_f3d7fe3507922dabbc7806c0e0a78179);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__PKCS8_SPEC);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_getComponentByName);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_privateKey_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_asOctets);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_MalformedError);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_cbc60aab7a6cdb6e547a1a7e2aeb3237_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_id_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_3aee3ad0d424fce10ce83443cbc5af79);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_d535c7ab39558e7507bc5f1f0715aa84);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_absolute_import);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_989622ccef88eb949be48370a129282e);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_decoder_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_pyasn1_modules);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pem_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_b83d619ed514569b08445bc5b0371ab4);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Certificate_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_8947bd4d08ec292fb8cc06cd2bed3bd5);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PrivateKeyInfo_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateKeyInfo);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_base_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_base);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_aa03b53f00f09b71d5b8d2120793323c);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_4155d13b440c6fad27842a27d920b50c_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_559e0b39a91f9272e569fe7bdbca06c5_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_379abdd8182b86a799894bdea505aaf3);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_Verifier);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSAVerifier);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea5880beef39624554d92803beb06d56);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_e56e0c21d8e966d45181e2fdcd6c3940);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_int_pos_70);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_8356d3653fb8d7ca0ffa8a00b5517d29);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ec2f387337fc91a58a7e83b73f7e3ae);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_string);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c44944f10b3a0c62541431e4060deac);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__pubkey_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_Signer);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_FromServiceAccountMixin);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSASigner);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef183f69a48bfc9e5d870cfd99924b37);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_int_pos_131);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_229b3442d31158e0ec91b3d232bd8be4);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_id);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca9e7119ef5dfbd5dd8f6030a4e66050);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_21e8bd7873f5910f4273a1a0227d26fd);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_92399f4b92af0050703037f558be65d1);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__key_str_plain__key_id_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b17bd753c73b25db141edff869ae153);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_e3cc7f81b678bf3f0426d2af34be19b9_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e9c4329dbc7acc3318202faa5ab050f);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_private_key_str_plain_key_id_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_public_key_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_95eb871511eb683d3c2db3c9bc0586f9_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_34c19e1a075433da9a839015964dceb9_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple);
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
void checkModuleConstants_google$auth$crypt$_python_rsa(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e));
CHECK_OBJECT_DEEP(mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__POW2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__POW2);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_byte_vals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byte_vals);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c2aeda62c7ccf963c278663237621dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c2aeda62c7ccf963c278663237621dd);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_af9e385751b86062e286eb411dbdbc18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af9e385751b86062e286eb411dbdbc18);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__warning_msg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__warning_msg);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__pubkey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pubkey);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_bytes);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rsa);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_pkcs1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pkcs1);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verify);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_VerificationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VerificationError);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__CERTIFICATE_MARKER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CERTIFICATE_MARKER);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_pem));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pem);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_pem);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_CERTIFICATE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CERTIFICATE);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_decoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decoder);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Certificate);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asn1Spec_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_asn1Spec_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidValue);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_3abae97ff508781b0efc0eb33745e42c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3abae97ff508781b0efc0eb33745e42c);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_tbsCertificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tbsCertificate);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_subjectPublicKeyInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subjectPublicKeyInfo);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__bit_list_to_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__bit_list_to_bytes);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_subjectPublicKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subjectPublicKey);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_PublicKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PublicKey);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_pkcs1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_pkcs1);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_DER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DER);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_PEM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PEM);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_91b0abfb1706c36201f6c7d81a22c13c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91b0abfb1706c36201f6c7d81a22c13c);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__key);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__key_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__key_id);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_sign));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sign);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_bytes);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_readPemBlocksFromFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readPemBlocksFromFile);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_StringIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StringIO);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__PKCS1_MARKER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__PKCS1_MARKER);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__PKCS8_MARKER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__PKCS8_MARKER);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PrivateKey);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_dict_f3d7fe3507922dabbc7806c0e0a78179));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f3d7fe3507922dabbc7806c0e0a78179);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__PKCS8_SPEC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__PKCS8_SPEC);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_getComponentByName));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getComponentByName);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_privateKey_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_privateKey_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_asOctets));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asOctets);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_MalformedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MalformedError);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_cbc60aab7a6cdb6e547a1a7e2aeb3237_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_cbc60aab7a6cdb6e547a1a7e2aeb3237_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_id_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_3aee3ad0d424fce10ce83443cbc5af79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3aee3ad0d424fce10ce83443cbc5af79);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_d535c7ab39558e7507bc5f1f0715aa84));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d535c7ab39558e7507bc5f1f0715aa84);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_absolute_import));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_absolute_import);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_io));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_io);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_989622ccef88eb949be48370a129282e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_989622ccef88eb949be48370a129282e);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_decoder_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_decoder_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_pyasn1_modules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pyasn1_modules);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pem_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pem_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_b83d619ed514569b08445bc5b0371ab4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b83d619ed514569b08445bc5b0371ab4);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Certificate_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Certificate_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_8947bd4d08ec292fb8cc06cd2bed3bd5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8947bd4d08ec292fb8cc06cd2bed3bd5);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PrivateKeyInfo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PrivateKeyInfo_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateKeyInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PrivateKeyInfo);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_base_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_base_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_aa03b53f00f09b71d5b8d2120793323c));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_aa03b53f00f09b71d5b8d2120793323c);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_4155d13b440c6fad27842a27d920b50c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4155d13b440c6fad27842a27d920b50c_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_559e0b39a91f9272e569fe7bdbca06c5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_559e0b39a91f9272e569fe7bdbca06c5_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_379abdd8182b86a799894bdea505aaf3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_379abdd8182b86a799894bdea505aaf3);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_Verifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Verifier);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSAVerifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RSAVerifier);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea5880beef39624554d92803beb06d56));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea5880beef39624554d92803beb06d56);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_e56e0c21d8e966d45181e2fdcd6c3940));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e56e0c21d8e966d45181e2fdcd6c3940);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_int_pos_70));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_70);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_8356d3653fb8d7ca0ffa8a00b5517d29));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8356d3653fb8d7ca0ffa8a00b5517d29);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy_docstring);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ec2f387337fc91a58a7e83b73f7e3ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ec2f387337fc91a58a7e83b73f7e3ae);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_string);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c44944f10b3a0c62541431e4060deac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c44944f10b3a0c62541431e4060deac);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__pubkey_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__pubkey_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_Signer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Signer);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_FromServiceAccountMixin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FromServiceAccountMixin);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSASigner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RSASigner);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef183f69a48bfc9e5d870cfd99924b37));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef183f69a48bfc9e5d870cfd99924b37);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_int_pos_131));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_131);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_229b3442d31158e0ec91b3d232bd8be4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_229b3442d31158e0ec91b3d232bd8be4);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_id);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca9e7119ef5dfbd5dd8f6030a4e66050));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca9e7119ef5dfbd5dd8f6030a4e66050);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_21e8bd7873f5910f4273a1a0227d26fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21e8bd7873f5910f4273a1a0227d26fd);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_92399f4b92af0050703037f558be65d1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_92399f4b92af0050703037f558be65d1);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__key_str_plain__key_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__key_str_plain__key_id_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b17bd753c73b25db141edff869ae153));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b17bd753c73b25db141edff869ae153);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_e3cc7f81b678bf3f0426d2af34be19b9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e3cc7f81b678bf3f0426d2af34be19b9_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e9c4329dbc7acc3318202faa5ab050f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e9c4329dbc7acc3318202faa5ab050f);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_private_key_str_plain_key_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_private_key_str_plain_key_id_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_public_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_public_key_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_95eb871511eb683d3c2db3c9bc0586f9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_95eb871511eb683d3c2db3c9bc0586f9_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_34c19e1a075433da9a839015964dceb9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_34c19e1a075433da9a839015964dceb9_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_message_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple);
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
static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$Certificate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_Certificate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Certificate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Certificate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Certificate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Certificate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_Certificate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_Certificate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Certificate);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$PrivateKeyInfo(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_PrivateKeyInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PrivateKeyInfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PrivateKeyInfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PrivateKeyInfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PrivateKeyInfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_PrivateKeyInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_PrivateKeyInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PrivateKeyInfo);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$_CERTIFICATE_MARKER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__CERTIFICATE_MARKER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CERTIFICATE_MARKER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CERTIFICATE_MARKER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CERTIFICATE_MARKER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CERTIFICATE_MARKER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__CERTIFICATE_MARKER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__CERTIFICATE_MARKER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CERTIFICATE_MARKER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$_PKCS1_MARKER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS1_MARKER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PKCS1_MARKER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PKCS1_MARKER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PKCS1_MARKER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PKCS1_MARKER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS1_MARKER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS1_MARKER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS1_MARKER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$_PKCS8_MARKER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS8_MARKER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PKCS8_MARKER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PKCS8_MARKER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PKCS8_MARKER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PKCS8_MARKER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS8_MARKER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS8_MARKER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS8_MARKER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$_PKCS8_SPEC(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS8_SPEC);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PKCS8_SPEC);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PKCS8_SPEC, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PKCS8_SPEC);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PKCS8_SPEC, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS8_SPEC);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS8_SPEC);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS8_SPEC);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$_POW2(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__POW2);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__POW2);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__POW2, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__POW2);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__POW2, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__POW2);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__POW2);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__POW2);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$_bit_list_to_bytes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__bit_list_to_bytes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__bit_list_to_bytes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__bit_list_to_bytes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__bit_list_to_bytes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__bit_list_to_bytes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__bit_list_to_bytes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__bit_list_to_bytes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__bit_list_to_bytes);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__helpers);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__helpers, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__helpers);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__helpers, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$_warning_msg(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__warning_msg);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__warning_msg);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__warning_msg, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__warning_msg);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__warning_msg, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__warning_msg);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__warning_msg);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__warning_msg);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$base(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_base);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_base);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_base);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_base);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$decoder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_decoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_decoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_decoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_decoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_decoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_decoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_decoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_decoder);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exceptions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exceptions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exceptions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exceptions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$pem(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_pem);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pem);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pem, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pem);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pem, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_pem);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_pem);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pem);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$rsa(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$_python_rsa$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$_python_rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$_python_rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$_python_rsa->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_c7666450607cb606b7b96511b57fd4a4;
static PyCodeObject *code_objects_0cfa5dcefd14c769f6c5643f9d5ef062;
static PyCodeObject *code_objects_1acec9ed9f184c8eb44d9ec30b4a2bd1;
static PyCodeObject *code_objects_575924ba13369a968cabac0c4de4e5f4;
static PyCodeObject *code_objects_30491ae7be5d1b98c906c628c2cf2b1c;
static PyCodeObject *code_objects_5064f6a154a0cd53efa9e9a25584613e;
static PyCodeObject *code_objects_2c8d7e211370fa85b563addc9723c88c;
static PyCodeObject *code_objects_de0c4d25927a562b4a9d2cb98b34901b;
static PyCodeObject *code_objects_93983a26ad75b22262eebdcc8b138565;
static PyCodeObject *code_objects_9b6dcdc8a508deebe0309b7cb2bccce5;
static PyCodeObject *code_objects_c911af9345188c4286979e2caa47c8f6;
static PyCodeObject *code_objects_42ccc2be8da0e1c6af303d220ba4f530;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0b17bd753c73b25db141edff869ae153); CHECK_OBJECT(module_filename_obj);
code_objects_c7666450607cb606b7b96511b57fd4a4 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_af9e385751b86062e286eb411dbdbc18, mod_consts.const_tuple_e3cc7f81b678bf3f0426d2af34be19b9_tuple, NULL, 1, 0, 0);
code_objects_0cfa5dcefd14c769f6c5643f9d5ef062 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_7e9c4329dbc7acc3318202faa5ab050f, mod_consts.const_str_digest_7e9c4329dbc7acc3318202faa5ab050f, NULL, NULL, 0, 0, 0);
code_objects_1acec9ed9f184c8eb44d9ec30b4a2bd1 = MAKE_CODE_OBJECT(module_filename_obj, 131, 0, mod_consts.const_str_plain_RSASigner, mod_consts.const_str_plain_RSASigner, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_575924ba13369a968cabac0c4de4e5f4 = MAKE_CODE_OBJECT(module_filename_obj, 70, 0, mod_consts.const_str_plain_RSAVerifier, mod_consts.const_str_plain_RSAVerifier, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_30491ae7be5d1b98c906c628c2cf2b1c = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_229b3442d31158e0ec91b3d232bd8be4, mod_consts.const_tuple_str_plain_self_str_plain_private_key_str_plain_key_id_tuple, NULL, 3, 0, 0);
code_objects_5064f6a154a0cd53efa9e9a25584613e = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_8356d3653fb8d7ca0ffa8a00b5517d29, mod_consts.const_tuple_str_plain_self_str_plain_public_key_tuple, NULL, 2, 0, 0);
code_objects_2c8d7e211370fa85b563addc9723c88c = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__bit_list_to_bytes, mod_consts.const_str_plain__bit_list_to_bytes, mod_consts.const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple, NULL, 1, 0, 0);
code_objects_de0c4d25927a562b4a9d2cb98b34901b = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_from_string, mod_consts.const_str_digest_92399f4b92af0050703037f558be65d1, mod_consts.const_tuple_95eb871511eb683d3c2db3c9bc0586f9_tuple, NULL, 3, 0, 0);
code_objects_93983a26ad75b22262eebdcc8b138565 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_from_string, mod_consts.const_str_digest_9c44944f10b3a0c62541431e4060deac, mod_consts.const_tuple_34c19e1a075433da9a839015964dceb9_tuple, NULL, 2, 0, 0);
code_objects_9b6dcdc8a508deebe0309b7cb2bccce5 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_key_id, mod_consts.const_str_digest_ca9e7119ef5dfbd5dd8f6030a4e66050, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c911af9345188c4286979e2caa47c8f6 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_sign, mod_consts.const_str_digest_21e8bd7873f5910f4273a1a0227d26fd, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple, NULL, 2, 0, 0);
code_objects_42ccc2be8da0e1c6af303d220ba4f530 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_verify, mod_consts.const_str_digest_5ec2f387337fc91a58a7e83b73f7e3ae, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__2___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__3_verify(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__4_from_string(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__5___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__6_key_id(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__7_sign(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__8_from_string(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_bit_list = python_pars[0];
PyObject *var_num_bits = NULL;
PyObject *var_byte_vals = NULL;
PyObject *var_start = NULL;
PyObject *var_curr_bits = NULL;
PyObject *var_char_val = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes = MAKE_FUNCTION_FRAME(tstate, code_objects_2c8d7e211370fa85b563addc9723c88c, module_google$auth$crypt$_python_rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes->m_type_description == NULL);
frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes = cache_frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes);
assert(Py_REFCNT(frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_bit_list);
tmp_len_arg_1 = par_bit_list;
tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_num_bits == NULL);
var_num_bits = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = BYTEARRAY_COPY(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
assert(var_byte_vals == NULL);
var_byte_vals = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_xrange_step_1;
tmp_xrange_low_1 = const_int_0;
CHECK_OBJECT(var_num_bits);
tmp_xrange_high_1 = var_num_bits;
tmp_xrange_step_1 = mod_consts.const_int_pos_8;
tmp_iter_arg_1 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooo";
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
tmp_assign_source_4 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 63;
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
    PyObject *old = var_start;
    var_start = tmp_assign_source_5;
    Py_INCREF(var_start);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_bit_list);
tmp_expression_value_1 = par_bit_list;
CHECK_OBJECT(var_start);
tmp_start_value_1 = var_start;
CHECK_OBJECT(var_start);
tmp_add_expr_left_1 = var_start;
tmp_add_expr_right_1 = mod_consts.const_int_pos_8;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_curr_bits;
    var_curr_bits = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_sum_sequence_1;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = (PyObject *)&PyZip_Type;
tmp_args_element_value_1 = module_var_accessor_google$auth$crypt$_python_rsa$_POW2(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__POW2);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_curr_bits);
tmp_args_element_value_2 = var_curr_bits;
frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes->m_frame.f_lineno = 65;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_sum_sequence_1 = MAKE_GENERATOR_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_assign_source_7 = BUILTIN_SUM1(tstate, tmp_sum_sequence_1);
CHECK_OBJECT(tmp_sum_sequence_1);
Py_DECREF(tmp_sum_sequence_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_char_val;
    var_char_val = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
if (var_byte_vals == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byte_vals);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 66;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = var_byte_vals;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_append);
assert(!(tmp_called_value_2 == NULL));
CHECK_OBJECT(var_char_val);
tmp_args_element_value_3 = var_char_val;
frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes->m_frame.f_lineno = 66;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooo";
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
{
PyObject *tmp_bytes_arg_1;
if (var_byte_vals == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byte_vals);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_bytes_arg_1 = var_byte_vals;
tmp_return_value = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes,
    type_description_1,
    par_bit_list,
    var_num_bits,
    var_byte_vals,
    var_start,
    var_curr_bits,
    var_char_val
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes == cache_frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes);
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_num_bits);
CHECK_OBJECT(var_num_bits);
Py_DECREF(var_num_bits);
var_num_bits = NULL;
Py_XDECREF(var_byte_vals);
var_byte_vals = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_curr_bits);
var_curr_bits = NULL;
Py_XDECREF(var_char_val);
var_char_val = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_num_bits);
var_num_bits = NULL;
Py_XDECREF(var_byte_vals);
var_byte_vals = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_curr_bits);
var_curr_bits = NULL;
Py_XDECREF(var_char_val);
var_char_val = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_bit_list);
Py_DECREF(par_bit_list);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_bit_list);
Py_DECREF(par_bit_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes$$$genexpr__1_genexpr_locals {
PyObject *var_val;
PyObject *var_digit;
PyObject *tmp_iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes$$$genexpr__1_genexpr_locals *generator_heap = (struct google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_val = NULL;
generator_heap->var_digit = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c7666450607cb606b7b96511b57fd4a4, module_google$auth$crypt$_python_rsa, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noo";
generator_heap->exception_lineno = 65;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_val;
    generator_heap->var_val = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_val);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_digit;
    generator_heap->var_digit = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_digit);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_val);
tmp_mult_expr_left_1 = generator_heap->var_val;
CHECK_OBJECT(generator_heap->var_digit);
tmp_mult_expr_right_1 = generator_heap->var_digit;
tmp_expression_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_mult_expr_left_1, sizeof(PyObject *), &tmp_mult_expr_right_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_mult_expr_left_1, sizeof(PyObject *), &tmp_mult_expr_right_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

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
    generator_heap->var_val,
    generator_heap->var_digit
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
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_val);
generator_heap->var_val = NULL;
Py_XDECREF(generator_heap->var_digit);
generator_heap->var_digit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_val);
generator_heap->var_val = NULL;
Py_XDECREF(generator_heap->var_digit);
generator_heap->var_digit = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes$$$genexpr__1_genexpr_context,
        module_google$auth$crypt$_python_rsa,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_af9e385751b86062e286eb411dbdbc18,
#endif
        code_objects_c7666450607cb606b7b96511b57fd4a4,
        closure,
        1,
#if 1
        sizeof(struct google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$crypt$_python_rsa$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_public_key = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5064f6a154a0cd53efa9e9a25584613e, module_google$auth$crypt$_python_rsa, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__->m_type_description == NULL);
frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__ = cache_frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__);
assert(Py_REFCNT(frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_1 = module_var_accessor_google$auth$crypt$_python_rsa$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = module_var_accessor_google$auth$crypt$_python_rsa$_warning_msg(tstate);
if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__warning_msg);
}

if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 84;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = module_var_accessor_google$auth$crypt$_python_rsa$DeprecationWarning(tstate);
if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 85;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = mod_consts.const_int_pos_2;
frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__->m_frame.f_lineno = 83;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_public_key);
tmp_assattr_value_1 = par_public_key;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__pubkey, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__,
    type_description_1,
    par_self,
    par_public_key
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__ == cache_frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__);
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$_python_rsa$$$function__2___init__);

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
CHECK_OBJECT(par_public_key);
Py_DECREF(par_public_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_public_key);
Py_DECREF(par_public_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$crypt$_python_rsa$$$function__3_verify(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *par_signature = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify = MAKE_FUNCTION_FRAME(tstate, code_objects_42ccc2be8da0e1c6af303d220ba4f530, module_google$auth$crypt$_python_rsa, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify->m_type_description == NULL);
frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify = cache_frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify);
assert(Py_REFCNT(frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$auth$crypt$_python_rsa$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify->m_frame.f_lineno = 92;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_bytes, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_message;
    assert(old != NULL);
    par_message = tmp_assign_source_1;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_google$auth$crypt$_python_rsa$rsa(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pkcs1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_verify);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_2 = par_message;
CHECK_OBJECT(par_signature);
tmp_args_element_value_3 = par_signature;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__pubkey);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 94;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify->m_frame.f_lineno = 94;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_tuple_element_1 = PyExc_ValueError;
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_expression_value_5 = module_var_accessor_google$auth$crypt$_python_rsa$rsa(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_pkcs1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_VerificationError);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 93;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify->m_frame)) {
        frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify,
    type_description_1,
    par_self,
    par_message,
    par_signature
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify == cache_frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify);
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$_python_rsa$$$function__3_verify);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_message);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
par_message = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_message);
par_message = NULL;
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
CHECK_OBJECT(par_signature);
Py_DECREF(par_signature);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_signature);
Py_DECREF(par_signature);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$crypt$_python_rsa$$$function__4_from_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_public_key = python_pars[1];
nuitka_bool var_is_x509_cert = NUITKA_BOOL_UNASSIGNED;
PyObject *var_der = NULL;
PyObject *var_asn1_cert = NULL;
PyObject *var_remaining = NULL;
PyObject *var_cert_info = NULL;
PyObject *var_key_bytes = NULL;
PyObject *var_pubkey = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string = MAKE_FUNCTION_FRAME(tstate, code_objects_93983a26ad75b22262eebdcc8b138565, module_google$auth$crypt$_python_rsa, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string->m_type_description == NULL);
frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string = cache_frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string);
assert(Py_REFCNT(frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$auth$crypt$_python_rsa$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_public_key);
tmp_args_element_value_1 = par_public_key;
frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string->m_frame.f_lineno = 113;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_bytes, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_public_key;
    assert(old != NULL);
    par_public_key = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_google$auth$crypt$_python_rsa$_CERTIFICATE_MARKER(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CERTIFICATE_MARKER);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_public_key);
tmp_cmp_expr_right_1 = par_public_key;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_is_x509_cert = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
assert(var_is_x509_cert != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_1 = var_is_x509_cert == NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_google$auth$crypt$_python_rsa$rsa(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pem);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_public_key);
tmp_args_element_value_2 = par_public_key;
tmp_args_element_value_3 = mod_consts.const_str_plain_CERTIFICATE;
frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string->m_frame.f_lineno = 118;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_load_pem,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
assert(var_der == NULL);
var_der = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_2;
tmp_expression_value_2 = module_var_accessor_google$auth$crypt$_python_rsa$decoder(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoder);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_1 = "ooboooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_decode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooboooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_der);
tmp_kw_call_arg_value_0_1 = var_der;
tmp_called_value_2 = module_var_accessor_google$auth$crypt$_python_rsa$Certificate(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Certificate);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 119;
type_description_1 = "ooboooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string->m_frame.f_lineno = 119;
tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 119;
type_description_1 = "ooboooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string->m_frame.f_lineno = 119;
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


exception_lineno = 119;
type_description_1 = "ooboooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooboooooo";
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



exception_lineno = 119;
type_description_1 = "ooboooooo";
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



exception_lineno = 119;
type_description_1 = "ooboooooo";
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



exception_lineno = 119;
type_description_1 = "ooboooooo";
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
assert(var_asn1_cert == NULL);
Py_INCREF(tmp_assign_source_7);
var_asn1_cert = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
assert(var_remaining == NULL);
Py_INCREF(tmp_assign_source_8);
var_remaining = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_remaining);
tmp_cmp_expr_left_2 = var_remaining;
tmp_cmp_expr_right_2 = const_bytes_empty;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooboooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_3 = module_var_accessor_google$auth$crypt$_python_rsa$exceptions(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_digest_3abae97ff508781b0efc0eb33745e42c;
CHECK_OBJECT(var_remaining);
tmp_args_element_value_5 = var_remaining;
frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string->m_frame.f_lineno = 121;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_raise_type_input_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_InvalidValue,
        call_args
    );
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 121;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooboooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_asn1_cert);
tmp_expression_value_4 = var_asn1_cert;
tmp_subscript_value_1 = mod_consts.const_str_plain_tbsCertificate;
tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_subjectPublicKeyInfo;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
assert(var_cert_info == NULL);
var_cert_info = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
tmp_called_value_3 = module_var_accessor_google$auth$crypt$_python_rsa$_bit_list_to_bytes(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__bit_list_to_bytes);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cert_info);
tmp_expression_value_5 = var_cert_info;
tmp_subscript_value_3 = mod_consts.const_str_plain_subjectPublicKey;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string->m_frame.f_lineno = 124;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
assert(var_key_bytes == NULL);
var_key_bytes = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_expression_value_6 = module_var_accessor_google$auth$crypt$_python_rsa$rsa(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_PublicKey);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key_bytes);
tmp_args_element_value_7 = var_key_bytes;
tmp_args_element_value_8 = mod_consts.const_str_plain_DER;
frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string->m_frame.f_lineno = 125;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_load_pkcs1,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
assert(var_pubkey == NULL);
var_pubkey = tmp_assign_source_11;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_expression_value_7 = module_var_accessor_google$auth$crypt$_python_rsa$rsa(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_PublicKey);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_public_key);
tmp_args_element_value_9 = par_public_key;
tmp_args_element_value_10 = mod_consts.const_str_plain_PEM;
frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string->m_frame.f_lineno = 127;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_12 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_load_pkcs1,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooboooooo";
    goto frame_exception_exit_1;
}
assert(var_pubkey == NULL);
var_pubkey = tmp_assign_source_12;
}
branch_end_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(par_cls);
tmp_called_value_4 = par_cls;
CHECK_OBJECT(var_pubkey);
tmp_args_element_value_11 = var_pubkey;
frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string->m_frame.f_lineno = 128;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_11);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooboooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string,
    type_description_1,
    par_cls,
    par_public_key,
    (int)var_is_x509_cert,
    var_der,
    var_asn1_cert,
    var_remaining,
    var_cert_info,
    var_key_bytes,
    var_pubkey
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string == cache_frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string);
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$_python_rsa$$$function__4_from_string);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_public_key);
CHECK_OBJECT(par_public_key);
Py_DECREF(par_public_key);
par_public_key = NULL;
assert(var_is_x509_cert != NUITKA_BOOL_UNASSIGNED);
var_is_x509_cert = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_der);
var_der = NULL;
Py_XDECREF(var_asn1_cert);
var_asn1_cert = NULL;
Py_XDECREF(var_remaining);
var_remaining = NULL;
Py_XDECREF(var_cert_info);
var_cert_info = NULL;
Py_XDECREF(var_key_bytes);
var_key_bytes = NULL;
CHECK_OBJECT(var_pubkey);
CHECK_OBJECT(var_pubkey);
Py_DECREF(var_pubkey);
var_pubkey = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_public_key);
par_public_key = NULL;
var_is_x509_cert = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_der);
var_der = NULL;
Py_XDECREF(var_asn1_cert);
var_asn1_cert = NULL;
Py_XDECREF(var_remaining);
var_remaining = NULL;
Py_XDECREF(var_cert_info);
var_cert_info = NULL;
Py_XDECREF(var_key_bytes);
var_key_bytes = NULL;
Py_XDECREF(var_pubkey);
var_pubkey = NULL;
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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$crypt$_python_rsa$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_private_key = python_pars[1];
PyObject *par_key_id = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_30491ae7be5d1b98c906c628c2cf2b1c, module_google$auth$crypt$_python_rsa, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__->m_type_description == NULL);
frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__ = cache_frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__);
assert(Py_REFCNT(frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_1 = module_var_accessor_google$auth$crypt$_python_rsa$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = module_var_accessor_google$auth$crypt$_python_rsa$_warning_msg(tstate);
if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__warning_msg);
}

if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 147;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = module_var_accessor_google$auth$crypt$_python_rsa$DeprecationWarning(tstate);
if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 148;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = mod_consts.const_int_pos_2;
frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__->m_frame.f_lineno = 146;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_private_key);
tmp_assattr_value_1 = par_private_key;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__key, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_key_id);
tmp_assattr_value_2 = par_key_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__key_id, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__,
    type_description_1,
    par_self,
    par_private_key,
    par_key_id
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__ == cache_frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__);
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$_python_rsa$$$function__5___init__);

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
CHECK_OBJECT(par_private_key);
Py_DECREF(par_private_key);
CHECK_OBJECT(par_key_id);
Py_DECREF(par_key_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_private_key);
Py_DECREF(par_private_key);
CHECK_OBJECT(par_key_id);
Py_DECREF(par_key_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$crypt$_python_rsa$$$function__6_key_id(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id = MAKE_FUNCTION_FRAME(tstate, code_objects_9b6dcdc8a508deebe0309b7cb2bccce5, module_google$auth$crypt$_python_rsa, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id->m_type_description == NULL);
frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id = cache_frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id);
assert(Py_REFCNT(frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__key_id);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id == cache_frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id);
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$_python_rsa$$$function__6_key_id);

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


static PyObject *impl_google$auth$crypt$_python_rsa$$$function__7_sign(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign = MAKE_FUNCTION_FRAME(tstate, code_objects_c911af9345188c4286979e2caa47c8f6, module_google$auth$crypt$_python_rsa, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign->m_type_description == NULL);
frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign = cache_frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign);
assert(Py_REFCNT(frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$auth$crypt$_python_rsa$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign->m_frame.f_lineno = 161;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_bytes, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_message;
    assert(old != NULL);
    par_message = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_2 = module_var_accessor_google$auth$crypt$_python_rsa$rsa(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pkcs1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sign);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_2 = par_message;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__key);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 162;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d;
frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign->m_frame.f_lineno = 162;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign,
    type_description_1,
    par_self,
    par_message
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign == cache_frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign);
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$_python_rsa$$$function__7_sign);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_message);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
par_message = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_message);
par_message = NULL;
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


static PyObject *impl_google$auth$crypt$_python_rsa$$$function__8_from_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_key_id = python_pars[2];
PyObject *var_marker_id = NULL;
PyObject *var_key_bytes = NULL;
PyObject *var_private_key = NULL;
PyObject *var_key_info = NULL;
PyObject *var_remaining = NULL;
PyObject *var_private_key_info = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string = MAKE_FUNCTION_FRAME(tstate, code_objects_de0c4d25927a562b4a9d2cb98b34901b, module_google$auth$crypt$_python_rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_type_description == NULL);
frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string = cache_frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string);
assert(Py_REFCNT(frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$auth$crypt$_python_rsa$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_frame.f_lineno = 179;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_from_bytes, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_key;
    assert(old != NULL);
    par_key = tmp_assign_source_1;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_1 = module_var_accessor_google$auth$crypt$_python_rsa$pem(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pem);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_readPemBlocksFromFile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_StringIO);
}
assert(!(tmp_called_value_2 == NULL));
CHECK_OBJECT(par_key);
tmp_args_element_value_3 = par_key;
frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_frame.f_lineno = 181;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 181;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_4 = module_var_accessor_google$auth$crypt$_python_rsa$_PKCS1_MARKER(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PKCS1_MARKER);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 181;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_5 = module_var_accessor_google$auth$crypt$_python_rsa$_PKCS8_MARKER(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PKCS8_MARKER);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 181;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_frame.f_lineno = 180;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooo";
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



exception_lineno = 180;
type_description_1 = "ooooooooo";
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



exception_lineno = 180;
type_description_1 = "ooooooooo";
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



exception_lineno = 180;
type_description_1 = "ooooooooo";
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
assert(var_marker_id == NULL);
Py_INCREF(tmp_assign_source_5);
var_marker_id = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_key_bytes == NULL);
Py_INCREF(tmp_assign_source_6);
var_key_bytes = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_marker_id);
tmp_cmp_expr_left_1 = var_marker_id;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_4 = module_var_accessor_google$auth$crypt$_python_rsa$rsa(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_key);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_PrivateKey);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_load_pkcs1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key_bytes);
tmp_tuple_element_1 = var_key_bytes;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f3d7fe3507922dabbc7806c0e0a78179);
frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_frame.f_lineno = 186;
tmp_assign_source_7 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_private_key == NULL);
var_private_key = tmp_assign_source_7;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_marker_id);
tmp_cmp_expr_left_2 = var_marker_id;
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_5 = module_var_accessor_google$auth$crypt$_python_rsa$decoder(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoder);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_decode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_key_bytes);
tmp_kw_call_arg_value_0_1 = var_key_bytes;
tmp_kw_call_dict_value_0_1 = module_var_accessor_google$auth$crypt$_python_rsa$_PKCS8_SPEC(tstate);
if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PKCS8_SPEC);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 189;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_frame.f_lineno = 189;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_asn1Spec_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
assert(var_key_info == NULL);
Py_INCREF(tmp_assign_source_11);
var_key_info = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
assert(var_remaining == NULL);
Py_INCREF(tmp_assign_source_12);
var_remaining = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_remaining);
tmp_cmp_expr_left_3 = var_remaining;
tmp_cmp_expr_right_3 = const_bytes_empty;
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_2 = module_var_accessor_google$auth$crypt$_python_rsa$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = mod_consts.const_str_digest_3abae97ff508781b0efc0eb33745e42c;
CHECK_OBJECT(var_remaining);
tmp_args_element_value_7 = var_remaining;
frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_frame.f_lineno = 191;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_raise_type_input_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_InvalidValue,
        call_args
    );
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 191;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_key_info);
tmp_called_instance_3 = var_key_info;
frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_frame.f_lineno = 192;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_getComponentByName,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_privateKey_tuple, 0)
);

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_private_key_info == NULL);
var_private_key_info = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_instance_4;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_8 = module_var_accessor_google$auth$crypt$_python_rsa$rsa(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_key);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_PrivateKey);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_load_pkcs1);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_private_key_info);
tmp_called_instance_4 = var_private_key_info;
frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_frame.f_lineno = 194;
tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_asOctets);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_f3d7fe3507922dabbc7806c0e0a78179);
frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_frame.f_lineno = 193;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_private_key == NULL);
var_private_key = tmp_assign_source_14;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = module_var_accessor_google$auth$crypt$_python_rsa$exceptions(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_frame.f_lineno = 197;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_MalformedError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_cbc60aab7a6cdb6e547a1a7e2aeb3237_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 197;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
CHECK_OBJECT(par_cls);
tmp_called_value_6 = par_cls;
CHECK_OBJECT(var_private_key);
tmp_kw_call_arg_value_0_2 = var_private_key;
CHECK_OBJECT(par_key_id);
tmp_kw_call_dict_value_0_2 = par_key_id;
frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_frame.f_lineno = 199;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_key_id_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string,
    type_description_1,
    par_cls,
    par_key,
    par_key_id,
    var_marker_id,
    var_key_bytes,
    var_private_key,
    var_key_info,
    var_remaining,
    var_private_key_info
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string == cache_frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string);
    cache_frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$_python_rsa$$$function__8_from_string);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_key);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
par_key = NULL;
CHECK_OBJECT(var_marker_id);
CHECK_OBJECT(var_marker_id);
Py_DECREF(var_marker_id);
var_marker_id = NULL;
CHECK_OBJECT(var_key_bytes);
CHECK_OBJECT(var_key_bytes);
Py_DECREF(var_key_bytes);
var_key_bytes = NULL;
CHECK_OBJECT(var_private_key);
CHECK_OBJECT(var_private_key);
Py_DECREF(var_private_key);
var_private_key = NULL;
Py_XDECREF(var_key_info);
var_key_info = NULL;
Py_XDECREF(var_remaining);
var_remaining = NULL;
Py_XDECREF(var_private_key_info);
var_private_key_info = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_key);
par_key = NULL;
Py_XDECREF(var_marker_id);
var_marker_id = NULL;
Py_XDECREF(var_key_bytes);
var_key_bytes = NULL;
Py_XDECREF(var_private_key);
var_private_key = NULL;
Py_XDECREF(var_key_info);
var_key_info = NULL;
Py_XDECREF(var_remaining);
var_remaining = NULL;
Py_XDECREF(var_private_key_info);
var_private_key_info = NULL;
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
CHECK_OBJECT(par_key_id);
Py_DECREF(par_key_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_key_id);
Py_DECREF(par_key_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes,
        mod_consts.const_str_plain__bit_list_to_bytes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2c8d7e211370fa85b563addc9723c88c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$_python_rsa,
        mod_consts.const_str_digest_5c2aeda62c7ccf963c278663237621dd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__2___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$_python_rsa$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8356d3653fb8d7ca0ffa8a00b5517d29,
#endif
        code_objects_5064f6a154a0cd53efa9e9a25584613e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$_python_rsa,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__3_verify(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$_python_rsa$$$function__3_verify,
        mod_consts.const_str_plain_verify,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5ec2f387337fc91a58a7e83b73f7e3ae,
#endif
        code_objects_42ccc2be8da0e1c6af303d220ba4f530,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$_python_rsa,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__4_from_string(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$_python_rsa$$$function__4_from_string,
        mod_consts.const_str_plain_from_string,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9c44944f10b3a0c62541431e4060deac,
#endif
        code_objects_93983a26ad75b22262eebdcc8b138565,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$_python_rsa,
        mod_consts.const_str_digest_91b0abfb1706c36201f6c7d81a22c13c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__5___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$_python_rsa$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_229b3442d31158e0ec91b3d232bd8be4,
#endif
        code_objects_30491ae7be5d1b98c906c628c2cf2b1c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$_python_rsa,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__6_key_id(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$_python_rsa$$$function__6_key_id,
        mod_consts.const_str_plain_key_id,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ca9e7119ef5dfbd5dd8f6030a4e66050,
#endif
        code_objects_9b6dcdc8a508deebe0309b7cb2bccce5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$_python_rsa,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__7_sign(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$_python_rsa$$$function__7_sign,
        mod_consts.const_str_plain_sign,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_21e8bd7873f5910f4273a1a0227d26fd,
#endif
        code_objects_c911af9345188c4286979e2caa47c8f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$_python_rsa,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__8_from_string(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$_python_rsa$$$function__8_from_string,
        mod_consts.const_str_plain_from_string,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_92399f4b92af0050703037f558be65d1,
#endif
        code_objects_de0c4d25927a562b4a9d2cb98b34901b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$_python_rsa,
        mod_consts.const_str_digest_3aee3ad0d424fce10ce83443cbc5af79,
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

static function_impl_code const function_table_google$auth$crypt$_python_rsa[] = {
impl_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes,
impl_google$auth$crypt$_python_rsa$$$function__2___init__,
impl_google$auth$crypt$_python_rsa$$$function__3_verify,
impl_google$auth$crypt$_python_rsa$$$function__4_from_string,
impl_google$auth$crypt$_python_rsa$$$function__5___init__,
impl_google$auth$crypt$_python_rsa$$$function__6_key_id,
impl_google$auth$crypt$_python_rsa$$$function__7_sign,
impl_google$auth$crypt$_python_rsa$$$function__8_from_string,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$crypt$_python_rsa);
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
        module_google$auth$crypt$_python_rsa,
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
        function_table_google$auth$crypt$_python_rsa,
        sizeof(function_table_google$auth$crypt$_python_rsa) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.crypt._python_rsa";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$crypt$_python_rsa(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$crypt$_python_rsa");

    // Store the module for future use.
    module_google$auth$crypt$_python_rsa = module;

    moduledict_google$auth$crypt$_python_rsa = MODULE_DICT(module_google$auth$crypt$_python_rsa);

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
        PRINT_STRING("google$auth$crypt$_python_rsa: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$crypt$_python_rsa: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$crypt$_python_rsa: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.crypt._python_rsa" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$crypt$_python_rsa\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$crypt$_python_rsa,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$crypt$_python_rsa,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$crypt$_python_rsa,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$crypt$_python_rsa,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$crypt$_python_rsa,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$crypt$_python_rsa);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$crypt$_python_rsa);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
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
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$_python_rsa;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_d535c7ab39558e7507bc5f1f0715aa84;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$crypt$_python_rsa = MAKE_MODULE_FRAME(code_objects_0cfa5dcefd14c769f6c5643f9d5ef062, module_google$auth$crypt$_python_rsa);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$_python_rsa);
assert(Py_REFCNT(frame_frame_google$auth$crypt$_python_rsa) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$crypt$_python_rsa$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$crypt$_python_rsa$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_absolute_import);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_absolute_import, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$crypt$_python_rsa;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 25;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_989622ccef88eb949be48370a129282e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$crypt$_python_rsa;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_decoder_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 27;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$crypt$_python_rsa,
        mod_consts.const_str_plain_decoder,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_decoder);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_decoder, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_pyasn1_modules;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$crypt$_python_rsa;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_pem_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 28;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$crypt$_python_rsa,
        mod_consts.const_str_plain_pem,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_pem);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_pem, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_b83d619ed514569b08445bc5b0371ab4;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$crypt$_python_rsa;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Certificate_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 29;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$crypt$_python_rsa,
        mod_consts.const_str_plain_Certificate,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Certificate);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_Certificate, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_8947bd4d08ec292fb8cc06cd2bed3bd5;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$crypt$_python_rsa;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_PrivateKeyInfo_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 30;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$auth$crypt$_python_rsa,
        mod_consts.const_str_plain_PrivateKeyInfo,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_PrivateKeyInfo);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_PrivateKeyInfo, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_rsa;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$crypt$_python_rsa;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 31;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$crypt$_python_rsa;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 33;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$auth$crypt$_python_rsa,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__helpers);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$auth$crypt$_python_rsa;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 34;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$auth$crypt$_python_rsa,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7;
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$auth$crypt$_python_rsa;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_base_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 35;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$auth$crypt$_python_rsa,
        mod_consts.const_str_plain_base,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_base);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_base, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__POW2, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_bytes_digest_aa03b53f00f09b71d5b8d2120793323c;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__CERTIFICATE_MARKER, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_tuple_4155d13b440c6fad27842a27d920b50c_tuple;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS1_MARKER, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_tuple_559e0b39a91f9272e569fe7bdbca06c5_tuple;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS8_MARKER, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$crypt$_python_rsa$PrivateKeyInfo(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PrivateKeyInfo);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 41;
tmp_assign_source_19 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS8_SPEC, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_str_digest_379abdd8182b86a799894bdea505aaf3;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__warning_msg, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__1__bit_list_to_bytes(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__bit_list_to_bytes, tmp_assign_source_21);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$crypt$_python_rsa$base(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Verifier);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_1;
}
tmp_assign_source_22 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_22, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_23 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
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


exception_lineno = 70;

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
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_25;
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


exception_lineno = 70;

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
PyObject *tmp_assign_source_26;
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


exception_lineno = 70;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_RSAVerifier;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 70;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_26;
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


exception_lineno = 70;

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
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_10, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_1;
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


exception_lineno = 70;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


exception_lineno = 70;

    goto try_except_handler_1;
}
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 70;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 70;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_27;
}
branch_end_1:;
{
PyObject *tmp_assign_source_28;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ea5880beef39624554d92803beb06d56;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_e56e0c21d8e966d45181e2fdcd6c3940;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_RSAVerifier;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_70;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_3;
}
frame_frame_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_2 = MAKE_CLASS_FRAME(tstate, code_objects_575924ba13369a968cabac0c4de4e5f4, module_google$auth$crypt$_python_rsa, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_2);
assert(Py_REFCNT(frame_frame_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_2) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__2___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
tmp_expression_value_8 = PyObject_GetItem(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_google$auth$crypt$_python_rsa$_helpers(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_9 = PyObject_GetItem(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70, mod_consts.const_str_plain_base);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_google$auth$crypt$_python_rsa$base(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Verifier);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_2->m_frame.f_lineno = 90;
tmp_called_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_args_element_value_2 = MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__3_verify(tstate);

frame_frame_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_2->m_frame.f_lineno = 90;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70, mod_consts.const_str_plain_verify, tmp_dictset_value);
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
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
tmp_called_value_5 = PyObject_GetItem(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70, const_str_plain_classmethod);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__4_from_string(tstate);

frame_frame_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_2->m_frame.f_lineno = 98;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70, mod_consts.const_str_plain_from_string, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__pubkey_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_3;
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


exception_lineno = 70;

    goto try_except_handler_3;
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
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_RSAVerifier;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 70;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_29;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_28 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_28);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70);
locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70);
locals_google$auth$crypt$_python_rsa$$$class__1_RSAVerifier_70 = NULL;
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
exception_lineno = 70;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAVerifier, tmp_assign_source_28);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
PyObject *tmp_assign_source_30;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = module_var_accessor_google$auth$crypt$_python_rsa$base(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto try_except_handler_4;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_Signer);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_4;
}
tmp_assign_source_30 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_11;
PyTuple_SET_ITEM(tmp_assign_source_30, 0, tmp_tuple_element_5);
tmp_expression_value_11 = module_var_accessor_google$auth$crypt$_python_rsa$base(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto tuple_build_exception_2;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_FromServiceAccountMixin);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_30, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_30);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_31 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

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
tmp_expression_value_12 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_33;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

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
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_4;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_RSASigner;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 131;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_34;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_15 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_16, tmp_name_value_11, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_17;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_17 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_4;
}
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 131;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 131;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_35;
}
branch_end_4:;
{
PyObject *tmp_assign_source_36;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ea5880beef39624554d92803beb06d56;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_ef183f69a48bfc9e5d870cfd99924b37;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_RSASigner;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_131;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_6;
}
frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3 = MAKE_CLASS_FRAME(tstate, code_objects_1acec9ed9f184c8eb44d9ec30b4a2bd1, module_google$auth$crypt$_python_rsa, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3);
assert(Py_REFCNT(frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__5___init__(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_9;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_6;
tmp_called_value_8 = PyObject_GetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, mod_consts.const_str_plain_property);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_expression_value_18 = PyObject_GetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_18 = module_var_accessor_google$auth$crypt$_python_rsa$_helpers(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_19 = PyObject_GetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, mod_consts.const_str_plain_base);

if (tmp_expression_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_19 = module_var_accessor_google$auth$crypt$_python_rsa$base(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_called_value_10);

exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_Signer);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_called_value_10);

exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3->m_frame.f_lineno = 155;
tmp_called_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_args_element_value_6 = MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__6_key_id(tstate);

frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3->m_frame.f_lineno = 155;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3->m_frame.f_lineno = 154;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, mod_consts.const_str_plain_key_id, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_8;
tmp_expression_value_20 = PyObject_GetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_20 = module_var_accessor_google$auth$crypt$_python_rsa$_helpers(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_21 = PyObject_GetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, mod_consts.const_str_plain_base);

if (tmp_expression_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_21 = module_var_accessor_google$auth$crypt$_python_rsa$base(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Signer);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3->m_frame.f_lineno = 159;
tmp_called_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_args_element_value_8 = MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__7_sign(tstate);

frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3->m_frame.f_lineno = 159;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, mod_consts.const_str_plain_sign, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_9;
PyObject *tmp_defaults_2;
tmp_called_value_13 = PyObject_GetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, const_str_plain_classmethod);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_args_element_value_9 = MAKE_FUNCTION_google$auth$crypt$_python_rsa$$$function__8_from_string(tstate, tmp_defaults_2);

frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3->m_frame.f_lineno = 164;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, mod_consts.const_str_plain_from_string, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$auth$crypt$_python_rsa$$$class__2_RSASigner_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__key_str_plain__key_id_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

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


exception_lineno = 131;

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
tmp_res = PyObject_SetItem(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_RSASigner;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$crypt$_python_rsa->m_frame.f_lineno = 131;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_37;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_36 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_36);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131);
locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131);
locals_google$auth$crypt$_python_rsa$$$class__2_RSASigner_131 = NULL;
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
exception_lineno = 131;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSASigner, tmp_assign_source_36);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$_python_rsa, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$_python_rsa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$_python_rsa, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$crypt$_python_rsa);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$crypt$_python_rsa", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.crypt._python_rsa" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$crypt$_python_rsa);
    return module_google$auth$crypt$_python_rsa;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$_python_rsa, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$crypt$_python_rsa", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

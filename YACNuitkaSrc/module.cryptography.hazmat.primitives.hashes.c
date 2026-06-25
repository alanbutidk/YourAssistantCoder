/* Generated code for Python module 'cryptography$hazmat$primitives$hashes'
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



/* The "module_cryptography$hazmat$primitives$hashes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$hashes;
PyDictObject *moduledict_cryptography$hazmat$primitives$hashes;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_924e0927e4487b9857799190105f4942;
PyObject *const_str_digest_ae39a0f72243429949d87699b8a35876;
PyObject *const_str_plain__digest_size;
PyObject *const_int_pos_64;
PyObject *const_str_digest_d8c0480b04e9f1b751a64420b2f42762;
PyObject *const_int_pos_32;
PyObject *const_str_digest_f68b8ec7d84d9d90d425667225eb23e4;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_abc;
PyObject *const_str_digest_8079781454ad481b13cb6caedf4dbb9e;
PyObject *const_tuple_str_plain_openssl_tuple;
PyObject *const_str_plain_openssl;
PyObject *const_str_plain_rust_openssl;
PyObject *const_list_4b78aea43b0c20431bd77bda6b59b315_list;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_ABCMeta;
PyObject *const_str_plain___prepare__;
PyObject *const_tuple_str_plain_HashAlgorithm_tuple_empty_tuple;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_5e31165c18332720d100693a167e4ad4;
PyObject *const_str_plain_HashAlgorithm;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_36;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_property;
PyObject *const_str_plain_abstractmethod;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_0ccdd22d67a9413014b840c8a962063d;
PyObject *const_str_digest_d7c50a329020f5cd33b138e728faa412;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_abbdba12a8fda8d900f3897b3e6f3716;
PyObject *const_str_plain_digest_size;
PyObject *const_str_digest_c14a627cd121f4878b0c27d4fc37cd25;
PyObject *const_dict_4ceb13db20db0a5d6b10c13b92db4345;
PyObject *const_str_digest_abfbc45f2a2c61cf90d57c63d119632b;
PyObject *const_str_plain_block_size;
PyObject *const_str_digest_adebc498603b5d2983dcdeae1e281ca2;
PyObject *const_str_plain___static_attributes__;
PyObject *const_tuple_str_plain_HashContext_tuple_empty_tuple;
PyObject *const_str_plain_HashContext;
PyObject *const_int_pos_60;
PyObject *const_dict_223b4647dae6a2e608ecde79744c0a55;
PyObject *const_str_digest_a15e67ba454f4fbb340d62e560d45b79;
PyObject *const_str_plain_algorithm;
PyObject *const_str_digest_8f320424f24a36e5c318fefe810b915f;
PyObject *const_dict_9c5c92330abf414287a7c5a37dc41725;
PyObject *const_str_digest_fb4b93b73b07b670f3edfb13620e6e61;
PyObject *const_str_plain_update;
PyObject *const_str_digest_91764add0e98ceb997588f251ec5202c;
PyObject *const_dict_2366cb3246e451cebe4ed21878030053;
PyObject *const_str_digest_2d4dbe149e2197f6c1a99f0195481bc3;
PyObject *const_str_plain_finalize;
PyObject *const_str_digest_0887ae00cfef2ac76b594a2b528744ce;
PyObject *const_dict_264e4020631b732f79aebd7c8522605a;
PyObject *const_str_digest_f62cbeea025052220e566b7f06009d77;
PyObject *const_str_plain_copy;
PyObject *const_str_digest_40b04a923c9321758d11eb131570dbe9;
PyObject *const_str_plain_hashes;
PyObject *const_str_plain_Hash;
PyObject *const_tuple_str_plain_ExtendableOutputFunction_tuple_empty_tuple;
PyObject *const_str_digest_1a16f00c2bb2013703134148ae3234f4;
PyObject *const_str_plain_ExtendableOutputFunction;
PyObject *const_int_pos_91;
PyObject *const_str_plain_SHA1;
PyObject *const_int_pos_97;
PyObject *const_str_plain_sha1;
PyObject *const_int_pos_20;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_SHA512_224;
PyObject *const_int_pos_103;
PyObject *const_str_digest_6afc685f7615d0a2d988f92201341388;
PyObject *const_int_pos_28;
PyObject *const_int_pos_128;
PyObject *const_str_plain_SHA512_256;
PyObject *const_int_pos_109;
PyObject *const_str_digest_66c82ef2bfb619b1b826576a54946c15;
PyObject *const_str_plain_SHA224;
PyObject *const_int_pos_115;
PyObject *const_str_plain_sha224;
PyObject *const_str_plain_SHA256;
PyObject *const_int_pos_121;
PyObject *const_str_plain_sha256;
PyObject *const_str_plain_SHA384;
PyObject *const_int_pos_127;
PyObject *const_str_plain_sha384;
PyObject *const_int_pos_48;
PyObject *const_str_plain_SHA512;
PyObject *const_int_pos_133;
PyObject *const_str_plain_sha512;
PyObject *const_str_plain_SHA3_224;
PyObject *const_int_pos_139;
PyObject *const_str_digest_7d4a1d1378189ad66a0b87eab5ec341f;
PyObject *const_str_plain_SHA3_256;
PyObject *const_int_pos_145;
PyObject *const_str_digest_b203f55b4e11ae2116912809c8c9bcb7;
PyObject *const_str_plain_SHA3_384;
PyObject *const_int_pos_151;
PyObject *const_str_digest_a55706530cc479f6787cf00324496c51;
PyObject *const_str_plain_SHA3_512;
PyObject *const_int_pos_157;
PyObject *const_str_digest_90c3c33e90721a671df978b9871b677f;
PyObject *const_str_plain_SHAKE128;
PyObject *const_int_pos_163;
PyObject *const_str_plain_shake128;
PyObject *const_dict_ac7e5baefb5165d291ba8d7851ec11ef;
PyObject *const_str_digest_658a31d26a4389319f80d11abc5271c3;
PyObject *const_str_digest_1100f36e49064d510a09fe626656e47d;
PyObject *const_tuple_str_plain__digest_size_tuple;
PyObject *const_str_plain_SHAKE256;
PyObject *const_int_pos_181;
PyObject *const_str_plain_shake256;
PyObject *const_str_digest_bf9a71441ec3d4b0acb05a4c295c574b;
PyObject *const_str_digest_8bd590a67e39a7ef6134f605346821b1;
PyObject *const_str_plain_MD5;
PyObject *const_int_pos_199;
PyObject *const_str_plain_md5;
PyObject *const_int_pos_16;
PyObject *const_str_plain_BLAKE2b;
PyObject *const_int_pos_205;
PyObject *const_str_plain_blake2b;
PyObject *const_str_plain__max_digest_size;
PyObject *const_str_plain__min_digest_size;
PyObject *const_str_digest_ee48031ce240fa2487649e40d3396527;
PyObject *const_str_digest_0388399d837d8afdaea5ac04fc3b1988;
PyObject *const_str_plain_BLAKE2s;
PyObject *const_int_pos_222;
PyObject *const_str_plain_blake2s;
PyObject *const_str_digest_6d90b6a4cd2815f60dcbc1ffa9d744ac;
PyObject *const_str_digest_90405c3651de0981b9ab33dd1cbae17d;
PyObject *const_str_plain_SM3;
PyObject *const_int_pos_239;
PyObject *const_str_plain_sm3;
PyObject *const_str_digest_dda0298c7f8a5405feb654959d4e234c;
PyObject *const_str_digest_dd065d736a97312caf5a54bf9bc1c0d5;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_digest_size_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[142];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("cryptography.hazmat.primitives.hashes"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_924e0927e4487b9857799190105f4942);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae39a0f72243429949d87699b8a35876);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__digest_size);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8c0480b04e9f1b751a64420b2f42762);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_f68b8ec7d84d9d90d425667225eb23e4);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openssl_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_openssl);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_rust_openssl);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_list_4b78aea43b0c20431bd77bda6b59b315_list);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HashAlgorithm_tuple_empty_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_HashAlgorithm);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_int_pos_36);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ccdd22d67a9413014b840c8a962063d);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7c50a329020f5cd33b138e728faa412);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_abbdba12a8fda8d900f3897b3e6f3716);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_digest_size);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_c14a627cd121f4878b0c27d4fc37cd25);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_abfbc45f2a2c61cf90d57c63d119632b);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_block_size);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_adebc498603b5d2983dcdeae1e281ca2);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HashContext_tuple_empty_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_HashContext);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_int_pos_60);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_dict_223b4647dae6a2e608ecde79744c0a55);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_a15e67ba454f4fbb340d62e560d45b79);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_algorithm);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f320424f24a36e5c318fefe810b915f);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_dict_9c5c92330abf414287a7c5a37dc41725);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb4b93b73b07b670f3edfb13620e6e61);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_91764add0e98ceb997588f251ec5202c);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d4dbe149e2197f6c1a99f0195481bc3);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_finalize);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_0887ae00cfef2ac76b594a2b528744ce);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_dict_264e4020631b732f79aebd7c8522605a);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_f62cbeea025052220e566b7f06009d77);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_40b04a923c9321758d11eb131570dbe9);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashes);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_Hash);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ExtendableOutputFunction_tuple_empty_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a16f00c2bb2013703134148ae3234f4);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtendableOutputFunction);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_pos_91);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA1);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_int_pos_97);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha1);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA512_224);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_int_pos_103);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_6afc685f7615d0a2d988f92201341388);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_int_pos_28);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA512_256);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_int_pos_109);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_66c82ef2bfb619b1b826576a54946c15);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA224);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_int_pos_115);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha224);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA256);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_int_pos_121);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha256);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA384);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_int_pos_127);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha384);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_int_pos_48);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA512);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_133);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha512);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_224);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_139);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d4a1d1378189ad66a0b87eab5ec341f);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_256);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_int_pos_145);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_b203f55b4e11ae2116912809c8c9bcb7);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_384);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_int_pos_151);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_a55706530cc479f6787cf00324496c51);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_512);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_int_pos_157);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_90c3c33e90721a671df978b9871b677f);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHAKE128);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_163);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_shake128);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_dict_ac7e5baefb5165d291ba8d7851ec11ef);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_658a31d26a4389319f80d11abc5271c3);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_1100f36e49064d510a09fe626656e47d);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__digest_size_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHAKE256);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_int_pos_181);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_shake256);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf9a71441ec3d4b0acb05a4c295c574b);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_8bd590a67e39a7ef6134f605346821b1);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_MD5);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_int_pos_199);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_md5);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_BLAKE2b);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_205);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_blake2b);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain__max_digest_size);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain__min_digest_size);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee48031ce240fa2487649e40d3396527);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_0388399d837d8afdaea5ac04fc3b1988);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_BLAKE2s);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_int_pos_222);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_blake2s);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d90b6a4cd2815f60dcbc1ffa9d744ac);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_90405c3651de0981b9ab33dd1cbae17d);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_SM3);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_int_pos_239);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_sm3);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_dda0298c7f8a5405feb654959d4e234c);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd065d736a97312caf5a54bf9bc1c0d5);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_digest_size_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
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
void checkModuleConstants_cryptography$hazmat$primitives$hashes(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_924e0927e4487b9857799190105f4942));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_924e0927e4487b9857799190105f4942);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae39a0f72243429949d87699b8a35876));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae39a0f72243429949d87699b8a35876);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__digest_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__digest_size);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_int_pos_64));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_64);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8c0480b04e9f1b751a64420b2f42762));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8c0480b04e9f1b751a64420b2f42762);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_f68b8ec7d84d9d90d425667225eb23e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f68b8ec7d84d9d90d425667225eb23e4);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openssl_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_openssl_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_openssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_openssl);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_rust_openssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rust_openssl);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_list_4b78aea43b0c20431bd77bda6b59b315_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_4b78aea43b0c20431bd77bda6b59b315_list);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HashAlgorithm_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HashAlgorithm_tuple_empty_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_HashAlgorithm));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HashAlgorithm);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_int_pos_36));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_36);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ccdd22d67a9413014b840c8a962063d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0ccdd22d67a9413014b840c8a962063d);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7c50a329020f5cd33b138e728faa412));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d7c50a329020f5cd33b138e728faa412);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_abbdba12a8fda8d900f3897b3e6f3716));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_abbdba12a8fda8d900f3897b3e6f3716);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_digest_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_digest_size);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_c14a627cd121f4878b0c27d4fc37cd25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c14a627cd121f4878b0c27d4fc37cd25);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_abfbc45f2a2c61cf90d57c63d119632b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_abfbc45f2a2c61cf90d57c63d119632b);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_block_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_block_size);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_adebc498603b5d2983dcdeae1e281ca2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_adebc498603b5d2983dcdeae1e281ca2);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HashContext_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HashContext_tuple_empty_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_HashContext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HashContext);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_int_pos_60));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_60);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_dict_223b4647dae6a2e608ecde79744c0a55));
CHECK_OBJECT_DEEP(mod_consts.const_dict_223b4647dae6a2e608ecde79744c0a55);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_a15e67ba454f4fbb340d62e560d45b79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a15e67ba454f4fbb340d62e560d45b79);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_algorithm));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_algorithm);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f320424f24a36e5c318fefe810b915f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f320424f24a36e5c318fefe810b915f);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_dict_9c5c92330abf414287a7c5a37dc41725));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9c5c92330abf414287a7c5a37dc41725);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb4b93b73b07b670f3edfb13620e6e61));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb4b93b73b07b670f3edfb13620e6e61);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_91764add0e98ceb997588f251ec5202c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91764add0e98ceb997588f251ec5202c);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d4dbe149e2197f6c1a99f0195481bc3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d4dbe149e2197f6c1a99f0195481bc3);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_finalize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_finalize);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_0887ae00cfef2ac76b594a2b528744ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0887ae00cfef2ac76b594a2b528744ce);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_dict_264e4020631b732f79aebd7c8522605a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_264e4020631b732f79aebd7c8522605a);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_f62cbeea025052220e566b7f06009d77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f62cbeea025052220e566b7f06009d77);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_40b04a923c9321758d11eb131570dbe9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_40b04a923c9321758d11eb131570dbe9);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hashes);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_Hash));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Hash);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ExtendableOutputFunction_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ExtendableOutputFunction_tuple_empty_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a16f00c2bb2013703134148ae3234f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1a16f00c2bb2013703134148ae3234f4);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtendableOutputFunction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ExtendableOutputFunction);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_pos_91));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_91);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHA1);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_int_pos_97));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_97);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha1);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_int_pos_20));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_20);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA512_224));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHA512_224);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_int_pos_103));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_103);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_6afc685f7615d0a2d988f92201341388));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6afc685f7615d0a2d988f92201341388);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_int_pos_28));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_28);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_int_pos_128));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_128);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA512_256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHA512_256);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_int_pos_109));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_109);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_66c82ef2bfb619b1b826576a54946c15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66c82ef2bfb619b1b826576a54946c15);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA224));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHA224);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_int_pos_115));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_115);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha224));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha224);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHA256);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_int_pos_121));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_121);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha256);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA384));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHA384);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_int_pos_127));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_127);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha384));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha384);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_int_pos_48));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_48);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA512));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHA512);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_133));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_133);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha512));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha512);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_224));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHA3_224);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_139));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_139);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d4a1d1378189ad66a0b87eab5ec341f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d4a1d1378189ad66a0b87eab5ec341f);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHA3_256);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_int_pos_145));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_145);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_b203f55b4e11ae2116912809c8c9bcb7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b203f55b4e11ae2116912809c8c9bcb7);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_384));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHA3_384);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_int_pos_151));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_151);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_a55706530cc479f6787cf00324496c51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a55706530cc479f6787cf00324496c51);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_512));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHA3_512);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_int_pos_157));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_157);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_90c3c33e90721a671df978b9871b677f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_90c3c33e90721a671df978b9871b677f);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHAKE128));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHAKE128);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_163));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_163);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_shake128));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shake128);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_dict_ac7e5baefb5165d291ba8d7851ec11ef));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ac7e5baefb5165d291ba8d7851ec11ef);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_658a31d26a4389319f80d11abc5271c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_658a31d26a4389319f80d11abc5271c3);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_1100f36e49064d510a09fe626656e47d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1100f36e49064d510a09fe626656e47d);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__digest_size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__digest_size_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHAKE256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHAKE256);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_int_pos_181));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_181);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_shake256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shake256);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf9a71441ec3d4b0acb05a4c295c574b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf9a71441ec3d4b0acb05a4c295c574b);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_8bd590a67e39a7ef6134f605346821b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8bd590a67e39a7ef6134f605346821b1);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_MD5));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MD5);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_int_pos_199));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_199);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_md5));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_md5);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_BLAKE2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BLAKE2b);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_205));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_205);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_blake2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blake2b);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain__max_digest_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__max_digest_size);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain__min_digest_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__min_digest_size);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee48031ce240fa2487649e40d3396527));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee48031ce240fa2487649e40d3396527);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_0388399d837d8afdaea5ac04fc3b1988));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0388399d837d8afdaea5ac04fc3b1988);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_BLAKE2s));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BLAKE2s);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_int_pos_222));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_222);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_blake2s));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blake2s);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d90b6a4cd2815f60dcbc1ffa9d744ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d90b6a4cd2815f60dcbc1ffa9d744ac);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_90405c3651de0981b9ab33dd1cbae17d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_90405c3651de0981b9ab33dd1cbae17d);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_SM3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SM3);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_int_pos_239));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_239);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_sm3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sm3);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_dda0298c7f8a5405feb654959d4e234c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dda0298c7f8a5405feb654959d4e234c);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd065d736a97312caf5a54bf9bc1c0d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd065d736a97312caf5a54bf9bc1c0d5);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_digest_size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_digest_size_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
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
static PyObject *module_var_accessor_cryptography$hazmat$primitives$hashes$ExtendableOutputFunction(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtendableOutputFunction);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$hashes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExtendableOutputFunction);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExtendableOutputFunction, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExtendableOutputFunction);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExtendableOutputFunction, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtendableOutputFunction);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtendableOutputFunction);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtendableOutputFunction);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$hashes$Hash(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_Hash);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$hashes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Hash);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Hash, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Hash);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Hash, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_Hash);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_Hash);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Hash);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_HashAlgorithm);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$hashes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HashAlgorithm);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HashAlgorithm, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HashAlgorithm);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HashAlgorithm, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_HashAlgorithm);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_HashAlgorithm);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HashAlgorithm);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$hashes$HashContext(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_HashContext);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$hashes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HashContext);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HashContext, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HashContext);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HashContext, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_HashContext);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_HashContext);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HashContext);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$hashes$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$hashes->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$hashes$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$hashes->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$hashes$rust_openssl(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$hashes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$hashes->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_c36c184dd2198e7f2ccd39188d337913;
static PyCodeObject *code_objects_f44a37d88c8129538afea56b713de7a6;
static PyCodeObject *code_objects_bb3feec3b7a6466abb1c9de613ddd72f;
static PyCodeObject *code_objects_4a765c9ffd47ca21e9e27df8022bbc4a;
static PyCodeObject *code_objects_52e0aadc618337f698806bf562de223b;
static PyCodeObject *code_objects_2504dd426668023dc8a5ddaa97f7500c;
static PyCodeObject *code_objects_acf71054f5b5ed2678080926f77cf721;
static PyCodeObject *code_objects_e100d4d72c5c2475f29a7ef2eaba7f73;
static PyCodeObject *code_objects_6321f662da822141edf0c648dc2e4d27;
static PyCodeObject *code_objects_00826f0c38ff592c3de6bb2fd5d14ae0;
static PyCodeObject *code_objects_083aa4554f8b38b40366f7eed5d76953;
static PyCodeObject *code_objects_5af50ea3ae933a3f27bcbe682dbc019a;
static PyCodeObject *code_objects_c0b1ab3f166c89701d3d3ef06b667d79;
static PyCodeObject *code_objects_47b24e2b26c8ee2fa69b0f4b0d844fd5;
static PyCodeObject *code_objects_f4fba0a43c2dee7566fbcfc4bbeb1f3b;
static PyCodeObject *code_objects_d31ae1a1c53774af1ee1945b4d126901;
static PyCodeObject *code_objects_6039d7a8d39fc1eca8449d82b2e842e7;
static PyCodeObject *code_objects_97477121dc1e5d60da25bea3280c6036;
static PyCodeObject *code_objects_6a604d108fb0ac652e2747cbfe2d44e9;
static PyCodeObject *code_objects_d79650bc9b6117a45995b7958d2ae88b;
static PyCodeObject *code_objects_a91ea9ca7f06b09cfeae460287dcc70f;
static PyCodeObject *code_objects_b08c97bf2a3e67f3371cad0324291ba6;
static PyCodeObject *code_objects_c40432e2dcf33ead874dbebc1661c14d;
static PyCodeObject *code_objects_a97d36df5f987e64962627d56d448a75;
static PyCodeObject *code_objects_92c8be3de69587c6280ecc7a40d3d4da;
static PyCodeObject *code_objects_d9ed718032c06774ff8584a5428912db;
static PyCodeObject *code_objects_8b04a746376c6b86a38600f3ac589111;
static PyCodeObject *code_objects_45f61ef3be6ef987b112acdeecd9a1ca;
static PyCodeObject *code_objects_46e13a47794f64d492d71699b2fff855;
static PyCodeObject *code_objects_5ef6957d1ff0964cadd75c201579c974;
static PyCodeObject *code_objects_f3bfc13ee2ca06e3028432b11c6919b0;
static PyCodeObject *code_objects_9d003b27c798e276d70ca2c5f62a16f6;
static PyCodeObject *code_objects_d9a49122d9a22ce1b24de5fa1d7aa01c;
static PyCodeObject *code_objects_796aa6af6319e15b4dc0619f05827dea;
static PyCodeObject *code_objects_edb33e9c1e3f6130ffb83f283773c314;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_dda0298c7f8a5405feb654959d4e234c); CHECK_OBJECT(module_filename_obj);
code_objects_c36c184dd2198e7f2ccd39188d337913 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_dd065d736a97312caf5a54bf9bc1c0d5, mod_consts.const_str_digest_dd065d736a97312caf5a54bf9bc1c0d5, NULL, NULL, 0, 0, 0);
code_objects_f44a37d88c8129538afea56b713de7a6 = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_BLAKE2b, mod_consts.const_str_plain_BLAKE2b, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_bb3feec3b7a6466abb1c9de613ddd72f = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_BLAKE2s, mod_consts.const_str_plain_BLAKE2s, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4a765c9ffd47ca21e9e27df8022bbc4a = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HashAlgorithm, mod_consts.const_str_plain_HashAlgorithm, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_52e0aadc618337f698806bf562de223b = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HashContext, mod_consts.const_str_plain_HashContext, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2504dd426668023dc8a5ddaa97f7500c = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_MD5, mod_consts.const_str_plain_MD5, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_acf71054f5b5ed2678080926f77cf721 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHA1, mod_consts.const_str_plain_SHA1, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e100d4d72c5c2475f29a7ef2eaba7f73 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHA224, mod_consts.const_str_plain_SHA224, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6321f662da822141edf0c648dc2e4d27 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHA256, mod_consts.const_str_plain_SHA256, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_00826f0c38ff592c3de6bb2fd5d14ae0 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHA384, mod_consts.const_str_plain_SHA384, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_083aa4554f8b38b40366f7eed5d76953 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHA3_224, mod_consts.const_str_plain_SHA3_224, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5af50ea3ae933a3f27bcbe682dbc019a = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHA3_256, mod_consts.const_str_plain_SHA3_256, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c0b1ab3f166c89701d3d3ef06b667d79 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHA3_384, mod_consts.const_str_plain_SHA3_384, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_47b24e2b26c8ee2fa69b0f4b0d844fd5 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHA3_512, mod_consts.const_str_plain_SHA3_512, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f4fba0a43c2dee7566fbcfc4bbeb1f3b = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHA512, mod_consts.const_str_plain_SHA512, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d31ae1a1c53774af1ee1945b4d126901 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHA512_224, mod_consts.const_str_plain_SHA512_224, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6039d7a8d39fc1eca8449d82b2e842e7 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHA512_256, mod_consts.const_str_plain_SHA512_256, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_97477121dc1e5d60da25bea3280c6036 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHAKE128, mod_consts.const_str_plain_SHAKE128, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6a604d108fb0ac652e2747cbfe2d44e9 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SHAKE256, mod_consts.const_str_plain_SHAKE256, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d79650bc9b6117a45995b7958d2ae88b = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SM3, mod_consts.const_str_plain_SM3, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a91ea9ca7f06b09cfeae460287dcc70f = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ee48031ce240fa2487649e40d3396527, mod_consts.const_tuple_str_plain_self_str_plain_digest_size_tuple, NULL, 2, 0, 0);
code_objects_b08c97bf2a3e67f3371cad0324291ba6 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_6d90b6a4cd2815f60dcbc1ffa9d744ac, mod_consts.const_tuple_str_plain_self_str_plain_digest_size_tuple, NULL, 2, 0, 0);
code_objects_c40432e2dcf33ead874dbebc1661c14d = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_658a31d26a4389319f80d11abc5271c3, mod_consts.const_tuple_str_plain_self_str_plain_digest_size_tuple, NULL, 2, 0, 0);
code_objects_a97d36df5f987e64962627d56d448a75 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_bf9a71441ec3d4b0acb05a4c295c574b, mod_consts.const_tuple_str_plain_self_str_plain_digest_size_tuple, NULL, 2, 0, 0);
code_objects_92c8be3de69587c6280ecc7a40d3d4da = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_algorithm, mod_consts.const_str_digest_8f320424f24a36e5c318fefe810b915f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d9ed718032c06774ff8584a5428912db = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_block_size, mod_consts.const_str_digest_adebc498603b5d2983dcdeae1e281ca2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8b04a746376c6b86a38600f3ac589111 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_copy, mod_consts.const_str_digest_40b04a923c9321758d11eb131570dbe9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_45f61ef3be6ef987b112acdeecd9a1ca = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_digest_size, mod_consts.const_str_digest_0388399d837d8afdaea5ac04fc3b1988, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_46e13a47794f64d492d71699b2fff855 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_digest_size, mod_consts.const_str_digest_90405c3651de0981b9ab33dd1cbae17d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5ef6957d1ff0964cadd75c201579c974 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_digest_size, mod_consts.const_str_digest_c14a627cd121f4878b0c27d4fc37cd25, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f3bfc13ee2ca06e3028432b11c6919b0 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_digest_size, mod_consts.const_str_digest_1100f36e49064d510a09fe626656e47d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9d003b27c798e276d70ca2c5f62a16f6 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_digest_size, mod_consts.const_str_digest_8bd590a67e39a7ef6134f605346821b1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d9a49122d9a22ce1b24de5fa1d7aa01c = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_finalize, mod_consts.const_str_digest_0887ae00cfef2ac76b594a2b528744ce, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_796aa6af6319e15b4dc0619f05827dea = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_name, mod_consts.const_str_digest_d7c50a329020f5cd33b138e728faa412, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_edb33e9c1e3f6130ffb83f283773c314 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_91764add0e98ceb997588f251ec5202c, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__10___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__11_digest_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__12___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__13_digest_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__14___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__15_digest_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__1_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__2_digest_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__3_block_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__4_algorithm(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__5_update(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__6_finalize(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__7_copy(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__8___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__9_digest_size(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_digest_size = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c40432e2dcf33ead874dbebc1661c14d, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__ = cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_digest_size);
tmp_isinstance_inst_1 = par_digest_size;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_924e0927e4487b9857799190105f4942;
frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__->m_frame.f_lineno = 169;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 169;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_digest_size);
tmp_cmp_expr_left_1 = par_digest_size;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oo";
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
tmp_make_exception_arg_2 = mod_consts.const_str_digest_ae39a0f72243429949d87699b8a35876;
frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__->m_frame.f_lineno = 172;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 172;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_digest_size);
tmp_assattr_value_1 = par_digest_size;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__digest_size, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__,
    type_description_1,
    par_self,
    par_digest_size
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__ == cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__);
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__ = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$function__8___init__);

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
CHECK_OBJECT(par_digest_size);
Py_DECREF(par_digest_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_digest_size);
Py_DECREF(par_digest_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__9_digest_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size = MAKE_FUNCTION_FRAME(tstate, code_objects_f3bfc13ee2ca06e3028432b11c6919b0, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size = cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__digest_size);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size == cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size);
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$function__9_digest_size);

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


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_digest_size = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a97d36df5f987e64962627d56d448a75, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__ = cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_digest_size);
tmp_isinstance_inst_1 = par_digest_size;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_924e0927e4487b9857799190105f4942;
frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__->m_frame.f_lineno = 187;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 187;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_digest_size);
tmp_cmp_expr_left_1 = par_digest_size;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oo";
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
tmp_make_exception_arg_2 = mod_consts.const_str_digest_ae39a0f72243429949d87699b8a35876;
frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__->m_frame.f_lineno = 190;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 190;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_digest_size);
tmp_assattr_value_1 = par_digest_size;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__digest_size, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__,
    type_description_1,
    par_self,
    par_digest_size
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__ == cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__);
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__ = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$function__10___init__);

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
CHECK_OBJECT(par_digest_size);
Py_DECREF(par_digest_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_digest_size);
Py_DECREF(par_digest_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__11_digest_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size = MAKE_FUNCTION_FRAME(tstate, code_objects_9d003b27c798e276d70ca2c5f62a16f6, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size = cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__digest_size);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size == cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size);
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$function__11_digest_size);

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


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__12___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_digest_size = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a91ea9ca7f06b09cfeae460287dcc70f, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__ = cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_digest_size);
tmp_cmp_expr_left_1 = par_digest_size;
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_64;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d8c0480b04e9f1b751a64420b2f42762;
frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__->m_frame.f_lineno = 213;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 213;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_digest_size);
tmp_assattr_value_1 = par_digest_size;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__digest_size, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__,
    type_description_1,
    par_self,
    par_digest_size
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__ == cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__);
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__ = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$function__12___init__);

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
CHECK_OBJECT(par_digest_size);
Py_DECREF(par_digest_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_digest_size);
Py_DECREF(par_digest_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__13_digest_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size = MAKE_FUNCTION_FRAME(tstate, code_objects_45f61ef3be6ef987b112acdeecd9a1ca, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size = cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__digest_size);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size == cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size);
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$function__13_digest_size);

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


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__14___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_digest_size = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b08c97bf2a3e67f3371cad0324291ba6, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__ = cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_digest_size);
tmp_cmp_expr_left_1 = par_digest_size;
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_32;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_f68b8ec7d84d9d90d425667225eb23e4;
frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__->m_frame.f_lineno = 230;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 230;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_digest_size);
tmp_assattr_value_1 = par_digest_size;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__digest_size, tmp_assattr_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__,
    type_description_1,
    par_self,
    par_digest_size
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__ == cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__);
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__ = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$function__14___init__);

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
CHECK_OBJECT(par_digest_size);
Py_DECREF(par_digest_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_digest_size);
Py_DECREF(par_digest_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__15_digest_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size = MAKE_FUNCTION_FRAME(tstate, code_objects_46e13a47794f64d492d71699b2fff855, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size = cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__digest_size);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size == cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size);
    cache_frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$function__15_digest_size);

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



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__10___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bf9a71441ec3d4b0acb05a4c295c574b,
#endif
        code_objects_a97d36df5f987e64962627d56d448a75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__11_digest_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__11_digest_size,
        mod_consts.const_str_plain_digest_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8bd590a67e39a7ef6134f605346821b1,
#endif
        code_objects_9d003b27c798e276d70ca2c5f62a16f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__12___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee48031ce240fa2487649e40d3396527,
#endif
        code_objects_a91ea9ca7f06b09cfeae460287dcc70f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__13_digest_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__13_digest_size,
        mod_consts.const_str_plain_digest_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0388399d837d8afdaea5ac04fc3b1988,
#endif
        code_objects_45f61ef3be6ef987b112acdeecd9a1ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__14___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6d90b6a4cd2815f60dcbc1ffa9d744ac,
#endif
        code_objects_b08c97bf2a3e67f3371cad0324291ba6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__15_digest_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__15_digest_size,
        mod_consts.const_str_plain_digest_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_90405c3651de0981b9ab33dd1cbae17d,
#endif
        code_objects_46e13a47794f64d492d71699b2fff855,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__1_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d7c50a329020f5cd33b138e728faa412,
#endif
        code_objects_796aa6af6319e15b4dc0619f05827dea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts.const_str_digest_0ccdd22d67a9413014b840c8a962063d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__2_digest_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_digest_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c14a627cd121f4878b0c27d4fc37cd25,
#endif
        code_objects_5ef6957d1ff0964cadd75c201579c974,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts.const_str_digest_abbdba12a8fda8d900f3897b3e6f3716,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__3_block_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_block_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_adebc498603b5d2983dcdeae1e281ca2,
#endif
        code_objects_d9ed718032c06774ff8584a5428912db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts.const_str_digest_abfbc45f2a2c61cf90d57c63d119632b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__4_algorithm(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_algorithm,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8f320424f24a36e5c318fefe810b915f,
#endif
        code_objects_92c8be3de69587c6280ecc7a40d3d4da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts.const_str_digest_a15e67ba454f4fbb340d62e560d45b79,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__5_update(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_91764add0e98ceb997588f251ec5202c,
#endif
        code_objects_edb33e9c1e3f6130ffb83f283773c314,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts.const_str_digest_fb4b93b73b07b670f3edfb13620e6e61,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__6_finalize(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_finalize,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0887ae00cfef2ac76b594a2b528744ce,
#endif
        code_objects_d9a49122d9a22ce1b24de5fa1d7aa01c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts.const_str_digest_2d4dbe149e2197f6c1a99f0195481bc3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__7_copy(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_copy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_40b04a923c9321758d11eb131570dbe9,
#endif
        code_objects_8b04a746376c6b86a38600f3ac589111,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts.const_str_digest_f62cbeea025052220e566b7f06009d77,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__8___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_658a31d26a4389319f80d11abc5271c3,
#endif
        code_objects_c40432e2dcf33ead874dbebc1661c14d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__9_digest_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__9_digest_size,
        mod_consts.const_str_plain_digest_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1100f36e49064d510a09fe626656e47d,
#endif
        code_objects_f3bfc13ee2ca06e3028432b11c6919b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$hashes,
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

static function_impl_code const function_table_cryptography$hazmat$primitives$hashes[] = {
impl_cryptography$hazmat$primitives$hashes$$$function__8___init__,
impl_cryptography$hazmat$primitives$hashes$$$function__9_digest_size,
impl_cryptography$hazmat$primitives$hashes$$$function__10___init__,
impl_cryptography$hazmat$primitives$hashes$$$function__11_digest_size,
impl_cryptography$hazmat$primitives$hashes$$$function__12___init__,
impl_cryptography$hazmat$primitives$hashes$$$function__13_digest_size,
impl_cryptography$hazmat$primitives$hashes$$$function__14___init__,
impl_cryptography$hazmat$primitives$hashes$$$function__15_digest_size,
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

    return Nuitka_Function_GetFunctionState(function, function_table_cryptography$hazmat$primitives$hashes);
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
        module_cryptography$hazmat$primitives$hashes,
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
        function_table_cryptography$hazmat$primitives$hashes,
        sizeof(function_table_cryptography$hazmat$primitives$hashes) / sizeof(function_impl_code)
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
static char const *module_full_name = "cryptography.hazmat.primitives.hashes";
#endif

// Internal entry point for module code.
PyObject *module_code_cryptography$hazmat$primitives$hashes(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("cryptography$hazmat$primitives$hashes");

    // Store the module for future use.
    module_cryptography$hazmat$primitives$hashes = module;

    moduledict_cryptography$hazmat$primitives$hashes = MODULE_DICT(module_cryptography$hazmat$primitives$hashes);

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
        PRINT_STRING("cryptography$hazmat$primitives$hashes: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography$hazmat$primitives$hashes: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("cryptography$hazmat$primitives$hashes: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.primitives.hashes" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcryptography$hazmat$primitives$hashes\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_cryptography$hazmat$primitives$hashes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$hashes,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$hashes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$hashes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$hashes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$primitives$hashes);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_cryptography$hazmat$primitives$hashes);
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *outline_14_var___class__ = NULL;
PyObject *outline_15_var___class__ = NULL;
PyObject *outline_16_var___class__ = NULL;
PyObject *outline_17_var___class__ = NULL;
PyObject *outline_18_var___class__ = NULL;
PyObject *outline_19_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_20__bases = NULL;
PyObject *tmp_class_container$class_creation_20__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_20__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_20__metaclass = NULL;
PyObject *tmp_class_container$class_creation_20__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
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
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_91 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_12;
NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_13;
NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_14;
NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_15;
NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_16;
NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__17_MD5_17;
NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_18;
NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_52;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_53;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_54;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_19;
NUITKA_MAY_BE_UNUSED char const *type_description_19 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_55;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_56;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_57;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$hashes$$$class__20_SM3_20;
NUITKA_MAY_BE_UNUSED char const *type_description_20 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_58;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_59;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_60;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_cryptography$hazmat$primitives$hashes = MAKE_MODULE_FRAME(code_objects_c36c184dd2198e7f2ccd39188d337913, module_cryptography$hazmat$primitives$hashes);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_cryptography$hazmat$primitives$hashes$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_cryptography$hazmat$primitives$hashes$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 7;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_openssl_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 9;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_cryptography$hazmat$primitives$hashes,
        mod_consts.const_str_plain_openssl,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_openssl);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = LIST_COPY(tstate, mod_consts.const_list_4b78aea43b0c20431bd77bda6b59b315_list);
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$primitives$hashes$abc(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto try_except_handler_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
}
tmp_assign_source_8 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
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
tmp_assign_source_9 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_9 == NULL) {
    tmp_assign_source_9 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_9);
}
assert(!(tmp_assign_source_9 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_9);
condexpr_end_1:;
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_9;
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


exception_lineno = 36;

    goto try_except_handler_1;
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


exception_lineno = 36;

    goto try_except_handler_1;
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
PyObject *tmp_assign_source_10;
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


exception_lineno = 36;

    goto try_except_handler_1;
}
tmp_args_value_1 = mod_consts.const_tuple_str_plain_HashAlgorithm_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 36;
tmp_assign_source_10 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_10;
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


exception_lineno = 36;

    goto try_except_handler_1;
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
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
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


exception_lineno = 36;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
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


exception_lineno = 36;

    goto try_except_handler_1;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 36;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 36;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_11;
}
branch_end_2:;
{
PyObject *tmp_assign_source_12;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_HashAlgorithm;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_36;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_3;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2 = MAKE_CLASS_FRAME(tstate, code_objects_4a765c9ffd47ca21e9e27df8022bbc4a, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_1;
tmp_called_value_2 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_instance_1 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, mod_consts.const_str_plain_abc);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_cryptography$hazmat$primitives$hashes$abc(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__1_name(tstate, tmp_annotations_1);

frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2->m_frame.f_lineno = 38;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2->m_frame.f_lineno = 37;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, const_str_plain_name, tmp_dictset_value);
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_2;
tmp_called_value_3 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_instance_2 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, mod_consts.const_str_plain_abc);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_cryptography$hazmat$primitives$hashes$abc(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_4 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__2_digest_size(tstate, tmp_annotations_2);

frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2->m_frame.f_lineno = 45;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2->m_frame.f_lineno = 44;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_3;
tmp_called_value_4 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_instance_3 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, mod_consts.const_str_plain_abc);

if (tmp_called_instance_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_3 = module_var_accessor_cryptography$hazmat$primitives$hashes$abc(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);

tmp_args_element_value_6 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__3_block_size(tstate, tmp_annotations_3);

frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2->m_frame.f_lineno = 52;
tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2->m_frame.f_lineno = 51;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, mod_consts.const_str_plain_block_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_3;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_2 = mod_consts.const_str_plain_HashAlgorithm;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 36;
tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_13;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_12 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_12);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36);
locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36);
locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_36 = NULL;
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
exception_lineno = 36;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_HashAlgorithm, tmp_assign_source_12);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_14;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_7;
tmp_dict_key_2 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_7 = module_var_accessor_cryptography$hazmat$primitives$hashes$abc(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto try_except_handler_4;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_4;
}
tmp_assign_source_14 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
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
tmp_assign_source_15 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_5, tmp_key_value_5);
if (tmp_assign_source_15 == NULL) {
    tmp_assign_source_15 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_15);
}
assert(!(tmp_assign_source_15 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_15 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_15);
condexpr_end_2:;
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_15;
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


exception_lineno = 60;

    goto try_except_handler_4;
}
branch_no_4:;
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_4;
}
tmp_args_value_3 = mod_consts.const_tuple_str_plain_HashContext_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 60;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_16;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_4;
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
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_4, tmp_default_value_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_3);
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


exception_lineno = 60;

    goto try_except_handler_4;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 60;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 60;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_17;
}
branch_end_5:;
{
PyObject *tmp_assign_source_18;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_HashContext;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_60;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_6;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3 = MAKE_CLASS_FRAME(tstate, code_objects_52e0aadc618337f698806bf562de223b, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_4;
tmp_called_value_7 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, mod_consts.const_str_plain_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_instance_4 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, mod_consts.const_str_plain_abc);

if (tmp_called_instance_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_4 = module_var_accessor_cryptography$hazmat$primitives$hashes$abc(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_223b4647dae6a2e608ecde79744c0a55);

tmp_args_element_value_8 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__4_algorithm(tstate, tmp_annotations_4);

frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3->m_frame.f_lineno = 62;
tmp_args_element_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3->m_frame.f_lineno = 61;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, mod_consts.const_str_plain_algorithm, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_5;
tmp_called_instance_5 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, mod_consts.const_str_plain_abc);

if (tmp_called_instance_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_5 = module_var_accessor_cryptography$hazmat$primitives$hashes$abc(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_9c5c92330abf414287a7c5a37dc41725);

tmp_args_element_value_9 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__5_update(tstate, tmp_annotations_5);

frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3->m_frame.f_lineno = 68;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_6;
tmp_called_instance_6 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, mod_consts.const_str_plain_abc);

if (tmp_called_instance_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_6 = module_var_accessor_cryptography$hazmat$primitives$hashes$abc(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);

tmp_args_element_value_10 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__6_finalize(tstate, tmp_annotations_6);

frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3->m_frame.f_lineno = 74;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, mod_consts.const_str_plain_finalize, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_7;
tmp_called_instance_7 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, mod_consts.const_str_plain_abc);

if (tmp_called_instance_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_7 = module_var_accessor_cryptography$hazmat$primitives$hashes$abc(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_264e4020631b732f79aebd7c8522605a);

tmp_args_element_value_11 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__7_copy(tstate, tmp_annotations_7);

frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3->m_frame.f_lineno = 80;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, mod_consts.const_str_plain_copy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_6;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_HashContext;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 60;
tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_19;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_18 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_18);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60);
locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60);
locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_60 = NULL;
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
exception_lineno = 60;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_HashContext, tmp_assign_source_18);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
tmp_expression_value_14 = module_var_accessor_cryptography$hazmat$primitives$hashes$rust_openssl(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_hashes);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_Hash);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_Hash, tmp_assign_source_20);
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_12;
tmp_expression_value_15 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashContext(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashContext);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_register);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
tmp_args_element_value_12 = module_var_accessor_cryptography$hazmat$primitives$hashes$Hash(tstate);
if (unlikely(tmp_args_element_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Hash);
}

if (tmp_args_element_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 88;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 88;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_16;
tmp_dict_key_3 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_16 = module_var_accessor_cryptography$hazmat$primitives$hashes$abc(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto try_except_handler_7;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_7;
}
tmp_assign_source_21 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
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
tmp_assign_source_22 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_8, tmp_key_value_8);
if (tmp_assign_source_22 == NULL) {
    tmp_assign_source_22 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_22);
}
assert(!(tmp_assign_source_22 == NULL));
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_22 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_22);
condexpr_end_3:;
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_22;
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


exception_lineno = 91;

    goto try_except_handler_7;
}
branch_no_7:;
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_value_5;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_7;
}
tmp_args_value_5 = mod_consts.const_tuple_str_plain_ExtendableOutputFunction_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 91;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_23;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_19 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_7;
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
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_20, tmp_name_value_5, tmp_default_value_3);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_7;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_type_arg_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_3 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_expression_value_21 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_5);
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


exception_lineno = 91;

    goto try_except_handler_7;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 91;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 91;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_9:;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_24;
}
branch_end_8:;
{
PyObject *tmp_assign_source_25;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_91 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_91, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_1a16f00c2bb2013703134148ae3234f4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_91, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_ExtendableOutputFunction;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_91, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_91;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_91, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_9;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_91, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_9;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_ExtendableOutputFunction;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_91;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 91;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_26;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_25 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_25);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_91);
locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_91 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_91);
locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_91 = NULL;
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
exception_lineno = 91;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtendableOutputFunction, tmp_assign_source_25);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_27;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;

    goto try_except_handler_10;
}
tmp_assign_source_27 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_28 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_1;
PyObject *tmp_type_arg_4;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_10;
}
tmp_condition_result_13 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_22 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_1, 0);
if (tmp_type_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_10;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_4);
CHECK_OBJECT(tmp_type_arg_4);
Py_DECREF(tmp_type_arg_4);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_10;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_30 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_30;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

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
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_10;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_SHA1;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 97;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_31;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_25 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

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
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_26;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_26, tmp_name_value_6, tmp_default_value_4);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_10;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_27;
PyObject *tmp_type_arg_5;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_5 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_5);
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_9);
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


exception_lineno = 97;

    goto try_except_handler_10;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 97;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 97;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_32;
}
branch_end_10:;
{
PyObject *tmp_assign_source_33;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_SHA1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_97;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_12;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_4 = MAKE_CLASS_FRAME(tstate, code_objects_acf71054f5b5ed2678080926f77cf721, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_4);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_4) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_sha1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_20;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto frame_exception_exit_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_4,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_12;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_12;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_12;
}
branch_no_12:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_SHA1;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 97;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_12;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_34;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_33 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_33);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97);
locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97);
locals_cryptography$hazmat$primitives$hashes$$$class__4_SHA1_97 = NULL;
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
exception_lineno = 97;
goto try_except_handler_10;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHA1, tmp_assign_source_33);
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
PyObject *tmp_assign_source_35;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;

    goto try_except_handler_13;
}
tmp_assign_source_35 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_36 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_2;
PyObject *tmp_type_arg_6;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_13;
}
tmp_condition_result_17 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_28 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_2, 0);
if (tmp_type_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_13;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_6);
CHECK_OBJECT(tmp_type_arg_6);
Py_DECREF(tmp_type_arg_6);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_13;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_38 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_38;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

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
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_13;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_SHA512_224;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 103;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_39;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_31 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

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
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_32;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_32, tmp_name_value_7, tmp_default_value_5);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_13;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_33;
PyObject *tmp_type_arg_7;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_7 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_33 = BUILTIN_TYPE1(tmp_type_arg_7);
assert(!(tmp_expression_value_33 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_13);
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


exception_lineno = 103;

    goto try_except_handler_13;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 103;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_40;
}
branch_end_13:;
{
PyObject *tmp_assign_source_41;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_SHA512_224;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_103;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_5 = MAKE_CLASS_FRAME(tstate, code_objects_d31ae1a1c53774af1ee1945b4d126901, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_5);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_5) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_digest_6afc685f7615d0a2d988f92201341388;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_28;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_128;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto frame_exception_exit_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_5,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_15;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
branch_no_15:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_SHA512_224;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 103;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_42;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_41 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_41);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103);
locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103);
locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA512_224_103 = NULL;
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
exception_lineno = 103;
goto try_except_handler_13;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHA512_224, tmp_assign_source_41);
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
PyObject *tmp_assign_source_43;
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;

    goto try_except_handler_16;
}
tmp_assign_source_43 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_15);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_44 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_3;
PyObject *tmp_type_arg_8;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_16;
}
tmp_condition_result_21 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_34 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_3, 0);
if (tmp_type_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_16;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_8);
CHECK_OBJECT(tmp_type_arg_8);
Py_DECREF(tmp_type_arg_8);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_16;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_46 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_46;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_35, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

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
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_36;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_16;
}
tmp_tuple_element_16 = mod_consts.const_str_plain_SHA512_256;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 109;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_47;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_37;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_37 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_37, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

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
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_38;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_38, tmp_name_value_8, tmp_default_value_6);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_16;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_39;
PyObject *tmp_type_arg_9;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_9 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_39 = BUILTIN_TYPE1(tmp_type_arg_9);
assert(!(tmp_expression_value_39 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_17);
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


exception_lineno = 109;

    goto try_except_handler_16;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 109;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 109;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_16;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_48;
}
branch_end_16:;
{
PyObject *tmp_assign_source_49;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_plain_SHA512_256;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_109;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_18;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_6 = MAKE_CLASS_FRAME(tstate, code_objects_6039d7a8d39fc1eca8449d82b2e842e7, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_6);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_6) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_digest_66c82ef2bfb619b1b826576a54946c15;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_128;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_6;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_6,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_6);

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_18;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_18;
}
branch_no_18:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_17 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_18 = mod_consts.const_str_plain_SHA512_256;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 109;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_18;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_50;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_49 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_49);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109);
locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109);
locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_256_109 = NULL;
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
exception_lineno = 109;
goto try_except_handler_16;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHA512_256, tmp_assign_source_49);
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
PyObject *tmp_assign_source_51;
PyObject *tmp_tuple_element_19;
tmp_tuple_element_19 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;

    goto try_except_handler_19;
}
tmp_assign_source_51 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_19);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_52 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_4;
PyObject *tmp_type_arg_10;
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_19;
}
tmp_condition_result_25 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_40 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_40, tmp_subscript_value_4, 0);
if (tmp_type_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_19;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_10);
CHECK_OBJECT(tmp_type_arg_10);
Py_DECREF(tmp_type_arg_10);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_19;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_54 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_54;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

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
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_42;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_19;
}
tmp_tuple_element_20 = mod_consts.const_str_plain_SHA224;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 115;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_55;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_43;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_43 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_43, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

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
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_44;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_44 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_44, tmp_name_value_9, tmp_default_value_7);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_19;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_45;
PyObject *tmp_type_arg_11;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_11 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_45 = BUILTIN_TYPE1(tmp_type_arg_11);
assert(!(tmp_expression_value_45 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_45);
Py_DECREF(tmp_expression_value_45);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_21);
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


exception_lineno = 115;

    goto try_except_handler_19;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 115;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 115;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_19;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_56;
}
branch_end_19:;
{
PyObject *tmp_assign_source_57;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_plain_SHA224;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_115;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_7 = MAKE_CLASS_FRAME(tstate, code_objects_e100d4d72c5c2475f29a7ef2eaba7f73, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_7);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_7) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_sha224;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_dictset_value = mod_consts.const_int_pos_28;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_7;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_7,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_21;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_7__bases;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_7__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
branch_no_21:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_19 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_22 = mod_consts.const_str_plain_SHA224;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 115;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto try_except_handler_21;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_58;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_57 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_57);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115);
locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115);
locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA224_115 = NULL;
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
exception_lineno = 115;
goto try_except_handler_19;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHA224, tmp_assign_source_57);
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
PyObject *tmp_assign_source_59;
PyObject *tmp_tuple_element_23;
tmp_tuple_element_23 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto try_except_handler_22;
}
tmp_assign_source_59 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_59, 0, tmp_tuple_element_23);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_60 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_5;
PyObject *tmp_type_arg_12;
PyObject *tmp_expression_value_46;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_22;
}
tmp_condition_result_29 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_46 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_46, tmp_subscript_value_5, 0);
if (tmp_type_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_22;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_12);
CHECK_OBJECT(tmp_type_arg_12);
Py_DECREF(tmp_type_arg_12);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_22;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_62 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_62;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_47 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

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
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_48;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_22;
}
tmp_tuple_element_24 = mod_consts.const_str_plain_SHA256;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 121;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_63;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_49;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_49 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_49, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

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
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_50;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_50 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_25 = BUILTIN_GETATTR(tstate, tmp_expression_value_50, tmp_name_value_10, tmp_default_value_8);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_22;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_51;
PyObject *tmp_type_arg_13;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_13 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_51 = BUILTIN_TYPE1(tmp_type_arg_13);
assert(!(tmp_expression_value_51 == NULL));
tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_25);
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


exception_lineno = 121;

    goto try_except_handler_22;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 121;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 121;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_22;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_64;
}
branch_end_22:;
{
PyObject *tmp_assign_source_65;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_plain_SHA256;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_int_pos_121;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_24;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_8 = MAKE_CLASS_FRAME(tstate, code_objects_6321f662da822141edf0c648dc2e4d27, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_8);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_8) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_sha256;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_8;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_8,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_24;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_24;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_24;
}
branch_no_24:;
{
PyObject *tmp_assign_source_66;
PyObject *tmp_called_value_21;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_26;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_21 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_26 = mod_consts.const_str_plain_SHA256;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_26 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_26);
tmp_tuple_element_26 = locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 121;
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto try_except_handler_24;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_66;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_65 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_65);
goto try_return_handler_24;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121);
locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121);
locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA256_121 = NULL;
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
exception_lineno = 121;
goto try_except_handler_22;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHA256, tmp_assign_source_65);
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
PyObject *tmp_assign_source_67;
PyObject *tmp_tuple_element_27;
tmp_tuple_element_27 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto try_except_handler_25;
}
tmp_assign_source_67 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_67, 0, tmp_tuple_element_27);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_68 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_6;
PyObject *tmp_type_arg_14;
PyObject *tmp_expression_value_52;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_25;
}
tmp_condition_result_33 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_52 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_52, tmp_subscript_value_6, 0);
if (tmp_type_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_25;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_14);
CHECK_OBJECT(tmp_type_arg_14);
Py_DECREF(tmp_type_arg_14);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_25;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_70 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_70;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_53;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_53, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

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
PyObject *tmp_assign_source_71;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_54;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_28;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_54 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_25;
}
tmp_tuple_element_28 = mod_consts.const_str_plain_SHA384;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_28 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 127;
tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_71;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_55;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_55 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_55, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

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
PyObject *tmp_tuple_element_29;
PyObject *tmp_expression_value_56;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_56 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_29 = BUILTIN_GETATTR(tstate, tmp_expression_value_56, tmp_name_value_11, tmp_default_value_9);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_25;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_57;
PyObject *tmp_type_arg_15;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_15 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_57 = BUILTIN_TYPE1(tmp_type_arg_15);
assert(!(tmp_expression_value_57 == NULL));
tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_57);
Py_DECREF(tmp_expression_value_57);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_29);
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


exception_lineno = 127;

    goto try_except_handler_25;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 127;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 127;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_25;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_72;
tmp_assign_source_72 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_72;
}
branch_end_25:;
{
PyObject *tmp_assign_source_73;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_plain_SHA384;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_int_pos_127;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_27;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_9 = MAKE_CLASS_FRAME(tstate, code_objects_00826f0c38ff592c3de6bb2fd5d14ae0, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_9);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_9) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_sha384;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_int_pos_48;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_int_pos_128;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_9;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_9,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_27;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_27;
}
{
nuitka_bool tmp_condition_result_36;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_27;
}
branch_no_27:;
{
PyObject *tmp_assign_source_74;
PyObject *tmp_called_value_23;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_30;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_23 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_30 = mod_consts.const_str_plain_SHA384;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_30 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_30);
tmp_tuple_element_30 = locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 127;
tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_27;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_74;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_73 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_73);
goto try_return_handler_27;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127);
locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127 = NULL;
goto try_return_handler_26;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127);
locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA384_127 = NULL;
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
exception_lineno = 127;
goto try_except_handler_25;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHA384, tmp_assign_source_73);
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
PyObject *tmp_assign_source_75;
PyObject *tmp_tuple_element_31;
tmp_tuple_element_31 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;

    goto try_except_handler_28;
}
tmp_assign_source_75 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_75, 0, tmp_tuple_element_31);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_76 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_76;
}
{
PyObject *tmp_assign_source_77;
tmp_assign_source_77 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_77;
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_7;
PyObject *tmp_type_arg_16;
PyObject *tmp_expression_value_58;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_28;
}
tmp_condition_result_37 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_58 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_58, tmp_subscript_value_7, 0);
if (tmp_type_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_28;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_16);
CHECK_OBJECT(tmp_type_arg_16);
Py_DECREF(tmp_type_arg_16);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_28;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_78 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_78;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_59;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_59, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

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
PyObject *tmp_assign_source_79;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_60;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_32;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_60 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_28;
}
tmp_tuple_element_32 = mod_consts.const_str_plain_SHA512;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_32 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 133;
tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_79;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_61;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_61 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_61, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

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
PyObject *tmp_tuple_element_33;
PyObject *tmp_expression_value_62;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_62 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_33 = BUILTIN_GETATTR(tstate, tmp_expression_value_62, tmp_name_value_12, tmp_default_value_10);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_28;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_63;
PyObject *tmp_type_arg_17;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_17 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_63 = BUILTIN_TYPE1(tmp_type_arg_17);
assert(!(tmp_expression_value_63 == NULL));
tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_63);
Py_DECREF(tmp_expression_value_63);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_33);
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


exception_lineno = 133;

    goto try_except_handler_28;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 133;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 133;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_28;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_80;
tmp_assign_source_80 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_80;
}
branch_end_28:;
{
PyObject *tmp_assign_source_81;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_plain_SHA512;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_int_pos_133;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_30;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_10 = MAKE_CLASS_FRAME(tstate, code_objects_f4fba0a43c2dee7566fbcfc4bbeb1f3b, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_10);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_10) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_sha512;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_128;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_10;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_10,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_30;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_30;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_30;
}
branch_no_30:;
{
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_25;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_34;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_25 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_34 = mod_consts.const_str_plain_SHA512;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_34 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_34);
tmp_tuple_element_34 = locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 133;
tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto try_except_handler_30;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_82;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_81 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_81);
goto try_return_handler_30;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133);
locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133 = NULL;
goto try_return_handler_29;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133);
locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA512_133 = NULL;
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
exception_lineno = 133;
goto try_except_handler_28;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHA512, tmp_assign_source_81);
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
PyObject *tmp_assign_source_83;
PyObject *tmp_tuple_element_35;
tmp_tuple_element_35 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;

    goto try_except_handler_31;
}
tmp_assign_source_83 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_83, 0, tmp_tuple_element_35);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_83;
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_84 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_84;
}
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_85;
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_8;
PyObject *tmp_type_arg_18;
PyObject *tmp_expression_value_64;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_31;
}
tmp_condition_result_41 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_64 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_64, tmp_subscript_value_8, 0);
if (tmp_type_arg_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_31;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_18);
CHECK_OBJECT(tmp_type_arg_18);
Py_DECREF(tmp_type_arg_18);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_31;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_86 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_86;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_65;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_65, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

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
PyObject *tmp_assign_source_87;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_66;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_36;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_66 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_31;
}
tmp_tuple_element_36 = mod_consts.const_str_plain_SHA3_224;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_36 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 139;
tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_87;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_67;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_67 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_67, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

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
PyObject *tmp_tuple_element_37;
PyObject *tmp_expression_value_68;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_68 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_37 = BUILTIN_GETATTR(tstate, tmp_expression_value_68, tmp_name_value_13, tmp_default_value_11);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_31;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_69;
PyObject *tmp_type_arg_19;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_19 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_69 = BUILTIN_TYPE1(tmp_type_arg_19);
assert(!(tmp_expression_value_69 == NULL));
tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_69);
Py_DECREF(tmp_expression_value_69);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_37);
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


exception_lineno = 139;

    goto try_except_handler_31;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 139;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 139;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_31;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_88;
tmp_assign_source_88 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_88;
}
branch_end_31:;
{
PyObject *tmp_assign_source_89;
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_plain_SHA3_224;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_int_pos_139;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_33;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_11 = MAKE_CLASS_FRAME(tstate, code_objects_083aa4554f8b38b40366f7eed5d76953, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_11);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_11) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_digest_7d4a1d1378189ad66a0b87eab5ec341f;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_dictset_value = mod_consts.const_int_pos_28;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_11;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_11,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_33;
skip_nested_handling_10:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_33;
}
{
nuitka_bool tmp_condition_result_44;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_11__bases;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_11__bases_orig;
tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_33;
}
branch_no_33:;
{
PyObject *tmp_assign_source_90;
PyObject *tmp_called_value_27;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_38;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_27 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_38 = mod_consts.const_str_plain_SHA3_224;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_38 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_38);
tmp_tuple_element_38 = locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139;
PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 139;
tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_33;
}
assert(outline_10_var___class__ == NULL);
outline_10_var___class__ = tmp_assign_source_90;
}
CHECK_OBJECT(outline_10_var___class__);
tmp_assign_source_89 = outline_10_var___class__;
Py_INCREF(tmp_assign_source_89);
goto try_return_handler_33;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_33:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139);
locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139 = NULL;
goto try_return_handler_32;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139);
locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA3_224_139 = NULL;
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
exception_lineno = 139;
goto try_except_handler_31;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHA3_224, tmp_assign_source_89);
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
PyObject *tmp_assign_source_91;
PyObject *tmp_tuple_element_39;
tmp_tuple_element_39 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;

    goto try_except_handler_34;
}
tmp_assign_source_91 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_91, 0, tmp_tuple_element_39);
assert(tmp_class_container$class_creation_12__bases_orig == NULL);
tmp_class_container$class_creation_12__bases_orig = tmp_assign_source_91;
}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_12__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_92 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_12__bases == NULL);
tmp_class_container$class_creation_12__bases = tmp_assign_source_92;
}
{
PyObject *tmp_assign_source_93;
tmp_assign_source_93 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__class_decl_dict == NULL);
tmp_class_container$class_creation_12__class_decl_dict = tmp_assign_source_93;
}
{
PyObject *tmp_assign_source_94;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_45;
int tmp_truth_name_9;
PyObject *tmp_type_arg_20;
PyObject *tmp_expression_value_70;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_12__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_34;
}
tmp_condition_result_45 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_12;
} else {
    goto condexpr_false_12;
}
condexpr_true_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_expression_value_70 = tmp_class_container$class_creation_12__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_20 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_70, tmp_subscript_value_9, 0);
if (tmp_type_arg_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_34;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_20);
CHECK_OBJECT(tmp_type_arg_20);
Py_DECREF(tmp_type_arg_20);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_34;
}
goto condexpr_end_12;
condexpr_false_12:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_12__bases;
tmp_assign_source_94 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_12__metaclass == NULL);
tmp_class_container$class_creation_12__metaclass = tmp_assign_source_94;
}
{
bool tmp_condition_result_46;
PyObject *tmp_expression_value_71;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_71 = tmp_class_container$class_creation_12__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_71, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

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
PyObject *tmp_assign_source_95;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_72;
PyObject *tmp_args_value_23;
PyObject *tmp_tuple_element_40;
PyObject *tmp_kwargs_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_72 = tmp_class_container$class_creation_12__metaclass;
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_34;
}
tmp_tuple_element_40 = mod_consts.const_str_plain_SHA3_256;
tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_40 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_23 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 145;
tmp_assign_source_95 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_23, tmp_kwargs_value_23);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_value_23);
Py_DECREF(tmp_args_value_23);
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_95;
}
{
bool tmp_condition_result_47;
PyObject *tmp_operand_value_12;
PyObject *tmp_expression_value_73;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_expression_value_73 = tmp_class_container$class_creation_12__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_73, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

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
PyObject *tmp_tuple_element_41;
PyObject *tmp_expression_value_74;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_74 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_41 = BUILTIN_GETATTR(tstate, tmp_expression_value_74, tmp_name_value_14, tmp_default_value_12);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_34;
}
tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_75;
PyObject *tmp_type_arg_21;
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_type_arg_21 = tmp_class_container$class_creation_12__prepared;
tmp_expression_value_75 = BUILTIN_TYPE1(tmp_type_arg_21);
assert(!(tmp_expression_value_75 == NULL));
tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_75);
Py_DECREF(tmp_expression_value_75);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_41);
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


exception_lineno = 145;

    goto try_except_handler_34;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 145;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 145;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_34;
}
branch_no_35:;
goto branch_end_34;
branch_no_34:;
{
PyObject *tmp_assign_source_96;
tmp_assign_source_96 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_96;
}
branch_end_34:;
{
PyObject *tmp_assign_source_97;
{
PyObject *tmp_set_locals_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_set_locals_12 = tmp_class_container$class_creation_12__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_str_plain_SHA3_256;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_int_pos_145;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_36;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_12 = MAKE_CLASS_FRAME(tstate, code_objects_5af50ea3ae933a3f27bcbe682dbc019a, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_12);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_12) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_digest_b203f55b4e11ae2116912809c8c9bcb7;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_12;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_12:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_12,
    type_description_2,
    outline_11_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_12);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_11;
frame_no_exception_11:;
goto skip_nested_handling_11;
nested_frame_exit_11:;

goto try_except_handler_36;
skip_nested_handling_11:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_36;
}
{
nuitka_bool tmp_condition_result_48;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_12__bases;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_cmp_expr_right_9 = tmp_class_container$class_creation_12__bases_orig;
tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_36;
}
branch_no_36:;
{
PyObject *tmp_assign_source_98;
PyObject *tmp_called_value_29;
PyObject *tmp_args_value_24;
PyObject *tmp_tuple_element_42;
PyObject *tmp_kwargs_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_called_value_29 = tmp_class_container$class_creation_12__metaclass;
tmp_tuple_element_42 = mod_consts.const_str_plain_SHA3_256;
tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_42 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_42);
tmp_tuple_element_42 = locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145;
PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_24 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 145;
tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_24, tmp_kwargs_value_24);
CHECK_OBJECT(tmp_args_value_24);
Py_DECREF(tmp_args_value_24);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_36;
}
assert(outline_11_var___class__ == NULL);
outline_11_var___class__ = tmp_assign_source_98;
}
CHECK_OBJECT(outline_11_var___class__);
tmp_assign_source_97 = outline_11_var___class__;
Py_INCREF(tmp_assign_source_97);
goto try_return_handler_36;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_36:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145);
locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145 = NULL;
goto try_return_handler_35;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145);
locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_256_145 = NULL;
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
exception_lineno = 145;
goto try_except_handler_34;
outline_result_24:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHA3_256, tmp_assign_source_97);
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
PyObject *tmp_assign_source_99;
PyObject *tmp_tuple_element_43;
tmp_tuple_element_43 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;

    goto try_except_handler_37;
}
tmp_assign_source_99 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_99, 0, tmp_tuple_element_43);
assert(tmp_class_container$class_creation_13__bases_orig == NULL);
tmp_class_container$class_creation_13__bases_orig = tmp_assign_source_99;
}
{
PyObject *tmp_assign_source_100;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_13__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_100 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_37;
}
assert(tmp_class_container$class_creation_13__bases == NULL);
tmp_class_container$class_creation_13__bases = tmp_assign_source_100;
}
{
PyObject *tmp_assign_source_101;
tmp_assign_source_101 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__class_decl_dict == NULL);
tmp_class_container$class_creation_13__class_decl_dict = tmp_assign_source_101;
}
{
PyObject *tmp_assign_source_102;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_49;
int tmp_truth_name_10;
PyObject *tmp_type_arg_22;
PyObject *tmp_expression_value_76;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_13__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_37;
}
tmp_condition_result_49 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_13;
} else {
    goto condexpr_false_13;
}
condexpr_true_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_expression_value_76 = tmp_class_container$class_creation_13__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_22 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_76, tmp_subscript_value_10, 0);
if (tmp_type_arg_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_37;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_22);
CHECK_OBJECT(tmp_type_arg_22);
Py_DECREF(tmp_type_arg_22);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_37;
}
goto condexpr_end_13;
condexpr_false_13:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_13__bases;
tmp_assign_source_102 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_37;
}
assert(tmp_class_container$class_creation_13__metaclass == NULL);
tmp_class_container$class_creation_13__metaclass = tmp_assign_source_102;
}
{
bool tmp_condition_result_50;
PyObject *tmp_expression_value_77;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_77 = tmp_class_container$class_creation_13__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_77, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

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
PyObject *tmp_assign_source_103;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_78;
PyObject *tmp_args_value_25;
PyObject *tmp_tuple_element_44;
PyObject *tmp_kwargs_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_78 = tmp_class_container$class_creation_13__metaclass;
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_37;
}
tmp_tuple_element_44 = mod_consts.const_str_plain_SHA3_384;
tmp_args_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_44 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_25 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 151;
tmp_assign_source_103 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_25, tmp_kwargs_value_25);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_value_25);
Py_DECREF(tmp_args_value_25);
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_37;
}
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_103;
}
{
bool tmp_condition_result_51;
PyObject *tmp_operand_value_13;
PyObject *tmp_expression_value_79;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_expression_value_79 = tmp_class_container$class_creation_13__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_79, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

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
PyObject *tmp_tuple_element_45;
PyObject *tmp_expression_value_80;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_13;
tmp_mod_expr_left_13 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_80 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_13 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_45 = BUILTIN_GETATTR(tstate, tmp_expression_value_80, tmp_name_value_15, tmp_default_value_13);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_37;
}
tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_81;
PyObject *tmp_type_arg_23;
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_type_arg_23 = tmp_class_container$class_creation_13__prepared;
tmp_expression_value_81 = BUILTIN_TYPE1(tmp_type_arg_23);
assert(!(tmp_expression_value_81 == NULL));
tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_81);
Py_DECREF(tmp_expression_value_81);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_45);
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


exception_lineno = 151;

    goto try_except_handler_37;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 151;
tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_13);
CHECK_OBJECT(tmp_make_exception_arg_13);
Py_DECREF(tmp_make_exception_arg_13);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 151;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_37;
}
branch_no_38:;
goto branch_end_37;
branch_no_37:;
{
PyObject *tmp_assign_source_104;
tmp_assign_source_104 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_104;
}
branch_end_37:;
{
PyObject *tmp_assign_source_105;
{
PyObject *tmp_set_locals_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_set_locals_13 = tmp_class_container$class_creation_13__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151 = tmp_set_locals_13;
Py_INCREF(tmp_set_locals_13);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_str_plain_SHA3_384;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_int_pos_151;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_39;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_13 = MAKE_CLASS_FRAME(tstate, code_objects_c0b1ab3f166c89701d3d3ef06b667d79, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_13);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_13) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_digest_a55706530cc479f6787cf00324496c51;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_dictset_value = mod_consts.const_int_pos_48;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_13;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_12;
frame_exception_exit_13:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_13,
    type_description_2,
    outline_12_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_13);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_12;
frame_no_exception_12:;
goto skip_nested_handling_12;
nested_frame_exit_12:;

goto try_except_handler_39;
skip_nested_handling_12:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_39;
}
{
nuitka_bool tmp_condition_result_52;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_13__bases;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_13__bases_orig;
tmp_condition_result_52 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_52 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_39;
}
branch_no_39:;
{
PyObject *tmp_assign_source_106;
PyObject *tmp_called_value_31;
PyObject *tmp_args_value_26;
PyObject *tmp_tuple_element_46;
PyObject *tmp_kwargs_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_called_value_31 = tmp_class_container$class_creation_13__metaclass;
tmp_tuple_element_46 = mod_consts.const_str_plain_SHA3_384;
tmp_args_value_26 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_46 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_46);
tmp_tuple_element_46 = locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151;
PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_26 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 151;
tmp_assign_source_106 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_26, tmp_kwargs_value_26);
CHECK_OBJECT(tmp_args_value_26);
Py_DECREF(tmp_args_value_26);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto try_except_handler_39;
}
assert(outline_12_var___class__ == NULL);
outline_12_var___class__ = tmp_assign_source_106;
}
CHECK_OBJECT(outline_12_var___class__);
tmp_assign_source_105 = outline_12_var___class__;
Py_INCREF(tmp_assign_source_105);
goto try_return_handler_39;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_39:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151);
locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151 = NULL;
goto try_return_handler_38;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151);
locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_384_151 = NULL;
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
exception_lineno = 151;
goto try_except_handler_37;
outline_result_26:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHA3_384, tmp_assign_source_105);
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
PyObject *tmp_assign_source_107;
PyObject *tmp_tuple_element_47;
tmp_tuple_element_47 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;

    goto try_except_handler_40;
}
tmp_assign_source_107 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_107, 0, tmp_tuple_element_47);
assert(tmp_class_container$class_creation_14__bases_orig == NULL);
tmp_class_container$class_creation_14__bases_orig = tmp_assign_source_107;
}
{
PyObject *tmp_assign_source_108;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_14__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_108 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_14__bases == NULL);
tmp_class_container$class_creation_14__bases = tmp_assign_source_108;
}
{
PyObject *tmp_assign_source_109;
tmp_assign_source_109 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__class_decl_dict == NULL);
tmp_class_container$class_creation_14__class_decl_dict = tmp_assign_source_109;
}
{
PyObject *tmp_assign_source_110;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_53;
int tmp_truth_name_11;
PyObject *tmp_type_arg_24;
PyObject *tmp_expression_value_82;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_14__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_40;
}
tmp_condition_result_53 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_14;
} else {
    goto condexpr_false_14;
}
condexpr_true_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_expression_value_82 = tmp_class_container$class_creation_14__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_24 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_82, tmp_subscript_value_11, 0);
if (tmp_type_arg_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_40;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_24);
CHECK_OBJECT(tmp_type_arg_24);
Py_DECREF(tmp_type_arg_24);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_40;
}
goto condexpr_end_14;
condexpr_false_14:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_14__bases;
tmp_assign_source_110 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_14__metaclass == NULL);
tmp_class_container$class_creation_14__metaclass = tmp_assign_source_110;
}
{
bool tmp_condition_result_54;
PyObject *tmp_expression_value_83;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_83 = tmp_class_container$class_creation_14__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_83, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

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
PyObject *tmp_assign_source_111;
PyObject *tmp_called_value_32;
PyObject *tmp_expression_value_84;
PyObject *tmp_args_value_27;
PyObject *tmp_tuple_element_48;
PyObject *tmp_kwargs_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_84 = tmp_class_container$class_creation_14__metaclass;
tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_40;
}
tmp_tuple_element_48 = mod_consts.const_str_plain_SHA3_512;
tmp_args_value_27 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_48);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_48 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_48);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_27 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 157;
tmp_assign_source_111 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_27, tmp_kwargs_value_27);
CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
CHECK_OBJECT(tmp_args_value_27);
Py_DECREF(tmp_args_value_27);
if (tmp_assign_source_111 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_111;
}
{
bool tmp_condition_result_55;
PyObject *tmp_operand_value_14;
PyObject *tmp_expression_value_85;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_expression_value_85 = tmp_class_container$class_creation_14__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_85, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

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
PyObject *tmp_tuple_element_49;
PyObject *tmp_expression_value_86;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_14;
tmp_mod_expr_left_14 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_86 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_14 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_49 = BUILTIN_GETATTR(tstate, tmp_expression_value_86, tmp_name_value_16, tmp_default_value_14);
if (tmp_tuple_element_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_40;
}
tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_87;
PyObject *tmp_type_arg_25;
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_type_arg_25 = tmp_class_container$class_creation_14__prepared;
tmp_expression_value_87 = BUILTIN_TYPE1(tmp_type_arg_25);
assert(!(tmp_expression_value_87 == NULL));
tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_87);
Py_DECREF(tmp_expression_value_87);
if (tmp_tuple_element_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_49);
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


exception_lineno = 157;

    goto try_except_handler_40;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 157;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_14);
CHECK_OBJECT(tmp_make_exception_arg_14);
Py_DECREF(tmp_make_exception_arg_14);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 157;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_40;
}
branch_no_41:;
goto branch_end_40;
branch_no_40:;
{
PyObject *tmp_assign_source_112;
tmp_assign_source_112 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_112;
}
branch_end_40:;
{
PyObject *tmp_assign_source_113;
{
PyObject *tmp_set_locals_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_set_locals_14 = tmp_class_container$class_creation_14__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157 = tmp_set_locals_14;
Py_INCREF(tmp_set_locals_14);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_str_plain_SHA3_512;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_int_pos_157;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_42;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_14 = MAKE_CLASS_FRAME(tstate, code_objects_47b24e2b26c8ee2fa69b0f4b0d844fd5, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_14);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_14) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_digest_90c3c33e90721a671df978b9871b677f;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_14;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_13;
frame_exception_exit_14:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_14,
    type_description_2,
    outline_13_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_14);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_13;
frame_no_exception_13:;
goto skip_nested_handling_13;
nested_frame_exit_13:;

goto try_except_handler_42;
skip_nested_handling_13:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_42;
}
{
nuitka_bool tmp_condition_result_56;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_cmp_expr_left_11 = tmp_class_container$class_creation_14__bases;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_cmp_expr_right_11 = tmp_class_container$class_creation_14__bases_orig;
tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_42;
}
branch_no_42:;
{
PyObject *tmp_assign_source_114;
PyObject *tmp_called_value_33;
PyObject *tmp_args_value_28;
PyObject *tmp_tuple_element_50;
PyObject *tmp_kwargs_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_called_value_33 = tmp_class_container$class_creation_14__metaclass;
tmp_tuple_element_50 = mod_consts.const_str_plain_SHA3_512;
tmp_args_value_28 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_50 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_50);
tmp_tuple_element_50 = locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157;
PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_28 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 157;
tmp_assign_source_114 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_28, tmp_kwargs_value_28);
CHECK_OBJECT(tmp_args_value_28);
Py_DECREF(tmp_args_value_28);
if (tmp_assign_source_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_42;
}
assert(outline_13_var___class__ == NULL);
outline_13_var___class__ = tmp_assign_source_114;
}
CHECK_OBJECT(outline_13_var___class__);
tmp_assign_source_113 = outline_13_var___class__;
Py_INCREF(tmp_assign_source_113);
goto try_return_handler_42;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_42:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157);
locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157 = NULL;
goto try_return_handler_41;
// Exception handler code:
try_except_handler_42:;
exception_keeper_lineno_40 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_40 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157);
locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_512_157 = NULL;
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
exception_lineno = 157;
goto try_except_handler_40;
outline_result_28:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHA3_512, tmp_assign_source_113);
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
PyObject *tmp_assign_source_115;
PyObject *tmp_tuple_element_51;
tmp_tuple_element_51 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;

    goto try_except_handler_43;
}
tmp_assign_source_115 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_115, 0, tmp_tuple_element_51);
tmp_tuple_element_51 = module_var_accessor_cryptography$hazmat$primitives$hashes$ExtendableOutputFunction(tstate);
if (unlikely(tmp_tuple_element_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtendableOutputFunction);
}

if (tmp_tuple_element_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM0(tmp_assign_source_115, 1, tmp_tuple_element_51);
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_assign_source_115);
goto try_except_handler_43;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
assert(tmp_class_container$class_creation_15__bases_orig == NULL);
tmp_class_container$class_creation_15__bases_orig = tmp_assign_source_115;
}
{
PyObject *tmp_assign_source_116;
PyObject *tmp_direct_call_arg1_12;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_direct_call_arg1_12 = tmp_class_container$class_creation_15__bases_orig;
Py_INCREF(tmp_direct_call_arg1_12);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_12};
    tmp_assign_source_116 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_43;
}
assert(tmp_class_container$class_creation_15__bases == NULL);
tmp_class_container$class_creation_15__bases = tmp_assign_source_116;
}
{
PyObject *tmp_assign_source_117;
tmp_assign_source_117 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__class_decl_dict == NULL);
tmp_class_container$class_creation_15__class_decl_dict = tmp_assign_source_117;
}
{
PyObject *tmp_assign_source_118;
PyObject *tmp_metaclass_value_12;
nuitka_bool tmp_condition_result_57;
int tmp_truth_name_12;
PyObject *tmp_type_arg_26;
PyObject *tmp_expression_value_88;
PyObject *tmp_subscript_value_12;
PyObject *tmp_bases_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_container$class_creation_15__bases);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_43;
}
tmp_condition_result_57 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_15;
} else {
    goto condexpr_false_15;
}
condexpr_true_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_expression_value_88 = tmp_class_container$class_creation_15__bases;
tmp_subscript_value_12 = const_int_0;
tmp_type_arg_26 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_88, tmp_subscript_value_12, 0);
if (tmp_type_arg_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_43;
}
tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_26);
CHECK_OBJECT(tmp_type_arg_26);
Py_DECREF(tmp_type_arg_26);
if (tmp_metaclass_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_43;
}
goto condexpr_end_15;
condexpr_false_15:;
tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_12);
condexpr_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_15__bases;
tmp_assign_source_118 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
CHECK_OBJECT(tmp_metaclass_value_12);
Py_DECREF(tmp_metaclass_value_12);
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_43;
}
assert(tmp_class_container$class_creation_15__metaclass == NULL);
tmp_class_container$class_creation_15__metaclass = tmp_assign_source_118;
}
{
bool tmp_condition_result_58;
PyObject *tmp_expression_value_89;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_89 = tmp_class_container$class_creation_15__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_89, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

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
PyObject *tmp_assign_source_119;
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_90;
PyObject *tmp_args_value_29;
PyObject *tmp_tuple_element_52;
PyObject *tmp_kwargs_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_90 = tmp_class_container$class_creation_15__metaclass;
tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_43;
}
tmp_tuple_element_52 = mod_consts.const_str_plain_SHAKE128;
tmp_args_value_29 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_52 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_29 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 163;
tmp_assign_source_119 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_29, tmp_kwargs_value_29);
CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_args_value_29);
Py_DECREF(tmp_args_value_29);
if (tmp_assign_source_119 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_43;
}
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_119;
}
{
bool tmp_condition_result_59;
PyObject *tmp_operand_value_15;
PyObject *tmp_expression_value_91;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_expression_value_91 = tmp_class_container$class_creation_15__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_91, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

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
PyObject *tmp_tuple_element_53;
PyObject *tmp_expression_value_92;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_15;
tmp_mod_expr_left_15 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_92 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_15 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_53 = BUILTIN_GETATTR(tstate, tmp_expression_value_92, tmp_name_value_17, tmp_default_value_15);
if (tmp_tuple_element_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_43;
}
tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_93;
PyObject *tmp_type_arg_27;
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_type_arg_27 = tmp_class_container$class_creation_15__prepared;
tmp_expression_value_93 = BUILTIN_TYPE1(tmp_type_arg_27);
assert(!(tmp_expression_value_93 == NULL));
tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_93);
Py_DECREF(tmp_expression_value_93);
if (tmp_tuple_element_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_53);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_mod_expr_right_15);
goto try_except_handler_43;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_make_exception_arg_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
CHECK_OBJECT(tmp_mod_expr_right_15);
Py_DECREF(tmp_mod_expr_right_15);
if (tmp_make_exception_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_43;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 163;
tmp_raise_type_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_15);
CHECK_OBJECT(tmp_make_exception_arg_15);
Py_DECREF(tmp_make_exception_arg_15);
assert(!(tmp_raise_type_15 == NULL));
exception_state.exception_value = tmp_raise_type_15;
exception_lineno = 163;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_43;
}
branch_no_44:;
goto branch_end_43;
branch_no_43:;
{
PyObject *tmp_assign_source_120;
tmp_assign_source_120 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_120;
}
branch_end_43:;
{
PyObject *tmp_assign_source_121;
{
PyObject *tmp_set_locals_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_set_locals_15 = tmp_class_container$class_creation_15__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163 = tmp_set_locals_15;
Py_INCREF(tmp_set_locals_15);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_str_plain_SHAKE128;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_int_pos_163;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_45;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_15 = MAKE_CLASS_FRAME(tstate, code_objects_97477121dc1e5d60da25bea3280c6036, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_15);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_15) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_shake128;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_ac7e5baefb5165d291ba8d7851ec11ef);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__8___init__(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}
{
PyObject *tmp_called_value_35;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_9;
tmp_called_value_35 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163, mod_consts.const_str_plain_property);

if (tmp_called_value_35 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_35 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_35);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_15;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_13 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__9_digest_size(tstate, tmp_annotations_9);

frame_frame_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_15->m_frame.f_lineno = 176;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_14;
frame_exception_exit_15:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_15,
    type_description_2,
    outline_14_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_15);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_14;
frame_no_exception_14:;
goto skip_nested_handling_14;
nested_frame_exit_14:;

goto try_except_handler_45;
skip_nested_handling_14:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__digest_size_tuple;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_45;
}
{
nuitka_bool tmp_condition_result_60;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_cmp_expr_left_12 = tmp_class_container$class_creation_15__bases;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_cmp_expr_right_12 = tmp_class_container$class_creation_15__bases_orig;
tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_45;
}
branch_no_45:;
{
PyObject *tmp_assign_source_122;
PyObject *tmp_called_value_36;
PyObject *tmp_args_value_30;
PyObject *tmp_tuple_element_54;
PyObject *tmp_kwargs_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_called_value_36 = tmp_class_container$class_creation_15__metaclass;
tmp_tuple_element_54 = mod_consts.const_str_plain_SHAKE128;
tmp_args_value_30 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_54 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_54);
tmp_tuple_element_54 = locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163;
PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_30 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 163;
tmp_assign_source_122 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_30, tmp_kwargs_value_30);
CHECK_OBJECT(tmp_args_value_30);
Py_DECREF(tmp_args_value_30);
if (tmp_assign_source_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto try_except_handler_45;
}
assert(outline_14_var___class__ == NULL);
outline_14_var___class__ = tmp_assign_source_122;
}
CHECK_OBJECT(outline_14_var___class__);
tmp_assign_source_121 = outline_14_var___class__;
Py_INCREF(tmp_assign_source_121);
goto try_return_handler_45;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_45:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163);
locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163 = NULL;
goto try_return_handler_44;
// Exception handler code:
try_except_handler_45:;
exception_keeper_lineno_43 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_43 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163);
locals_cryptography$hazmat$primitives$hashes$$$class__15_SHAKE128_163 = NULL;
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
exception_lineno = 163;
goto try_except_handler_43;
outline_result_30:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHAKE128, tmp_assign_source_121);
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
PyObject *tmp_assign_source_123;
PyObject *tmp_tuple_element_55;
tmp_tuple_element_55 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;

    goto try_except_handler_46;
}
tmp_assign_source_123 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_123, 0, tmp_tuple_element_55);
tmp_tuple_element_55 = module_var_accessor_cryptography$hazmat$primitives$hashes$ExtendableOutputFunction(tstate);
if (unlikely(tmp_tuple_element_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtendableOutputFunction);
}

if (tmp_tuple_element_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM0(tmp_assign_source_123, 1, tmp_tuple_element_55);
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_assign_source_123);
goto try_except_handler_46;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
assert(tmp_class_container$class_creation_16__bases_orig == NULL);
tmp_class_container$class_creation_16__bases_orig = tmp_assign_source_123;
}
{
PyObject *tmp_assign_source_124;
PyObject *tmp_direct_call_arg1_13;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_direct_call_arg1_13 = tmp_class_container$class_creation_16__bases_orig;
Py_INCREF(tmp_direct_call_arg1_13);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_13};
    tmp_assign_source_124 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_124 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_46;
}
assert(tmp_class_container$class_creation_16__bases == NULL);
tmp_class_container$class_creation_16__bases = tmp_assign_source_124;
}
{
PyObject *tmp_assign_source_125;
tmp_assign_source_125 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__class_decl_dict == NULL);
tmp_class_container$class_creation_16__class_decl_dict = tmp_assign_source_125;
}
{
PyObject *tmp_assign_source_126;
PyObject *tmp_metaclass_value_13;
nuitka_bool tmp_condition_result_61;
int tmp_truth_name_13;
PyObject *tmp_type_arg_28;
PyObject *tmp_expression_value_94;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_container$class_creation_16__bases);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_46;
}
tmp_condition_result_61 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_16;
} else {
    goto condexpr_false_16;
}
condexpr_true_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_expression_value_94 = tmp_class_container$class_creation_16__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_28 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_94, tmp_subscript_value_13, 0);
if (tmp_type_arg_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_46;
}
tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_28);
CHECK_OBJECT(tmp_type_arg_28);
Py_DECREF(tmp_type_arg_28);
if (tmp_metaclass_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_46;
}
goto condexpr_end_16;
condexpr_false_16:;
tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_13);
condexpr_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_bases_value_13 = tmp_class_container$class_creation_16__bases;
tmp_assign_source_126 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
CHECK_OBJECT(tmp_metaclass_value_13);
Py_DECREF(tmp_metaclass_value_13);
if (tmp_assign_source_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_46;
}
assert(tmp_class_container$class_creation_16__metaclass == NULL);
tmp_class_container$class_creation_16__metaclass = tmp_assign_source_126;
}
{
bool tmp_condition_result_62;
PyObject *tmp_expression_value_95;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_95 = tmp_class_container$class_creation_16__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_95, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

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
PyObject *tmp_assign_source_127;
PyObject *tmp_called_value_37;
PyObject *tmp_expression_value_96;
PyObject *tmp_args_value_31;
PyObject *tmp_tuple_element_56;
PyObject *tmp_kwargs_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_96 = tmp_class_container$class_creation_16__metaclass;
tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_46;
}
tmp_tuple_element_56 = mod_consts.const_str_plain_SHAKE256;
tmp_args_value_31 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_56 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_31 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 181;
tmp_assign_source_127 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_31, tmp_kwargs_value_31);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_value_31);
Py_DECREF(tmp_args_value_31);
if (tmp_assign_source_127 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_46;
}
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_127;
}
{
bool tmp_condition_result_63;
PyObject *tmp_operand_value_16;
PyObject *tmp_expression_value_97;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_expression_value_97 = tmp_class_container$class_creation_16__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_97, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

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
PyObject *tmp_tuple_element_57;
PyObject *tmp_expression_value_98;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_16;
tmp_mod_expr_left_16 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_98 = tmp_class_container$class_creation_16__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_16 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_57 = BUILTIN_GETATTR(tstate, tmp_expression_value_98, tmp_name_value_18, tmp_default_value_16);
if (tmp_tuple_element_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_46;
}
tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_99;
PyObject *tmp_type_arg_29;
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_57);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_type_arg_29 = tmp_class_container$class_creation_16__prepared;
tmp_expression_value_99 = BUILTIN_TYPE1(tmp_type_arg_29);
assert(!(tmp_expression_value_99 == NULL));
tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_99);
Py_DECREF(tmp_expression_value_99);
if (tmp_tuple_element_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_57);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_16);
goto try_except_handler_46;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
CHECK_OBJECT(tmp_mod_expr_right_16);
Py_DECREF(tmp_mod_expr_right_16);
if (tmp_make_exception_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_46;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 181;
tmp_raise_type_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_16);
CHECK_OBJECT(tmp_make_exception_arg_16);
Py_DECREF(tmp_make_exception_arg_16);
assert(!(tmp_raise_type_16 == NULL));
exception_state.exception_value = tmp_raise_type_16;
exception_lineno = 181;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_46;
}
branch_no_47:;
goto branch_end_46;
branch_no_46:;
{
PyObject *tmp_assign_source_128;
tmp_assign_source_128 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_128;
}
branch_end_46:;
{
PyObject *tmp_assign_source_129;
{
PyObject *tmp_set_locals_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_set_locals_16 = tmp_class_container$class_creation_16__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181 = tmp_set_locals_16;
Py_INCREF(tmp_set_locals_16);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_str_plain_SHAKE256;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_int_pos_181;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_48;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_16 = MAKE_CLASS_FRAME(tstate, code_objects_6a604d108fb0ac652e2747cbfe2d44e9, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_16);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_16) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_shake256;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_ac7e5baefb5165d291ba8d7851ec11ef);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__10___init__(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}
{
PyObject *tmp_called_value_38;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_11;
tmp_called_value_38 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181, mod_consts.const_str_plain_property);

if (tmp_called_value_38 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_38 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_38);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_16;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_14 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__11_digest_size(tstate, tmp_annotations_11);

frame_frame_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_16->m_frame.f_lineno = 194;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_38);
Py_DECREF(tmp_called_value_38);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_15;
frame_exception_exit_16:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_16,
    type_description_2,
    outline_15_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_16);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_15;
frame_no_exception_15:;
goto skip_nested_handling_15;
nested_frame_exit_15:;

goto try_except_handler_48;
skip_nested_handling_15:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__digest_size_tuple;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_48;
}
{
nuitka_bool tmp_condition_result_64;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_cmp_expr_left_13 = tmp_class_container$class_creation_16__bases;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_cmp_expr_right_13 = tmp_class_container$class_creation_16__bases_orig;
tmp_condition_result_64 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_64 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_48;
}
branch_no_48:;
{
PyObject *tmp_assign_source_130;
PyObject *tmp_called_value_39;
PyObject *tmp_args_value_32;
PyObject *tmp_tuple_element_58;
PyObject *tmp_kwargs_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_called_value_39 = tmp_class_container$class_creation_16__metaclass;
tmp_tuple_element_58 = mod_consts.const_str_plain_SHAKE256;
tmp_args_value_32 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_58 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_58);
tmp_tuple_element_58 = locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181;
PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_32 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 181;
tmp_assign_source_130 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_32, tmp_kwargs_value_32);
CHECK_OBJECT(tmp_args_value_32);
Py_DECREF(tmp_args_value_32);
if (tmp_assign_source_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto try_except_handler_48;
}
assert(outline_15_var___class__ == NULL);
outline_15_var___class__ = tmp_assign_source_130;
}
CHECK_OBJECT(outline_15_var___class__);
tmp_assign_source_129 = outline_15_var___class__;
Py_INCREF(tmp_assign_source_129);
goto try_return_handler_48;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_48:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181);
locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181 = NULL;
goto try_return_handler_47;
// Exception handler code:
try_except_handler_48:;
exception_keeper_lineno_46 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_46 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181);
locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE256_181 = NULL;
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
exception_lineno = 181;
goto try_except_handler_46;
outline_result_32:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SHAKE256, tmp_assign_source_129);
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
PyObject *tmp_assign_source_131;
PyObject *tmp_tuple_element_59;
tmp_tuple_element_59 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;

    goto try_except_handler_49;
}
tmp_assign_source_131 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_131, 0, tmp_tuple_element_59);
assert(tmp_class_container$class_creation_17__bases_orig == NULL);
tmp_class_container$class_creation_17__bases_orig = tmp_assign_source_131;
}
{
PyObject *tmp_assign_source_132;
PyObject *tmp_direct_call_arg1_14;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_direct_call_arg1_14 = tmp_class_container$class_creation_17__bases_orig;
Py_INCREF(tmp_direct_call_arg1_14);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_14};
    tmp_assign_source_132 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_132 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_49;
}
assert(tmp_class_container$class_creation_17__bases == NULL);
tmp_class_container$class_creation_17__bases = tmp_assign_source_132;
}
{
PyObject *tmp_assign_source_133;
tmp_assign_source_133 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__class_decl_dict == NULL);
tmp_class_container$class_creation_17__class_decl_dict = tmp_assign_source_133;
}
{
PyObject *tmp_assign_source_134;
PyObject *tmp_metaclass_value_14;
nuitka_bool tmp_condition_result_65;
int tmp_truth_name_14;
PyObject *tmp_type_arg_30;
PyObject *tmp_expression_value_100;
PyObject *tmp_subscript_value_14;
PyObject *tmp_bases_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_container$class_creation_17__bases);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_49;
}
tmp_condition_result_65 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_17;
} else {
    goto condexpr_false_17;
}
condexpr_true_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_expression_value_100 = tmp_class_container$class_creation_17__bases;
tmp_subscript_value_14 = const_int_0;
tmp_type_arg_30 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_100, tmp_subscript_value_14, 0);
if (tmp_type_arg_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_49;
}
tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_30);
CHECK_OBJECT(tmp_type_arg_30);
Py_DECREF(tmp_type_arg_30);
if (tmp_metaclass_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_49;
}
goto condexpr_end_17;
condexpr_false_17:;
tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_14);
condexpr_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_bases_value_14 = tmp_class_container$class_creation_17__bases;
tmp_assign_source_134 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
CHECK_OBJECT(tmp_metaclass_value_14);
Py_DECREF(tmp_metaclass_value_14);
if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_49;
}
assert(tmp_class_container$class_creation_17__metaclass == NULL);
tmp_class_container$class_creation_17__metaclass = tmp_assign_source_134;
}
{
bool tmp_condition_result_66;
PyObject *tmp_expression_value_101;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_101 = tmp_class_container$class_creation_17__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_101, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

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
PyObject *tmp_assign_source_135;
PyObject *tmp_called_value_40;
PyObject *tmp_expression_value_102;
PyObject *tmp_args_value_33;
PyObject *tmp_tuple_element_60;
PyObject *tmp_kwargs_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_102 = tmp_class_container$class_creation_17__metaclass;
tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_49;
}
tmp_tuple_element_60 = mod_consts.const_str_plain_MD5;
tmp_args_value_33 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_60);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_60 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_60);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_33 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 199;
tmp_assign_source_135 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_33, tmp_kwargs_value_33);
CHECK_OBJECT(tmp_called_value_40);
Py_DECREF(tmp_called_value_40);
CHECK_OBJECT(tmp_args_value_33);
Py_DECREF(tmp_args_value_33);
if (tmp_assign_source_135 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_49;
}
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_135;
}
{
bool tmp_condition_result_67;
PyObject *tmp_operand_value_17;
PyObject *tmp_expression_value_103;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_expression_value_103 = tmp_class_container$class_creation_17__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_103, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

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
PyObject *tmp_tuple_element_61;
PyObject *tmp_expression_value_104;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_17;
tmp_mod_expr_left_17 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_104 = tmp_class_container$class_creation_17__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_17 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_61 = BUILTIN_GETATTR(tstate, tmp_expression_value_104, tmp_name_value_19, tmp_default_value_17);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_49;
}
tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_105;
PyObject *tmp_type_arg_31;
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_type_arg_31 = tmp_class_container$class_creation_17__prepared;
tmp_expression_value_105 = BUILTIN_TYPE1(tmp_type_arg_31);
assert(!(tmp_expression_value_105 == NULL));
tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_105);
Py_DECREF(tmp_expression_value_105);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_61);
}
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_mod_expr_right_17);
goto try_except_handler_49;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_make_exception_arg_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
CHECK_OBJECT(tmp_mod_expr_right_17);
Py_DECREF(tmp_mod_expr_right_17);
if (tmp_make_exception_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_49;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 199;
tmp_raise_type_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_17);
CHECK_OBJECT(tmp_make_exception_arg_17);
Py_DECREF(tmp_make_exception_arg_17);
assert(!(tmp_raise_type_17 == NULL));
exception_state.exception_value = tmp_raise_type_17;
exception_lineno = 199;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_49;
}
branch_no_50:;
goto branch_end_49;
branch_no_49:;
{
PyObject *tmp_assign_source_136;
tmp_assign_source_136 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_136;
}
branch_end_49:;
{
PyObject *tmp_assign_source_137;
{
PyObject *tmp_set_locals_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_set_locals_17 = tmp_class_container$class_creation_17__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199 = tmp_set_locals_17;
Py_INCREF(tmp_set_locals_17);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_str_plain_MD5;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_int_pos_199;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_51;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__17_MD5_17 = MAKE_CLASS_FRAME(tstate, code_objects_2504dd426668023dc8a5ddaa97f7500c, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__17_MD5_17);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__17_MD5_17) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_md5;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_dictset_value = mod_consts.const_int_pos_16;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_2 = "o";
    goto frame_exception_exit_17;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_16;
frame_exception_exit_17:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__17_MD5_17, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__17_MD5_17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__17_MD5_17, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__17_MD5_17,
    type_description_2,
    outline_16_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__17_MD5_17);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_16;
frame_no_exception_16:;
goto skip_nested_handling_16;
nested_frame_exit_16:;

goto try_except_handler_51;
skip_nested_handling_16:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_51;
}
{
nuitka_bool tmp_condition_result_68;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_cmp_expr_left_14 = tmp_class_container$class_creation_17__bases;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_cmp_expr_right_14 = tmp_class_container$class_creation_17__bases_orig;
tmp_condition_result_68 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_68 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_51;
}
branch_no_51:;
{
PyObject *tmp_assign_source_138;
PyObject *tmp_called_value_41;
PyObject *tmp_args_value_34;
PyObject *tmp_tuple_element_62;
PyObject *tmp_kwargs_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_called_value_41 = tmp_class_container$class_creation_17__metaclass;
tmp_tuple_element_62 = mod_consts.const_str_plain_MD5;
tmp_args_value_34 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_62);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_62 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_62);
tmp_tuple_element_62 = locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199;
PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_62);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_34 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 199;
tmp_assign_source_138 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_34, tmp_kwargs_value_34);
CHECK_OBJECT(tmp_args_value_34);
Py_DECREF(tmp_args_value_34);
if (tmp_assign_source_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_51;
}
assert(outline_16_var___class__ == NULL);
outline_16_var___class__ = tmp_assign_source_138;
}
CHECK_OBJECT(outline_16_var___class__);
tmp_assign_source_137 = outline_16_var___class__;
Py_INCREF(tmp_assign_source_137);
goto try_return_handler_51;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_51:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199);
locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199 = NULL;
goto try_return_handler_50;
// Exception handler code:
try_except_handler_51:;
exception_keeper_lineno_49 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_49 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199);
locals_cryptography$hazmat$primitives$hashes$$$class__17_MD5_199 = NULL;
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
exception_lineno = 199;
goto try_except_handler_49;
outline_result_34:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_MD5, tmp_assign_source_137);
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
PyObject *tmp_assign_source_139;
PyObject *tmp_tuple_element_63;
tmp_tuple_element_63 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;

    goto try_except_handler_52;
}
tmp_assign_source_139 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_139, 0, tmp_tuple_element_63);
assert(tmp_class_container$class_creation_18__bases_orig == NULL);
tmp_class_container$class_creation_18__bases_orig = tmp_assign_source_139;
}
{
PyObject *tmp_assign_source_140;
PyObject *tmp_direct_call_arg1_15;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_direct_call_arg1_15 = tmp_class_container$class_creation_18__bases_orig;
Py_INCREF(tmp_direct_call_arg1_15);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_15};
    tmp_assign_source_140 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_52;
}
assert(tmp_class_container$class_creation_18__bases == NULL);
tmp_class_container$class_creation_18__bases = tmp_assign_source_140;
}
{
PyObject *tmp_assign_source_141;
tmp_assign_source_141 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__class_decl_dict == NULL);
tmp_class_container$class_creation_18__class_decl_dict = tmp_assign_source_141;
}
{
PyObject *tmp_assign_source_142;
PyObject *tmp_metaclass_value_15;
nuitka_bool tmp_condition_result_69;
int tmp_truth_name_15;
PyObject *tmp_type_arg_32;
PyObject *tmp_expression_value_106;
PyObject *tmp_subscript_value_15;
PyObject *tmp_bases_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_container$class_creation_18__bases);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_52;
}
tmp_condition_result_69 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_18;
} else {
    goto condexpr_false_18;
}
condexpr_true_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_expression_value_106 = tmp_class_container$class_creation_18__bases;
tmp_subscript_value_15 = const_int_0;
tmp_type_arg_32 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_106, tmp_subscript_value_15, 0);
if (tmp_type_arg_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_52;
}
tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_32);
CHECK_OBJECT(tmp_type_arg_32);
Py_DECREF(tmp_type_arg_32);
if (tmp_metaclass_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_52;
}
goto condexpr_end_18;
condexpr_false_18:;
tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_15);
condexpr_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_bases_value_15 = tmp_class_container$class_creation_18__bases;
tmp_assign_source_142 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
CHECK_OBJECT(tmp_metaclass_value_15);
Py_DECREF(tmp_metaclass_value_15);
if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_52;
}
assert(tmp_class_container$class_creation_18__metaclass == NULL);
tmp_class_container$class_creation_18__metaclass = tmp_assign_source_142;
}
{
bool tmp_condition_result_70;
PyObject *tmp_expression_value_107;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_107 = tmp_class_container$class_creation_18__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_107, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

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
PyObject *tmp_assign_source_143;
PyObject *tmp_called_value_42;
PyObject *tmp_expression_value_108;
PyObject *tmp_args_value_35;
PyObject *tmp_tuple_element_64;
PyObject *tmp_kwargs_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_108 = tmp_class_container$class_creation_18__metaclass;
tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_52;
}
tmp_tuple_element_64 = mod_consts.const_str_plain_BLAKE2b;
tmp_args_value_35 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_64 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_35 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 205;
tmp_assign_source_143 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_35, tmp_kwargs_value_35);
CHECK_OBJECT(tmp_called_value_42);
Py_DECREF(tmp_called_value_42);
CHECK_OBJECT(tmp_args_value_35);
Py_DECREF(tmp_args_value_35);
if (tmp_assign_source_143 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_52;
}
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_143;
}
{
bool tmp_condition_result_71;
PyObject *tmp_operand_value_18;
PyObject *tmp_expression_value_109;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_expression_value_109 = tmp_class_container$class_creation_18__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_109, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

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
PyObject *tmp_tuple_element_65;
PyObject *tmp_expression_value_110;
PyObject *tmp_name_value_20;
PyObject *tmp_default_value_18;
tmp_mod_expr_left_18 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_110 = tmp_class_container$class_creation_18__metaclass;
tmp_name_value_20 = const_str_plain___name__;
tmp_default_value_18 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_65 = BUILTIN_GETATTR(tstate, tmp_expression_value_110, tmp_name_value_20, tmp_default_value_18);
if (tmp_tuple_element_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_52;
}
tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_111;
PyObject *tmp_type_arg_33;
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_65);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_type_arg_33 = tmp_class_container$class_creation_18__prepared;
tmp_expression_value_111 = BUILTIN_TYPE1(tmp_type_arg_33);
assert(!(tmp_expression_value_111 == NULL));
tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_111);
Py_DECREF(tmp_expression_value_111);
if (tmp_tuple_element_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_65);
}
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_mod_expr_right_18);
goto try_except_handler_52;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_make_exception_arg_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
CHECK_OBJECT(tmp_mod_expr_right_18);
Py_DECREF(tmp_mod_expr_right_18);
if (tmp_make_exception_arg_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_52;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 205;
tmp_raise_type_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_18);
CHECK_OBJECT(tmp_make_exception_arg_18);
Py_DECREF(tmp_make_exception_arg_18);
assert(!(tmp_raise_type_18 == NULL));
exception_state.exception_value = tmp_raise_type_18;
exception_lineno = 205;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_52;
}
branch_no_53:;
goto branch_end_52;
branch_no_52:;
{
PyObject *tmp_assign_source_144;
tmp_assign_source_144 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_144;
}
branch_end_52:;
{
PyObject *tmp_assign_source_145;
{
PyObject *tmp_set_locals_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_set_locals_18 = tmp_class_container$class_creation_18__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205 = tmp_set_locals_18;
Py_INCREF(tmp_set_locals_18);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_54;
}
tmp_dictset_value = mod_consts.const_str_plain_BLAKE2b;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_54;
}
tmp_dictset_value = mod_consts.const_int_pos_205;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_54;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_18 = MAKE_CLASS_FRAME(tstate, code_objects_f44a37d88c8129538afea56b713de7a6, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_18);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_18) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_blake2b;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205, mod_consts.const_str_plain__max_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205, mod_consts.const_str_plain__min_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_dictset_value = mod_consts.const_int_pos_128;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_ac7e5baefb5165d291ba8d7851ec11ef);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__12___init__(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_called_value_43;
PyObject *tmp_args_element_value_15;
PyObject *tmp_annotations_13;
tmp_called_value_43 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205, mod_consts.const_str_plain_property);

if (tmp_called_value_43 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_43 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_43);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_15 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__13_digest_size(tstate, tmp_annotations_13);

frame_frame_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_18->m_frame.f_lineno = 217;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_43);
Py_DECREF(tmp_called_value_43);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_17;
frame_exception_exit_18:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_18, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_18, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_18,
    type_description_2,
    outline_17_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_18);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_17;
frame_no_exception_17:;
goto skip_nested_handling_17;
nested_frame_exit_17:;

goto try_except_handler_54;
skip_nested_handling_17:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__digest_size_tuple;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_54;
}
{
nuitka_bool tmp_condition_result_72;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_cmp_expr_left_15 = tmp_class_container$class_creation_18__bases;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_cmp_expr_right_15 = tmp_class_container$class_creation_18__bases_orig;
tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_54;
}
branch_no_54:;
{
PyObject *tmp_assign_source_146;
PyObject *tmp_called_value_44;
PyObject *tmp_args_value_36;
PyObject *tmp_tuple_element_66;
PyObject *tmp_kwargs_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_called_value_44 = tmp_class_container$class_creation_18__metaclass;
tmp_tuple_element_66 = mod_consts.const_str_plain_BLAKE2b;
tmp_args_value_36 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_66);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_66 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_66);
tmp_tuple_element_66 = locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205;
PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_66);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_36 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 205;
tmp_assign_source_146 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_36, tmp_kwargs_value_36);
CHECK_OBJECT(tmp_args_value_36);
Py_DECREF(tmp_args_value_36);
if (tmp_assign_source_146 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_54;
}
assert(outline_17_var___class__ == NULL);
outline_17_var___class__ = tmp_assign_source_146;
}
CHECK_OBJECT(outline_17_var___class__);
tmp_assign_source_145 = outline_17_var___class__;
Py_INCREF(tmp_assign_source_145);
goto try_return_handler_54;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_54:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205);
locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205 = NULL;
goto try_return_handler_53;
// Exception handler code:
try_except_handler_54:;
exception_keeper_lineno_52 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_52 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205);
locals_cryptography$hazmat$primitives$hashes$$$class__18_BLAKE2b_205 = NULL;
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
exception_lineno = 205;
goto try_except_handler_52;
outline_result_36:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_BLAKE2b, tmp_assign_source_145);
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
PyObject *tmp_assign_source_147;
PyObject *tmp_tuple_element_67;
tmp_tuple_element_67 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;

    goto try_except_handler_55;
}
tmp_assign_source_147 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_147, 0, tmp_tuple_element_67);
assert(tmp_class_container$class_creation_19__bases_orig == NULL);
tmp_class_container$class_creation_19__bases_orig = tmp_assign_source_147;
}
{
PyObject *tmp_assign_source_148;
PyObject *tmp_direct_call_arg1_16;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_direct_call_arg1_16 = tmp_class_container$class_creation_19__bases_orig;
Py_INCREF(tmp_direct_call_arg1_16);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_16};
    tmp_assign_source_148 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_148 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_55;
}
assert(tmp_class_container$class_creation_19__bases == NULL);
tmp_class_container$class_creation_19__bases = tmp_assign_source_148;
}
{
PyObject *tmp_assign_source_149;
tmp_assign_source_149 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_19__class_decl_dict == NULL);
tmp_class_container$class_creation_19__class_decl_dict = tmp_assign_source_149;
}
{
PyObject *tmp_assign_source_150;
PyObject *tmp_metaclass_value_16;
nuitka_bool tmp_condition_result_73;
int tmp_truth_name_16;
PyObject *tmp_type_arg_34;
PyObject *tmp_expression_value_112;
PyObject *tmp_subscript_value_16;
PyObject *tmp_bases_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_container$class_creation_19__bases);
if (tmp_truth_name_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_55;
}
tmp_condition_result_73 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_19;
} else {
    goto condexpr_false_19;
}
condexpr_true_19:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_expression_value_112 = tmp_class_container$class_creation_19__bases;
tmp_subscript_value_16 = const_int_0;
tmp_type_arg_34 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_112, tmp_subscript_value_16, 0);
if (tmp_type_arg_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_55;
}
tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_34);
CHECK_OBJECT(tmp_type_arg_34);
Py_DECREF(tmp_type_arg_34);
if (tmp_metaclass_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_55;
}
goto condexpr_end_19;
condexpr_false_19:;
tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_16);
condexpr_end_19:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_bases_value_16 = tmp_class_container$class_creation_19__bases;
tmp_assign_source_150 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
CHECK_OBJECT(tmp_metaclass_value_16);
Py_DECREF(tmp_metaclass_value_16);
if (tmp_assign_source_150 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_55;
}
assert(tmp_class_container$class_creation_19__metaclass == NULL);
tmp_class_container$class_creation_19__metaclass = tmp_assign_source_150;
}
{
bool tmp_condition_result_74;
PyObject *tmp_expression_value_113;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_113 = tmp_class_container$class_creation_19__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_113, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

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
PyObject *tmp_assign_source_151;
PyObject *tmp_called_value_45;
PyObject *tmp_expression_value_114;
PyObject *tmp_args_value_37;
PyObject *tmp_tuple_element_68;
PyObject *tmp_kwargs_value_37;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_114 = tmp_class_container$class_creation_19__metaclass;
tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_55;
}
tmp_tuple_element_68 = mod_consts.const_str_plain_BLAKE2s;
tmp_args_value_37 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_68);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_68 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_68);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_37 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 222;
tmp_assign_source_151 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_37, tmp_kwargs_value_37);
CHECK_OBJECT(tmp_called_value_45);
Py_DECREF(tmp_called_value_45);
CHECK_OBJECT(tmp_args_value_37);
Py_DECREF(tmp_args_value_37);
if (tmp_assign_source_151 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_55;
}
assert(tmp_class_container$class_creation_19__prepared == NULL);
tmp_class_container$class_creation_19__prepared = tmp_assign_source_151;
}
{
bool tmp_condition_result_75;
PyObject *tmp_operand_value_19;
PyObject *tmp_expression_value_115;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_expression_value_115 = tmp_class_container$class_creation_19__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_115, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

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
PyObject *tmp_tuple_element_69;
PyObject *tmp_expression_value_116;
PyObject *tmp_name_value_21;
PyObject *tmp_default_value_19;
tmp_mod_expr_left_19 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_116 = tmp_class_container$class_creation_19__metaclass;
tmp_name_value_21 = const_str_plain___name__;
tmp_default_value_19 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_69 = BUILTIN_GETATTR(tstate, tmp_expression_value_116, tmp_name_value_21, tmp_default_value_19);
if (tmp_tuple_element_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_55;
}
tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_117;
PyObject *tmp_type_arg_35;
PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_type_arg_35 = tmp_class_container$class_creation_19__prepared;
tmp_expression_value_117 = BUILTIN_TYPE1(tmp_type_arg_35);
assert(!(tmp_expression_value_117 == NULL));
tmp_tuple_element_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_117);
Py_DECREF(tmp_expression_value_117);
if (tmp_tuple_element_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto tuple_build_exception_21;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_69);
}
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_mod_expr_right_19);
goto try_except_handler_55;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
tmp_make_exception_arg_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
CHECK_OBJECT(tmp_mod_expr_right_19);
Py_DECREF(tmp_mod_expr_right_19);
if (tmp_make_exception_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_55;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 222;
tmp_raise_type_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_19);
CHECK_OBJECT(tmp_make_exception_arg_19);
Py_DECREF(tmp_make_exception_arg_19);
assert(!(tmp_raise_type_19 == NULL));
exception_state.exception_value = tmp_raise_type_19;
exception_lineno = 222;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_55;
}
branch_no_56:;
goto branch_end_55;
branch_no_55:;
{
PyObject *tmp_assign_source_152;
tmp_assign_source_152 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_19__prepared == NULL);
tmp_class_container$class_creation_19__prepared = tmp_assign_source_152;
}
branch_end_55:;
{
PyObject *tmp_assign_source_153;
{
PyObject *tmp_set_locals_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_set_locals_19 = tmp_class_container$class_creation_19__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222 = tmp_set_locals_19;
Py_INCREF(tmp_set_locals_19);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_57;
}
tmp_dictset_value = mod_consts.const_str_plain_BLAKE2s;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_57;
}
tmp_dictset_value = mod_consts.const_int_pos_222;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_57;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_19 = MAKE_CLASS_FRAME(tstate, code_objects_bb3feec3b7a6466abb1c9de613ddd72f, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_19);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_19) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_blake2s;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222, mod_consts.const_str_plain__max_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222, mod_consts.const_str_plain__min_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_ac7e5baefb5165d291ba8d7851ec11ef);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__14___init__(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
}
{
PyObject *tmp_called_value_46;
PyObject *tmp_args_element_value_16;
PyObject *tmp_annotations_15;
tmp_called_value_46 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222, mod_consts.const_str_plain_property);

if (tmp_called_value_46 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_46 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_46);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_19;
    }
}

tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_16 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__15_digest_size(tstate, tmp_annotations_15);

frame_frame_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_19->m_frame.f_lineno = 234;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_46);
Py_DECREF(tmp_called_value_46);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_18;
frame_exception_exit_19:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_19, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_19, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_19,
    type_description_2,
    outline_18_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_19);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_18;
frame_no_exception_18:;
goto skip_nested_handling_18;
nested_frame_exit_18:;

goto try_except_handler_57;
skip_nested_handling_18:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__digest_size_tuple;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_57;
}
{
nuitka_bool tmp_condition_result_76;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_cmp_expr_left_16 = tmp_class_container$class_creation_19__bases;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_cmp_expr_right_16 = tmp_class_container$class_creation_19__bases_orig;
tmp_condition_result_76 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_condition_result_76 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_57;
}
branch_no_57:;
{
PyObject *tmp_assign_source_154;
PyObject *tmp_called_value_47;
PyObject *tmp_args_value_38;
PyObject *tmp_tuple_element_70;
PyObject *tmp_kwargs_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_called_value_47 = tmp_class_container$class_creation_19__metaclass;
tmp_tuple_element_70 = mod_consts.const_str_plain_BLAKE2s;
tmp_args_value_38 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_70);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_70 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_70);
tmp_tuple_element_70 = locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222;
PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_70);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_38 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 222;
tmp_assign_source_154 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_38, tmp_kwargs_value_38);
CHECK_OBJECT(tmp_args_value_38);
Py_DECREF(tmp_args_value_38);
if (tmp_assign_source_154 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto try_except_handler_57;
}
assert(outline_18_var___class__ == NULL);
outline_18_var___class__ = tmp_assign_source_154;
}
CHECK_OBJECT(outline_18_var___class__);
tmp_assign_source_153 = outline_18_var___class__;
Py_INCREF(tmp_assign_source_153);
goto try_return_handler_57;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_57:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222);
locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222 = NULL;
goto try_return_handler_56;
// Exception handler code:
try_except_handler_57:;
exception_keeper_lineno_55 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_55 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222);
locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2s_222 = NULL;
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
exception_lineno = 222;
goto try_except_handler_55;
outline_result_38:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_BLAKE2s, tmp_assign_source_153);
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
PyObject *tmp_assign_source_155;
PyObject *tmp_tuple_element_71;
tmp_tuple_element_71 = module_var_accessor_cryptography$hazmat$primitives$hashes$HashAlgorithm(tstate);
if (unlikely(tmp_tuple_element_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HashAlgorithm);
}

if (tmp_tuple_element_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;

    goto try_except_handler_58;
}
tmp_assign_source_155 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_155, 0, tmp_tuple_element_71);
assert(tmp_class_container$class_creation_20__bases_orig == NULL);
tmp_class_container$class_creation_20__bases_orig = tmp_assign_source_155;
}
{
PyObject *tmp_assign_source_156;
PyObject *tmp_direct_call_arg1_17;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_direct_call_arg1_17 = tmp_class_container$class_creation_20__bases_orig;
Py_INCREF(tmp_direct_call_arg1_17);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_17};
    tmp_assign_source_156 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_156 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_58;
}
assert(tmp_class_container$class_creation_20__bases == NULL);
tmp_class_container$class_creation_20__bases = tmp_assign_source_156;
}
{
PyObject *tmp_assign_source_157;
tmp_assign_source_157 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_20__class_decl_dict == NULL);
tmp_class_container$class_creation_20__class_decl_dict = tmp_assign_source_157;
}
{
PyObject *tmp_assign_source_158;
PyObject *tmp_metaclass_value_17;
nuitka_bool tmp_condition_result_77;
int tmp_truth_name_17;
PyObject *tmp_type_arg_36;
PyObject *tmp_expression_value_118;
PyObject *tmp_subscript_value_17;
PyObject *tmp_bases_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_container$class_creation_20__bases);
if (tmp_truth_name_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_58;
}
tmp_condition_result_77 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_20;
} else {
    goto condexpr_false_20;
}
condexpr_true_20:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_expression_value_118 = tmp_class_container$class_creation_20__bases;
tmp_subscript_value_17 = const_int_0;
tmp_type_arg_36 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_118, tmp_subscript_value_17, 0);
if (tmp_type_arg_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_58;
}
tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_36);
CHECK_OBJECT(tmp_type_arg_36);
Py_DECREF(tmp_type_arg_36);
if (tmp_metaclass_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_58;
}
goto condexpr_end_20;
condexpr_false_20:;
tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_17);
condexpr_end_20:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_bases_value_17 = tmp_class_container$class_creation_20__bases;
tmp_assign_source_158 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
CHECK_OBJECT(tmp_metaclass_value_17);
Py_DECREF(tmp_metaclass_value_17);
if (tmp_assign_source_158 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_58;
}
assert(tmp_class_container$class_creation_20__metaclass == NULL);
tmp_class_container$class_creation_20__metaclass = tmp_assign_source_158;
}
{
bool tmp_condition_result_78;
PyObject *tmp_expression_value_119;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_119 = tmp_class_container$class_creation_20__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_119, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

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
PyObject *tmp_assign_source_159;
PyObject *tmp_called_value_48;
PyObject *tmp_expression_value_120;
PyObject *tmp_args_value_39;
PyObject *tmp_tuple_element_72;
PyObject *tmp_kwargs_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_120 = tmp_class_container$class_creation_20__metaclass;
tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_58;
}
tmp_tuple_element_72 = mod_consts.const_str_plain_SM3;
tmp_args_value_39 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_72);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_72 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_72);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_39 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 239;
tmp_assign_source_159 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_39, tmp_kwargs_value_39);
CHECK_OBJECT(tmp_called_value_48);
Py_DECREF(tmp_called_value_48);
CHECK_OBJECT(tmp_args_value_39);
Py_DECREF(tmp_args_value_39);
if (tmp_assign_source_159 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_58;
}
assert(tmp_class_container$class_creation_20__prepared == NULL);
tmp_class_container$class_creation_20__prepared = tmp_assign_source_159;
}
{
bool tmp_condition_result_79;
PyObject *tmp_operand_value_20;
PyObject *tmp_expression_value_121;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_expression_value_121 = tmp_class_container$class_creation_20__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_121, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

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
PyObject *tmp_tuple_element_73;
PyObject *tmp_expression_value_122;
PyObject *tmp_name_value_22;
PyObject *tmp_default_value_20;
tmp_mod_expr_left_20 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_122 = tmp_class_container$class_creation_20__metaclass;
tmp_name_value_22 = const_str_plain___name__;
tmp_default_value_20 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_73 = BUILTIN_GETATTR(tstate, tmp_expression_value_122, tmp_name_value_22, tmp_default_value_20);
if (tmp_tuple_element_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_58;
}
tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_123;
PyObject *tmp_type_arg_37;
PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_73);
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_type_arg_37 = tmp_class_container$class_creation_20__prepared;
tmp_expression_value_123 = BUILTIN_TYPE1(tmp_type_arg_37);
assert(!(tmp_expression_value_123 == NULL));
tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_123);
Py_DECREF(tmp_expression_value_123);
if (tmp_tuple_element_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto tuple_build_exception_22;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_73);
}
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_mod_expr_right_20);
goto try_except_handler_58;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
tmp_make_exception_arg_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
CHECK_OBJECT(tmp_mod_expr_right_20);
Py_DECREF(tmp_mod_expr_right_20);
if (tmp_make_exception_arg_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_58;
}
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 239;
tmp_raise_type_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_20);
CHECK_OBJECT(tmp_make_exception_arg_20);
Py_DECREF(tmp_make_exception_arg_20);
assert(!(tmp_raise_type_20 == NULL));
exception_state.exception_value = tmp_raise_type_20;
exception_lineno = 239;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_58;
}
branch_no_59:;
goto branch_end_58;
branch_no_58:;
{
PyObject *tmp_assign_source_160;
tmp_assign_source_160 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_20__prepared == NULL);
tmp_class_container$class_creation_20__prepared = tmp_assign_source_160;
}
branch_end_58:;
{
PyObject *tmp_assign_source_161;
{
PyObject *tmp_set_locals_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_set_locals_20 = tmp_class_container$class_creation_20__prepared;
locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239 = tmp_set_locals_20;
Py_INCREF(tmp_set_locals_20);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5e31165c18332720d100693a167e4ad4;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_60;
}
tmp_dictset_value = mod_consts.const_str_plain_SM3;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_60;
}
tmp_dictset_value = mod_consts.const_int_pos_239;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_60;
}
frame_frame_cryptography$hazmat$primitives$hashes$$$class__20_SM3_20 = MAKE_CLASS_FRAME(tstate, code_objects_d79650bc9b6117a45995b7958d2ae88b, module_cryptography$hazmat$primitives$hashes, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$hashes$$$class__20_SM3_20);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$hashes$$$class__20_SM3_20) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_sm3;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239, mod_consts.const_str_plain_digest_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239, mod_consts.const_str_plain_block_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_20;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_19;
frame_exception_exit_20:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes$$$class__20_SM3_20, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes$$$class__20_SM3_20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes$$$class__20_SM3_20, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$hashes$$$class__20_SM3_20,
    type_description_2,
    outline_19_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes$$$class__20_SM3_20);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_19;
frame_no_exception_19:;
goto skip_nested_handling_19;
nested_frame_exit_19:;

goto try_except_handler_60;
skip_nested_handling_19:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_60;
}
{
nuitka_bool tmp_condition_result_80;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_cmp_expr_left_17 = tmp_class_container$class_creation_20__bases;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_cmp_expr_right_17 = tmp_class_container$class_creation_20__bases_orig;
tmp_condition_result_80 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_condition_result_80 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

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
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_60;
}
branch_no_60:;
{
PyObject *tmp_assign_source_162;
PyObject *tmp_called_value_49;
PyObject *tmp_args_value_40;
PyObject *tmp_tuple_element_74;
PyObject *tmp_kwargs_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_called_value_49 = tmp_class_container$class_creation_20__metaclass;
tmp_tuple_element_74 = mod_consts.const_str_plain_SM3;
tmp_args_value_40 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_74);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_74 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_74);
tmp_tuple_element_74 = locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239;
PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_74);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_40 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$hashes->m_frame.f_lineno = 239;
tmp_assign_source_162 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_40, tmp_kwargs_value_40);
CHECK_OBJECT(tmp_args_value_40);
Py_DECREF(tmp_args_value_40);
if (tmp_assign_source_162 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_60;
}
assert(outline_19_var___class__ == NULL);
outline_19_var___class__ = tmp_assign_source_162;
}
CHECK_OBJECT(outline_19_var___class__);
tmp_assign_source_161 = outline_19_var___class__;
Py_INCREF(tmp_assign_source_161);
goto try_return_handler_60;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_60:;
Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239);
locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239 = NULL;
goto try_return_handler_59;
// Exception handler code:
try_except_handler_60:;
exception_keeper_lineno_58 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_58 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239);
locals_cryptography$hazmat$primitives$hashes$$$class__20_SM3_239 = NULL;
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
exception_lineno = 239;
goto try_except_handler_58;
outline_result_40:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts.const_str_plain_SM3, tmp_assign_source_161);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_20;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$hashes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$hashes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$hashes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_cryptography$hazmat$primitives$hashes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_20:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("cryptography$hazmat$primitives$hashes", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.primitives.hashes" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_cryptography$hazmat$primitives$hashes);
    return module_cryptography$hazmat$primitives$hashes;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("cryptography$hazmat$primitives$hashes", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

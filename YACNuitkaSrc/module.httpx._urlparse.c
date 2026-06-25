/* Generated code for Python module 'httpx$_urlparse'
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



/* The "module_httpx$_urlparse" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_urlparse;
PyDictObject *moduledict_httpx$_urlparse;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_userinfo;
PyObject *const_str_chr_64;
PyObject *const_str_chr_58;
PyObject *const_str_plain_host;
PyObject *const_str_chr_91;
PyObject *const_str_chr_93;
PyObject *const_str_plain_port;
PyObject *const_str_plain_scheme;
PyObject *const_str_plain_authority;
PyObject *const_str_plain_query;
PyObject *const_str_plain_fragment;
PyObject *const_str_plain_urlparse;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_str_digest_13971ae58b983978540cbb4bbf3b1360;
PyObject *const_str_chr_63;
PyObject *const_str_chr_35;
PyObject *const_str_plain_MAX_URL_LENGTH;
PyObject *const_str_plain_InvalidURL;
PyObject *const_tuple_str_digest_9f8658fd799469afb2669a4cefa31bc6_tuple;
PyObject *const_str_plain_find;
PyObject *const_str_digest_4432b0e27b84e9a54e6fb13a13d12f1f;
PyObject *const_str_digest_3ac33d9850d9d7a7d2782efa72a2d403;
PyObject *const_str_plain_netloc;
PyObject *const_str_plain_pop;
PyObject *const_tuple_str_plain_netloc_tuple;
PyObject *const_str_plain_partition;
PyObject *const_tuple_str_chr_58_tuple;
PyObject *const_str_plain_username;
PyObject *const_str_plain_password;
PyObject *const_str_plain_quote;
PyObject *const_tuple_str_plain_username_str_empty_tuple;
PyObject *const_str_plain_USERNAME_SAFE;
PyObject *const_tuple_str_plain_safe_tuple;
PyObject *const_tuple_str_plain_password_str_empty_tuple;
PyObject *const_str_plain_PASSWORD_SAFE;
PyObject *const_str_plain_raw_path;
PyObject *const_tuple_str_plain_raw_path_tuple;
PyObject *const_tuple_str_chr_63_tuple;
PyObject *const_tuple_str_plain_host_tuple;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_chr_91_tuple;
PyObject *const_str_plain_endswith;
PyObject *const_tuple_str_chr_93_tuple;
PyObject *const_str_plain_items;
PyObject *const_str_digest_a55bf3180c1c8a39b940df43f4f666b7;
PyObject *const_str_digest_6e86477ea2043903e389ab10c2b06141;
PyObject *const_str_digest_a341616e558abe9b3c0d5d016ef9aad9;
PyObject *const_str_digest_10914e208b3e44bf3bd458dfd6f91623;
PyObject *const_str_plain_COMPONENT_REGEX;
PyObject *const_str_plain_fullmatch;
PyObject *const_str_digest_f22e09c44c4feb0951287f707bf7150b;
PyObject *const_str_chr_39;
PyObject *const_str_plain_URL_REGEX;
PyObject *const_str_plain_match;
PyObject *const_str_plain_groupdict;
PyObject *const_str_plain_AUTHORITY_REGEX;
PyObject *const_str_plain_USERINFO_SAFE;
PyObject *const_str_plain_encode_host;
PyObject *const_str_plain_normalize_port;
PyObject *const_str_plain_validate_path;
PyObject *const_tuple_str_plain_has_scheme_str_plain_has_authority_tuple;
PyObject *const_str_plain_normalize_path;
PyObject *const_str_plain_PATH_SAFE;
PyObject *const_str_plain_QUERY_SAFE;
PyObject *const_str_plain_FRAG_SAFE;
PyObject *const_str_plain_ParseResult;
PyObject *const_str_plain_isascii;
PyObject *const_str_plain_isprintable;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_942d0aeeee3c56ec1a6aec82da971af3;
PyObject *const_str_plain_IPv4_STYLE_HOSTNAME;
PyObject *const_str_plain_ipaddress;
PyObject *const_str_plain_IPv4Address;
PyObject *const_str_plain_AddressValueError;
PyObject *const_str_digest_29e09444a0fc8919433ee20f59714fbd;
PyObject *const_str_plain_IPv6_STYLE_HOSTNAME;
PyObject *const_str_plain_IPv6Address;
PyObject *const_slice_int_pos_1_int_neg_1_none;
PyObject *const_str_digest_b67023acc4c846d5f65d7e1367678ebf;
PyObject *const_str_plain_SUB_DELIMS;
PyObject *const_str_digest_9e43058167d7252d462803fa6ac4f599;
PyObject *const_str_plain_idna;
PyObject *const_str_plain_encode;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_plain_IDNAError;
PyObject *const_str_digest_68766fb7840cdc551f3b931838d04a1e;
PyObject *const_str_digest_5c67acea6b3594845506ad043c0e6423;
PyObject *const_dict_02dee8eaba4e5c7101335f9797475f8e;
PyObject *const_tuple_str_slash_tuple;
PyObject *const_tuple_str_digest_e39d769d0a1fdf375f7812164340daf5_tuple;
PyObject *const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple;
PyObject *const_tuple_str_digest_d459f7c73bb05c161a760a92d5ec99b8_tuple;
PyObject *const_tuple_str_digest_aa3bf77ce26ad0b0c7ba799ece40a79a_tuple;
PyObject *const_str_digest_d5bff4fde4d4403d1fe9fa55fbdf4c87;
PyObject *const_str_digest_7b79a8950d64155a442741f6cc8c809b;
PyObject *const_str_plain_output;
PyObject *const_str_digest_f556b7958b1a1bde9a8cdebddc6ed71d;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_chr_37;
PyObject *const_str_plain_02X;
PyObject *const_str_plain_UNRESERVED_CHARACTERS;
PyObject *const_str_plain_rstrip;
PyObject *const_str_plain_PERCENT;
PyObject *const_str_digest_8618f76f107a0b9b9043ffc66515c418;
PyObject *const_str_plain_re;
PyObject *const_str_plain_finditer;
PyObject *const_str_plain_PERCENT_ENCODED_REGEX;
PyObject *const_str_plain_start;
PyObject *const_str_plain_group;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_current_position;
PyObject *const_str_plain_parts;
PyObject *const_str_plain_percent_encoded;
PyObject *const_str_plain_safe;
PyObject *const_str_plain_append;
PyObject *const_str_digest_9b806c7d48f6490da49116c3f34ea40c;
PyObject *const_str_digest_71ba69847a27ef11231b3224c261e44b;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_typing;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_str_plain_InvalidURL_tuple;
PyObject *const_int_pos_65536;
PyObject *const_str_digest_e600ac699e6fc3a6ad3a9fd310be6bf9;
PyObject *const_str_digest_035b27a1609d0a5305b7aeb8f6a6db6f;
PyObject *const_tuple_str_digest_916547f65466291787e29f21c5534722_tuple;
PyObject *const_xrange_32_127;
PyObject *const_tuple_int_pos_32_int_pos_34_int_pos_60_int_pos_62_int_pos_96_tuple;
PyObject *const_tuple_int_pos_32_int_pos_34_int_pos_35_int_pos_60_int_pos_62_tuple;
PyObject *const_tuple_ada9d13b1c8cd3c15fb0157ebd2f2838_tuple;
PyObject *const_tuple_530dd17cf7fcc03dc0f7f2b7d993e001_tuple;
PyObject *const_tuple_d3c8921298a32de854bc4e5d0c1cfdad_tuple;
PyObject *const_tuple_str_digest_ec0839fa6160647c00d02917726e6b44_tuple;
PyObject *const_tuple_str_digest_ffe54771ba2012e42ba6fd6c0fabcfde_tuple;
PyObject *const_tuple_str_digest_291b9213eebb56e623e9d125852d54ee_tuple;
PyObject *const_tuple_str_digest_10e3c17c93ba893840a6e3967895e8bc_tuple;
PyObject *const_tuple_str_digest_2ca1d33d0ec8ffc5e22b4ea233638f7b_tuple;
PyObject *const_tuple_str_digest_e744a4b795c917fddb2b958e51385b2d_tuple;
PyObject *const_tuple_str_digest_548f8d37f9a611777eb26a7105ecad09_tuple;
PyObject *const_tuple_str_digest_0320c0fdcb439be48651cbaf5179f051_tuple;
PyObject *const_tuple_str_digest_957b55af3e6ff0e3006014112e0dfe36_tuple;
PyObject *const_tuple_str_digest_2e0058ab543b53e3a9c875f48ed0e753_tuple;
PyObject *const_tuple_str_digest_e18bce2d92d50c5eebc85eed5e8f32ad_tuple;
PyObject *const_str_plain_NamedTuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_5767b8b17420be885417f2e4c30e6d36;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_158;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_str;
PyObject *const_str_digest_d07907e58b350811dd59b47ecbca299a;
PyObject *const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
PyObject *const_str_plain_property;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_0861dc7130ed4cae9f8060c18f6fe2a6;
PyObject *const_str_digest_2ab0916a5f5c2b040dda9badba1eb75c;
PyObject *const_dict_553e8122f755013d69e918fc4156cb53;
PyObject *const_str_plain_copy_with;
PyObject *const_str_digest_ba1ba8c1b9a4292fd89345e53c3c8248;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_da93e379fdb0343fbb797e77bc2d5bdb;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_37eae03f9e3c418ff45a24b66fd13938;
PyObject *const_dict_32381fc025694ea2ef56aa89b10fcc78;
PyObject *const_dict_e64ed31e1f044f53da90e217bf3d997a;
PyObject *const_dict_8119cab71ea9483c126a842444238c38;
PyObject *const_dict_22cacb1771d5ae388aa90a755d3c3678;
PyObject *const_dict_2215b95741987b83f4e0701eb6a6a50f;
PyObject *const_dict_421f36a7a3e3e875d724cab3e4ad14a6;
PyObject *const_str_digest_5a48379ef8f60448af5295482e5f2a7d;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_char_tuple;
PyObject *const_str_digest_58a1b3ac252725eed56b2a00f66c44d6;
PyObject *const_tuple_str_plain_string_tuple;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_authority_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_kwargs_str_plain_defaults_tuple;
PyObject *const_tuple_str_plain_host_str_plain_WHATWG_SAFE_tuple;
PyObject *const_tuple_c016c8289cd6bca3769e18a9344cc9d4_tuple;
PyObject *const_tuple_3a537f9c6e1bfd510b3ff73abc0be2fe_tuple;
PyObject *const_tuple_str_plain_string_str_plain_safe_str_plain_NON_ESCAPED_CHARS_tuple;
PyObject *const_tuple_b438265fa3152cd747ac655953eb6c5b_tuple;
PyObject *const_tuple_41aeeb48087427ab983404e70edd3cf9_tuple;
PyObject *const_tuple_str_plain_path_str_plain_has_scheme_str_plain_has_authority_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[190];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpx._urlparse"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_userinfo);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_chr_64);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_chr_91);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_chr_93);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_authority);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_query);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_fragment);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_chr_63);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_chr_35);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_URL_LENGTH);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURL);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9f8658fd799469afb2669a4cefa31bc6_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_find);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_4432b0e27b84e9a54e6fb13a13d12f1f);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ac33d9850d9d7a7d2782efa72a2d403);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_netloc);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_netloc_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_partition);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_username);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_password);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_quote);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_username_str_empty_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_USERNAME_SAFE);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_safe_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_password_str_empty_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_PASSWORD_SAFE);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw_path);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_raw_path_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_63_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_host_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_91_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_93_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_a55bf3180c1c8a39b940df43f4f666b7);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e86477ea2043903e389ab10c2b06141);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_a341616e558abe9b3c0d5d016ef9aad9);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_10914e208b3e44bf3bd458dfd6f91623);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMPONENT_REGEX);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_fullmatch);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_f22e09c44c4feb0951287f707bf7150b);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_chr_39);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_URL_REGEX);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_groupdict);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_AUTHORITY_REGEX);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_USERINFO_SAFE);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_host);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_port);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_path);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_has_scheme_str_plain_has_authority_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_path);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_PATH_SAFE);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_QUERY_SAFE);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_FRAG_SAFE);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParseResult);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_isascii);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_isprintable);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_942d0aeeee3c56ec1a6aec82da971af3);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_ipaddress);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Address);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_AddressValueError);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_29e09444a0fc8919433ee20f59714fbd);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Address);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_neg_1_none);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_b67023acc4c846d5f65d7e1367678ebf);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUB_DELIMS);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e43058167d7252d462803fa6ac4f599);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_idna);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_IDNAError);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_68766fb7840cdc551f3b931838d04a1e);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c67acea6b3594845506ad043c0e6423);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_dict_02dee8eaba4e5c7101335f9797475f8e);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e39d769d0a1fdf375f7812164340daf5_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d459f7c73bb05c161a760a92d5ec99b8_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_aa3bf77ce26ad0b0c7ba799ece40a79a_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5bff4fde4d4403d1fe9fa55fbdf4c87);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_output);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_f556b7958b1a1bde9a8cdebddc6ed71d);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_chr_37);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_02X);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNRESERVED_CHARACTERS);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_PERCENT);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_8618f76f107a0b9b9043ffc66515c418);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_finditer);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_PERCENT_ENCODED_REGEX);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_position);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_parts);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_percent_encoded);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_safe);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b806c7d48f6490da49116c3f34ea40c);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_71ba69847a27ef11231b3224c261e44b);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InvalidURL_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_int_pos_65536);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_e600ac699e6fc3a6ad3a9fd310be6bf9);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_035b27a1609d0a5305b7aeb8f6a6db6f);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_916547f65466291787e29f21c5534722_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_xrange_32_127);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_32_int_pos_34_int_pos_60_int_pos_62_int_pos_96_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_32_int_pos_34_int_pos_35_int_pos_60_int_pos_62_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_ada9d13b1c8cd3c15fb0157ebd2f2838_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_530dd17cf7fcc03dc0f7f2b7d993e001_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_d3c8921298a32de854bc4e5d0c1cfdad_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ec0839fa6160647c00d02917726e6b44_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ffe54771ba2012e42ba6fd6c0fabcfde_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_291b9213eebb56e623e9d125852d54ee_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_10e3c17c93ba893840a6e3967895e8bc_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2ca1d33d0ec8ffc5e22b4ea233638f7b_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e744a4b795c917fddb2b958e51385b2d_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_548f8d37f9a611777eb26a7105ecad09_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0320c0fdcb439be48651cbaf5179f051_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_957b55af3e6ff0e3006014112e0dfe36_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2e0058ab543b53e3a9c875f48ed0e753_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e18bce2d92d50c5eebc85eed5e8f32ad_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_5767b8b17420be885417f2e4c30e6d36);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_int_pos_158);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_0861dc7130ed4cae9f8060c18f6fe2a6);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ab0916a5f5c2b040dda9badba1eb75c);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_dict_553e8122f755013d69e918fc4156cb53);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy_with);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba1ba8c1b9a4292fd89345e53c3c8248);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_da93e379fdb0343fbb797e77bc2d5bdb);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_37eae03f9e3c418ff45a24b66fd13938);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_dict_32381fc025694ea2ef56aa89b10fcc78);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_dict_e64ed31e1f044f53da90e217bf3d997a);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_8119cab71ea9483c126a842444238c38);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_dict_22cacb1771d5ae388aa90a755d3c3678);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_2215b95741987b83f4e0701eb6a6a50f);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_421f36a7a3e3e875d724cab3e4ad14a6);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a48379ef8f60448af5295482e5f2a7d);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_char_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_58a1b3ac252725eed56b2a00f66c44d6);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_string_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_authority_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_defaults_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_host_str_plain_WHATWG_SAFE_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_c016c8289cd6bca3769e18a9344cc9d4_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_3a537f9c6e1bfd510b3ff73abc0be2fe_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_string_str_plain_safe_str_plain_NON_ESCAPED_CHARS_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_b438265fa3152cd747ac655953eb6c5b_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_41aeeb48087427ab983404e70edd3cf9_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_path_str_plain_has_scheme_str_plain_has_authority_tuple);
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
void checkModuleConstants_httpx$_urlparse(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_userinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_userinfo);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_chr_64));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_64);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_58);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_chr_91));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_91);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_chr_93));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_93);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_authority));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_authority);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_query);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_fragment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fragment);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlparse);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_chr_63));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_63);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_chr_35));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_35);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_URL_LENGTH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAX_URL_LENGTH);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidURL);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9f8658fd799469afb2669a4cefa31bc6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_9f8658fd799469afb2669a4cefa31bc6_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_find));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_4432b0e27b84e9a54e6fb13a13d12f1f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4432b0e27b84e9a54e6fb13a13d12f1f);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ac33d9850d9d7a7d2782efa72a2d403));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ac33d9850d9d7a7d2782efa72a2d403);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_netloc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_netloc);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pop);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_netloc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_netloc_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_partition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partition);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_58_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_username));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_username);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_password);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_quote));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quote);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_username_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_username_str_empty_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_USERNAME_SAFE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_USERNAME_SAFE);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_safe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_safe_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_password_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_password_str_empty_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_PASSWORD_SAFE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PASSWORD_SAFE);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw_path);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_raw_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_raw_path_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_63_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_63_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_host_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_host_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_91_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_91_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_93_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_93_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_a55bf3180c1c8a39b940df43f4f666b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a55bf3180c1c8a39b940df43f4f666b7);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e86477ea2043903e389ab10c2b06141));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e86477ea2043903e389ab10c2b06141);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_a341616e558abe9b3c0d5d016ef9aad9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a341616e558abe9b3c0d5d016ef9aad9);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_10914e208b3e44bf3bd458dfd6f91623));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_10914e208b3e44bf3bd458dfd6f91623);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMPONENT_REGEX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COMPONENT_REGEX);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_fullmatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fullmatch);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_f22e09c44c4feb0951287f707bf7150b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f22e09c44c4feb0951287f707bf7150b);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_chr_39));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_39);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_URL_REGEX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_URL_REGEX);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_groupdict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_groupdict);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_AUTHORITY_REGEX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AUTHORITY_REGEX);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_USERINFO_SAFE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_USERINFO_SAFE);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode_host);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize_port);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_path);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_has_scheme_str_plain_has_authority_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_has_scheme_str_plain_has_authority_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize_path);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_PATH_SAFE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PATH_SAFE);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_QUERY_SAFE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_QUERY_SAFE);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_FRAG_SAFE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FRAG_SAFE);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParseResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParseResult);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_isascii));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isascii);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_isprintable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isprintable);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_942d0aeeee3c56ec1a6aec82da971af3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_942d0aeeee3c56ec1a6aec82da971af3);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_ipaddress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ipaddress);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv4Address);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_AddressValueError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AddressValueError);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_29e09444a0fc8919433ee20f59714fbd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_29e09444a0fc8919433ee20f59714fbd);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv6Address);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_int_neg_1_none);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_b67023acc4c846d5f65d7e1367678ebf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b67023acc4c846d5f65d7e1367678ebf);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUB_DELIMS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SUB_DELIMS);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e43058167d7252d462803fa6ac4f599));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e43058167d7252d462803fa6ac4f599);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_idna));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_idna);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_IDNAError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IDNAError);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_68766fb7840cdc551f3b931838d04a1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68766fb7840cdc551f3b931838d04a1e);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c67acea6b3594845506ad043c0e6423));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c67acea6b3594845506ad043c0e6423);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_dict_02dee8eaba4e5c7101335f9797475f8e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_02dee8eaba4e5c7101335f9797475f8e);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_slash_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e39d769d0a1fdf375f7812164340daf5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e39d769d0a1fdf375f7812164340daf5_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d459f7c73bb05c161a760a92d5ec99b8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d459f7c73bb05c161a760a92d5ec99b8_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_aa3bf77ce26ad0b0c7ba799ece40a79a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_aa3bf77ce26ad0b0c7ba799ece40a79a_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5bff4fde4d4403d1fe9fa55fbdf4c87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5bff4fde4d4403d1fe9fa55fbdf4c87);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_output));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_output);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_f556b7958b1a1bde9a8cdebddc6ed71d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f556b7958b1a1bde9a8cdebddc6ed71d);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_chr_37));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_37);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_02X));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_02X);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNRESERVED_CHARACTERS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNRESERVED_CHARACTERS);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rstrip);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_PERCENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PERCENT);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_8618f76f107a0b9b9043ffc66515c418));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8618f76f107a0b9b9043ffc66515c418);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_finditer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_finditer);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_PERCENT_ENCODED_REGEX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PERCENT_ENCODED_REGEX);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_position));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_position);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_parts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parts);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_percent_encoded));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_percent_encoded);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_safe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_safe);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b806c7d48f6490da49116c3f34ea40c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b806c7d48f6490da49116c3f34ea40c);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_71ba69847a27ef11231b3224c261e44b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71ba69847a27ef11231b3224c261e44b);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InvalidURL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InvalidURL_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_int_pos_65536));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_65536);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_e600ac699e6fc3a6ad3a9fd310be6bf9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e600ac699e6fc3a6ad3a9fd310be6bf9);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_035b27a1609d0a5305b7aeb8f6a6db6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_035b27a1609d0a5305b7aeb8f6a6db6f);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_916547f65466291787e29f21c5534722_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_916547f65466291787e29f21c5534722_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_xrange_32_127));
CHECK_OBJECT_DEEP(mod_consts.const_xrange_32_127);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_32_int_pos_34_int_pos_60_int_pos_62_int_pos_96_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_32_int_pos_34_int_pos_60_int_pos_62_int_pos_96_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_32_int_pos_34_int_pos_35_int_pos_60_int_pos_62_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_32_int_pos_34_int_pos_35_int_pos_60_int_pos_62_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_ada9d13b1c8cd3c15fb0157ebd2f2838_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ada9d13b1c8cd3c15fb0157ebd2f2838_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_530dd17cf7fcc03dc0f7f2b7d993e001_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_530dd17cf7fcc03dc0f7f2b7d993e001_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_d3c8921298a32de854bc4e5d0c1cfdad_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d3c8921298a32de854bc4e5d0c1cfdad_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ec0839fa6160647c00d02917726e6b44_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ec0839fa6160647c00d02917726e6b44_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ffe54771ba2012e42ba6fd6c0fabcfde_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ffe54771ba2012e42ba6fd6c0fabcfde_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_291b9213eebb56e623e9d125852d54ee_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_291b9213eebb56e623e9d125852d54ee_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_10e3c17c93ba893840a6e3967895e8bc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_10e3c17c93ba893840a6e3967895e8bc_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2ca1d33d0ec8ffc5e22b4ea233638f7b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2ca1d33d0ec8ffc5e22b4ea233638f7b_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e744a4b795c917fddb2b958e51385b2d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e744a4b795c917fddb2b958e51385b2d_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_548f8d37f9a611777eb26a7105ecad09_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_548f8d37f9a611777eb26a7105ecad09_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0320c0fdcb439be48651cbaf5179f051_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_0320c0fdcb439be48651cbaf5179f051_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_957b55af3e6ff0e3006014112e0dfe36_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_957b55af3e6ff0e3006014112e0dfe36_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2e0058ab543b53e3a9c875f48ed0e753_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2e0058ab543b53e3a9c875f48ed0e753_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e18bce2d92d50c5eebc85eed5e8f32ad_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e18bce2d92d50c5eebc85eed5e8f32ad_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NamedTuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_5767b8b17420be885417f2e4c30e6d36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5767b8b17420be885417f2e4c30e6d36);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_int_pos_158));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_158);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_0861dc7130ed4cae9f8060c18f6fe2a6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0861dc7130ed4cae9f8060c18f6fe2a6);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ab0916a5f5c2b040dda9badba1eb75c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ab0916a5f5c2b040dda9badba1eb75c);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_dict_553e8122f755013d69e918fc4156cb53));
CHECK_OBJECT_DEEP(mod_consts.const_dict_553e8122f755013d69e918fc4156cb53);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy_with));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy_with);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba1ba8c1b9a4292fd89345e53c3c8248));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba1ba8c1b9a4292fd89345e53c3c8248);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___str__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_da93e379fdb0343fbb797e77bc2d5bdb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da93e379fdb0343fbb797e77bc2d5bdb);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_37eae03f9e3c418ff45a24b66fd13938));
CHECK_OBJECT_DEEP(mod_consts.const_dict_37eae03f9e3c418ff45a24b66fd13938);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_dict_32381fc025694ea2ef56aa89b10fcc78));
CHECK_OBJECT_DEEP(mod_consts.const_dict_32381fc025694ea2ef56aa89b10fcc78);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_dict_e64ed31e1f044f53da90e217bf3d997a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e64ed31e1f044f53da90e217bf3d997a);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_8119cab71ea9483c126a842444238c38));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8119cab71ea9483c126a842444238c38);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_dict_22cacb1771d5ae388aa90a755d3c3678));
CHECK_OBJECT_DEEP(mod_consts.const_dict_22cacb1771d5ae388aa90a755d3c3678);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_2215b95741987b83f4e0701eb6a6a50f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2215b95741987b83f4e0701eb6a6a50f);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_421f36a7a3e3e875d724cab3e4ad14a6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_421f36a7a3e3e875d724cab3e4ad14a6);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a48379ef8f60448af5295482e5f2a7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a48379ef8f60448af5295482e5f2a7d);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_char_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_char_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_58a1b3ac252725eed56b2a00f66c44d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58a1b3ac252725eed56b2a00f66c44d6);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_string_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_string_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_authority_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_authority_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_defaults_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_defaults_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_host_str_plain_WHATWG_SAFE_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_host_str_plain_WHATWG_SAFE_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_c016c8289cd6bca3769e18a9344cc9d4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c016c8289cd6bca3769e18a9344cc9d4_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_3a537f9c6e1bfd510b3ff73abc0be2fe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3a537f9c6e1bfd510b3ff73abc0be2fe_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_string_str_plain_safe_str_plain_NON_ESCAPED_CHARS_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_string_str_plain_safe_str_plain_NON_ESCAPED_CHARS_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_b438265fa3152cd747ac655953eb6c5b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b438265fa3152cd747ac655953eb6c5b_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_41aeeb48087427ab983404e70edd3cf9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_41aeeb48087427ab983404e70edd3cf9_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_path_str_plain_has_scheme_str_plain_has_authority_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_path_str_plain_has_scheme_str_plain_has_authority_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 29
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
static PyObject *module_var_accessor_httpx$_urlparse$AUTHORITY_REGEX(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTHORITY_REGEX);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AUTHORITY_REGEX);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AUTHORITY_REGEX, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AUTHORITY_REGEX);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AUTHORITY_REGEX, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTHORITY_REGEX);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTHORITY_REGEX);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTHORITY_REGEX);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$COMPONENT_REGEX(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_COMPONENT_REGEX);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COMPONENT_REGEX);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COMPONENT_REGEX, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COMPONENT_REGEX);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COMPONENT_REGEX, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_COMPONENT_REGEX);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_COMPONENT_REGEX);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_COMPONENT_REGEX);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$FRAG_SAFE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_FRAG_SAFE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FRAG_SAFE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FRAG_SAFE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FRAG_SAFE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FRAG_SAFE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_FRAG_SAFE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_FRAG_SAFE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FRAG_SAFE);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$IPv4_STYLE_HOSTNAME(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$IPv6_STYLE_HOSTNAME(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$InvalidURL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidURL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidURL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidURL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidURL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$MAX_URL_LENGTH(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_URL_LENGTH);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MAX_URL_LENGTH);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MAX_URL_LENGTH, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MAX_URL_LENGTH);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MAX_URL_LENGTH, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_URL_LENGTH);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_URL_LENGTH);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_URL_LENGTH);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$PASSWORD_SAFE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PASSWORD_SAFE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PASSWORD_SAFE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PASSWORD_SAFE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PASSWORD_SAFE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PASSWORD_SAFE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PASSWORD_SAFE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PASSWORD_SAFE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PASSWORD_SAFE);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$PATH_SAFE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PATH_SAFE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PATH_SAFE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PATH_SAFE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PATH_SAFE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PATH_SAFE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PATH_SAFE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PATH_SAFE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PATH_SAFE);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$PERCENT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PERCENT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PERCENT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PERCENT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PERCENT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$PERCENT_ENCODED_REGEX(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT_ENCODED_REGEX);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PERCENT_ENCODED_REGEX);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PERCENT_ENCODED_REGEX, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PERCENT_ENCODED_REGEX);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PERCENT_ENCODED_REGEX, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT_ENCODED_REGEX);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT_ENCODED_REGEX);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT_ENCODED_REGEX);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$ParseResult(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseResult);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParseResult);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParseResult, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParseResult);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParseResult, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseResult);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseResult);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseResult);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$QUERY_SAFE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_QUERY_SAFE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QUERY_SAFE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QUERY_SAFE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QUERY_SAFE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QUERY_SAFE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_QUERY_SAFE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_QUERY_SAFE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QUERY_SAFE);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$SUB_DELIMS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_SUB_DELIMS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SUB_DELIMS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SUB_DELIMS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SUB_DELIMS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SUB_DELIMS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_SUB_DELIMS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_SUB_DELIMS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUB_DELIMS);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$UNRESERVED_CHARACTERS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_UNRESERVED_CHARACTERS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UNRESERVED_CHARACTERS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UNRESERVED_CHARACTERS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UNRESERVED_CHARACTERS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UNRESERVED_CHARACTERS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_UNRESERVED_CHARACTERS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_UNRESERVED_CHARACTERS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UNRESERVED_CHARACTERS);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$URL_REGEX(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_URL_REGEX);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_URL_REGEX);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_URL_REGEX, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_URL_REGEX);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_URL_REGEX, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_URL_REGEX);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_URL_REGEX);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_URL_REGEX);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$USERINFO_SAFE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_USERINFO_SAFE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_USERINFO_SAFE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_USERINFO_SAFE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_USERINFO_SAFE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_USERINFO_SAFE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_USERINFO_SAFE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_USERINFO_SAFE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_USERINFO_SAFE);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$USERNAME_SAFE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_USERNAME_SAFE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_USERNAME_SAFE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_USERNAME_SAFE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_USERNAME_SAFE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_USERNAME_SAFE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_USERNAME_SAFE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_USERNAME_SAFE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_USERNAME_SAFE);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$encode_host(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_host);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_host);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_host, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_host);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_host, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_host);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_host);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_host);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$idna(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_idna);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_idna);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_idna, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_idna);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_idna, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_idna);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_idna);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_idna);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$ipaddress(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_ipaddress);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ipaddress);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ipaddress, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ipaddress);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ipaddress, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_ipaddress);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_ipaddress);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ipaddress);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$normalize_path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_normalize_path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_normalize_path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_normalize_path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_normalize_path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_path);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$normalize_port(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_port);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_normalize_port);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_normalize_port, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_normalize_port);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_normalize_port, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_port);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_port);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_port);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$percent_encoded(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_percent_encoded);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_percent_encoded);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_percent_encoded, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_percent_encoded);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_percent_encoded, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_percent_encoded);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_percent_encoded);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_percent_encoded);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$quote(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_quote);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_quote);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_quote, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_quote);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_quote, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_quote);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_quote);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_quote);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$urlparse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlparse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlparse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlparse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlparse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_urlparse$validate_path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_urlparse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_urlparse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_urlparse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_validate_path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_validate_path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_validate_path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_validate_path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_path);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_6737ceae1dd482ae6083f0c1351be326;
static PyCodeObject *code_objects_f31ad090d837c3f8541e8436f2c7451f;
static PyCodeObject *code_objects_d53b8e9f1200ccd4bbf7a983c061ab60;
static PyCodeObject *code_objects_76eec1375c3fc5c114d3a09be198d54c;
static PyCodeObject *code_objects_7c324d61bfa567ea3d8b0ed2be537752;
static PyCodeObject *code_objects_7b95203d84452c8e1816d5a864ab9797;
static PyCodeObject *code_objects_768f23b62edbe5cb0355667403251099;
static PyCodeObject *code_objects_5150496e7baaee63702d69fd4066530a;
static PyCodeObject *code_objects_f1f61563557f6169f47b3a4ec6b5a030;
static PyCodeObject *code_objects_46ff05fed8ace6d0b436b75b797cd15e;
static PyCodeObject *code_objects_26873d5a9b1aa91d94249533826bf544;
static PyCodeObject *code_objects_d326392fdbdcb5d960b059f55e7be261;
static PyCodeObject *code_objects_7270614afa90710dceb60f2a8354de9f;
static PyCodeObject *code_objects_c5d3a42dc1ffa2ff4ed474ab5787a874;
static PyCodeObject *code_objects_70de2e6a98f3a4366016d6b3663c4302;
static PyCodeObject *code_objects_eb381549242d0eea56f3f5451c878fb8;
static PyCodeObject *code_objects_f6fecfa8ea7caa41193e9e63d40923a8;
static PyCodeObject *code_objects_a08d8ad8d0e07267f631340219ef4ed5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_5a48379ef8f60448af5295482e5f2a7d); CHECK_OBJECT(module_filename_obj);
code_objects_6737ceae1dd482ae6083f0c1351be326 = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_942d0aeeee3c56ec1a6aec82da971af3, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_char_tuple, NULL, 1, 0, 0);
code_objects_f31ad090d837c3f8541e8436f2c7451f = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_942d0aeeee3c56ec1a6aec82da971af3, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_char_tuple, NULL, 1, 0, 0);
code_objects_d53b8e9f1200ccd4bbf7a983c061ab60 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_942d0aeeee3c56ec1a6aec82da971af3, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_char_tuple, NULL, 1, 0, 0);
code_objects_76eec1375c3fc5c114d3a09be198d54c = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_942d0aeeee3c56ec1a6aec82da971af3, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_char_tuple, NULL, 1, 0, 0);
code_objects_7c324d61bfa567ea3d8b0ed2be537752 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_58a1b3ac252725eed56b2a00f66c44d6, mod_consts.const_str_digest_58a1b3ac252725eed56b2a00f66c44d6, NULL, NULL, 0, 0, 0);
code_objects_7b95203d84452c8e1816d5a864ab9797 = MAKE_CODE_OBJECT(module_filename_obj, 478, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PERCENT, mod_consts.const_str_plain_PERCENT, mod_consts.const_tuple_str_plain_string_tuple, NULL, 1, 0, 0);
code_objects_768f23b62edbe5cb0355667403251099 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ParseResult, mod_consts.const_str_plain_ParseResult, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5150496e7baaee63702d69fd4066530a = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_da93e379fdb0343fbb797e77bc2d5bdb, mod_consts.const_tuple_str_plain_self_str_plain_authority_tuple, NULL, 1, 0, 0);
code_objects_f1f61563557f6169f47b3a4ec6b5a030 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_authority, mod_consts.const_str_digest_0861dc7130ed4cae9f8060c18f6fe2a6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_46ff05fed8ace6d0b436b75b797cd15e = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_copy_with, mod_consts.const_str_digest_ba1ba8c1b9a4292fd89345e53c3c8248, mod_consts.const_tuple_str_plain_self_str_plain_kwargs_str_plain_defaults_tuple, NULL, 1, 0, 0);
code_objects_26873d5a9b1aa91d94249533826bf544 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encode_host, mod_consts.const_str_plain_encode_host, mod_consts.const_tuple_str_plain_host_str_plain_WHATWG_SAFE_tuple, NULL, 1, 0, 0);
code_objects_d326392fdbdcb5d960b059f55e7be261 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_netloc, mod_consts.const_str_digest_2ab0916a5f5c2b040dda9badba1eb75c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7270614afa90710dceb60f2a8354de9f = MAKE_CODE_OBJECT(module_filename_obj, 447, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_normalize_path, mod_consts.const_str_plain_normalize_path, mod_consts.const_tuple_c016c8289cd6bca3769e18a9344cc9d4_tuple, NULL, 1, 0, 0);
code_objects_c5d3a42dc1ffa2ff4ed474ab5787a874 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_normalize_port, mod_consts.const_str_plain_normalize_port, mod_consts.const_tuple_3a537f9c6e1bfd510b3ff73abc0be2fe_tuple, NULL, 2, 0, 0);
code_objects_70de2e6a98f3a4366016d6b3663c4302 = MAKE_CODE_OBJECT(module_filename_obj, 482, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_percent_encoded, mod_consts.const_str_plain_percent_encoded, mod_consts.const_tuple_str_plain_string_str_plain_safe_str_plain_NON_ESCAPED_CHARS_tuple, NULL, 2, 0, 0);
code_objects_eb381549242d0eea56f3f5451c878fb8 = MAKE_CODE_OBJECT(module_filename_obj, 497, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_quote, mod_consts.const_str_plain_quote, mod_consts.const_tuple_b438265fa3152cd747ac655953eb6c5b_tuple, NULL, 2, 0, 0);
code_objects_f6fecfa8ea7caa41193e9e63d40923a8 = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_urlparse, mod_consts.const_str_plain_urlparse, mod_consts.const_tuple_41aeeb48087427ab983404e70edd3cf9_tuple, NULL, 1, 0, 0);
code_objects_a08d8ad8d0e07267f631340219ef4ed5 = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate_path, mod_consts.const_str_plain_validate_path, mod_consts.const_tuple_str_plain_path_str_plain_has_scheme_str_plain_has_authority_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpx$_urlparse$$$function__5_urlparse$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_httpx$_urlparse$$$function__5_urlparse$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_httpx$_urlparse$$$function__5_urlparse$$$genexpr__3_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_httpx$_urlparse$$$function__5_urlparse$$$genexpr__4_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__10_PERCENT(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__11_percent_encoded(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__12_quote(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__1_authority(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__2_netloc(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__3_copy_with(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__4___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__5_urlparse(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__6_encode_host(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__7_normalize_port(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__8_validate_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__9_normalize_path(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpx$_urlparse$$$function__1_authority(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$function__1_authority;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_urlparse$$$function__1_authority = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_urlparse$$$function__1_authority)) {
    Py_XDECREF(cache_frame_frame_httpx$_urlparse$$$function__1_authority);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_urlparse$$$function__1_authority == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_urlparse$$$function__1_authority = MAKE_FUNCTION_FRAME(tstate, code_objects_f1f61563557f6169f47b3a4ec6b5a030, module_httpx$_urlparse, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_urlparse$$$function__1_authority->m_type_description == NULL);
frame_frame_httpx$_urlparse$$$function__1_authority = cache_frame_frame_httpx$_urlparse$$$function__1_authority;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$function__1_authority);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$function__1_authority) == 2);

// Framed code:
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_list_element_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
tmp_str_arg_value_1 = const_str_empty;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_userinfo);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 171;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_userinfo);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
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


exception_lineno = 171;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_64;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_list_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_list_element_1 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_list_element_1 = const_str_empty;
Py_INCREF(tmp_list_element_1);
condexpr_end_1:;
tmp_iterable_value_1 = MAKE_LIST_EMPTY(tstate, 3);
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
PyList_SET_ITEM(tmp_iterable_value_1, 0, tmp_list_element_1);
tmp_cmp_expr_left_1 = mod_consts.const_str_chr_58;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_host);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "o";
    goto list_build_exception_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "o";
    goto list_build_exception_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_tuple_element_2 = mod_consts.const_str_chr_91;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_host);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_93;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_2);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_list_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_list_element_1 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_host);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "o";
    goto list_build_exception_1;
}
condexpr_end_2:;
PyList_SET_ITEM(tmp_iterable_value_1, 1, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_port);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "o";
    goto list_build_exception_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_tuple_element_3 = mod_consts.const_str_chr_58;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_port);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_3);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_list_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_list_element_1 == NULL));
goto condexpr_end_3;
condexpr_false_3:;
tmp_list_element_1 = const_str_empty;
Py_INCREF(tmp_list_element_1);
condexpr_end_3:;
PyList_SET_ITEM(tmp_iterable_value_1, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_iterable_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__1_authority, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$function__1_authority->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__1_authority, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$function__1_authority,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_urlparse$$$function__1_authority == cache_frame_frame_httpx$_urlparse$$$function__1_authority) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_urlparse$$$function__1_authority);
    cache_frame_frame_httpx$_urlparse$$$function__1_authority = NULL;
}

assertFrameObject(frame_frame_httpx$_urlparse$$$function__1_authority);

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


static PyObject *impl_httpx$_urlparse$$$function__2_netloc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$function__2_netloc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_urlparse$$$function__2_netloc = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_urlparse$$$function__2_netloc)) {
    Py_XDECREF(cache_frame_frame_httpx$_urlparse$$$function__2_netloc);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_urlparse$$$function__2_netloc == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_urlparse$$$function__2_netloc = MAKE_FUNCTION_FRAME(tstate, code_objects_d326392fdbdcb5d960b059f55e7be261, module_httpx$_urlparse, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_urlparse$$$function__2_netloc->m_type_description == NULL);
frame_frame_httpx$_urlparse$$$function__2_netloc = cache_frame_frame_httpx$_urlparse$$$function__2_netloc;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$function__2_netloc);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$function__2_netloc) == 2);

// Framed code:
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_list_element_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
tmp_str_arg_value_1 = const_str_empty;
tmp_cmp_expr_left_1 = mod_consts.const_str_chr_58;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_host);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_tuple_element_1 = mod_consts.const_str_chr_91;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_host);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
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


exception_lineno = 181;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_93;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_list_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_list_element_1 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_host);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
tmp_iterable_value_1 = MAKE_LIST_EMPTY(tstate, 2);
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyList_SET_ITEM(tmp_iterable_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_port);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "o";
    goto list_build_exception_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_tuple_element_2 = mod_consts.const_str_chr_58;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_port);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
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


exception_lineno = 182;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_list_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_list_element_1 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
tmp_list_element_1 = const_str_empty;
Py_INCREF(tmp_list_element_1);
condexpr_end_2:;
PyList_SET_ITEM(tmp_iterable_value_1, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_iterable_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__2_netloc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$function__2_netloc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__2_netloc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$function__2_netloc,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_urlparse$$$function__2_netloc == cache_frame_frame_httpx$_urlparse$$$function__2_netloc) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_urlparse$$$function__2_netloc);
    cache_frame_frame_httpx$_urlparse$$$function__2_netloc = NULL;
}

assertFrameObject(frame_frame_httpx$_urlparse$$$function__2_netloc);

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


static PyObject *impl_httpx$_urlparse$$$function__3_copy_with(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_defaults = NULL;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$function__3_copy_with;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_urlparse$$$function__3_copy_with = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_kwargs);
tmp_operand_value_1 = par_kwargs;
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
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_httpx$_urlparse$$$function__3_copy_with)) {
    Py_XDECREF(cache_frame_frame_httpx$_urlparse$$$function__3_copy_with);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_urlparse$$$function__3_copy_with == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_urlparse$$$function__3_copy_with = MAKE_FUNCTION_FRAME(tstate, code_objects_46ff05fed8ace6d0b436b75b797cd15e, module_httpx$_urlparse, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_urlparse$$$function__3_copy_with->m_type_description == NULL);
frame_frame_httpx$_urlparse$$$function__3_copy_with = cache_frame_frame_httpx$_urlparse$$$function__3_copy_with;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$function__3_copy_with);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$function__3_copy_with) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_scheme;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_scheme);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_authority;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_authority);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_path;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_path);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_query;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_query);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_fragment;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_fragment);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooo";
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
assert(var_defaults == NULL);
var_defaults = tmp_assign_source_1;
}
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
CHECK_OBJECT(var_defaults);
tmp_dict_arg_value_1 = var_defaults;
CHECK_OBJECT(par_kwargs);
tmp_iterable_value_1 = par_kwargs;
assert(PyDict_Check(tmp_dict_arg_value_1));
    tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
tmp_direct_call_arg1_1 = module_var_accessor_httpx$_urlparse$urlparse(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_1 = mod_consts.const_tuple_str_empty_tuple;
CHECK_OBJECT(var_defaults);
tmp_direct_call_arg3_1 = var_defaults;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__3_copy_with, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$function__3_copy_with->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__3_copy_with, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$function__3_copy_with,
    type_description_1,
    par_self,
    par_kwargs,
    var_defaults
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_urlparse$$$function__3_copy_with == cache_frame_frame_httpx$_urlparse$$$function__3_copy_with) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_urlparse$$$function__3_copy_with);
    cache_frame_frame_httpx$_urlparse$$$function__3_copy_with = NULL;
}

assertFrameObject(frame_frame_httpx$_urlparse$$$function__3_copy_with);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_defaults);
var_defaults = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_defaults);
var_defaults = NULL;
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_urlparse$$$function__4___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_authority = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$function__4___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_urlparse$$$function__4___str__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_urlparse$$$function__4___str__)) {
    Py_XDECREF(cache_frame_frame_httpx$_urlparse$$$function__4___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_urlparse$$$function__4___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_urlparse$$$function__4___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5150496e7baaee63702d69fd4066530a, module_httpx$_urlparse, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_urlparse$$$function__4___str__->m_type_description == NULL);
frame_frame_httpx$_urlparse$$$function__4___str__ = cache_frame_frame_httpx$_urlparse$$$function__4___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$function__4___str__);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$function__4___str__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_authority);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_authority == NULL);
var_authority = tmp_assign_source_1;
}
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_list_element_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_1;
tmp_str_arg_value_1 = const_str_empty;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_scheme);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 204;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_scheme);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_list_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_list_element_1 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_list_element_1 = const_str_empty;
Py_INCREF(tmp_list_element_1);
condexpr_end_1:;
tmp_iterable_value_1 = MAKE_LIST_EMPTY(tstate, 5);
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_4;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
PyList_SET_ITEM(tmp_iterable_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(var_authority);
tmp_truth_name_2 = CHECK_IF_TRUE(var_authority);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oo";
    goto list_build_exception_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_tuple_element_2 = mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_authority);
tmp_format_value_2 = var_authority;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_2);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_list_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_list_element_1 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
tmp_list_element_1 = const_str_empty;
Py_INCREF(tmp_list_element_1);
condexpr_end_2:;
PyList_SET_ITEM(tmp_iterable_value_1, 1, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_path);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_iterable_value_1, 2, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_query);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oo";
    goto list_build_exception_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_3 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_tuple_element_3 = mod_consts.const_str_chr_63;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_query);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_3);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_list_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_list_element_1 == NULL));
goto condexpr_end_3;
condexpr_false_3:;
tmp_list_element_1 = const_str_empty;
Py_INCREF(tmp_list_element_1);
condexpr_end_3:;
PyList_SET_ITEM(tmp_iterable_value_1, 3, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_fragment);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oo";
    goto list_build_exception_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_4 != false) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
tmp_tuple_element_4 = mod_consts.const_str_chr_35;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_fragment);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_4);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_list_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_list_element_1 == NULL));
goto condexpr_end_4;
condexpr_false_4:;
tmp_list_element_1 = const_str_empty;
Py_INCREF(tmp_list_element_1);
condexpr_end_4:;
PyList_SET_ITEM(tmp_iterable_value_1, 4, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_iterable_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__4___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$function__4___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__4___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$function__4___str__,
    type_description_1,
    par_self,
    var_authority
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_urlparse$$$function__4___str__ == cache_frame_frame_httpx$_urlparse$$$function__4___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_urlparse$$$function__4___str__);
    cache_frame_frame_httpx$_urlparse$$$function__4___str__ = NULL;
}

assertFrameObject(frame_frame_httpx$_urlparse$$$function__4___str__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_authority);
CHECK_OBJECT(var_authority);
Py_DECREF(var_authority);
var_authority = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_authority);
var_authority = NULL;
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


static PyObject *impl_httpx$_urlparse$$$function__5_urlparse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_parsed_scheme = NULL;
PyObject *var_parsed_userinfo = NULL;
PyObject *var_parsed_host = NULL;
PyObject *var_parsed_port = NULL;
PyObject *var_parsed_path = NULL;
PyObject *var_parsed_query = NULL;
PyObject *var_parsed_frag = NULL;
PyObject *var_char = NULL;
PyObject *var_idx = NULL;
PyObject *var_error = NULL;
PyObject *var_port = NULL;
PyObject *var_netloc = NULL;
PyObject *var__ = NULL;
PyObject *var_username = NULL;
PyObject *var_password = NULL;
PyObject *var_raw_path = NULL;
PyObject *var_seperator = NULL;
PyObject *var_host = NULL;
PyObject *var_key = NULL;
PyObject *var_value = NULL;
PyObject *var_url_match = NULL;
PyObject *var_url_dict = NULL;
PyObject *var_scheme = NULL;
PyObject *var_authority = NULL;
PyObject *var_path = NULL;
PyObject *var_query = NULL;
PyObject *var_frag = NULL;
PyObject *var_authority_match = NULL;
PyObject *var_authority_dict = NULL;
PyObject *var_userinfo = NULL;
PyObject *var_has_scheme = NULL;
PyObject *var_has_authority = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_genexpr_2__$0 = NULL;
PyObject *tmp_genexpr_3__$0 = NULL;
PyObject *tmp_genexpr_4__$0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$function__5_urlparse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_urlparse$$$function__5_urlparse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_urlparse$$$function__5_urlparse)) {
    Py_XDECREF(cache_frame_frame_httpx$_urlparse$$$function__5_urlparse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_urlparse$$$function__5_urlparse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_urlparse$$$function__5_urlparse = MAKE_FUNCTION_FRAME(tstate, code_objects_f6fecfa8ea7caa41193e9e63d40923a8, module_httpx$_urlparse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_urlparse$$$function__5_urlparse->m_type_description == NULL);
frame_frame_httpx$_urlparse$$$function__5_urlparse = cache_frame_frame_httpx$_urlparse$$$function__5_urlparse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$function__5_urlparse);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$function__5_urlparse) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_url);
tmp_len_arg_1 = par_url;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_httpx$_urlparse$MAX_URL_LENGTH(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MAX_URL_LENGTH);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 218;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_httpx$_urlparse$InvalidURL(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 219;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_9f8658fd799469afb2669a4cefa31bc6_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 219;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_any_arg_1;
PyObject *tmp_capi_result_1;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_url);
tmp_iter_arg_1 = par_url;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_1;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_any_arg_1 = MAKE_GENERATOR_httpx$_urlparse$$$function__5_urlparse$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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


exception_lineno = 223;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_value_value_1;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_url);
tmp_iter_arg_2 = par_url;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_2__$0 == NULL);
tmp_genexpr_2__$0 = tmp_assign_source_3;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);
tmp_value_value_1 = MAKE_GENERATOR_httpx$_urlparse$$$function__5_urlparse$$$genexpr__2_genexpr(tstate, tmp_closure_2);

goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_genexpr_2__$0);
CHECK_OBJECT(tmp_genexpr_2__$0);
Py_DECREF(tmp_genexpr_2__$0);
tmp_genexpr_2__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_assign_source_2 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_char == NULL);
var_char = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_url);
tmp_expression_value_1 = par_url;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_find);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_char);
tmp_args_element_value_1 = var_char;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 225;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_idx == NULL);
var_idx = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_4432b0e27b84e9a54e6fb13a13d12f1f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_char);
tmp_operand_value_1 = var_char;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_3ac33d9850d9d7a7d2782efa72a2d403;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_idx);
tmp_format_value_2 = var_idx;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_5 == NULL));
assert(var_error == NULL);
var_error = tmp_assign_source_5;
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_httpx$_urlparse$InvalidURL(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_error);
tmp_args_element_value_2 = var_error;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 229;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 229;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
tmp_key_value_1 = mod_consts.const_str_plain_port;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_2 = par_kwargs;
tmp_key_value_2 = mod_consts.const_str_plain_port;
tmp_assign_source_6 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_port == NULL);
var_port = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(var_port);
tmp_isinstance_inst_1 = var_port;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_port);
tmp_unicode_arg_1 = var_port;
tmp_dictset_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_port);
tmp_dictset_value = var_port;
Py_INCREF(tmp_dictset_value);
condexpr_end_1:;
CHECK_OBJECT(par_kwargs);
tmp_dictset_dict = par_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_port;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_netloc;
CHECK_OBJECT(par_kwargs);
tmp_cmp_expr_right_2 = par_kwargs;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_7;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_2 = par_kwargs;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pop);
assert(!(tmp_called_value_4 == NULL));
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 241;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_netloc_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 241;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
tmp_or_right_value_1 = const_str_empty;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_7 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_7 = tmp_or_left_value_1;
or_end_1:;
assert(var_netloc == NULL);
var_netloc = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_netloc);
tmp_expression_value_3 = var_netloc;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_partition);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 242;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_ass_subvalue_1 = tmp_tuple_unpack_1__element_1;
CHECK_OBJECT(par_kwargs);
tmp_ass_subscribed_1 = par_kwargs;
tmp_ass_subscript_1 = mod_consts.const_str_plain_host;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_12);
var__ = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_ass_subvalue_2 = tmp_tuple_unpack_1__element_3;
CHECK_OBJECT(par_kwargs);
tmp_ass_subscribed_2 = par_kwargs;
tmp_ass_subscript_2 = mod_consts.const_str_plain_port;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

branch_no_4:;
{
bool tmp_condition_result_6;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_3 = mod_consts.const_str_plain_username;
CHECK_OBJECT(par_kwargs);
tmp_cmp_expr_right_3 = par_kwargs;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = (tmp_res == 1) ? true : false;
tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_cmp_expr_left_4 = mod_consts.const_str_plain_password;
CHECK_OBJECT(par_kwargs);
tmp_cmp_expr_right_4 = par_kwargs;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = (tmp_res == 1) ? true : false;
tmp_condition_result_6 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_6 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_6 = module_var_accessor_httpx$_urlparse$quote(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quote);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_expression_value_4 = par_kwargs;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_pop);
assert(!(tmp_called_value_7 == NULL));
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 246;
tmp_or_left_value_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_username_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 246;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(tmp_or_left_value_3);
Py_DECREF(tmp_or_left_value_3);
tmp_or_right_value_3 = const_str_empty;
Py_INCREF(tmp_or_right_value_3);
tmp_kw_call_arg_value_0_1 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_kw_call_arg_value_0_1 = tmp_or_left_value_3;
or_end_3:;
tmp_kw_call_dict_value_0_1 = module_var_accessor_httpx$_urlparse$USERNAME_SAFE(tstate);
if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_USERNAME_SAFE);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 246;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 246;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_username == NULL);
var_username = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_arg_value_0_2;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_8 = module_var_accessor_httpx$_urlparse$quote(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quote);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_expression_value_5 = par_kwargs;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_pop);
assert(!(tmp_called_value_9 == NULL));
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 247;
tmp_or_left_value_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_password_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_or_left_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_4);

exception_lineno = 247;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(tmp_or_left_value_4);
Py_DECREF(tmp_or_left_value_4);
tmp_or_right_value_4 = const_str_empty;
Py_INCREF(tmp_or_right_value_4);
tmp_kw_call_arg_value_0_2 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_kw_call_arg_value_0_2 = tmp_or_left_value_4;
or_end_4:;
tmp_kw_call_dict_value_0_2 = module_var_accessor_httpx$_urlparse$PASSWORD_SAFE(tstate);
if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PASSWORD_SAFE);
}

if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 247;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 247;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_password == NULL);
var_password = tmp_assign_source_14;
}
{
PyObject *tmp_ass_subvalue_3;
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(var_password);
tmp_truth_name_1 = CHECK_IF_TRUE(var_password);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(var_username);
tmp_format_value_3 = var_username;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_password);
tmp_format_value_4 = var_password;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_ass_subvalue_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_ass_subvalue_3 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(var_username);
tmp_ass_subvalue_3 = var_username;
Py_INCREF(tmp_ass_subvalue_3);
condexpr_end_2:;
CHECK_OBJECT(par_kwargs);
tmp_ass_subscribed_3 = par_kwargs;
tmp_ass_subscript_3 = mod_consts.const_str_plain_userinfo;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_5:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = mod_consts.const_str_plain_raw_path;
CHECK_OBJECT(par_kwargs);
tmp_cmp_expr_right_5 = par_kwargs;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_15;
int tmp_or_left_truth_5;
PyObject *tmp_or_left_value_5;
PyObject *tmp_or_right_value_5;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_6 = par_kwargs;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_pop);
assert(!(tmp_called_value_10 == NULL));
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 252;
tmp_or_left_value_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_plain_raw_path_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_or_left_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
if (tmp_or_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_5);

exception_lineno = 252;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_5 == 1) {
    goto or_left_5;
} else {
    goto or_right_5;
}
or_right_5:;
CHECK_OBJECT(tmp_or_left_value_5);
Py_DECREF(tmp_or_left_value_5);
tmp_or_right_value_5 = const_str_empty;
Py_INCREF(tmp_or_right_value_5);
tmp_assign_source_15 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_assign_source_15 = tmp_or_left_value_5;
or_end_5:;
assert(var_raw_path == NULL);
var_raw_path = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_raw_path);
tmp_expression_value_7 = var_raw_path;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_partition);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 253;
tmp_iter_arg_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_chr_63_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 2, 3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_2__element_3 == NULL);
tmp_tuple_unpack_2__element_3 = tmp_assign_source_19;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
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

goto try_except_handler_6;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_ass_subvalue_4 = tmp_tuple_unpack_2__element_1;
CHECK_OBJECT(par_kwargs);
tmp_ass_subscribed_4 = par_kwargs;
tmp_ass_subscript_4 = const_str_plain_path;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
assert(var_seperator == NULL);
Py_INCREF(tmp_assign_source_20);
var_seperator = tmp_assign_source_20;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_ass_subvalue_5 = tmp_tuple_unpack_2__element_3;
CHECK_OBJECT(par_kwargs);
tmp_ass_subscribed_5 = par_kwargs;
tmp_ass_subscript_5 = mod_consts.const_str_plain_query;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
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
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_seperator);
tmp_operand_value_2 = var_seperator;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = Py_None;
CHECK_OBJECT(par_kwargs);
tmp_ass_subscribed_6 = par_kwargs;
tmp_ass_subscript_6 = mod_consts.const_str_plain_query;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
branch_no_6:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = mod_consts.const_str_plain_host;
CHECK_OBJECT(par_kwargs);
tmp_cmp_expr_right_6 = par_kwargs;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_21;
int tmp_or_left_truth_6;
PyObject *tmp_or_left_value_6;
PyObject *tmp_or_right_value_6;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_8 = par_kwargs;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
assert(!(tmp_called_value_12 == NULL));
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 259;
tmp_or_left_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_str_plain_host_tuple);

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_or_left_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
if (tmp_or_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_6);

exception_lineno = 259;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_6 == 1) {
    goto or_left_6;
} else {
    goto or_right_6;
}
or_right_6:;
CHECK_OBJECT(tmp_or_left_value_6);
Py_DECREF(tmp_or_left_value_6);
tmp_or_right_value_6 = const_str_empty;
Py_INCREF(tmp_or_right_value_6);
tmp_assign_source_21 = tmp_or_right_value_6;
goto or_end_6;
or_left_6:;
tmp_assign_source_21 = tmp_or_left_value_6;
or_end_6:;
assert(var_host == NULL);
var_host = tmp_assign_source_21;
}
{
bool tmp_condition_result_11;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_operand_value_3;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_10;
tmp_cmp_expr_left_7 = mod_consts.const_str_chr_58;
CHECK_OBJECT(var_host);
tmp_cmp_expr_right_7 = var_host;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_host);
tmp_expression_value_9 = var_host;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_startswith);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 260;
tmp_and_left_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_13, mod_consts.const_tuple_str_chr_91_tuple);

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 260;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
CHECK_OBJECT(var_host);
tmp_expression_value_10 = var_host;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_endswith);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 260;
tmp_and_right_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_14, mod_consts.const_tuple_str_chr_93_tuple);

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_and_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_operand_value_3 = tmp_and_left_value_2;
and_end_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_11 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_11 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_11 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_tuple_element_3 = mod_consts.const_str_chr_91;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_host);
tmp_format_value_5 = var_host;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_chr_93;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_ass_subvalue_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_ass_subvalue_7 == NULL));
CHECK_OBJECT(par_kwargs);
tmp_ass_subscribed_7 = par_kwargs;
tmp_ass_subscript_7 = mod_consts.const_str_plain_host;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subvalue_7);
Py_DECREF(tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_9:;
branch_no_8:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iter_arg_5;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_11 = par_kwargs;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_items);
assert(!(tmp_called_value_15 == NULL));
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 266;
tmp_iter_arg_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_15);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_22;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_23 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooo";
exception_lineno = 266;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_6 = tmp_for_loop_1__iter_value;
tmp_assign_source_24 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_9;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_8;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_27 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_27;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_28 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_28;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_value);
tmp_cmp_expr_left_8 = var_value;
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_value);
tmp_len_arg_2 = var_value;
tmp_cmp_expr_left_9 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_cmp_expr_right_9 = module_var_accessor_httpx$_urlparse$MAX_URL_LENGTH(tstate);
if (unlikely(tmp_cmp_expr_right_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MAX_URL_LENGTH);
}

if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_9);

exception_lineno = 268;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_13 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_3;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
tmp_called_value_16 = module_var_accessor_httpx$_urlparse$InvalidURL(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_tuple_element_4 = mod_consts.const_str_digest_a55bf3180c1c8a39b940df43f4f666b7;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_key);
tmp_format_value_6 = var_key;
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_6e86477ea2043903e389ab10c2b06141;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_args_element_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 269;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 269;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooo";
goto try_except_handler_8;
}
branch_no_11:;
{
bool tmp_condition_result_14;
PyObject *tmp_any_arg_2;
PyObject *tmp_capi_result_2;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(var_value);
tmp_iter_arg_7 = var_value;
tmp_assign_source_29 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_genexpr_3__$0;
    tmp_genexpr_3__$0 = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_closure_3[0] = Nuitka_Cell_New0(tmp_genexpr_3__$0);
tmp_any_arg_2 = MAKE_GENERATOR_httpx$_urlparse$$$function__5_urlparse$$$genexpr__3_genexpr(tstate, tmp_closure_3);

goto try_return_handler_11;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(tmp_genexpr_3__$0);
CHECK_OBJECT(tmp_genexpr_3__$0);
Py_DECREF(tmp_genexpr_3__$0);
tmp_genexpr_3__$0 = NULL;
goto outline_result_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_capi_result_2 = BUILTIN_ANY(tstate, tmp_any_arg_2);
CHECK_OBJECT(tmp_any_arg_2);
Py_DECREF(tmp_any_arg_2);
if (tmp_capi_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_14 = CHECK_IF_TRUE(tmp_capi_result_2) == 1;
CHECK_OBJECT(tmp_capi_result_2);
Py_DECREF(tmp_capi_result_2);
if (tmp_condition_result_14 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_value_value_2;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_8;
CHECK_OBJECT(var_value);
tmp_iter_arg_8 = var_value;
tmp_assign_source_31 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(tmp_genexpr_4__$0 == NULL);
tmp_genexpr_4__$0 = tmp_assign_source_31;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_4[1];
tmp_closure_4[0] = Nuitka_Cell_New0(tmp_genexpr_4__$0);
tmp_value_value_2 = MAKE_GENERATOR_httpx$_urlparse$$$function__5_urlparse$$$genexpr__4_genexpr(tstate, tmp_closure_4);

goto try_return_handler_12;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(tmp_genexpr_4__$0);
CHECK_OBJECT(tmp_genexpr_4__$0);
Py_DECREF(tmp_genexpr_4__$0);
tmp_genexpr_4__$0 = NULL;
goto outline_result_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
tmp_assign_source_30 = ITERATOR_NEXT(tmp_value_value_2);
if (tmp_assign_source_30 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(var_char == NULL);
var_char = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_value);
tmp_expression_value_12 = var_value;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_find);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_char);
tmp_args_element_value_4 = var_char;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 277;
tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(var_idx == NULL);
var_idx = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = mod_consts.const_str_digest_a341616e558abe9b3c0d5d016ef9aad9;
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_7;
PyObject *tmp_format_spec_7;
PyObject *tmp_format_value_8;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_8;
PyObject *tmp_format_value_9;
PyObject *tmp_format_spec_9;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_key);
tmp_format_value_7 = var_key;
tmp_format_spec_7 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_digest_10914e208b3e44bf3bd458dfd6f91623;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
CHECK_OBJECT(var_char);
tmp_operand_value_4 = var_char;
tmp_format_value_8 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
tmp_format_spec_8 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
CHECK_OBJECT(tmp_format_value_8);
Py_DECREF(tmp_format_value_8);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 3, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_digest_3ac33d9850d9d7a7d2782efa72a2d403;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 4, tmp_tuple_element_5);
CHECK_OBJECT(var_idx);
tmp_format_value_9 = var_idx;
tmp_format_spec_9 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 5, tmp_tuple_element_5);
tmp_tuple_element_5 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 6, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_5);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_assign_source_33 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(tmp_assign_source_33 == NULL));
assert(var_error == NULL);
var_error = tmp_assign_source_33;
}
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_5;
tmp_called_value_18 = module_var_accessor_httpx$_urlparse$InvalidURL(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_error);
tmp_args_element_value_5 = var_error;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 282;
tmp_raise_type_input_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_5);
if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 282;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooo";
goto try_except_handler_8;
}
branch_no_12:;
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_6;
tmp_expression_value_13 = module_var_accessor_httpx$_urlparse$COMPONENT_REGEX(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMPONENT_REGEX);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_key);
tmp_subscript_value_1 = var_key;
tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_value);
tmp_args_element_value_6 = var_value;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 285;
tmp_operand_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_fullmatch, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_raise_type_input_5;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_7;
PyObject *tmp_string_concat_values_6;
PyObject *tmp_tuple_element_6;
tmp_called_value_19 = module_var_accessor_httpx$_urlparse$InvalidURL(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_tuple_element_6 = mod_consts.const_str_digest_f22e09c44c4feb0951287f707bf7150b;
tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_10;
PyObject *tmp_format_spec_10;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
CHECK_OBJECT(var_key);
tmp_format_value_10 = var_key;
tmp_format_spec_10 = const_str_empty;
tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_chr_39;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_string_concat_values_6);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_args_element_value_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_6);
CHECK_OBJECT(tmp_string_concat_values_6);
Py_DECREF(tmp_string_concat_values_6);
assert(!(tmp_args_element_value_7 == NULL));
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 286;
tmp_raise_type_input_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_raise_type_input_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_5);
CHECK_OBJECT(tmp_raise_type_input_5);
Py_DECREF(tmp_raise_type_input_5);
if (tmp_raise_type_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 286;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooo";
goto try_except_handler_8;
}
branch_no_13:;
branch_no_10:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_1;
loop_end_1:;
goto try_end_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_8;
tmp_called_instance_2 = module_var_accessor_httpx$_urlparse$URL_REGEX(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_URL_REGEX);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_8 = par_url;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 289;
tmp_assign_source_34 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_match, tmp_args_element_value_8);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_url_match == NULL);
var_url_match = tmp_assign_source_34;
}
{
bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_url_match);
tmp_cmp_expr_left_10 = var_url_match;
tmp_cmp_expr_right_10 = Py_None;
tmp_condition_result_16 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_6;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 290;
tmp_raise_type_6 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 290;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_14:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_url_match);
tmp_called_instance_3 = var_url_match;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 291;
tmp_assign_source_35 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_groupdict);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_url_dict == NULL);
var_url_dict = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
int tmp_or_left_truth_7;
PyObject *tmp_or_left_value_7;
PyObject *tmp_or_right_value_7;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_14 = par_kwargs;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_get);
assert(!(tmp_called_value_20 == NULL));
tmp_args_element_value_9 = mod_consts.const_str_plain_scheme;
CHECK_OBJECT(var_url_dict);
tmp_expression_value_15 = var_url_dict;
tmp_subscript_value_2 = mod_consts.const_str_plain_scheme;
tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_2);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 298;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 298;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_or_left_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_or_left_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_7 = CHECK_IF_TRUE(tmp_or_left_value_7);
if (tmp_or_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_7);

exception_lineno = 298;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_7 == 1) {
    goto or_left_7;
} else {
    goto or_right_7;
}
or_right_7:;
CHECK_OBJECT(tmp_or_left_value_7);
Py_DECREF(tmp_or_left_value_7);
tmp_or_right_value_7 = const_str_empty;
Py_INCREF(tmp_or_right_value_7);
tmp_assign_source_36 = tmp_or_right_value_7;
goto or_end_7;
or_left_7:;
tmp_assign_source_36 = tmp_or_left_value_7;
or_end_7:;
assert(var_scheme == NULL);
var_scheme = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
int tmp_or_left_truth_8;
PyObject *tmp_or_left_value_8;
PyObject *tmp_or_right_value_8;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_16 = par_kwargs;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_get);
assert(!(tmp_called_value_21 == NULL));
tmp_args_element_value_11 = mod_consts.const_str_plain_authority;
CHECK_OBJECT(var_url_dict);
tmp_expression_value_17 = var_url_dict;
tmp_subscript_value_3 = mod_consts.const_str_plain_authority;
tmp_args_element_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_3);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_21);

exception_lineno = 299;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 299;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_or_left_value_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
}

CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_or_left_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_8 = CHECK_IF_TRUE(tmp_or_left_value_8);
if (tmp_or_left_truth_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_8);

exception_lineno = 299;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_8 == 1) {
    goto or_left_8;
} else {
    goto or_right_8;
}
or_right_8:;
CHECK_OBJECT(tmp_or_left_value_8);
Py_DECREF(tmp_or_left_value_8);
tmp_or_right_value_8 = const_str_empty;
Py_INCREF(tmp_or_right_value_8);
tmp_assign_source_37 = tmp_or_right_value_8;
goto or_end_8;
or_left_8:;
tmp_assign_source_37 = tmp_or_left_value_8;
or_end_8:;
assert(var_authority == NULL);
var_authority = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
int tmp_or_left_truth_9;
PyObject *tmp_or_left_value_9;
PyObject *tmp_or_right_value_9;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_18 = par_kwargs;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_get);
assert(!(tmp_called_value_22 == NULL));
tmp_args_element_value_13 = const_str_plain_path;
CHECK_OBJECT(var_url_dict);
tmp_expression_value_19 = var_url_dict;
tmp_subscript_value_4 = const_str_plain_path;
tmp_args_element_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_4);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_22);

exception_lineno = 300;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 300;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_or_left_value_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
}

CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_or_left_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_9 = CHECK_IF_TRUE(tmp_or_left_value_9);
if (tmp_or_left_truth_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_9);

exception_lineno = 300;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_9 == 1) {
    goto or_left_9;
} else {
    goto or_right_9;
}
or_right_9:;
CHECK_OBJECT(tmp_or_left_value_9);
Py_DECREF(tmp_or_left_value_9);
tmp_or_right_value_9 = const_str_empty;
Py_INCREF(tmp_or_right_value_9);
tmp_assign_source_38 = tmp_or_right_value_9;
goto or_end_9;
or_left_9:;
tmp_assign_source_38 = tmp_or_left_value_9;
or_end_9:;
assert(var_path == NULL);
var_path = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_20 = par_kwargs;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_get);
assert(!(tmp_called_value_23 == NULL));
tmp_args_element_value_15 = mod_consts.const_str_plain_query;
CHECK_OBJECT(var_url_dict);
tmp_expression_value_21 = var_url_dict;
tmp_subscript_value_5 = mod_consts.const_str_plain_query;
tmp_args_element_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_5);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);

exception_lineno = 301;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 301;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_query == NULL);
var_query = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_22 = par_kwargs;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain_get);
assert(!(tmp_called_value_24 == NULL));
tmp_args_element_value_17 = mod_consts.const_str_plain_fragment;
CHECK_OBJECT(var_url_dict);
tmp_expression_value_23 = var_url_dict;
tmp_subscript_value_6 = mod_consts.const_str_plain_fragment;
tmp_args_element_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_6);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 302;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 302;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_24, call_args);
}

CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_frag == NULL);
var_frag = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_19;
tmp_called_instance_4 = module_var_accessor_httpx$_urlparse$AUTHORITY_REGEX(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AUTHORITY_REGEX);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 305;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_authority);
tmp_args_element_value_19 = var_authority;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 305;
tmp_assign_source_41 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_match, tmp_args_element_value_19);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_authority_match == NULL);
var_authority_match = tmp_assign_source_41;
}
{
bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(var_authority_match);
tmp_cmp_expr_left_11 = var_authority_match;
tmp_cmp_expr_right_11 = Py_None;
tmp_condition_result_17 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_raise_type_7;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 306;
tmp_raise_type_7 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 306;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_15:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(var_authority_match);
tmp_called_instance_5 = var_authority_match;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 307;
tmp_assign_source_42 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_groupdict);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_authority_dict == NULL);
var_authority_dict = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
int tmp_or_left_truth_10;
PyObject *tmp_or_left_value_10;
PyObject *tmp_or_right_value_10;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_24 = par_kwargs;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain_get);
assert(!(tmp_called_value_25 == NULL));
tmp_args_element_value_20 = mod_consts.const_str_plain_userinfo;
CHECK_OBJECT(var_authority_dict);
tmp_expression_value_25 = var_authority_dict;
tmp_subscript_value_7 = mod_consts.const_str_plain_userinfo;
tmp_args_element_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_7);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_25);

exception_lineno = 311;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_or_left_value_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
}

CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_or_left_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_10 = CHECK_IF_TRUE(tmp_or_left_value_10);
if (tmp_or_left_truth_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_10);

exception_lineno = 311;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_10 == 1) {
    goto or_left_10;
} else {
    goto or_right_10;
}
or_right_10:;
CHECK_OBJECT(tmp_or_left_value_10);
Py_DECREF(tmp_or_left_value_10);
tmp_or_right_value_10 = const_str_empty;
Py_INCREF(tmp_or_right_value_10);
tmp_assign_source_43 = tmp_or_right_value_10;
goto or_end_10;
or_left_10:;
tmp_assign_source_43 = tmp_or_left_value_10;
or_end_10:;
assert(var_userinfo == NULL);
var_userinfo = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
int tmp_or_left_truth_11;
PyObject *tmp_or_left_value_11;
PyObject *tmp_or_right_value_11;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_26 = par_kwargs;
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain_get);
assert(!(tmp_called_value_26 == NULL));
tmp_args_element_value_22 = mod_consts.const_str_plain_host;
CHECK_OBJECT(var_authority_dict);
tmp_expression_value_27 = var_authority_dict;
tmp_subscript_value_8 = mod_consts.const_str_plain_host;
tmp_args_element_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_8);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_26);

exception_lineno = 312;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 312;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_or_left_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
}

CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_or_left_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_11 = CHECK_IF_TRUE(tmp_or_left_value_11);
if (tmp_or_left_truth_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_11);

exception_lineno = 312;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_11 == 1) {
    goto or_left_11;
} else {
    goto or_right_11;
}
or_right_11:;
CHECK_OBJECT(tmp_or_left_value_11);
Py_DECREF(tmp_or_left_value_11);
tmp_or_right_value_11 = const_str_empty;
Py_INCREF(tmp_or_right_value_11);
tmp_assign_source_44 = tmp_or_right_value_11;
goto or_end_11;
or_left_11:;
tmp_assign_source_44 = tmp_or_left_value_11;
or_end_11:;
{
    PyObject *old = var_host;
    var_host = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_9;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_28 = par_kwargs;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain_get);
assert(!(tmp_called_value_27 == NULL));
tmp_args_element_value_24 = mod_consts.const_str_plain_port;
CHECK_OBJECT(var_authority_dict);
tmp_expression_value_29 = var_authority_dict;
tmp_subscript_value_9 = mod_consts.const_str_plain_port;
tmp_args_element_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_9);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 313;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 313;
{
    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_27, call_args);
}

CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_port;
    var_port = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(var_scheme);
tmp_expression_value_30 = var_scheme;
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain_lower);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 318;
tmp_assign_source_46 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_28);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_parsed_scheme == NULL);
var_parsed_scheme = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_29;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
tmp_called_value_29 = module_var_accessor_httpx$_urlparse$quote(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quote);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 319;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_userinfo);
tmp_kw_call_arg_value_0_3 = var_userinfo;
tmp_kw_call_dict_value_0_3 = module_var_accessor_httpx$_urlparse$USERINFO_SAFE(tstate);
if (unlikely(tmp_kw_call_dict_value_0_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_USERINFO_SAFE);
}

if (tmp_kw_call_dict_value_0_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 319;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 319;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_29, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_parsed_userinfo == NULL);
var_parsed_userinfo = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_26;
tmp_called_value_30 = module_var_accessor_httpx$_urlparse$encode_host(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_host);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 320;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_host);
tmp_args_element_value_26 = var_host;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 320;
tmp_assign_source_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_26);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_parsed_host == NULL);
var_parsed_host = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
tmp_called_value_31 = module_var_accessor_httpx$_urlparse$normalize_port(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_normalize_port);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_port);
tmp_args_element_value_27 = var_port;
CHECK_OBJECT(var_scheme);
tmp_args_element_value_28 = var_scheme;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 321;
{
    PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
    tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_31, call_args);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_parsed_port == NULL);
var_parsed_port = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(var_parsed_scheme);
tmp_cmp_expr_left_12 = var_parsed_scheme;
tmp_cmp_expr_right_12 = const_str_empty;
tmp_assign_source_50 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_has_scheme == NULL);
var_has_scheme = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
int tmp_or_left_truth_12;
PyObject *tmp_or_left_value_12;
PyObject *tmp_or_right_value_12;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
int tmp_or_left_truth_13;
PyObject *tmp_or_left_value_13;
PyObject *tmp_or_right_value_13;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(var_parsed_userinfo);
tmp_cmp_expr_left_13 = var_parsed_userinfo;
tmp_cmp_expr_right_13 = const_str_empty;
tmp_or_left_value_12 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_or_left_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_12 = CHECK_IF_TRUE(tmp_or_left_value_12);
if (tmp_or_left_truth_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_12);

exception_lineno = 325;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_12 == 1) {
    goto or_left_12;
} else {
    goto or_right_12;
}
or_right_12:;
CHECK_OBJECT(tmp_or_left_value_12);
Py_DECREF(tmp_or_left_value_12);
CHECK_OBJECT(var_parsed_host);
tmp_cmp_expr_left_14 = var_parsed_host;
tmp_cmp_expr_right_14 = const_str_empty;
tmp_or_left_value_13 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_or_left_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_13 = CHECK_IF_TRUE(tmp_or_left_value_13);
if (tmp_or_left_truth_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_13);

exception_lineno = 325;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_13 == 1) {
    goto or_left_13;
} else {
    goto or_right_13;
}
or_right_13:;
CHECK_OBJECT(tmp_or_left_value_13);
Py_DECREF(tmp_or_left_value_13);
CHECK_OBJECT(var_parsed_port);
tmp_cmp_expr_left_15 = var_parsed_port;
tmp_cmp_expr_right_15 = Py_None;
tmp_or_right_value_13 = (tmp_cmp_expr_left_15 != tmp_cmp_expr_right_15) ? Py_True : Py_False;
Py_INCREF(tmp_or_right_value_13);
tmp_or_right_value_12 = tmp_or_right_value_13;
goto or_end_13;
or_left_13:;
tmp_or_right_value_12 = tmp_or_left_value_13;
or_end_13:;
tmp_assign_source_51 = tmp_or_right_value_12;
goto or_end_12;
or_left_12:;
tmp_assign_source_51 = tmp_or_left_value_12;
or_end_12:;
assert(var_has_authority == NULL);
var_has_authority = tmp_assign_source_51;
}
{
PyObject *tmp_called_value_32;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_32 = module_var_accessor_httpx$_urlparse$validate_path(tstate);
if (unlikely(tmp_called_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_validate_path);
}

if (tmp_called_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_kw_call_arg_value_0_4 = var_path;
CHECK_OBJECT(var_has_scheme);
tmp_kw_call_dict_value_0_4 = var_has_scheme;
CHECK_OBJECT(var_has_authority);
tmp_kw_call_dict_value_1_1 = var_has_authority;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 327;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_32, args, kw_values, mod_consts.const_tuple_str_plain_has_scheme_str_plain_has_authority_tuple);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_18;
int tmp_or_left_truth_14;
nuitka_bool tmp_or_left_value_14;
nuitka_bool tmp_or_right_value_14;
int tmp_truth_name_2;
int tmp_truth_name_3;
CHECK_OBJECT(var_has_scheme);
tmp_truth_name_2 = CHECK_IF_TRUE(var_has_scheme);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_14 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_14 = tmp_or_left_value_14 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_14 == 1) {
    goto or_left_14;
} else {
    goto or_right_14;
}
or_right_14:;
CHECK_OBJECT(var_has_authority);
tmp_truth_name_3 = CHECK_IF_TRUE(var_has_authority);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_18 = tmp_or_right_value_14;
goto or_end_14;
or_left_14:;
tmp_condition_result_18 = tmp_or_left_value_14;
or_end_14:;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_33;
PyObject *tmp_args_element_value_29;
tmp_called_value_33 = module_var_accessor_httpx$_urlparse$normalize_path(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_normalize_path);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_args_element_value_29 = var_path;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 329;
tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_29);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_path;
    assert(old != NULL);
    var_path = tmp_assign_source_52;
    Py_DECREF(old);
}

}
branch_no_16:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_34;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_kw_call_dict_value_0_5;
tmp_called_value_34 = module_var_accessor_httpx$_urlparse$quote(tstate);
if (unlikely(tmp_called_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quote);
}

if (tmp_called_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_path == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 331;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_5 = var_path;
tmp_kw_call_dict_value_0_5 = module_var_accessor_httpx$_urlparse$PATH_SAFE(tstate);
if (unlikely(tmp_kw_call_dict_value_0_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PATH_SAFE);
}

if (tmp_kw_call_dict_value_0_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 331;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
    tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_34, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_parsed_path == NULL);
var_parsed_path = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
PyObject *tmp_called_value_35;
PyObject *tmp_kw_call_arg_value_0_6;
PyObject *tmp_kw_call_dict_value_0_6;
CHECK_OBJECT(var_query);
tmp_cmp_expr_left_16 = var_query;
tmp_cmp_expr_right_16 = Py_None;
tmp_condition_result_19 = (tmp_cmp_expr_left_16 == tmp_cmp_expr_right_16) ? true : false;
if (tmp_condition_result_19 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_assign_source_54 = Py_None;
Py_INCREF(tmp_assign_source_54);
goto condexpr_end_3;
condexpr_false_3:;
tmp_called_value_35 = module_var_accessor_httpx$_urlparse$quote(tstate);
if (unlikely(tmp_called_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quote);
}

if (tmp_called_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_query);
tmp_kw_call_arg_value_0_6 = var_query;
tmp_kw_call_dict_value_0_6 = module_var_accessor_httpx$_urlparse$QUERY_SAFE(tstate);
if (unlikely(tmp_kw_call_dict_value_0_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QUERY_SAFE);
}

if (tmp_kw_call_dict_value_0_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 332;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_6};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
    tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_35, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_3:;
assert(var_parsed_query == NULL);
var_parsed_query = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
PyObject *tmp_called_value_36;
PyObject *tmp_kw_call_arg_value_0_7;
PyObject *tmp_kw_call_dict_value_0_7;
CHECK_OBJECT(var_frag);
tmp_cmp_expr_left_17 = var_frag;
tmp_cmp_expr_right_17 = Py_None;
tmp_condition_result_20 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
if (tmp_condition_result_20 != false) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
tmp_assign_source_55 = Py_None;
Py_INCREF(tmp_assign_source_55);
goto condexpr_end_4;
condexpr_false_4:;
tmp_called_value_36 = module_var_accessor_httpx$_urlparse$quote(tstate);
if (unlikely(tmp_called_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quote);
}

if (tmp_called_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 333;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_frag);
tmp_kw_call_arg_value_0_7 = var_frag;
tmp_kw_call_dict_value_0_7 = module_var_accessor_httpx$_urlparse$FRAG_SAFE(tstate);
if (unlikely(tmp_kw_call_dict_value_0_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FRAG_SAFE);
}

if (tmp_kw_call_dict_value_0_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 333;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 333;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_7};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
    tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_36, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_4:;
assert(var_parsed_frag == NULL);
var_parsed_frag = tmp_assign_source_55;
}
{
PyObject *tmp_called_value_37;
PyObject *tmp_args_element_value_30;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
PyObject *tmp_args_element_value_35;
PyObject *tmp_args_element_value_36;
tmp_called_value_37 = module_var_accessor_httpx$_urlparse$ParseResult(tstate);
if (unlikely(tmp_called_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParseResult);
}

if (tmp_called_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_parsed_scheme);
tmp_args_element_value_30 = var_parsed_scheme;
CHECK_OBJECT(var_parsed_userinfo);
tmp_args_element_value_31 = var_parsed_userinfo;
CHECK_OBJECT(var_parsed_host);
tmp_args_element_value_32 = var_parsed_host;
CHECK_OBJECT(var_parsed_port);
tmp_args_element_value_33 = var_parsed_port;
CHECK_OBJECT(var_parsed_path);
tmp_args_element_value_34 = var_parsed_path;
CHECK_OBJECT(var_parsed_query);
tmp_args_element_value_35 = var_parsed_query;
CHECK_OBJECT(var_parsed_frag);
tmp_args_element_value_36 = var_parsed_frag;
frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame.f_lineno = 337;
{
    PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_37, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__5_urlparse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$function__5_urlparse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__5_urlparse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$function__5_urlparse,
    type_description_1,
    par_url,
    par_kwargs,
    var_parsed_scheme,
    var_parsed_userinfo,
    var_parsed_host,
    var_parsed_port,
    var_parsed_path,
    var_parsed_query,
    var_parsed_frag,
    var_char,
    var_idx,
    var_error,
    var_port,
    var_netloc,
    var__,
    var_username,
    var_password,
    var_raw_path,
    var_seperator,
    var_host,
    var_key,
    var_value,
    var_url_match,
    var_url_dict,
    var_scheme,
    var_authority,
    var_path,
    var_query,
    var_frag,
    var_authority_match,
    var_authority_dict,
    var_userinfo,
    var_has_scheme,
    var_has_authority
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_urlparse$$$function__5_urlparse == cache_frame_frame_httpx$_urlparse$$$function__5_urlparse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_urlparse$$$function__5_urlparse);
    cache_frame_frame_httpx$_urlparse$$$function__5_urlparse = NULL;
}

assertFrameObject(frame_frame_httpx$_urlparse$$$function__5_urlparse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_parsed_scheme);
CHECK_OBJECT(var_parsed_scheme);
Py_DECREF(var_parsed_scheme);
var_parsed_scheme = NULL;
CHECK_OBJECT(var_parsed_userinfo);
CHECK_OBJECT(var_parsed_userinfo);
Py_DECREF(var_parsed_userinfo);
var_parsed_userinfo = NULL;
CHECK_OBJECT(var_parsed_host);
CHECK_OBJECT(var_parsed_host);
Py_DECREF(var_parsed_host);
var_parsed_host = NULL;
CHECK_OBJECT(var_parsed_port);
CHECK_OBJECT(var_parsed_port);
Py_DECREF(var_parsed_port);
var_parsed_port = NULL;
CHECK_OBJECT(var_parsed_path);
CHECK_OBJECT(var_parsed_path);
Py_DECREF(var_parsed_path);
var_parsed_path = NULL;
CHECK_OBJECT(var_parsed_query);
CHECK_OBJECT(var_parsed_query);
Py_DECREF(var_parsed_query);
var_parsed_query = NULL;
CHECK_OBJECT(var_parsed_frag);
CHECK_OBJECT(var_parsed_frag);
Py_DECREF(var_parsed_frag);
var_parsed_frag = NULL;
CHECK_OBJECT(var_port);
CHECK_OBJECT(var_port);
Py_DECREF(var_port);
var_port = NULL;
Py_XDECREF(var_netloc);
var_netloc = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_username);
var_username = NULL;
Py_XDECREF(var_password);
var_password = NULL;
Py_XDECREF(var_raw_path);
var_raw_path = NULL;
Py_XDECREF(var_seperator);
var_seperator = NULL;
CHECK_OBJECT(var_host);
CHECK_OBJECT(var_host);
Py_DECREF(var_host);
var_host = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_value);
var_value = NULL;
CHECK_OBJECT(var_url_match);
CHECK_OBJECT(var_url_match);
Py_DECREF(var_url_match);
var_url_match = NULL;
CHECK_OBJECT(var_url_dict);
CHECK_OBJECT(var_url_dict);
Py_DECREF(var_url_dict);
var_url_dict = NULL;
CHECK_OBJECT(var_scheme);
CHECK_OBJECT(var_scheme);
Py_DECREF(var_scheme);
var_scheme = NULL;
CHECK_OBJECT(var_authority);
CHECK_OBJECT(var_authority);
Py_DECREF(var_authority);
var_authority = NULL;
Py_XDECREF(var_path);
var_path = NULL;
CHECK_OBJECT(var_query);
CHECK_OBJECT(var_query);
Py_DECREF(var_query);
var_query = NULL;
CHECK_OBJECT(var_frag);
CHECK_OBJECT(var_frag);
Py_DECREF(var_frag);
var_frag = NULL;
CHECK_OBJECT(var_authority_match);
CHECK_OBJECT(var_authority_match);
Py_DECREF(var_authority_match);
var_authority_match = NULL;
CHECK_OBJECT(var_authority_dict);
CHECK_OBJECT(var_authority_dict);
Py_DECREF(var_authority_dict);
var_authority_dict = NULL;
CHECK_OBJECT(var_userinfo);
CHECK_OBJECT(var_userinfo);
Py_DECREF(var_userinfo);
var_userinfo = NULL;
CHECK_OBJECT(var_has_scheme);
CHECK_OBJECT(var_has_scheme);
Py_DECREF(var_has_scheme);
var_has_scheme = NULL;
CHECK_OBJECT(var_has_authority);
CHECK_OBJECT(var_has_authority);
Py_DECREF(var_has_authority);
var_has_authority = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_parsed_scheme);
var_parsed_scheme = NULL;
Py_XDECREF(var_parsed_userinfo);
var_parsed_userinfo = NULL;
Py_XDECREF(var_parsed_host);
var_parsed_host = NULL;
Py_XDECREF(var_parsed_port);
var_parsed_port = NULL;
Py_XDECREF(var_parsed_path);
var_parsed_path = NULL;
Py_XDECREF(var_parsed_query);
var_parsed_query = NULL;
Py_XDECREF(var_parsed_frag);
var_parsed_frag = NULL;
Py_XDECREF(var_char);
var_char = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_error);
var_error = NULL;
Py_XDECREF(var_port);
var_port = NULL;
Py_XDECREF(var_netloc);
var_netloc = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_username);
var_username = NULL;
Py_XDECREF(var_password);
var_password = NULL;
Py_XDECREF(var_raw_path);
var_raw_path = NULL;
Py_XDECREF(var_seperator);
var_seperator = NULL;
Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_value);
var_value = NULL;
Py_XDECREF(var_url_match);
var_url_match = NULL;
Py_XDECREF(var_url_dict);
var_url_dict = NULL;
Py_XDECREF(var_scheme);
var_scheme = NULL;
Py_XDECREF(var_authority);
var_authority = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_query);
var_query = NULL;
Py_XDECREF(var_frag);
var_frag = NULL;
Py_XDECREF(var_authority_match);
var_authority_match = NULL;
Py_XDECREF(var_authority_dict);
var_authority_dict = NULL;
Py_XDECREF(var_userinfo);
var_userinfo = NULL;
Py_XDECREF(var_has_scheme);
var_has_scheme = NULL;
Py_XDECREF(var_has_authority);
var_has_authority = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__1_genexpr_locals {
PyObject *var_char;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *httpx$_urlparse$$$function__5_urlparse$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__1_genexpr_locals *generator_heap = (struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_char = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6737ceae1dd482ae6083f0c1351be326, module_httpx$_urlparse, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 223;
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
    PyObject *old = generator_heap->var_char;
    generator_heap->var_char = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_char);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_char);
tmp_expression_value_2 = generator_heap->var_char;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_isascii);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 223;
tmp_and_left_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_and_left_value_1);

generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(generator_heap->var_char);
tmp_expression_value_3 = generator_heap->var_char;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_isprintable);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 223;
tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = (generator_heap->tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_1);
tmp_expression_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_expression_value_1 = tmp_and_left_value_1;
and_end_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_and_left_truth_1, sizeof(int), &tmp_and_left_value_1, sizeof(PyObject *), &tmp_and_right_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_operand_value_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_and_left_truth_1, sizeof(int), &tmp_and_left_value_1, sizeof(PyObject *), &tmp_and_right_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_operand_value_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 223;
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


generator_heap->exception_lineno = 223;
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
    generator_heap->var_char
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

Py_XDECREF(generator_heap->var_char);
generator_heap->var_char = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_char);
generator_heap->var_char = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_urlparse$$$function__5_urlparse$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_urlparse$$$function__5_urlparse$$$genexpr__1_genexpr_context,
        module_httpx$_urlparse,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_942d0aeeee3c56ec1a6aec82da971af3,
#endif
        code_objects_6737ceae1dd482ae6083f0c1351be326,
        closure,
        1,
#if 1
        sizeof(struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__2_genexpr_locals {
PyObject *var_char;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *httpx$_urlparse$$$function__5_urlparse$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__2_genexpr_locals *generator_heap = (struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_char = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f31ad090d837c3f8541e8436f2c7451f, module_httpx$_urlparse, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 224;
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
    PyObject *old = generator_heap->var_char;
    generator_heap->var_char = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_char);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->var_char);
tmp_expression_value_1 = generator_heap->var_char;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_isascii);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 224;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_1);

generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(generator_heap->var_char);
tmp_expression_value_2 = generator_heap->var_char;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_isprintable);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 224;
tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_char);
tmp_expression_value_3 = generator_heap->var_char;
Py_INCREF(tmp_expression_value_3);
generator->m_yield_return_index = 1;
return tmp_expression_value_3;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
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
    generator_heap->var_char
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

Py_XDECREF(generator_heap->var_char);
generator_heap->var_char = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_char);
generator_heap->var_char = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_urlparse$$$function__5_urlparse$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_urlparse$$$function__5_urlparse$$$genexpr__2_genexpr_context,
        module_httpx$_urlparse,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_942d0aeeee3c56ec1a6aec82da971af3,
#endif
        code_objects_f31ad090d837c3f8541e8436f2c7451f,
        closure,
        1,
#if 1
        sizeof(struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__3_genexpr_locals {
PyObject *var_char;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *httpx$_urlparse$$$function__5_urlparse$$$genexpr__3_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__3_genexpr_locals *generator_heap = (struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__3_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_char = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_d53b8e9f1200ccd4bbf7a983c061ab60, module_httpx$_urlparse, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 273;
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
    PyObject *old = generator_heap->var_char;
    generator_heap->var_char = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_char);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_char);
tmp_expression_value_2 = generator_heap->var_char;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_isascii);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 273;
tmp_and_left_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_and_left_value_1);

generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(generator_heap->var_char);
tmp_expression_value_3 = generator_heap->var_char;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_isprintable);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 273;
tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = (generator_heap->tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_1);
tmp_expression_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_expression_value_1 = tmp_and_left_value_1;
and_end_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_and_left_truth_1, sizeof(int), &tmp_and_left_value_1, sizeof(PyObject *), &tmp_and_right_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_operand_value_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_and_left_truth_1, sizeof(int), &tmp_and_left_value_1, sizeof(PyObject *), &tmp_and_right_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_operand_value_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
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


generator_heap->exception_lineno = 273;
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
    generator_heap->var_char
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

Py_XDECREF(generator_heap->var_char);
generator_heap->var_char = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_char);
generator_heap->var_char = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_urlparse$$$function__5_urlparse$$$genexpr__3_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_urlparse$$$function__5_urlparse$$$genexpr__3_genexpr_context,
        module_httpx$_urlparse,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_942d0aeeee3c56ec1a6aec82da971af3,
#endif
        code_objects_d53b8e9f1200ccd4bbf7a983c061ab60,
        closure,
        1,
#if 1
        sizeof(struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__3_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__4_genexpr_locals {
PyObject *var_char;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *httpx$_urlparse$$$function__5_urlparse$$$genexpr__4_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__4_genexpr_locals *generator_heap = (struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__4_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_char = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_76eec1375c3fc5c114d3a09be198d54c, module_httpx$_urlparse, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 274;
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
    PyObject *old = generator_heap->var_char;
    generator_heap->var_char = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_char);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->var_char);
tmp_expression_value_1 = generator_heap->var_char;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_isascii);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 275;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_1);

generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(generator_heap->var_char);
tmp_expression_value_2 = generator_heap->var_char;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_isprintable);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 275;
tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_char);
tmp_expression_value_3 = generator_heap->var_char;
Py_INCREF(tmp_expression_value_3);
generator->m_yield_return_index = 1;
return tmp_expression_value_3;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 274;
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
    generator_heap->var_char
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

Py_XDECREF(generator_heap->var_char);
generator_heap->var_char = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_char);
generator_heap->var_char = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_urlparse$$$function__5_urlparse$$$genexpr__4_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_urlparse$$$function__5_urlparse$$$genexpr__4_genexpr_context,
        module_httpx$_urlparse,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_942d0aeeee3c56ec1a6aec82da971af3,
#endif
        code_objects_76eec1375c3fc5c114d3a09be198d54c,
        closure,
        1,
#if 1
        sizeof(struct httpx$_urlparse$$$function__5_urlparse$$$genexpr__4_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_urlparse$$$function__6_encode_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_host = python_pars[0];
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$function__6_encode_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_urlparse$$$function__6_encode_host = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_urlparse$$$function__6_encode_host)) {
    Py_XDECREF(cache_frame_frame_httpx$_urlparse$$$function__6_encode_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_urlparse$$$function__6_encode_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_urlparse$$$function__6_encode_host = MAKE_FUNCTION_FRAME(tstate, code_objects_26873d5a9b1aa91d94249533826bf544, module_httpx$_urlparse, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_urlparse$$$function__6_encode_host->m_type_description == NULL);
frame_frame_httpx$_urlparse$$$function__6_encode_host = cache_frame_frame_httpx$_urlparse$$$function__6_encode_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$function__6_encode_host);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$function__6_encode_host) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_host);
tmp_operand_value_1 = par_host;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oN";
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
tmp_return_value = const_str_empty;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_instance_1 = module_var_accessor_httpx$_urlparse$IPv4_STYLE_HOSTNAME(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_host);
tmp_args_element_value_1 = par_host;
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 352;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_match, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 352;
type_description_1 = "oN";
    goto frame_exception_exit_1;
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
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_httpx$_urlparse$ipaddress(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ipaddress);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "oN";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_host);
tmp_args_element_value_2 = par_host;
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 359;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_IPv4Address, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oN";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__6_encode_host, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__6_encode_host, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_1 = module_var_accessor_httpx$_urlparse$ipaddress(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ipaddress);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_1 = "oN";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_AddressValueError);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oN";
    goto try_except_handler_2;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oN";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_httpx$_urlparse$InvalidURL(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 361;
type_description_1 = "oN";
    goto try_except_handler_2;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_29e09444a0fc8919433ee20f59714fbd;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_host);
tmp_operand_value_2 = par_host;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oN";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oN";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 361;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oN";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oN";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 361;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oN";
goto try_except_handler_2;
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 358;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame)) {
        frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oN";
goto try_except_handler_2;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
try_end_1:;
CHECK_OBJECT(par_host);
tmp_return_value = par_host;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_2;
tmp_called_instance_3 = module_var_accessor_httpx$_urlparse$IPv6_STYLE_HOSTNAME(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 364;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_host);
tmp_args_element_value_4 = par_host;
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 364;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_match, tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 364;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
// Tried code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_expression_value_2 = module_var_accessor_httpx$_urlparse$ipaddress(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ipaddress);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 374;
type_description_1 = "oN";
    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_IPv6Address);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oN";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_host);
tmp_expression_value_3 = par_host;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_1_int_neg_1_none;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 374;
type_description_1 = "oN";
    goto try_except_handler_3;
}
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 374;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oN";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__6_encode_host, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__6_encode_host, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_expression_value_4 = module_var_accessor_httpx$_urlparse$ipaddress(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ipaddress);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "oN";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_AddressValueError);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oN";
    goto try_except_handler_4;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oN";
    goto try_except_handler_4;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_called_value_3 = module_var_accessor_httpx$_urlparse$InvalidURL(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 376;
type_description_1 = "oN";
    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_b67023acc4c846d5f65d7e1367678ebf;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_host);
tmp_operand_value_3 = par_host;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oN";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oN";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_6 == NULL));
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 376;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oN";
    goto try_except_handler_4;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oN";
    goto try_except_handler_4;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 376;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oN";
goto try_except_handler_4;
}
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 373;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame)) {
        frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oN";
goto try_except_handler_4;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_2:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_host);
tmp_expression_value_5 = par_host;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_1_int_neg_1_none;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_5;
int tmp_truth_name_3;
CHECK_OBJECT(par_host);
tmp_expression_value_6 = par_host;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_isascii);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 379;
tmp_call_result_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_5);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_5);

exception_lineno = 379;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_called_value_5 = module_var_accessor_httpx$_urlparse$quote(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quote);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_host);
tmp_expression_value_7 = par_host;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_lower);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 386;
tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = module_var_accessor_httpx$_urlparse$SUB_DELIMS(tstate);
if (unlikely(tmp_add_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SUB_DELIMS);
}

if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 386;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_digest_9e43058167d7252d462803fa6ac4f599;
tmp_kw_call_dict_value_0_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 385;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 386;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_6:;
branch_end_4:;
branch_end_2:;
branch_end_1:;
// Tried code:
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_10;
tmp_expression_value_9 = module_var_accessor_httpx$_urlparse$idna(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_idna);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 390;
type_description_1 = "oN";
    goto try_except_handler_5;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_encode);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oN";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_host);
tmp_expression_value_10 = par_host;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_lower);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 390;
type_description_1 = "oN";
    goto try_except_handler_5;
}
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 390;
tmp_args_element_value_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 390;
type_description_1 = "oN";
    goto try_except_handler_5;
}
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 390;
tmp_expression_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oN";
    goto try_except_handler_5;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oN";
    goto try_except_handler_5;
}
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 390;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oN";
    goto try_except_handler_5;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__6_encode_host, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__6_encode_host, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_11;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_expression_value_11 = module_var_accessor_httpx$_urlparse$idna(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_idna);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 391;
type_description_1 = "oN";
    goto try_except_handler_6;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_IDNAError);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oN";
    goto try_except_handler_6;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oN";
    goto try_except_handler_6;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
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
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_8;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_called_value_10 = module_var_accessor_httpx$_urlparse$InvalidURL(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 392;
type_description_1 = "oN";
    goto try_except_handler_6;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_68766fb7840cdc551f3b931838d04a1e;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_3;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_host);
tmp_operand_value_4 = par_host;
tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oN";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oN";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_8 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_args_element_value_8 == NULL));
frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = 392;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oN";
    goto try_except_handler_6;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oN";
    goto try_except_handler_6;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 392;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oN";
goto try_except_handler_6;
}
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 389;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame)) {
        frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oN";
goto try_except_handler_6;
branch_end_7:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__6_encode_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$function__6_encode_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__6_encode_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$function__6_encode_host,
    type_description_1,
    par_host,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_urlparse$$$function__6_encode_host == cache_frame_frame_httpx$_urlparse$$$function__6_encode_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_urlparse$$$function__6_encode_host);
    cache_frame_frame_httpx$_urlparse$$$function__6_encode_host = NULL;
}

assertFrameObject(frame_frame_httpx$_urlparse$$$function__6_encode_host);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_host);
Py_DECREF(par_host);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_urlparse$$$function__7_normalize_port(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_port = python_pars[0];
PyObject *par_scheme = python_pars[1];
PyObject *var_port_as_int = NULL;
PyObject *var_default_port = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$function__7_normalize_port;
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
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_urlparse$$$function__7_normalize_port = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_urlparse$$$function__7_normalize_port)) {
    Py_XDECREF(cache_frame_frame_httpx$_urlparse$$$function__7_normalize_port);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_urlparse$$$function__7_normalize_port == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_urlparse$$$function__7_normalize_port = MAKE_FUNCTION_FRAME(tstate, code_objects_c5d3a42dc1ffa2ff4ed474ab5787a874, module_httpx$_urlparse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_urlparse$$$function__7_normalize_port->m_type_description == NULL);
frame_frame_httpx$_urlparse$$$function__7_normalize_port = cache_frame_frame_httpx$_urlparse$$$function__7_normalize_port;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$function__7_normalize_port);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$function__7_normalize_port) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_port);
tmp_cmp_expr_left_1 = par_port;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_port);
tmp_cmp_expr_left_2 = par_port;
tmp_cmp_expr_right_2 = const_str_empty;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_int_arg_1;
CHECK_OBJECT(par_port);
tmp_int_arg_1 = par_port;
tmp_assign_source_1 = PyNumber_Int(tmp_int_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_port_as_int == NULL);
var_port_as_int = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__7_normalize_port, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__7_normalize_port, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_httpx$_urlparse$InvalidURL(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 411;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_5c67acea6b3594845506ad043c0e6423;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_port);
tmp_operand_value_1 = par_port;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_httpx$_urlparse$$$function__7_normalize_port->m_frame.f_lineno = 411;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 411;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto try_except_handler_3;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 408;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_urlparse$$$function__7_normalize_port->m_frame)) {
        frame_frame_httpx$_urlparse$$$function__7_normalize_port->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
try_end_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
tmp_dict_arg_value_1 = DICT_COPY(tstate, mod_consts.const_dict_02dee8eaba4e5c7101335f9797475f8e);
CHECK_OBJECT(par_scheme);
tmp_key_value_1 = par_scheme;
tmp_assign_source_2 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_assign_source_2 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_assign_source_2 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_2);
}
CHECK_OBJECT(tmp_dict_arg_value_1);
Py_DECREF(tmp_dict_arg_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_default_port == NULL);
var_default_port = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_port_as_int);
tmp_cmp_expr_left_4 = var_port_as_int;
CHECK_OBJECT(var_default_port);
tmp_cmp_expr_right_4 = var_default_port;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__7_normalize_port, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$function__7_normalize_port->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__7_normalize_port, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$function__7_normalize_port,
    type_description_1,
    par_port,
    par_scheme,
    var_port_as_int,
    var_default_port
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_urlparse$$$function__7_normalize_port == cache_frame_frame_httpx$_urlparse$$$function__7_normalize_port) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_urlparse$$$function__7_normalize_port);
    cache_frame_frame_httpx$_urlparse$$$function__7_normalize_port = NULL;
}

assertFrameObject(frame_frame_httpx$_urlparse$$$function__7_normalize_port);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_port_as_int);
tmp_return_value = var_port_as_int;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_port_as_int);
var_port_as_int = NULL;
Py_XDECREF(var_default_port);
var_default_port = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_port_as_int);
var_port_as_int = NULL;
Py_XDECREF(var_default_port);
var_default_port = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
CHECK_OBJECT(par_scheme);
Py_DECREF(par_scheme);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
CHECK_OBJECT(par_scheme);
Py_DECREF(par_scheme);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_urlparse$$$function__8_validate_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_path = python_pars[0];
PyObject *par_has_scheme = python_pars[1];
PyObject *par_has_authority = python_pars[2];
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$function__8_validate_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_urlparse$$$function__8_validate_path = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_urlparse$$$function__8_validate_path)) {
    Py_XDECREF(cache_frame_frame_httpx$_urlparse$$$function__8_validate_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_urlparse$$$function__8_validate_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_urlparse$$$function__8_validate_path = MAKE_FUNCTION_FRAME(tstate, code_objects_a08d8ad8d0e07267f631340219ef4ed5, module_httpx$_urlparse, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_urlparse$$$function__8_validate_path->m_type_description == NULL);
frame_frame_httpx$_urlparse$$$function__8_validate_path = cache_frame_frame_httpx$_urlparse$$$function__8_validate_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$function__8_validate_path);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$function__8_validate_path) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_has_authority);
tmp_truth_name_1 = CHECK_IF_TRUE(par_has_authority);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "ooo";
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
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_path);
tmp_truth_name_2 = CHECK_IF_TRUE(par_path);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_path);
tmp_expression_value_1 = par_path;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__8_validate_path->m_frame.f_lineno = 432;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_httpx$_urlparse$InvalidURL(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 433;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__8_validate_path->m_frame.f_lineno = 433;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_e39d769d0a1fdf375f7812164340daf5_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 433;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
branch_no_1:;
{
bool tmp_condition_result_3;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(par_has_scheme);
tmp_operand_value_2 = par_has_scheme;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "ooo";
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
CHECK_OBJECT(par_has_authority);
tmp_operand_value_3 = par_has_authority;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
tmp_condition_result_3 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_3 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_3;
CHECK_OBJECT(par_path);
tmp_expression_value_2 = par_path;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_startswith);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__8_validate_path->m_frame.f_lineno = 438;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 438;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_httpx$_urlparse$InvalidURL(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 439;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__8_validate_path->m_frame.f_lineno = 439;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_d459f7c73bb05c161a760a92d5ec99b8_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 439;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
int tmp_truth_name_4;
CHECK_OBJECT(par_path);
tmp_expression_value_3 = par_path;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__8_validate_path->m_frame.f_lineno = 443;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 443;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
PyObject *tmp_called_value_6;
tmp_called_value_6 = module_var_accessor_httpx$_urlparse$InvalidURL(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__8_validate_path->m_frame.f_lineno = 444;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_aa3bf77ce26ad0b0c7ba799ece40a79a_tuple);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 444;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_5:;
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__8_validate_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$function__8_validate_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__8_validate_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$function__8_validate_path,
    type_description_1,
    par_path,
    par_has_scheme,
    par_has_authority
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_urlparse$$$function__8_validate_path == cache_frame_frame_httpx$_urlparse$$$function__8_validate_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_urlparse$$$function__8_validate_path);
    cache_frame_frame_httpx$_urlparse$$$function__8_validate_path = NULL;
}

assertFrameObject(frame_frame_httpx$_urlparse$$$function__8_validate_path);

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
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_has_scheme);
Py_DECREF(par_has_scheme);
CHECK_OBJECT(par_has_authority);
Py_DECREF(par_has_authority);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_has_scheme);
Py_DECREF(par_has_scheme);
CHECK_OBJECT(par_has_authority);
Py_DECREF(par_has_authority);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_urlparse$$$function__9_normalize_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_path = python_pars[0];
PyObject *var_output = NULL;
PyObject *var_components = NULL;
PyObject *var_component = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$function__9_normalize_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_urlparse$$$function__9_normalize_path = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_urlparse$$$function__9_normalize_path)) {
    Py_XDECREF(cache_frame_frame_httpx$_urlparse$$$function__9_normalize_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_urlparse$$$function__9_normalize_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_urlparse$$$function__9_normalize_path = MAKE_FUNCTION_FRAME(tstate, code_objects_7270614afa90710dceb60f2a8354de9f, module_httpx$_urlparse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_urlparse$$$function__9_normalize_path->m_type_description == NULL);
frame_frame_httpx$_urlparse$$$function__9_normalize_path = cache_frame_frame_httpx$_urlparse$$$function__9_normalize_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$function__9_normalize_path);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$function__9_normalize_path) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = const_str_dot;
CHECK_OBJECT(par_path);
tmp_cmp_expr_right_1 = par_path;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
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
CHECK_OBJECT(par_path);
tmp_return_value = par_path;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_path);
tmp_expression_value_1 = par_path;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse$$$function__9_normalize_path->m_frame.f_lineno = 459;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_components == NULL);
var_components = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_2 = const_str_dot;
CHECK_OBJECT(var_components);
tmp_cmp_expr_right_2 = var_components;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooo";
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
tmp_cmp_expr_left_3 = mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b;
CHECK_OBJECT(var_components);
tmp_cmp_expr_right_3 = var_components;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
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
CHECK_OBJECT(par_path);
tmp_return_value = par_path;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_output == NULL);
var_output = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_components);
tmp_iter_arg_1 = var_components;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 467;
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
    PyObject *old = var_component;
    var_component = tmp_assign_source_5;
    Py_INCREF(var_component);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_component);
tmp_cmp_expr_left_4 = var_component;
tmp_cmp_expr_right_4 = const_str_dot;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oooo";
    goto try_except_handler_2;
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
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_component);
tmp_cmp_expr_left_5 = var_component;
tmp_cmp_expr_right_5 = mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "oooo";
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
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 471;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_output);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 471;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_6 = var_output;
tmp_cmp_expr_right_6 = MAKE_LIST1(tstate, const_str_empty);
tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_LIST_LIST(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_5 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_capi_result_1;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 472;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_output;
tmp_capi_result_1 = LIST_POP1(tstate, tmp_list_arg_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_1;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 474;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_output;
CHECK_OBJECT(var_component);
tmp_item_value_1 = var_component;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_end_4:;
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "oooo";
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
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_slash;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 475;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_output;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__9_normalize_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$function__9_normalize_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__9_normalize_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$function__9_normalize_path,
    type_description_1,
    par_path,
    var_output,
    var_components,
    var_component
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_urlparse$$$function__9_normalize_path == cache_frame_frame_httpx$_urlparse$$$function__9_normalize_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_urlparse$$$function__9_normalize_path);
    cache_frame_frame_httpx$_urlparse$$$function__9_normalize_path = NULL;
}

assertFrameObject(frame_frame_httpx$_urlparse$$$function__9_normalize_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_output);
var_output = NULL;
Py_XDECREF(var_components);
var_components = NULL;
Py_XDECREF(var_component);
var_component = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_output);
var_output = NULL;
Py_XDECREF(var_components);
var_components = NULL;
Py_XDECREF(var_component);
var_component = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_urlparse$$$function__10_PERCENT(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_string = python_pars[0];
PyObject *outline_0_var_byte = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$function__10_PERCENT;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_urlparse$$$function__10_PERCENT = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_urlparse$$$function__10_PERCENT)) {
    Py_XDECREF(cache_frame_frame_httpx$_urlparse$$$function__10_PERCENT);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_urlparse$$$function__10_PERCENT == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_urlparse$$$function__10_PERCENT = MAKE_FUNCTION_FRAME(tstate, code_objects_7b95203d84452c8e1816d5a864ab9797, module_httpx$_urlparse, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_urlparse$$$function__10_PERCENT->m_type_description == NULL);
frame_frame_httpx$_urlparse$$$function__10_PERCENT = cache_frame_frame_httpx$_urlparse$$$function__10_PERCENT;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$function__10_PERCENT);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$function__10_PERCENT) == 2);

// Framed code:
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_empty;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_string);
tmp_expression_value_1 = par_string;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_httpx$_urlparse$$$function__10_PERCENT->m_frame.f_lineno = 479;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "o";
exception_lineno = 479;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_byte;
    outline_0_var_byte = tmp_assign_source_4;
    Py_INCREF(outline_0_var_byte);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_tuple_element_1 = mod_consts.const_str_chr_37;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(outline_0_var_byte);
tmp_format_value_1 = outline_0_var_byte;
tmp_format_spec_1 = mod_consts.const_str_plain_02X;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_append_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_append_value_1 == NULL));
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "o";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "o";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_iterable_value_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_iterable_value_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
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
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_byte);
outline_0_var_byte = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_byte);
outline_0_var_byte = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 479;
goto frame_exception_exit_1;
outline_result_1:;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__10_PERCENT, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$function__10_PERCENT->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__10_PERCENT, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$function__10_PERCENT,
    type_description_1,
    par_string
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_urlparse$$$function__10_PERCENT == cache_frame_frame_httpx$_urlparse$$$function__10_PERCENT) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_urlparse$$$function__10_PERCENT);
    cache_frame_frame_httpx$_urlparse$$$function__10_PERCENT = NULL;
}

assertFrameObject(frame_frame_httpx$_urlparse$$$function__10_PERCENT);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_string);
Py_DECREF(par_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_urlparse$$$function__11_percent_encoded(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_string = python_pars[0];
PyObject *par_safe = python_pars[1];
PyObject *var_NON_ESCAPED_CHARS = NULL;
PyObject *outline_0_var_char = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$function__11_percent_encoded;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_urlparse$$$function__11_percent_encoded = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_urlparse$$$function__11_percent_encoded)) {
    Py_XDECREF(cache_frame_frame_httpx$_urlparse$$$function__11_percent_encoded);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_urlparse$$$function__11_percent_encoded == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_urlparse$$$function__11_percent_encoded = MAKE_FUNCTION_FRAME(tstate, code_objects_70de2e6a98f3a4366016d6b3663c4302, module_httpx$_urlparse, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_urlparse$$$function__11_percent_encoded->m_type_description == NULL);
frame_frame_httpx$_urlparse$$$function__11_percent_encoded = cache_frame_frame_httpx$_urlparse$$$function__11_percent_encoded;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$function__11_percent_encoded);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$function__11_percent_encoded) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_add_expr_left_1 = module_var_accessor_httpx$_urlparse$UNRESERVED_CHARACTERS(tstate);
if (unlikely(tmp_add_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UNRESERVED_CHARACTERS);
}

if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 486;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_safe);
tmp_add_expr_right_1 = par_safe;
tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_NON_ESCAPED_CHARS == NULL);
var_NON_ESCAPED_CHARS = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_string);
tmp_expression_value_1 = par_string;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_rstrip);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_NON_ESCAPED_CHARS);
tmp_args_element_value_1 = var_NON_ESCAPED_CHARS;
frame_frame_httpx$_urlparse$$$function__11_percent_encoded->m_frame.f_lineno = 489;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "ooo";
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
CHECK_OBJECT(par_string);
tmp_return_value = par_string;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_empty;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_string);
tmp_iter_arg_1 = par_string;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 493;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_char;
    outline_0_var_char = tmp_assign_source_5;
    Py_INCREF(outline_0_var_char);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_char);
tmp_cmp_expr_left_1 = outline_0_var_char;
CHECK_OBJECT(var_NON_ESCAPED_CHARS);
tmp_cmp_expr_right_1 = var_NON_ESCAPED_CHARS;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(outline_0_var_char);
tmp_append_value_1 = outline_0_var_char;
Py_INCREF(tmp_append_value_1);
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_value_2 = module_var_accessor_httpx$_urlparse$PERCENT(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PERCENT);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 493;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_char);
tmp_args_element_value_2 = outline_0_var_char;
frame_frame_httpx$_urlparse$$$function__11_percent_encoded->m_frame.f_lineno = 493;
tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
condexpr_end_1:;
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_iterable_value_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_iterable_value_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
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
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_char);
outline_0_var_char = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_char);
outline_0_var_char = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 493;
goto frame_exception_exit_1;
outline_result_1:;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__11_percent_encoded, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$function__11_percent_encoded->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__11_percent_encoded, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$function__11_percent_encoded,
    type_description_1,
    par_string,
    par_safe,
    var_NON_ESCAPED_CHARS
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_urlparse$$$function__11_percent_encoded == cache_frame_frame_httpx$_urlparse$$$function__11_percent_encoded) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_urlparse$$$function__11_percent_encoded);
    cache_frame_frame_httpx$_urlparse$$$function__11_percent_encoded = NULL;
}

assertFrameObject(frame_frame_httpx$_urlparse$$$function__11_percent_encoded);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_NON_ESCAPED_CHARS);
CHECK_OBJECT(var_NON_ESCAPED_CHARS);
Py_DECREF(var_NON_ESCAPED_CHARS);
var_NON_ESCAPED_CHARS = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_NON_ESCAPED_CHARS);
var_NON_ESCAPED_CHARS = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
CHECK_OBJECT(par_safe);
Py_DECREF(par_safe);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
CHECK_OBJECT(par_safe);
Py_DECREF(par_safe);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_urlparse$$$function__12_quote(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_string = python_pars[0];
PyObject *par_safe = python_pars[1];
PyObject *var_parts = NULL;
PyObject *var_current_position = NULL;
PyObject *var_match = NULL;
PyObject *var_start_position = NULL;
PyObject *var_end_position = NULL;
PyObject *var_matched_text = NULL;
PyObject *var_leading_text = NULL;
PyObject *var_trailing_text = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$function__12_quote;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_urlparse$$$function__12_quote = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_parts == NULL);
var_parts = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_int_0;
assert(var_current_position == NULL);
Py_INCREF(tmp_assign_source_2);
var_current_position = tmp_assign_source_2;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_urlparse$$$function__12_quote)) {
    Py_XDECREF(cache_frame_frame_httpx$_urlparse$$$function__12_quote);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_urlparse$$$function__12_quote == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_urlparse$$$function__12_quote = MAKE_FUNCTION_FRAME(tstate, code_objects_eb381549242d0eea56f3f5451c878fb8, module_httpx$_urlparse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_urlparse$$$function__12_quote->m_type_description == NULL);
frame_frame_httpx$_urlparse$$$function__12_quote = cache_frame_frame_httpx$_urlparse$$$function__12_quote;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$function__12_quote);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$function__12_quote) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 510;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_finditer);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_httpx$_urlparse$PERCENT_ENCODED_REGEX(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PERCENT_ENCODED_REGEX);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 510;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_string);
tmp_args_element_value_2 = par_string;
frame_frame_httpx$_urlparse$$$function__12_quote->m_frame.f_lineno = 510;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooo";
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
type_description_1 = "oooooooooo";
exception_lineno = 510;
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
    PyObject *old = var_match;
    var_match = tmp_assign_source_5;
    Py_INCREF(var_match);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_match);
tmp_called_instance_1 = var_match;
frame_frame_httpx$_urlparse$$$function__12_quote->m_frame.f_lineno = 511;
tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_start);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_instance_2;
PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_match);
tmp_called_instance_2 = var_match;
frame_frame_httpx$_urlparse$$$function__12_quote->m_frame.f_lineno = 511;
tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_end);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_iter_arg_2, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_iter_arg_2);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
assert(!(tmp_assign_source_6 == NULL));
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 511;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 511;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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



exception_lineno = 511;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_start_position;
    var_start_position = tmp_assign_source_9;
    Py_INCREF(var_start_position);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_end_position;
    var_end_position = tmp_assign_source_10;
    Py_INCREF(var_end_position);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_match);
tmp_called_instance_3 = var_match;
frame_frame_httpx$_urlparse$$$function__12_quote->m_frame.f_lineno = 512;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_matched_text;
    var_matched_text = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_start_position);
tmp_cmp_expr_left_1 = var_start_position;
if (var_current_position == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_position);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 514;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = var_current_position;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(par_string);
tmp_expression_value_2 = par_string;
if (var_current_position == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_position);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 515;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_start_value_1 = var_current_position;
CHECK_OBJECT(var_start_position);
tmp_stop_value_1 = var_start_position;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_leading_text;
    var_leading_text = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 516;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_parts;
tmp_called_value_2 = module_var_accessor_httpx$_urlparse$percent_encoded(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_percent_encoded);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 516;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_leading_text);
tmp_kw_call_arg_value_0_1 = var_leading_text;
if (par_safe == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_safe);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 516;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_1 = par_safe;
frame_frame_httpx$_urlparse$$$function__12_quote->m_frame.f_lineno = 516;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_item_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 519;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = var_parts;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_append);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_matched_text);
tmp_args_element_value_3 = var_matched_text;
frame_frame_httpx$_urlparse$$$function__12_quote->m_frame.f_lineno = 519;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(var_end_position);
tmp_assign_source_13 = var_end_position;
{
    PyObject *old = var_current_position;
    var_current_position = tmp_assign_source_13;
    Py_INCREF(var_current_position);
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooo";
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
if (var_current_position == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_position);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 523;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = var_current_position;
CHECK_OBJECT(par_string);
tmp_len_arg_1 = par_string;
tmp_cmp_expr_right_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
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
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_2;
CHECK_OBJECT(par_string);
tmp_expression_value_4 = par_string;
if (var_current_position == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_position);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 524;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_start_value_2 = var_current_position;
tmp_stop_value_2 = Py_None;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
assert(!(tmp_subscript_value_2 == NULL));
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_trailing_text == NULL);
var_trailing_text = tmp_assign_source_14;
}
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 525;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_2 = var_parts;
tmp_called_value_4 = module_var_accessor_httpx$_urlparse$percent_encoded(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_percent_encoded);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 525;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_trailing_text);
tmp_kw_call_arg_value_0_2 = var_trailing_text;
if (par_safe == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_safe);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 525;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_2 = par_safe;
frame_frame_httpx$_urlparse$$$function__12_quote->m_frame.f_lineno = 525;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_item_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_2:;
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_empty;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 527;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_parts;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$function__12_quote, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$function__12_quote->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$function__12_quote, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$function__12_quote,
    type_description_1,
    par_string,
    par_safe,
    var_parts,
    var_current_position,
    var_match,
    var_start_position,
    var_end_position,
    var_matched_text,
    var_leading_text,
    var_trailing_text
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_urlparse$$$function__12_quote == cache_frame_frame_httpx$_urlparse$$$function__12_quote) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_urlparse$$$function__12_quote);
    cache_frame_frame_httpx$_urlparse$$$function__12_quote = NULL;
}

assertFrameObject(frame_frame_httpx$_urlparse$$$function__12_quote);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_current_position);
var_current_position = NULL;
Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_start_position);
var_start_position = NULL;
Py_XDECREF(var_end_position);
var_end_position = NULL;
Py_XDECREF(var_matched_text);
var_matched_text = NULL;
Py_XDECREF(var_leading_text);
var_leading_text = NULL;
Py_XDECREF(var_trailing_text);
var_trailing_text = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_current_position);
var_current_position = NULL;
Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_start_position);
var_start_position = NULL;
Py_XDECREF(var_end_position);
var_end_position = NULL;
Py_XDECREF(var_matched_text);
var_matched_text = NULL;
Py_XDECREF(var_leading_text);
var_leading_text = NULL;
Py_XDECREF(var_trailing_text);
var_trailing_text = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
CHECK_OBJECT(par_safe);
Py_DECREF(par_safe);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
CHECK_OBJECT(par_safe);
Py_DECREF(par_safe);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__10_PERCENT(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urlparse$$$function__10_PERCENT,
        mod_consts.const_str_plain_PERCENT,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7b95203d84452c8e1816d5a864ab9797,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urlparse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__11_percent_encoded(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urlparse$$$function__11_percent_encoded,
        mod_consts.const_str_plain_percent_encoded,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_70de2e6a98f3a4366016d6b3663c4302,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urlparse,
        mod_consts.const_str_digest_8618f76f107a0b9b9043ffc66515c418,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__12_quote(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urlparse$$$function__12_quote,
        mod_consts.const_str_plain_quote,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_eb381549242d0eea56f3f5451c878fb8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urlparse,
        mod_consts.const_str_digest_9b806c7d48f6490da49116c3f34ea40c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__1_authority(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urlparse$$$function__1_authority,
        mod_consts.const_str_plain_authority,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0861dc7130ed4cae9f8060c18f6fe2a6,
#endif
        code_objects_f1f61563557f6169f47b3a4ec6b5a030,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urlparse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__2_netloc(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urlparse$$$function__2_netloc,
        mod_consts.const_str_plain_netloc,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2ab0916a5f5c2b040dda9badba1eb75c,
#endif
        code_objects_d326392fdbdcb5d960b059f55e7be261,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urlparse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__3_copy_with(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urlparse$$$function__3_copy_with,
        mod_consts.const_str_plain_copy_with,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ba1ba8c1b9a4292fd89345e53c3c8248,
#endif
        code_objects_46ff05fed8ace6d0b436b75b797cd15e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urlparse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__4___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urlparse$$$function__4___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_da93e379fdb0343fbb797e77bc2d5bdb,
#endif
        code_objects_5150496e7baaee63702d69fd4066530a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urlparse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__5_urlparse(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urlparse$$$function__5_urlparse,
        mod_consts.const_str_plain_urlparse,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f6fecfa8ea7caa41193e9e63d40923a8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urlparse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__6_encode_host(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urlparse$$$function__6_encode_host,
        mod_consts.const_str_plain_encode_host,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_26873d5a9b1aa91d94249533826bf544,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urlparse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__7_normalize_port(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urlparse$$$function__7_normalize_port,
        mod_consts.const_str_plain_normalize_port,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c5d3a42dc1ffa2ff4ed474ab5787a874,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urlparse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__8_validate_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urlparse$$$function__8_validate_path,
        mod_consts.const_str_plain_validate_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a08d8ad8d0e07267f631340219ef4ed5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urlparse,
        mod_consts.const_str_digest_d5bff4fde4d4403d1fe9fa55fbdf4c87,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urlparse$$$function__9_normalize_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urlparse$$$function__9_normalize_path,
        mod_consts.const_str_plain_normalize_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7270614afa90710dceb60f2a8354de9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urlparse,
        mod_consts.const_str_digest_f556b7958b1a1bde9a8cdebddc6ed71d,
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

static function_impl_code const function_table_httpx$_urlparse[] = {
impl_httpx$_urlparse$$$function__1_authority,
impl_httpx$_urlparse$$$function__2_netloc,
impl_httpx$_urlparse$$$function__3_copy_with,
impl_httpx$_urlparse$$$function__4___str__,
impl_httpx$_urlparse$$$function__5_urlparse,
impl_httpx$_urlparse$$$function__6_encode_host,
impl_httpx$_urlparse$$$function__7_normalize_port,
impl_httpx$_urlparse$$$function__8_validate_path,
impl_httpx$_urlparse$$$function__9_normalize_path,
impl_httpx$_urlparse$$$function__10_PERCENT,
impl_httpx$_urlparse$$$function__11_percent_encoded,
impl_httpx$_urlparse$$$function__12_quote,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpx$_urlparse);
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
        module_httpx$_urlparse,
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
        function_table_httpx$_urlparse,
        sizeof(function_table_httpx$_urlparse) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpx._urlparse";
#endif

// Internal entry point for module code.
PyObject *module_code_httpx$_urlparse(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_urlparse");

    // Store the module for future use.
    module_httpx$_urlparse = module;

    moduledict_httpx$_urlparse = MODULE_DICT(module_httpx$_urlparse);

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
        PRINT_STRING("httpx$_urlparse: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx$_urlparse: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_urlparse: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._urlparse" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpx$_urlparse\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_urlparse,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_urlparse,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_urlparse,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_urlparse,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_urlparse,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_urlparse);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_urlparse);
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

        UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var_i = NULL;
PyObject *outline_1_var_i = NULL;
PyObject *outline_2_var_i = NULL;
PyObject *outline_3_var_i = NULL;
PyObject *outline_4_var_i = NULL;
PyObject *outline_5_var_i = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_listcomp_3__$0 = NULL;
PyObject *tmp_listcomp_3__contraction = NULL;
PyObject *tmp_listcomp_3__iter_value_0 = NULL;
PyObject *tmp_listcomp_4__$0 = NULL;
PyObject *tmp_listcomp_4__contraction = NULL;
PyObject *tmp_listcomp_4__iter_value_0 = NULL;
PyObject *tmp_listcomp_5__$0 = NULL;
PyObject *tmp_listcomp_5__contraction = NULL;
PyObject *tmp_listcomp_5__iter_value_0 = NULL;
PyObject *tmp_listcomp_6__$0 = NULL;
PyObject *tmp_listcomp_6__contraction = NULL;
PyObject *tmp_listcomp_6__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_httpx$_urlparse$$$class__1_ParseResult_158 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_httpx$_urlparse$$$class__1_ParseResult_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
tmp_assign_source_1 = mod_consts.const_str_digest_71ba69847a27ef11231b3224c261e44b;
UPDATE_STRING_DICT0(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpx$_urlparse = MAKE_MODULE_FRAME(code_objects_7c324d61bfa567ea3d8b0ed2be537752, module_httpx$_urlparse);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse);
assert(Py_REFCNT(frame_frame_httpx$_urlparse) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpx$_urlparse$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpx$_urlparse$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_ipaddress;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_urlparse;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_urlparse->m_frame.f_lineno = 21;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_ipaddress, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_urlparse;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_httpx$_urlparse->m_frame.f_lineno = 22;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_idna;
tmp_globals_arg_value_3 = (PyObject *)moduledict_httpx$_urlparse;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_httpx$_urlparse->m_frame.f_lineno = 25;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_idna, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_4 = (PyObject *)moduledict_httpx$_urlparse;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_InvalidURL_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_httpx$_urlparse->m_frame.f_lineno = 27;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpx$_urlparse,
        mod_consts.const_str_plain_InvalidURL,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_InvalidURL);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = mod_consts.const_int_pos_65536;
UPDATE_STRING_DICT0(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_URL_LENGTH, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_str_digest_e600ac699e6fc3a6ad3a9fd310be6bf9;
UPDATE_STRING_DICT0(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_UNRESERVED_CHARACTERS, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_str_digest_035b27a1609d0a5305b7aeb8f6a6db6f;
UPDATE_STRING_DICT0(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_SUB_DELIMS, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 37;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_916547f65466291787e29f21c5534722_tuple, 0)
);

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT_ENCODED_REGEX, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_empty;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_xrange_32_127;
tmp_assign_source_15 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_15 == NULL));
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_16;
}
// Tried code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_17 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 44;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_18 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_i;
    outline_0_var_i = tmp_assign_source_18;
    Py_INCREF(outline_0_var_i);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(outline_0_var_i);
tmp_cmp_expr_left_1 = outline_0_var_i;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_int_pos_32_int_pos_34_int_pos_60_int_pos_62_int_pos_96_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_2;
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
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_chr_arg_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_i);
tmp_chr_arg_1 = outline_0_var_i;
tmp_append_value_1 = BUILTIN_CHR(tstate, tmp_chr_arg_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_2;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_iterable_value_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_iterable_value_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
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
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 44;
goto frame_exception_exit_1;
outline_result_1:;
tmp_assign_source_14 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_FRAG_SAFE, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_str_arg_value_2;
PyObject *tmp_iterable_value_2;
tmp_str_arg_value_2 = const_str_empty;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = mod_consts.const_xrange_32_127;
tmp_assign_source_20 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
assert(!(tmp_assign_source_20 == NULL));
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_21;
}
// Tried code:
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_22 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_22 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 50;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_23 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_i;
    outline_1_var_i = tmp_assign_source_23;
    Py_INCREF(outline_1_var_i);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(outline_1_var_i);
tmp_cmp_expr_left_2 = outline_1_var_i;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_int_pos_32_int_pos_34_int_pos_35_int_pos_60_int_pos_62_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
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
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_chr_arg_2;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
CHECK_OBJECT(outline_1_var_i);
tmp_chr_arg_2 = outline_1_var_i;
tmp_append_value_2 = BUILTIN_CHR(tstate, tmp_chr_arg_2);
if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_iterable_value_2 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_iterable_value_2);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_1_var_i);
outline_1_var_i = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_i);
outline_1_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 50;
goto frame_exception_exit_1;
outline_result_2:;
tmp_assign_source_19 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
CHECK_OBJECT(tmp_iterable_value_2);
Py_DECREF(tmp_iterable_value_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_QUERY_SAFE, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_str_arg_value_3;
PyObject *tmp_iterable_value_3;
tmp_str_arg_value_3 = const_str_empty;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iter_arg_3;
tmp_iter_arg_3 = mod_consts.const_xrange_32_127;
tmp_assign_source_25 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
assert(!(tmp_assign_source_25 == NULL));
assert(tmp_listcomp_3__$0 == NULL);
tmp_listcomp_3__$0 = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_3__contraction == NULL);
tmp_listcomp_3__contraction = tmp_assign_source_26;
}
// Tried code:
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_listcomp_3__$0);
tmp_next_source_3 = tmp_listcomp_3__$0;
tmp_assign_source_27 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_27 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 56;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_listcomp_3__iter_value_0;
    tmp_listcomp_3__iter_value_0 = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
tmp_assign_source_28 = tmp_listcomp_3__iter_value_0;
{
    PyObject *old = outline_2_var_i;
    outline_2_var_i = tmp_assign_source_28;
    Py_INCREF(outline_2_var_i);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(outline_2_var_i);
tmp_cmp_expr_left_3 = outline_2_var_i;
tmp_cmp_expr_right_3 = mod_consts.const_tuple_ada9d13b1c8cd3c15fb0157ebd2f2838_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_6;
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
PyObject *tmp_append_list_3;
PyObject *tmp_append_value_3;
PyObject *tmp_chr_arg_3;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_append_list_3 = tmp_listcomp_3__contraction;
CHECK_OBJECT(outline_2_var_i);
tmp_chr_arg_3 = outline_2_var_i;
tmp_append_value_3 = BUILTIN_CHR(tstate, tmp_chr_arg_3);
if (tmp_append_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_6;
}
tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_6;
}
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_iterable_value_3 = tmp_listcomp_3__contraction;
Py_INCREF(tmp_iterable_value_3);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_XDECREF(outline_2_var_i);
outline_2_var_i = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_2_var_i);
outline_2_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 56;
goto frame_exception_exit_1;
outline_result_3:;
tmp_assign_source_24 = UNICODE_JOIN(tstate, tmp_str_arg_value_3, tmp_iterable_value_3);
CHECK_OBJECT(tmp_iterable_value_3);
Py_DECREF(tmp_iterable_value_3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PATH_SAFE, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_str_arg_value_4;
PyObject *tmp_iterable_value_4;
tmp_str_arg_value_4 = const_str_empty;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_4;
tmp_iter_arg_4 = mod_consts.const_xrange_32_127;
tmp_assign_source_30 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
assert(!(tmp_assign_source_30 == NULL));
assert(tmp_listcomp_4__$0 == NULL);
tmp_listcomp_4__$0 = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_4__contraction == NULL);
tmp_listcomp_4__contraction = tmp_assign_source_31;
}
// Tried code:
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_listcomp_4__$0);
tmp_next_source_4 = tmp_listcomp_4__$0;
tmp_assign_source_32 = ITERATOR_NEXT_ITERATOR(tmp_next_source_4);
if (tmp_assign_source_32 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 67;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_listcomp_4__iter_value_0;
    tmp_listcomp_4__iter_value_0 = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
tmp_assign_source_33 = tmp_listcomp_4__iter_value_0;
{
    PyObject *old = outline_3_var_i;
    outline_3_var_i = tmp_assign_source_33;
    Py_INCREF(outline_3_var_i);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(outline_3_var_i);
tmp_cmp_expr_left_4 = outline_3_var_i;
tmp_cmp_expr_right_4 = mod_consts.const_tuple_530dd17cf7fcc03dc0f7f2b7d993e001_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_8;
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
PyObject *tmp_append_list_4;
PyObject *tmp_append_value_4;
PyObject *tmp_chr_arg_4;
CHECK_OBJECT(tmp_listcomp_4__contraction);
tmp_append_list_4 = tmp_listcomp_4__contraction;
CHECK_OBJECT(outline_3_var_i);
tmp_chr_arg_4 = outline_3_var_i;
tmp_append_value_4 = BUILTIN_CHR(tstate, tmp_chr_arg_4);
if (tmp_append_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_8;
}
tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_8;
}
}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_8;
}
goto loop_start_4;
loop_end_4:;
CHECK_OBJECT(tmp_listcomp_4__contraction);
tmp_iterable_value_4 = tmp_listcomp_4__contraction;
Py_INCREF(tmp_iterable_value_4);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(tmp_listcomp_4__$0);
CHECK_OBJECT(tmp_listcomp_4__$0);
Py_DECREF(tmp_listcomp_4__$0);
tmp_listcomp_4__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_4__contraction);
CHECK_OBJECT(tmp_listcomp_4__contraction);
Py_DECREF(tmp_listcomp_4__contraction);
tmp_listcomp_4__contraction = NULL;
Py_XDECREF(tmp_listcomp_4__iter_value_0);
tmp_listcomp_4__iter_value_0 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_4__$0);
CHECK_OBJECT(tmp_listcomp_4__$0);
Py_DECREF(tmp_listcomp_4__$0);
tmp_listcomp_4__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_4__contraction);
CHECK_OBJECT(tmp_listcomp_4__contraction);
Py_DECREF(tmp_listcomp_4__contraction);
tmp_listcomp_4__contraction = NULL;
Py_XDECREF(tmp_listcomp_4__iter_value_0);
tmp_listcomp_4__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_XDECREF(outline_3_var_i);
outline_3_var_i = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_3_var_i);
outline_3_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 67;
goto frame_exception_exit_1;
outline_result_4:;
tmp_assign_source_29 = UNICODE_JOIN(tstate, tmp_str_arg_value_4, tmp_iterable_value_4);
CHECK_OBJECT(tmp_iterable_value_4);
Py_DECREF(tmp_iterable_value_4);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_USERNAME_SAFE, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_str_arg_value_5;
PyObject *tmp_iterable_value_5;
tmp_str_arg_value_5 = const_str_empty;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_iter_arg_5;
tmp_iter_arg_5 = mod_consts.const_xrange_32_127;
tmp_assign_source_35 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_5);
assert(!(tmp_assign_source_35 == NULL));
assert(tmp_listcomp_5__$0 == NULL);
tmp_listcomp_5__$0 = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_5__contraction == NULL);
tmp_listcomp_5__contraction = tmp_assign_source_36;
}
// Tried code:
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_37;
CHECK_OBJECT(tmp_listcomp_5__$0);
tmp_next_source_5 = tmp_listcomp_5__$0;
tmp_assign_source_37 = ITERATOR_NEXT_ITERATOR(tmp_next_source_5);
if (tmp_assign_source_37 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 77;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_listcomp_5__iter_value_0;
    tmp_listcomp_5__iter_value_0 = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_listcomp_5__iter_value_0);
tmp_assign_source_38 = tmp_listcomp_5__iter_value_0;
{
    PyObject *old = outline_4_var_i;
    outline_4_var_i = tmp_assign_source_38;
    Py_INCREF(outline_4_var_i);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(outline_4_var_i);
tmp_cmp_expr_left_5 = outline_4_var_i;
tmp_cmp_expr_right_5 = mod_consts.const_tuple_530dd17cf7fcc03dc0f7f2b7d993e001_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
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
PyObject *tmp_append_list_5;
PyObject *tmp_append_value_5;
PyObject *tmp_chr_arg_5;
CHECK_OBJECT(tmp_listcomp_5__contraction);
tmp_append_list_5 = tmp_listcomp_5__contraction;
CHECK_OBJECT(outline_4_var_i);
tmp_chr_arg_5 = outline_4_var_i;
tmp_append_value_5 = BUILTIN_CHR(tstate, tmp_chr_arg_5);
if (tmp_append_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
}
tmp_result = LIST_APPEND1(tmp_append_list_5, tmp_append_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_10;
}
}
branch_no_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_10;
}
goto loop_start_5;
loop_end_5:;
CHECK_OBJECT(tmp_listcomp_5__contraction);
tmp_iterable_value_5 = tmp_listcomp_5__contraction;
Py_INCREF(tmp_iterable_value_5);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(tmp_listcomp_5__$0);
CHECK_OBJECT(tmp_listcomp_5__$0);
Py_DECREF(tmp_listcomp_5__$0);
tmp_listcomp_5__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_5__contraction);
CHECK_OBJECT(tmp_listcomp_5__contraction);
Py_DECREF(tmp_listcomp_5__contraction);
tmp_listcomp_5__contraction = NULL;
Py_XDECREF(tmp_listcomp_5__iter_value_0);
tmp_listcomp_5__iter_value_0 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_5__$0);
CHECK_OBJECT(tmp_listcomp_5__$0);
Py_DECREF(tmp_listcomp_5__$0);
tmp_listcomp_5__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_5__contraction);
CHECK_OBJECT(tmp_listcomp_5__contraction);
Py_DECREF(tmp_listcomp_5__contraction);
tmp_listcomp_5__contraction = NULL;
Py_XDECREF(tmp_listcomp_5__iter_value_0);
tmp_listcomp_5__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_XDECREF(outline_4_var_i);
outline_4_var_i = NULL;
goto outline_result_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_4_var_i);
outline_4_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 77;
goto frame_exception_exit_1;
outline_result_5:;
tmp_assign_source_34 = UNICODE_JOIN(tstate, tmp_str_arg_value_5, tmp_iterable_value_5);
CHECK_OBJECT(tmp_iterable_value_5);
Py_DECREF(tmp_iterable_value_5);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PASSWORD_SAFE, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_str_arg_value_6;
PyObject *tmp_iterable_value_6;
tmp_str_arg_value_6 = const_str_empty;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_iter_arg_6;
tmp_iter_arg_6 = mod_consts.const_xrange_32_127;
tmp_assign_source_40 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
assert(!(tmp_assign_source_40 == NULL));
assert(tmp_listcomp_6__$0 == NULL);
tmp_listcomp_6__$0 = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_6__contraction == NULL);
tmp_listcomp_6__contraction = tmp_assign_source_41;
}
// Tried code:
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_6;
PyObject *tmp_assign_source_42;
CHECK_OBJECT(tmp_listcomp_6__$0);
tmp_next_source_6 = tmp_listcomp_6__$0;
tmp_assign_source_42 = ITERATOR_NEXT_ITERATOR(tmp_next_source_6);
if (tmp_assign_source_42 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 90;
        goto try_except_handler_12;
    }
}

{
    PyObject *old = tmp_listcomp_6__iter_value_0;
    tmp_listcomp_6__iter_value_0 = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
CHECK_OBJECT(tmp_listcomp_6__iter_value_0);
tmp_assign_source_43 = tmp_listcomp_6__iter_value_0;
{
    PyObject *old = outline_5_var_i;
    outline_5_var_i = tmp_assign_source_43;
    Py_INCREF(outline_5_var_i);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(outline_5_var_i);
tmp_cmp_expr_left_6 = outline_5_var_i;
tmp_cmp_expr_right_6 = mod_consts.const_tuple_d3c8921298a32de854bc4e5d0c1cfdad_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_12;
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
PyObject *tmp_append_list_6;
PyObject *tmp_append_value_6;
PyObject *tmp_chr_arg_6;
CHECK_OBJECT(tmp_listcomp_6__contraction);
tmp_append_list_6 = tmp_listcomp_6__contraction;
CHECK_OBJECT(outline_5_var_i);
tmp_chr_arg_6 = outline_5_var_i;
tmp_append_value_6 = BUILTIN_CHR(tstate, tmp_chr_arg_6);
if (tmp_append_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_12;
}
tmp_result = LIST_APPEND1(tmp_append_list_6, tmp_append_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_12;
}
}
branch_no_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_12;
}
goto loop_start_6;
loop_end_6:;
CHECK_OBJECT(tmp_listcomp_6__contraction);
tmp_iterable_value_6 = tmp_listcomp_6__contraction;
Py_INCREF(tmp_iterable_value_6);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(tmp_listcomp_6__$0);
CHECK_OBJECT(tmp_listcomp_6__$0);
Py_DECREF(tmp_listcomp_6__$0);
tmp_listcomp_6__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_6__contraction);
CHECK_OBJECT(tmp_listcomp_6__contraction);
Py_DECREF(tmp_listcomp_6__contraction);
tmp_listcomp_6__contraction = NULL;
Py_XDECREF(tmp_listcomp_6__iter_value_0);
tmp_listcomp_6__iter_value_0 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_6__$0);
CHECK_OBJECT(tmp_listcomp_6__$0);
Py_DECREF(tmp_listcomp_6__$0);
tmp_listcomp_6__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_6__contraction);
CHECK_OBJECT(tmp_listcomp_6__contraction);
Py_DECREF(tmp_listcomp_6__contraction);
tmp_listcomp_6__contraction = NULL;
Py_XDECREF(tmp_listcomp_6__iter_value_0);
tmp_listcomp_6__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_XDECREF(outline_5_var_i);
outline_5_var_i = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_5_var_i);
outline_5_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 90;
goto frame_exception_exit_1;
outline_result_6:;
tmp_assign_source_39 = UNICODE_JOIN(tstate, tmp_str_arg_value_6, tmp_iterable_value_6);
CHECK_OBJECT(tmp_iterable_value_6);
Py_DECREF(tmp_iterable_value_6);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_USERINFO_SAFE, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;

    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 106;
tmp_assign_source_44 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_ec0839fa6160647c00d02917726e6b44_tuple, 0)
);

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_URL_REGEX, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 125;
tmp_assign_source_45 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_ffe54771ba2012e42ba6fd6c0fabcfde_tuple, 0)
);

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTHORITY_REGEX, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_instance_4;
tmp_dict_key_1 = mod_consts.const_str_plain_scheme;
tmp_called_instance_4 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;

    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 141;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_291b9213eebb56e623e9d125852d54ee_tuple, 0)
);

if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;

    goto frame_exception_exit_1;
}
tmp_assign_source_46 = _PyDict_NewPresized( 8 );
{
PyObject *tmp_called_instance_5;
PyObject *tmp_called_instance_6;
PyObject *tmp_called_instance_7;
PyObject *tmp_called_instance_8;
PyObject *tmp_called_instance_9;
PyObject *tmp_called_instance_10;
PyObject *tmp_called_instance_11;
tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_authority;
tmp_called_instance_5 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;

    goto dict_build_exception_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 142;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_10e3c17c93ba893840a6e3967895e8bc_tuple, 0)
);

if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_path;
tmp_called_instance_6 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;

    goto dict_build_exception_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 143;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_2ca1d33d0ec8ffc5e22b4ea233638f7b_tuple, 0)
);

if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_query;
tmp_called_instance_7 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;

    goto dict_build_exception_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 144;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e744a4b795c917fddb2b958e51385b2d_tuple, 0)
);

if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_fragment;
tmp_called_instance_8 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;

    goto dict_build_exception_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 145;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_548f8d37f9a611777eb26a7105ecad09_tuple, 0)
);

if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_userinfo;
tmp_called_instance_9 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto dict_build_exception_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 146;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_9,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_0320c0fdcb439be48651cbaf5179f051_tuple, 0)
);

if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_host;
tmp_called_instance_10 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;

    goto dict_build_exception_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 147;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_10,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_957b55af3e6ff0e3006014112e0dfe36_tuple, 0)
);

if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_port;
tmp_called_instance_11 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;

    goto dict_build_exception_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 148;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_11,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_548f8d37f9a611777eb26a7105ecad09_tuple, 0)
);

if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_46, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_46);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_COMPONENT_REGEX, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_instance_12;
tmp_called_instance_12 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;

    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 154;
tmp_assign_source_47 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_12,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_2e0058ab543b53e3a9c875f48ed0e753_tuple, 0)
);

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4_STYLE_HOSTNAME, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_instance_13;
tmp_called_instance_13 = module_var_accessor_httpx$_urlparse$re(tstate);
if (unlikely(tmp_called_instance_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;

    goto frame_exception_exit_1;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 155;
tmp_assign_source_48 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_13,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e18bce2d92d50c5eebc85eed5e8f32ad_tuple, 0)
);

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6_STYLE_HOSTNAME, tmp_assign_source_48);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_49;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_NamedTuple);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_13;
}
tmp_assign_source_49 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_49, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_50 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_7;
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


exception_lineno = 158;

    goto try_except_handler_13;
}
tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
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


exception_lineno = 158;

    goto try_except_handler_13;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_13;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_52 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_52;
}
{
bool tmp_condition_result_8;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_13;
}
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_53;
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


exception_lineno = 158;

    goto try_except_handler_13;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_ParseResult;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_urlparse->m_frame.f_lineno = 158;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_53;
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_13;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_13;
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


exception_lineno = 158;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_13;
}
frame_frame_httpx$_urlparse->m_frame.f_lineno = 158;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 158;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_54;
}
branch_end_7:;
{
PyObject *tmp_assign_source_55;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_httpx$_urlparse$$$class__1_ParseResult_158 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5767b8b17420be885417f2e4c30e6d36;
tmp_res = PyObject_SetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_ParseResult;
tmp_res = PyObject_SetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_158;
tmp_res = PyObject_SetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_15;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_15;
}
frame_frame_httpx$_urlparse$$$class__1_ParseResult_2 = MAKE_CLASS_FRAME(tstate, code_objects_768f23b62edbe5cb0355667403251099, module_httpx$_urlparse, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_urlparse$$$class__1_ParseResult_2);
assert(Py_REFCNT(frame_frame_httpx$_urlparse$$$class__1_ParseResult_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_scheme;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_userinfo;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_host;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_port;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_5 = const_str_plain_path;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_query;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_7 = PyObject_GetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_fragment;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_2 = PyObject_GetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_1 = MAKE_FUNCTION_httpx$_urlparse$$$function__1_authority(tstate, tmp_annotations_1);

frame_frame_httpx$_urlparse$$$class__1_ParseResult_2->m_frame.f_lineno = 167;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, mod_consts.const_str_plain_authority, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_2;
tmp_called_value_3 = PyObject_GetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_2 = MAKE_FUNCTION_httpx$_urlparse$$$function__2_netloc(tstate, tmp_annotations_2);

frame_frame_httpx$_urlparse$$$class__1_ParseResult_2->m_frame.f_lineno = 177;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, mod_consts.const_str_plain_netloc, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_553e8122f755013d69e918fc4156cb53);

tmp_dictset_value = MAKE_FUNCTION_httpx$_urlparse$$$function__3_copy_with(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, mod_consts.const_str_plain_copy_with, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_httpx$_urlparse$$$function__4___str__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse$$$class__1_ParseResult_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse$$$class__1_ParseResult_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse$$$class__1_ParseResult_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_urlparse$$$class__1_ParseResult_2,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_httpx$_urlparse$$$class__1_ParseResult_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_15;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_15;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_httpx$_urlparse$$$class__1_ParseResult_158, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_15;
}
branch_no_9:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_ParseResult;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_httpx$_urlparse$$$class__1_ParseResult_158;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_httpx$_urlparse->m_frame.f_lineno = 158;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_15;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_56;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_55 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_55);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_httpx$_urlparse$$$class__1_ParseResult_158);
locals_httpx$_urlparse$$$class__1_ParseResult_158 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_httpx$_urlparse$$$class__1_ParseResult_158);
locals_httpx$_urlparse$$$class__1_ParseResult_158 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
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

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 158;
goto try_except_handler_13;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseResult, tmp_assign_source_55);
}
goto try_end_1;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
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
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

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
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_urlparse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_urlparse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_urlparse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpx$_urlparse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_5;
tmp_defaults_1 = mod_consts.const_tuple_str_empty_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_37eae03f9e3c418ff45a24b66fd13938);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_57 = MAKE_FUNCTION_httpx$_urlparse$$$function__5_urlparse(tstate, tmp_defaults_1, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_32381fc025694ea2ef56aa89b10fcc78);

tmp_assign_source_58 = MAKE_FUNCTION_httpx$_urlparse$$$function__6_encode_host(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_host, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_e64ed31e1f044f53da90e217bf3d997a);

tmp_assign_source_59 = MAKE_FUNCTION_httpx$_urlparse$$$function__7_normalize_port(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_port, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_8119cab71ea9483c126a842444238c38);

tmp_assign_source_60 = MAKE_FUNCTION_httpx$_urlparse$$$function__8_validate_path(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_path, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_22cacb1771d5ae388aa90a755d3c3678);

tmp_assign_source_61 = MAKE_FUNCTION_httpx$_urlparse$$$function__9_normalize_path(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_path, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_2215b95741987b83f4e0701eb6a6a50f);

tmp_assign_source_62 = MAKE_FUNCTION_httpx$_urlparse$$$function__10_PERCENT(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_421f36a7a3e3e875d724cab3e4ad14a6);

tmp_assign_source_63 = MAKE_FUNCTION_httpx$_urlparse$$$function__11_percent_encoded(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_percent_encoded, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_421f36a7a3e3e875d724cab3e4ad14a6);

tmp_assign_source_64 = MAKE_FUNCTION_httpx$_urlparse$$$function__12_quote(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_httpx$_urlparse, (Nuitka_StringObject *)mod_consts.const_str_plain_quote, tmp_assign_source_64);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_urlparse", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._urlparse" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpx$_urlparse);
    return module_httpx$_urlparse;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_urlparse, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_urlparse", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'mdurl$_parse'
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



/* The "module_mdurl$_parse" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mdurl$_parse;
PyDictObject *moduledict_mdurl$_parse;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_protocol;
PyObject *const_str_plain_slashes;
PyObject *const_str_plain_auth;
PyObject *const_str_plain_port;
PyObject *const_str_plain_hostname;
PyObject *const_str_plain_hash;
PyObject *const_str_plain_search;
PyObject *const_str_plain_pathname;
PyObject *const_str_plain_strip;
PyObject *const_tuple_str_chr_35_tuple;
PyObject *const_str_plain_SIMPLE_PATH_PATTERN;
PyObject *const_str_plain_match;
PyObject *const_str_plain_group;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_str_plain_PROTOCOL_PATTERN;
PyObject *const_str_plain_proto;
PyObject *const_str_plain_re;
PyObject *const_str_digest_171da5f82dd2496a6c24697afbf23ff0;
PyObject *const_str_plain_rest;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple;
PyObject *const_str_plain_HOSTLESS_PROTOCOL;
PyObject *const_slice_int_pos_2_none_none;
PyObject *const_str_plain_SLASHED_PROTOCOL;
PyObject *const_str_plain_HOST_ENDING_CHARS;
PyObject *const_str_plain_find;
PyObject *const_str_plain_host_end;
PyObject *const_str_plain_rfind;
PyObject *const_tuple_str_chr_64_tuple;
PyObject *const_str_chr_64;
PyObject *const_str_plain_NON_HOST_CHARS;
PyObject *const_str_chr_58;
PyObject *const_str_plain_parse_host;
PyObject *const_tuple_str_chr_91_tuple;
PyObject *const_str_plain_endswith;
PyObject *const_tuple_str_chr_93_tuple;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_plain_i;
PyObject *const_str_plain_HOSTNAME_PART_PATTERN;
PyObject *const_str_plain_j;
PyObject *const_int_pos_127;
PyObject *const_str_plain_newpart;
PyObject *const_str_plain_x;
PyObject *const_str_plain_HOSTNAME_PART_START;
PyObject *const_str_plain_append;
PyObject *const_str_plain_insert;
PyObject *const_str_plain_HOSTNAME_MAX_LEN;
PyObject *const_slice_int_pos_1_int_neg_1_none;
PyObject *const_tuple_str_chr_63_tuple;
PyObject *const_str_plain_PORT_PATTERN;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain_host;
PyObject *const_str_plain_URL;
PyObject *const_str_plain_MutableURL;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_collections;
PyObject *const_tuple_str_plain_defaultdict_tuple;
PyObject *const_str_plain_defaultdict;
PyObject *const_str_digest_5ece8a697c0f97abfdec5720bb4054e7;
PyObject *const_tuple_str_plain_URL_tuple;
PyObject *const_str_plain_IGNORECASE;
PyObject *const_tuple_str_digest_e18527f31b255ac4f2cb2c3a009e77da_tuple;
PyObject *const_tuple_str_plain_flags_tuple;
PyObject *const_tuple_str_digest_a938513bccd2e821474bb3bedd170bd2_tuple;
PyObject *const_tuple_str_digest_3d05dce12a29630824dc19b653e00424_tuple;
PyObject *const_tuple_b9707b2939c42d45ed634bd6fe629dd5_tuple;
PyObject *const_str_plain_DELIMS;
PyObject *const_tuple_743501d87164bf23bd26171b978ef52c_tuple;
PyObject *const_str_plain_UNWISE;
PyObject *const_tuple_str_chr_39_tuple;
PyObject *const_str_plain_AUTO_ESCAPE;
PyObject *const_tuple_str_chr_37_str_slash_str_chr_63_str_chr_59_str_chr_35_tuple;
PyObject *const_tuple_str_slash_str_chr_63_str_chr_35_tuple;
PyObject *const_int_pos_255;
PyObject *const_tuple_str_digest_1746a2d1bc3b5da054d12da7193ab8fc_tuple;
PyObject *const_tuple_str_digest_2228b1eb5e54a5bf4b401dcb38c60f6f_tuple;
PyObject *const_dict_165725d409d3178e8db189434c88389f;
PyObject *const_dict_98dd0a3cb45dd92f9e32b8106ba34874;
PyObject *const_str_digest_668cd43f33d8122865bde8fd43601ea0;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_105;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_7aaae5183b4149f6808071637106bc97;
PyObject *const_dict_be37d6593f2e23b499f45d937a6f6e79;
PyObject *const_str_digest_6c336537bb1d218cfdf23c7b6898e3e8;
PyObject *const_dict_8c7c24ec61055476dde8d15e8b186ce1;
PyObject *const_str_digest_5a4f96a3fbb70c8ff9609698f4dafeb6;
PyObject *const_tuple_e9fdf484d6528b4f159155f2abc7ba61_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_dict_c3d83afe55d1cd9a2b45fee851a7037d;
PyObject *const_dict_30c7224c62313cad551e70d6b34d76a3;
PyObject *const_str_plain_url_parse;
PyObject *const_str_digest_8fea61e202ed2c8534fedd01c8aa5afd;
PyObject *const_str_digest_62c714a2280e3c11802a602dd80ebcde;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_5d10982e73f29e5e7ca9bb2171ee2cf4_tuple;
PyObject *const_tuple_a95943d50a0033f9b5ecb4798a496154_tuple;
PyObject *const_tuple_str_plain_url_str_plain_slashes_denote_host_str_plain_u_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[103];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("mdurl._parse"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_protocol);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_slashes);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_hostname);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_hash);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_pathname);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_35_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_SIMPLE_PATH_PATTERN);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_PATTERN);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_proto);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_171da5f82dd2496a6c24697afbf23ff0);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_rest);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_HOSTLESS_PROTOCOL);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_none_none);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_SLASHED_PROTOCOL);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_HOST_ENDING_CHARS);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_find);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_host_end);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_rfind);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_64_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_chr_64);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_NON_HOST_CHARS);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_host);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_91_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_93_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_i);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_HOSTNAME_PART_PATTERN);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_j);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_int_pos_127);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_newpart);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_HOSTNAME_PART_START);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_insert);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_HOSTNAME_MAX_LEN);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_neg_1_none);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_63_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_PORT_PATTERN);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_URL);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutableURL);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_defaultdict_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_defaultdict);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ece8a697c0f97abfdec5720bb4054e7);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_URL_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORECASE);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e18527f31b255ac4f2cb2c3a009e77da_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a938513bccd2e821474bb3bedd170bd2_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3d05dce12a29630824dc19b653e00424_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_b9707b2939c42d45ed634bd6fe629dd5_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_DELIMS);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_743501d87164bf23bd26171b978ef52c_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNWISE);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_39_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_AUTO_ESCAPE);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_37_str_slash_str_chr_63_str_chr_59_str_chr_35_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_str_chr_63_str_chr_35_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1746a2d1bc3b5da054d12da7193ab8fc_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2228b1eb5e54a5bf4b401dcb38c60f6f_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_dict_165725d409d3178e8db189434c88389f);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_dict_98dd0a3cb45dd92f9e32b8106ba34874);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_668cd43f33d8122865bde8fd43601ea0);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_int_pos_105);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_7aaae5183b4149f6808071637106bc97);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_dict_be37d6593f2e23b499f45d937a6f6e79);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c336537bb1d218cfdf23c7b6898e3e8);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_dict_8c7c24ec61055476dde8d15e8b186ce1);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a4f96a3fbb70c8ff9609698f4dafeb6);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_e9fdf484d6528b4f159155f2abc7ba61_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_dict_c3d83afe55d1cd9a2b45fee851a7037d);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_30c7224c62313cad551e70d6b34d76a3);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_url_parse);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_8fea61e202ed2c8534fedd01c8aa5afd);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_62c714a2280e3c11802a602dd80ebcde);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_5d10982e73f29e5e7ca9bb2171ee2cf4_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_a95943d50a0033f9b5ecb4798a496154_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_slashes_denote_host_str_plain_u_tuple);
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
void checkModuleConstants_mdurl$_parse(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_protocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_protocol);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_slashes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_slashes);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_hostname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hostname);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_hash));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hash);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_pathname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pathname);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_35_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_35_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_SIMPLE_PATH_PATTERN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SIMPLE_PATH_PATTERN);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_PATTERN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PROTOCOL_PATTERN);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_proto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_proto);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_171da5f82dd2496a6c24697afbf23ff0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_171da5f82dd2496a6c24697afbf23ff0);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_rest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rest);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_HOSTLESS_PROTOCOL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HOSTLESS_PROTOCOL);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_2_none_none);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_SLASHED_PROTOCOL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SLASHED_PROTOCOL);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_HOST_ENDING_CHARS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HOST_ENDING_CHARS);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_find));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_host_end));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host_end);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_rfind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rfind);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_64_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_64_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_chr_64));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_64);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_NON_HOST_CHARS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NON_HOST_CHARS);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_58);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_host);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_91_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_91_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_93_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_93_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_i));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_i);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_HOSTNAME_PART_PATTERN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HOSTNAME_PART_PATTERN);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_j));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_j);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_int_pos_127));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_127);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_newpart));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newpart);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_HOSTNAME_PART_START));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HOSTNAME_PART_START);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_insert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_insert);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_HOSTNAME_MAX_LEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HOSTNAME_MAX_LEN);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_int_neg_1_none);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_63_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_63_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_PORT_PATTERN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PORT_PATTERN);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_URL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_URL);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutableURL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutableURL);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collections);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_defaultdict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_defaultdict_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_defaultdict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_defaultdict);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ece8a697c0f97abfdec5720bb4054e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ece8a697c0f97abfdec5720bb4054e7);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_URL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_URL_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORECASE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IGNORECASE);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e18527f31b255ac4f2cb2c3a009e77da_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e18527f31b255ac4f2cb2c3a009e77da_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_flags_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a938513bccd2e821474bb3bedd170bd2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a938513bccd2e821474bb3bedd170bd2_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3d05dce12a29630824dc19b653e00424_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3d05dce12a29630824dc19b653e00424_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_b9707b2939c42d45ed634bd6fe629dd5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b9707b2939c42d45ed634bd6fe629dd5_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_DELIMS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DELIMS);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_743501d87164bf23bd26171b978ef52c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_743501d87164bf23bd26171b978ef52c_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNWISE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNWISE);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_39_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_39_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_AUTO_ESCAPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AUTO_ESCAPE);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_37_str_slash_str_chr_63_str_chr_59_str_chr_35_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_37_str_slash_str_chr_63_str_chr_59_str_chr_35_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_str_chr_63_str_chr_35_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_slash_str_chr_63_str_chr_35_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_int_pos_255));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_255);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1746a2d1bc3b5da054d12da7193ab8fc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1746a2d1bc3b5da054d12da7193ab8fc_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2228b1eb5e54a5bf4b401dcb38c60f6f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2228b1eb5e54a5bf4b401dcb38c60f6f_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_dict_165725d409d3178e8db189434c88389f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_165725d409d3178e8db189434c88389f);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_dict_98dd0a3cb45dd92f9e32b8106ba34874));
CHECK_OBJECT_DEEP(mod_consts.const_dict_98dd0a3cb45dd92f9e32b8106ba34874);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_668cd43f33d8122865bde8fd43601ea0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_668cd43f33d8122865bde8fd43601ea0);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_int_pos_105));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_105);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_7aaae5183b4149f6808071637106bc97));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7aaae5183b4149f6808071637106bc97);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_dict_be37d6593f2e23b499f45d937a6f6e79));
CHECK_OBJECT_DEEP(mod_consts.const_dict_be37d6593f2e23b499f45d937a6f6e79);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c336537bb1d218cfdf23c7b6898e3e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6c336537bb1d218cfdf23c7b6898e3e8);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_dict_8c7c24ec61055476dde8d15e8b186ce1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8c7c24ec61055476dde8d15e8b186ce1);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a4f96a3fbb70c8ff9609698f4dafeb6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a4f96a3fbb70c8ff9609698f4dafeb6);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_e9fdf484d6528b4f159155f2abc7ba61_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e9fdf484d6528b4f159155f2abc7ba61_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_dict_c3d83afe55d1cd9a2b45fee851a7037d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c3d83afe55d1cd9a2b45fee851a7037d);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_30c7224c62313cad551e70d6b34d76a3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_30c7224c62313cad551e70d6b34d76a3);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_url_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url_parse);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_8fea61e202ed2c8534fedd01c8aa5afd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8fea61e202ed2c8534fedd01c8aa5afd);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_62c714a2280e3c11802a602dd80ebcde));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62c714a2280e3c11802a602dd80ebcde);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_5d10982e73f29e5e7ca9bb2171ee2cf4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5d10982e73f29e5e7ca9bb2171ee2cf4_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_a95943d50a0033f9b5ecb4798a496154_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a95943d50a0033f9b5ecb4798a496154_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_slashes_denote_host_str_plain_u_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_str_plain_slashes_denote_host_str_plain_u_tuple);
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
static PyObject *module_var_accessor_mdurl$_parse$AUTO_ESCAPE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTO_ESCAPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AUTO_ESCAPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AUTO_ESCAPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AUTO_ESCAPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AUTO_ESCAPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTO_ESCAPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTO_ESCAPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTO_ESCAPE);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$DELIMS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_DELIMS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DELIMS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DELIMS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DELIMS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DELIMS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_DELIMS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_DELIMS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DELIMS);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$HOSTLESS_PROTOCOL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTLESS_PROTOCOL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HOSTLESS_PROTOCOL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HOSTLESS_PROTOCOL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HOSTLESS_PROTOCOL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HOSTLESS_PROTOCOL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTLESS_PROTOCOL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTLESS_PROTOCOL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTLESS_PROTOCOL);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$HOSTNAME_MAX_LEN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_MAX_LEN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HOSTNAME_MAX_LEN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HOSTNAME_MAX_LEN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HOSTNAME_MAX_LEN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HOSTNAME_MAX_LEN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_MAX_LEN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_MAX_LEN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_MAX_LEN);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$HOSTNAME_PART_PATTERN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_PART_PATTERN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HOSTNAME_PART_PATTERN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HOSTNAME_PART_PATTERN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HOSTNAME_PART_PATTERN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HOSTNAME_PART_PATTERN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_PART_PATTERN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_PART_PATTERN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_PART_PATTERN);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$HOSTNAME_PART_START(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_PART_START);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HOSTNAME_PART_START);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HOSTNAME_PART_START, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HOSTNAME_PART_START);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HOSTNAME_PART_START, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_PART_START);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_PART_START);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_PART_START);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$HOST_ENDING_CHARS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOST_ENDING_CHARS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HOST_ENDING_CHARS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HOST_ENDING_CHARS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HOST_ENDING_CHARS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HOST_ENDING_CHARS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOST_ENDING_CHARS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOST_ENDING_CHARS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HOST_ENDING_CHARS);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$MutableURL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableURL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MutableURL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MutableURL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MutableURL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MutableURL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableURL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableURL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableURL);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$NON_HOST_CHARS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_NON_HOST_CHARS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NON_HOST_CHARS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NON_HOST_CHARS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NON_HOST_CHARS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NON_HOST_CHARS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_NON_HOST_CHARS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_NON_HOST_CHARS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NON_HOST_CHARS);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$PORT_PATTERN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_PORT_PATTERN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PORT_PATTERN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PORT_PATTERN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PORT_PATTERN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PORT_PATTERN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_PORT_PATTERN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_PORT_PATTERN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PORT_PATTERN);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$PROTOCOL_PATTERN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_PATTERN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PROTOCOL_PATTERN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PROTOCOL_PATTERN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PROTOCOL_PATTERN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PROTOCOL_PATTERN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_PATTERN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_PATTERN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_PATTERN);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$SIMPLE_PATH_PATTERN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SIMPLE_PATH_PATTERN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SIMPLE_PATH_PATTERN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SIMPLE_PATH_PATTERN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SIMPLE_PATH_PATTERN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SIMPLE_PATH_PATTERN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SIMPLE_PATH_PATTERN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SIMPLE_PATH_PATTERN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SIMPLE_PATH_PATTERN);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$SLASHED_PROTOCOL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SLASHED_PROTOCOL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SLASHED_PROTOCOL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SLASHED_PROTOCOL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SLASHED_PROTOCOL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SLASHED_PROTOCOL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SLASHED_PROTOCOL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SLASHED_PROTOCOL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SLASHED_PROTOCOL);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$UNWISE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_UNWISE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UNWISE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UNWISE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UNWISE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UNWISE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_UNWISE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_UNWISE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UNWISE);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$URL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_URL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_URL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_URL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_URL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_URL);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$defaultdict(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_defaultdict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_defaultdict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_defaultdict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_defaultdict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_parse$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_parse->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_23349218d80baefd45d83c5c4c2c70de;
static PyCodeObject *code_objects_1d6f673ad6d3d6791cbeb1259c3972fd;
static PyCodeObject *code_objects_111524e5d0955a6bda834f97f9d24120;
static PyCodeObject *code_objects_0d49efe22fe60987195e7bfedf77fde6;
static PyCodeObject *code_objects_27ce345063a92aa85006ccf89d65527c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_8fea61e202ed2c8534fedd01c8aa5afd); CHECK_OBJECT(module_filename_obj);
code_objects_23349218d80baefd45d83c5c4c2c70de = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_62c714a2280e3c11802a602dd80ebcde, mod_consts.const_str_digest_62c714a2280e3c11802a602dd80ebcde, NULL, NULL, 0, 0, 0);
code_objects_1d6f673ad6d3d6791cbeb1259c3972fd = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_7aaae5183b4149f6808071637106bc97, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_111524e5d0955a6bda834f97f9d24120 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse, mod_consts.const_str_digest_6c336537bb1d218cfdf23c7b6898e3e8, mod_consts.const_tuple_5d10982e73f29e5e7ca9bb2171ee2cf4_tuple, NULL, 3, 0, 0);
code_objects_0d49efe22fe60987195e7bfedf77fde6 = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_host, mod_consts.const_str_digest_5a4f96a3fbb70c8ff9609698f4dafeb6, mod_consts.const_tuple_a95943d50a0033f9b5ecb4798a496154_tuple, NULL, 2, 0, 0);
code_objects_27ce345063a92aa85006ccf89d65527c = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_url_parse, mod_consts.const_str_plain_url_parse, mod_consts.const_tuple_str_plain_url_str_plain_slashes_denote_host_str_plain_u_tuple, NULL, 1, 1, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_mdurl$_parse$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_mdurl$_parse$$$function__2_parse(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_mdurl$_parse$$$function__3_parse_host(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_mdurl$_parse$$$function__4_url_parse(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_mdurl$_parse$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_mdurl$_parse$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_mdurl$_parse$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_mdurl$_parse$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_mdurl$_parse$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_mdurl$_parse$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_mdurl$_parse$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1d6f673ad6d3d6791cbeb1259c3972fd, module_mdurl$_parse, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_mdurl$_parse$$$function__1___init__->m_type_description == NULL);
frame_frame_mdurl$_parse$$$function__1___init__ = cache_frame_frame_mdurl$_parse$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_mdurl$_parse$$$function__1___init__);
assert(Py_REFCNT(frame_frame_mdurl$_parse$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_protocol, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_slashes, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
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
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_auth, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
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
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_port, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_hostname, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_hash, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_search, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_pathname, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_parse$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_mdurl$_parse$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_parse$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_mdurl$_parse$$$function__1___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_mdurl$_parse$$$function__1___init__ == cache_frame_frame_mdurl$_parse$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_mdurl$_parse$$$function__1___init__);
    cache_frame_frame_mdurl$_parse$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_mdurl$_parse$$$function__1___init__);

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


static PyObject *impl_mdurl$_parse$$$function__2_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_slashes_denote_host = python_pars[2];
PyObject *var_lower_proto = NULL;
PyObject *var_slashes = NULL;
PyObject *var_rest = NULL;
PyObject *var_simple_path = NULL;
PyObject *var_proto = NULL;
PyObject *var_proto_match = NULL;
PyObject *var_host_end = NULL;
PyObject *var_i = NULL;
PyObject *var_hec = NULL;
PyObject *var_at_sign = NULL;
PyObject *var_auth = NULL;
PyObject *var_host = NULL;
PyObject *var_ipv6_hostname = NULL;
PyObject *var_hostparts = NULL;
PyObject *var_l = NULL;
PyObject *var_part = NULL;
PyObject *var_newpart = NULL;
PyObject *var_k = NULL;
PyObject *var_j = NULL;
PyObject *var_valid_parts = NULL;
PyObject *var_not_host = NULL;
PyObject *var_bit = NULL;
PyObject *var_hash = NULL;
PyObject *var_qm = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_mdurl$_parse$$$function__2_parse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_mdurl$_parse$$$function__2_parse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_str_empty;
assert(var_lower_proto == NULL);
Py_INCREF(tmp_assign_source_1);
var_lower_proto = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_False;
assert(var_slashes == NULL);
Py_INCREF(tmp_assign_source_2);
var_slashes = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_url);
tmp_assign_source_3 = par_url;
assert(var_rest == NULL);
Py_INCREF(tmp_assign_source_3);
var_rest = tmp_assign_source_3;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_mdurl$_parse$$$function__2_parse)) {
    Py_XDECREF(cache_frame_frame_mdurl$_parse$$$function__2_parse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_mdurl$_parse$$$function__2_parse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_mdurl$_parse$$$function__2_parse = MAKE_FUNCTION_FRAME(tstate, code_objects_111524e5d0955a6bda834f97f9d24120, module_mdurl$_parse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_mdurl$_parse$$$function__2_parse->m_type_description == NULL);
frame_frame_mdurl$_parse$$$function__2_parse = cache_frame_frame_mdurl$_parse$$$function__2_parse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_mdurl$_parse$$$function__2_parse);
assert(Py_REFCNT(frame_frame_mdurl$_parse$$$function__2_parse) == 2);

// Framed code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_rest);
tmp_expression_value_1 = var_rest;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_strip);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 123;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rest;
    assert(old != NULL);
    var_rest = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_slashes_denote_host);
tmp_operand_value_1 = par_slashes_denote_host;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooooooooooooooooooooo";
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
CHECK_OBJECT(par_url);
tmp_expression_value_2 = par_url;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 125;
tmp_len_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_chr_35_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 1;
tmp_and_right_value_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_mdurl$_parse$SIMPLE_PATH_PATTERN(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SIMPLE_PATH_PATTERN);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rest);
tmp_args_element_value_1 = var_rest;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 127;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_match, tmp_args_element_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_simple_path == NULL);
var_simple_path = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_simple_path);
tmp_truth_name_1 = CHECK_IF_TRUE(var_simple_path);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooooooooooooooooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_simple_path);
tmp_called_instance_2 = var_simple_path;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 129;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_pathname, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_simple_path);
tmp_called_instance_3 = var_simple_path;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 130;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 130;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_instance_4;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_simple_path);
tmp_called_instance_4 = var_simple_path;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 131;
tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_search, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = const_str_empty;
assert(var_proto == NULL);
Py_INCREF(tmp_assign_source_6);
var_proto = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_2;
tmp_called_instance_5 = module_var_accessor_mdurl$_parse$PROTOCOL_PATTERN(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PROTOCOL_PATTERN);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rest);
tmp_args_element_value_2 = var_rest;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 135;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_match, tmp_args_element_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_proto_match == NULL);
var_proto_match = tmp_assign_source_7;
}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_3;
CHECK_OBJECT(var_proto_match);
tmp_truth_name_3 = CHECK_IF_TRUE(var_proto_match);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_6;
CHECK_OBJECT(var_proto_match);
tmp_called_instance_6 = var_proto_match;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 137;
tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_group);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_proto;
    assert(old != NULL);
    var_proto = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_proto);
tmp_expression_value_3 = var_proto;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 138;
tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_lower_proto;
    assert(old != NULL);
    var_lower_proto = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_proto);
tmp_assattr_value_3 = var_proto;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_protocol, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_len_arg_2;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(var_rest);
tmp_expression_value_4 = var_rest;
CHECK_OBJECT(var_proto);
tmp_len_arg_2 = var_proto;
tmp_start_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rest;
    assert(old != NULL);
    var_rest = tmp_assign_source_10;
    Py_DECREF(old);
}

}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_truth_name_4;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
int tmp_truth_name_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_6;
CHECK_OBJECT(par_slashes_denote_host);
tmp_truth_name_4 = CHECK_IF_TRUE(par_slashes_denote_host);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (var_proto == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_proto);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_5 = CHECK_IF_TRUE(var_proto);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_expression_value_5 = module_var_accessor_mdurl$_parse$re(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_search);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_171da5f82dd2496a6c24697afbf23ff0;
if (var_rest == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = var_rest;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 146;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_5 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_5 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 147;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = var_rest;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_startswith);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 147;
tmp_assign_source_11 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_slashes;
    assert(old != NULL);
    var_slashes = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_7;
PyObject *tmp_operand_value_2;
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_slashes);
tmp_truth_name_7 = CHECK_IF_TRUE(var_slashes);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (var_proto == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_proto);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 148;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_and_left_value_3 = var_proto;
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
tmp_expression_value_7 = module_var_accessor_mdurl$_parse$HOSTLESS_PROTOCOL(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HOSTLESS_PROTOCOL);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_proto == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_proto);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 148;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_2 = var_proto;
tmp_and_right_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
if (tmp_and_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
Py_INCREF(tmp_and_left_value_3);
tmp_operand_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 149;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = var_rest;
tmp_subscript_value_3 = mod_consts.const_slice_int_pos_2_none_none;
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rest;
    var_rest = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_slashes, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_6:;
branch_no_5:;
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
int tmp_truth_name_8;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
int tmp_truth_name_9;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_5;
tmp_expression_value_9 = module_var_accessor_mdurl$_parse$HOSTLESS_PROTOCOL(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HOSTLESS_PROTOCOL);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_proto == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_proto);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 152;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_4 = var_proto;
tmp_operand_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(var_slashes);
tmp_truth_name_8 = CHECK_IF_TRUE(var_slashes);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_3 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
if (var_proto == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_proto);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_9 = CHECK_IF_TRUE(var_proto);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_5 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
tmp_expression_value_10 = module_var_accessor_mdurl$_parse$SLASHED_PROTOCOL(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLASHED_PROTOCOL);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_proto == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_proto);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_5 = var_proto;
tmp_operand_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_3 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_or_right_value_3 = tmp_and_left_value_5;
and_end_5:;
tmp_and_right_value_4 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_and_right_value_4 = tmp_or_left_value_3;
or_end_3:;
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
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = const_int_neg_1;
assert(var_host_end == NULL);
Py_INCREF(tmp_assign_source_13);
var_host_end = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_len_arg_3;
tmp_len_arg_3 = module_var_accessor_mdurl$_parse$HOST_ENDING_CHARS(tstate);
if (unlikely(tmp_len_arg_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HOST_ENDING_CHARS);
}

if (tmp_len_arg_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_xrange_low_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_14;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_15 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_15 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooo";
exception_lineno = 173;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_16 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_16;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_6;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 174;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_11 = var_rest;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_find);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_12 = module_var_accessor_mdurl$_parse$HOST_ENDING_CHARS(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HOST_ENDING_CHARS);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 174;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_i);
tmp_subscript_value_6 = var_i;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 174;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 174;
tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_hec;
    var_hec = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_6;
nuitka_bool tmp_and_left_value_6;
nuitka_bool tmp_and_right_value_6;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
int tmp_or_left_truth_4;
nuitka_bool tmp_or_left_value_4;
nuitka_bool tmp_or_right_value_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_hec);
tmp_cmp_expr_left_2 = var_hec;
tmp_cmp_expr_right_2 = const_int_neg_1;
tmp_and_left_value_6 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_left_value_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
if (var_host_end == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 175;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_3 = var_host_end;
tmp_cmp_expr_right_3 = const_int_neg_1;
tmp_or_left_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_or_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(var_hec);
tmp_cmp_expr_left_4 = var_hec;
if (var_host_end == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 175;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_4 = var_host_end;
tmp_or_right_value_4 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_or_right_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_6 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_and_right_value_6 = tmp_or_left_value_4;
or_end_4:;
tmp_condition_result_8 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_condition_result_8 = tmp_and_left_value_6;
and_end_6:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(var_hec);
tmp_assign_source_18 = var_hec;
{
    PyObject *old = var_host_end;
    var_host_end = tmp_assign_source_18;
    Py_INCREF(var_host_end);
    Py_XDECREF(old);
}

}
branch_no_8:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooooooooooooooooooooo";
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
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
if (var_host_end == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 180;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_5 = var_host_end;
tmp_cmp_expr_right_5 = const_int_neg_1;
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_13;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 182;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = var_rest;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_rfind);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 182;
tmp_assign_source_19 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_chr_64_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_at_sign == NULL);
var_at_sign = tmp_assign_source_19;
}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = var_rest;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_rfind);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = mod_consts.const_str_chr_64;
tmp_args_element_value_7 = const_int_0;
if (var_host_end == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_1 = var_host_end;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_args_element_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 186;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_at_sign == NULL);
var_at_sign = tmp_assign_source_20;
}
branch_end_9:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_at_sign);
tmp_cmp_expr_left_6 = var_at_sign;
tmp_cmp_expr_right_6 = const_int_neg_1;
tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_7;
PyObject *tmp_stop_value_2;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = var_rest;
CHECK_OBJECT(var_at_sign);
tmp_stop_value_2 = var_at_sign;
tmp_subscript_value_7 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_2);
assert(!(tmp_subscript_value_7 == NULL));
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_auth == NULL);
var_auth = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_8;
PyObject *tmp_start_value_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_stop_value_3;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = var_rest;
CHECK_OBJECT(var_at_sign);
tmp_add_expr_left_2 = var_at_sign;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_start_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_start_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_3 = Py_None;
tmp_subscript_value_8 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_3);
CHECK_OBJECT(tmp_start_value_2);
Py_DECREF(tmp_start_value_2);
assert(!(tmp_subscript_value_8 == NULL));
tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rest;
    var_rest = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(var_auth);
tmp_assattr_value_5 = var_auth;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_auth, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_10:;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = const_int_neg_1;
{
    PyObject *old = var_host_end;
    var_host_end = tmp_assign_source_23;
    Py_INCREF(var_host_end);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_2;
PyObject *tmp_len_arg_4;
tmp_len_arg_4 = module_var_accessor_mdurl$_parse$NON_HOST_CHARS(tstate);
if (unlikely(tmp_len_arg_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NON_HOST_CHARS);
}

if (tmp_len_arg_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_xrange_low_2 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_xrange_low_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
CHECK_OBJECT(tmp_xrange_low_2);
Py_DECREF(tmp_xrange_low_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_24 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_24;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_25 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_25 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooo";
exception_lineno = 197;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_26 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_26;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_9;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 198;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_17 = var_rest;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_find);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_18 = module_var_accessor_mdurl$_parse$NON_HOST_CHARS(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NON_HOST_CHARS);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 198;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_i);
tmp_subscript_value_9 = var_i;
tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_9);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 198;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 198;
tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_hec;
    var_hec = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_7;
nuitka_bool tmp_and_left_value_7;
nuitka_bool tmp_and_right_value_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
int tmp_or_left_truth_5;
nuitka_bool tmp_or_left_value_5;
nuitka_bool tmp_or_right_value_5;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_hec);
tmp_cmp_expr_left_7 = var_hec;
tmp_cmp_expr_right_7 = const_int_neg_1;
tmp_and_left_value_7 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_and_left_value_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
if (var_host_end == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 199;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_cmp_expr_left_8 = var_host_end;
tmp_cmp_expr_right_8 = const_int_neg_1;
tmp_or_left_value_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_or_left_value_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_or_left_truth_5 = tmp_or_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
if (tmp_or_left_truth_5 == 1) {
    goto or_left_5;
} else {
    goto or_right_5;
}
or_right_5:;
CHECK_OBJECT(var_hec);
tmp_cmp_expr_left_9 = var_hec;
if (var_host_end == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 199;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_cmp_expr_right_9 = var_host_end;
tmp_or_right_value_5 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_or_right_value_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_and_right_value_7 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_and_right_value_7 = tmp_or_left_value_5;
or_end_5:;
tmp_condition_result_11 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
tmp_condition_result_11 = tmp_and_left_value_7;
and_end_7:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(var_hec);
tmp_assign_source_28 = var_hec;
{
    PyObject *old = var_host_end;
    var_host_end = tmp_assign_source_28;
    Py_INCREF(var_host_end);
    Py_XDECREF(old);
}

}
branch_no_11:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
if (var_host_end == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 202;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_10 = var_host_end;
tmp_cmp_expr_right_10 = const_int_neg_1;
tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_len_arg_5;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 203;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_5 = var_rest;
tmp_assign_source_29 = BUILTIN_LEN(tstate, tmp_len_arg_5);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_host_end;
    var_host_end = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
branch_no_12:;
{
nuitka_bool tmp_condition_result_13;
int tmp_and_left_truth_8;
nuitka_bool tmp_and_left_value_8;
nuitka_bool tmp_and_right_value_8;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_10;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
if (var_host_end == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 205;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_11 = var_host_end;
tmp_cmp_expr_right_11 = const_int_0;
tmp_and_left_value_8 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_and_left_value_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_8 = tmp_and_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_8 == 1) {
    goto and_right_8;
} else {
    goto and_left_8;
}
and_right_8:;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 205;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_19 = var_rest;
if (var_host_end == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 205;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_1 = var_host_end;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_subscript_value_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_subscript_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_12 = mod_consts.const_str_chr_58;
tmp_and_right_value_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_and_right_value_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_and_right_value_8;
goto and_end_8;
and_left_8:;
tmp_condition_result_13 = tmp_and_left_value_8;
and_end_8:;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
if (var_host_end == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 206;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_isub_expr_left_1 = var_host_end;
tmp_isub_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_30 = tmp_isub_expr_left_1;
var_host_end = tmp_assign_source_30;

}
branch_no_13:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_11;
PyObject *tmp_stop_value_4;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 207;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_20 = var_rest;
if (var_host_end == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 207;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_stop_value_4 = var_host_end;
tmp_subscript_value_11 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_4);
assert(!(tmp_subscript_value_11 == NULL));
tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_11);
CHECK_OBJECT(tmp_subscript_value_11);
Py_DECREF(tmp_subscript_value_11);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_host == NULL);
var_host = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_12;
PyObject *tmp_start_value_3;
PyObject *tmp_stop_value_5;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 208;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_21 = var_rest;
if (var_host_end == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 208;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_start_value_3 = var_host_end;
tmp_stop_value_5 = Py_None;
tmp_subscript_value_12 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_5);
assert(!(tmp_subscript_value_12 == NULL));
tmp_assign_source_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_12);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rest;
    var_rest = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(par_self);
tmp_called_instance_7 = par_self;
CHECK_OBJECT(var_host);
tmp_args_element_value_10 = var_host;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 211;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_parse_host, tmp_args_element_value_10);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assattr_value_6;
int tmp_or_left_truth_6;
PyObject *tmp_or_left_value_6;
PyObject *tmp_or_right_value_6;
PyObject *tmp_expression_value_22;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_or_left_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_hostname);
if (tmp_or_left_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
if (tmp_or_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_6);

exception_lineno = 215;
type_description_1 = "ooooooooooooooooooooooooooo";
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
tmp_assattr_value_6 = tmp_or_right_value_6;
goto or_end_6;
or_left_6:;
tmp_assattr_value_6 = tmp_or_left_value_6;
or_end_6:;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_hostname, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_33;
int tmp_and_left_truth_9;
PyObject *tmp_and_left_value_9;
PyObject *tmp_and_right_value_9;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(par_self);
tmp_expression_value_24 = par_self;
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_hostname);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 219;
tmp_and_left_value_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_chr_91_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_and_left_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_9 = CHECK_IF_TRUE(tmp_and_left_value_9);
if (tmp_and_left_truth_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_9);

exception_lineno = 219;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_9 == 1) {
    goto and_right_9;
} else {
    goto and_left_9;
}
and_right_9:;
CHECK_OBJECT(tmp_and_left_value_9);
Py_DECREF(tmp_and_left_value_9);
CHECK_OBJECT(par_self);
tmp_expression_value_26 = par_self;
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_hostname);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_endswith);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 219;
tmp_and_right_value_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_chr_93_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_and_right_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_33 = tmp_and_right_value_9;
goto and_end_9;
and_left_9:;
tmp_assign_source_33 = tmp_and_left_value_9;
and_end_9:;
assert(var_ipv6_hostname == NULL);
var_ipv6_hostname = tmp_assign_source_33;
}
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_5;
CHECK_OBJECT(var_ipv6_hostname);
tmp_operand_value_5 = var_ipv6_hostname;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(par_self);
tmp_expression_value_28 = par_self;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_hostname);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 225;
tmp_assign_source_34 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_hostparts == NULL);
var_hostparts = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_len_arg_6;
CHECK_OBJECT(var_hostparts);
tmp_len_arg_6 = var_hostparts;
tmp_assign_source_35 = BUILTIN_LEN(tstate, tmp_len_arg_6);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_l == NULL);
var_l = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = const_int_0;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_36;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
loop_start_3:;
{
bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_13 = var_i;
CHECK_OBJECT(var_l);
tmp_cmp_expr_right_13 = var_l;
tmp_condition_result_15 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
tmp_condition_result_15 = !tmp_condition_result_15;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
goto loop_end_3;
branch_no_15:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_13;
CHECK_OBJECT(var_hostparts);
tmp_expression_value_29 = var_hostparts;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 229;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_13 = var_i;
tmp_assign_source_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_13);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_part;
    var_part = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_16;
PyObject *tmp_operand_value_6;
CHECK_OBJECT(var_part);
tmp_operand_value_6 = var_part;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_16 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_iadd_expr_left_1;
nuitka_digit tmp_iadd_expr_right_1;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_i;
tmp_iadd_expr_right_1 = 1;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_38 = tmp_iadd_expr_left_1;
var_i = tmp_assign_source_38;

}
goto loop_start_3;
branch_no_16:;
{
bool tmp_condition_result_17;
PyObject *tmp_operand_value_7;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_11;
tmp_called_instance_8 = module_var_accessor_mdurl$_parse$HOSTNAME_PART_PATTERN(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HOSTNAME_PART_PATTERN);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_part);
tmp_args_element_value_11 = var_part;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 233;
tmp_operand_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_search, tmp_args_element_value_11);
if (tmp_operand_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
CHECK_OBJECT(tmp_operand_value_7);
Py_DECREF(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_17 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = const_str_empty;
{
    PyObject *old = var_newpart;
    var_newpart = tmp_assign_source_39;
    Py_INCREF(var_newpart);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_len_arg_7;
CHECK_OBJECT(var_part);
tmp_len_arg_7 = var_part;
tmp_assign_source_40 = BUILTIN_LEN(tstate, tmp_len_arg_7);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = const_int_0;
{
    PyObject *old = var_j;
    var_j = tmp_assign_source_41;
    Py_INCREF(var_j);
    Py_XDECREF(old);
}

}
loop_start_4:;
{
bool tmp_condition_result_18;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 237;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_14 = var_j;
CHECK_OBJECT(var_k);
tmp_cmp_expr_right_14 = var_k;
tmp_condition_result_18 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
tmp_condition_result_18 = !tmp_condition_result_18;
if (tmp_condition_result_18 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
goto loop_end_4;
branch_no_18:;
{
nuitka_bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
PyObject *tmp_ord_arg_1;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_14;
CHECK_OBJECT(var_part);
tmp_expression_value_30 = var_part;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 238;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_14 = var_j;
tmp_ord_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_14);
if (tmp_ord_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_15 = BUILTIN_ORD(tmp_ord_arg_1);
CHECK_OBJECT(tmp_ord_arg_1);
Py_DECREF(tmp_ord_arg_1);
if (tmp_cmp_expr_left_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_15 = mod_consts.const_int_pos_127;
tmp_condition_result_19 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
CHECK_OBJECT(tmp_cmp_expr_left_15);
Py_DECREF(tmp_cmp_expr_left_15);
if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (var_newpart == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newpart);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 242;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_newpart;
tmp_iadd_expr_right_2 = mod_consts.const_str_plain_x;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_42 = tmp_iadd_expr_left_2;
var_newpart = tmp_assign_source_42;

}
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_15;
if (var_newpart == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newpart);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 244;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_3 = var_newpart;
CHECK_OBJECT(var_part);
tmp_expression_value_31 = var_part;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 244;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_15 = var_j;
tmp_iadd_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_15);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_43 = tmp_iadd_expr_left_3;
var_newpart = tmp_assign_source_43;

}
branch_end_19:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_iadd_expr_left_4;
nuitka_digit tmp_iadd_expr_right_4;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 245;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_4 = var_j;
tmp_iadd_expr_right_4 = 1;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
assert(!(tmp_result == false));
tmp_assign_source_44 = tmp_iadd_expr_left_4;
var_j = tmp_assign_source_44;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_4;
loop_end_4:;
{
bool tmp_condition_result_20;
PyObject *tmp_operand_value_8;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_element_value_12;
tmp_expression_value_32 = module_var_accessor_mdurl$_parse$HOSTNAME_PART_PATTERN(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HOSTNAME_PART_PATTERN);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_search);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_newpart == NULL) {
Py_DECREF(tmp_called_value_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newpart);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_12 = var_newpart;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 248;
tmp_operand_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_operand_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
CHECK_OBJECT(tmp_operand_value_8);
Py_DECREF(tmp_operand_value_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_20 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_16;
PyObject *tmp_stop_value_6;
CHECK_OBJECT(var_hostparts);
tmp_expression_value_33 = var_hostparts;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_stop_value_6 = var_i;
tmp_subscript_value_16 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_6);
assert(!(tmp_subscript_value_16 == NULL));
tmp_assign_source_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_16);
CHECK_OBJECT(tmp_subscript_value_16);
Py_DECREF(tmp_subscript_value_16);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_valid_parts == NULL);
var_valid_parts = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_17;
PyObject *tmp_start_value_4;
PyObject *tmp_add_expr_left_3;
nuitka_digit tmp_add_expr_right_3;
PyObject *tmp_stop_value_7;
CHECK_OBJECT(var_hostparts);
tmp_expression_value_34 = var_hostparts;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 250;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_3 = var_i;
tmp_add_expr_right_3 = 1;
tmp_start_value_4 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_3, tmp_add_expr_right_3);
assert(!(tmp_start_value_4 == NULL));
tmp_stop_value_7 = Py_None;
tmp_subscript_value_17 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_4, tmp_stop_value_7);
CHECK_OBJECT(tmp_start_value_4);
Py_DECREF(tmp_start_value_4);
assert(!(tmp_subscript_value_17 == NULL));
tmp_assign_source_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_17);
CHECK_OBJECT(tmp_subscript_value_17);
Py_DECREF(tmp_subscript_value_17);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_not_host == NULL);
var_not_host = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_13;
tmp_called_instance_9 = module_var_accessor_mdurl$_parse$HOSTNAME_PART_START(tstate);
if (unlikely(tmp_called_instance_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HOSTNAME_PART_START);
}

if (tmp_called_instance_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_part);
tmp_args_element_value_13 = var_part;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 251;
tmp_assign_source_47 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_search, tmp_args_element_value_13);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_bit == NULL);
var_bit = tmp_assign_source_47;
}
{
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_10;
CHECK_OBJECT(var_bit);
tmp_truth_name_10 = CHECK_IF_TRUE(var_bit);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_21 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_35;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_instance_10;
CHECK_OBJECT(var_valid_parts);
tmp_expression_value_35 = var_valid_parts;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_append);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bit);
tmp_called_instance_10 = var_bit;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 253;
tmp_args_element_value_14 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_10,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 253;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 253;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_36;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_called_instance_11;
CHECK_OBJECT(var_not_host);
tmp_expression_value_36 = var_not_host;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_insert);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_15 = const_int_0;
CHECK_OBJECT(var_bit);
tmp_called_instance_11 = var_bit;
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 254;
tmp_args_element_value_16 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_11,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 254;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 254;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_21:;
{
nuitka_bool tmp_condition_result_22;
int tmp_truth_name_11;
CHECK_OBJECT(var_not_host);
tmp_truth_name_11 = CHECK_IF_TRUE(var_not_host);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_22 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_dot;
CHECK_OBJECT(var_not_host);
tmp_iterable_value_1 = var_not_host;
tmp_add_expr_left_4 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rest);
tmp_add_expr_right_4 = var_rest;
tmp_assign_source_48 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rest;
    assert(old != NULL);
    var_rest = tmp_assign_source_48;
    Py_DECREF(old);
}

}
branch_no_22:;
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_str_arg_value_2;
PyObject *tmp_iterable_value_2;
PyObject *tmp_assattr_target_7;
tmp_str_arg_value_2 = const_str_dot;
CHECK_OBJECT(var_valid_parts);
tmp_iterable_value_2 = var_valid_parts;
tmp_assattr_value_7 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_hostname, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto loop_end_3;
branch_no_20:;
branch_no_17:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_iadd_expr_left_5;
nuitka_digit tmp_iadd_expr_right_5;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 259;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_5 = var_i;
tmp_iadd_expr_right_5 = 1;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
assert(!(tmp_result == false));
tmp_assign_source_49 = tmp_iadd_expr_left_5;
var_i = tmp_assign_source_49;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_3;
loop_end_3:;
branch_no_14:;
{
nuitka_bool tmp_condition_result_23;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
PyObject *tmp_len_arg_8;
PyObject *tmp_expression_value_37;
CHECK_OBJECT(par_self);
tmp_expression_value_37 = par_self;
tmp_len_arg_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_hostname);
if (tmp_len_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_16 = BUILTIN_LEN(tstate, tmp_len_arg_8);
CHECK_OBJECT(tmp_len_arg_8);
Py_DECREF(tmp_len_arg_8);
if (tmp_cmp_expr_left_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_16 = module_var_accessor_mdurl$_parse$HOSTNAME_MAX_LEN(tstate);
if (unlikely(tmp_cmp_expr_right_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HOSTNAME_MAX_LEN);
}

if (tmp_cmp_expr_right_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_16);

exception_lineno = 261;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_23 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
CHECK_OBJECT(tmp_cmp_expr_left_16);
Py_DECREF(tmp_cmp_expr_left_16);
if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = const_str_empty;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_hostname, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_23:;
{
nuitka_bool tmp_condition_result_24;
int tmp_truth_name_12;
CHECK_OBJECT(var_ipv6_hostname);
tmp_truth_name_12 = CHECK_IF_TRUE(var_ipv6_hostname);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_24 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_18;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_self);
tmp_expression_value_39 = par_self;
tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_hostname);
if (tmp_expression_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_18 = mod_consts.const_slice_int_pos_1_int_neg_1_none;
tmp_assattr_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_18);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_assattr_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_hostname, tmp_assattr_value_9);
CHECK_OBJECT(tmp_assattr_value_9);
Py_DECREF(tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_24:;
branch_no_7:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_40;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 270;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_40 = var_rest;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_find);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 270;
tmp_assign_source_50 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_16, mod_consts.const_tuple_str_chr_35_tuple);

CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_hash == NULL);
var_hash = tmp_assign_source_50;
}
{
nuitka_bool tmp_condition_result_25;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(var_hash);
tmp_cmp_expr_left_17 = var_hash;
tmp_cmp_expr_right_17 = const_int_neg_1;
tmp_condition_result_25 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_19;
PyObject *tmp_start_value_5;
PyObject *tmp_stop_value_8;
PyObject *tmp_assattr_target_10;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 273;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_41 = var_rest;
CHECK_OBJECT(var_hash);
tmp_start_value_5 = var_hash;
tmp_stop_value_8 = Py_None;
tmp_subscript_value_19 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_5, tmp_stop_value_8);
assert(!(tmp_subscript_value_19 == NULL));
tmp_assattr_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_19);
CHECK_OBJECT(tmp_subscript_value_19);
Py_DECREF(tmp_subscript_value_19);
if (tmp_assattr_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_hash, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_20;
PyObject *tmp_stop_value_9;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 274;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_42 = var_rest;
CHECK_OBJECT(var_hash);
tmp_stop_value_9 = var_hash;
tmp_subscript_value_20 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_9);
assert(!(tmp_subscript_value_20 == NULL));
tmp_assign_source_51 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_20);
CHECK_OBJECT(tmp_subscript_value_20);
Py_DECREF(tmp_subscript_value_20);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rest;
    var_rest = tmp_assign_source_51;
    Py_XDECREF(old);
}

}
branch_no_25:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_43;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 275;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_43 = var_rest;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_find);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__2_parse->m_frame.f_lineno = 275;
tmp_assign_source_52 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_17, mod_consts.const_tuple_str_chr_63_tuple);

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_qm == NULL);
var_qm = tmp_assign_source_52;
}
{
nuitka_bool tmp_condition_result_26;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
CHECK_OBJECT(var_qm);
tmp_cmp_expr_left_18 = var_qm;
tmp_cmp_expr_right_18 = const_int_neg_1;
tmp_condition_result_26 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_21;
PyObject *tmp_start_value_6;
PyObject *tmp_stop_value_10;
PyObject *tmp_assattr_target_11;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 277;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_44 = var_rest;
CHECK_OBJECT(var_qm);
tmp_start_value_6 = var_qm;
tmp_stop_value_10 = Py_None;
tmp_subscript_value_21 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_6, tmp_stop_value_10);
assert(!(tmp_subscript_value_21 == NULL));
tmp_assattr_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_21);
CHECK_OBJECT(tmp_subscript_value_21);
Py_DECREF(tmp_subscript_value_21);
if (tmp_assattr_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain_search, tmp_assattr_value_11);
CHECK_OBJECT(tmp_assattr_value_11);
Py_DECREF(tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_expression_value_45;
PyObject *tmp_subscript_value_22;
PyObject *tmp_stop_value_11;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 278;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_45 = var_rest;
CHECK_OBJECT(var_qm);
tmp_stop_value_11 = var_qm;
tmp_subscript_value_22 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_11);
assert(!(tmp_subscript_value_22 == NULL));
tmp_assign_source_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_22);
CHECK_OBJECT(tmp_subscript_value_22);
Py_DECREF(tmp_subscript_value_22);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rest;
    var_rest = tmp_assign_source_53;
    Py_XDECREF(old);
}

}
branch_no_26:;
{
nuitka_bool tmp_condition_result_27;
int tmp_truth_name_13;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 279;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_13 = CHECK_IF_TRUE(var_rest);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_27 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_assattr_target_12;
if (var_rest == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rest);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_12 = var_rest;
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_pathname, tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_27:;
{
nuitka_bool tmp_condition_result_28;
int tmp_and_left_truth_10;
nuitka_bool tmp_and_left_value_10;
nuitka_bool tmp_and_right_value_10;
PyObject *tmp_expression_value_46;
PyObject *tmp_subscript_value_23;
PyObject *tmp_subscript_result_1;
int tmp_truth_name_14;
int tmp_and_left_truth_11;
nuitka_bool tmp_and_left_value_11;
nuitka_bool tmp_and_right_value_11;
PyObject *tmp_expression_value_47;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_15;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_48;
tmp_expression_value_46 = module_var_accessor_mdurl$_parse$SLASHED_PROTOCOL(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLASHED_PROTOCOL);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lower_proto);
tmp_subscript_value_23 = var_lower_proto;
tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_23);
if (tmp_subscript_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_14 = CHECK_IF_TRUE(tmp_subscript_result_1);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_1);

exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_10 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_1);
Py_DECREF(tmp_subscript_result_1);
tmp_and_left_truth_10 = tmp_and_left_value_10 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_10 == 1) {
    goto and_right_10;
} else {
    goto and_left_10;
}
and_right_10:;
CHECK_OBJECT(par_self);
tmp_expression_value_47 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_hostname);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_15 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_11 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_11 = tmp_and_left_value_11 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_11 == 1) {
    goto and_right_11;
} else {
    goto and_left_11;
}
and_right_11:;
CHECK_OBJECT(par_self);
tmp_expression_value_48 = par_self;
tmp_operand_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_pathname);
if (tmp_operand_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
CHECK_OBJECT(tmp_operand_value_9);
Py_DECREF(tmp_operand_value_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_10 = tmp_and_right_value_11;
goto and_end_11;
and_left_11:;
tmp_and_right_value_10 = tmp_and_left_value_11;
and_end_11:;
tmp_condition_result_28 = tmp_and_right_value_10;
goto and_end_10;
and_left_10:;
tmp_condition_result_28 = tmp_and_left_value_10;
and_end_10:;
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_assattr_target_13;
tmp_assattr_value_13 = const_str_empty;
CHECK_OBJECT(par_self);
tmp_assattr_target_13 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain_pathname, tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_28:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_parse$$$function__2_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_mdurl$_parse$$$function__2_parse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_parse$$$function__2_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_mdurl$_parse$$$function__2_parse,
    type_description_1,
    par_self,
    par_url,
    par_slashes_denote_host,
    var_lower_proto,
    var_slashes,
    var_rest,
    var_simple_path,
    var_proto,
    var_proto_match,
    var_host_end,
    var_i,
    var_hec,
    var_at_sign,
    var_auth,
    var_host,
    var_ipv6_hostname,
    var_hostparts,
    var_l,
    var_part,
    var_newpart,
    var_k,
    var_j,
    var_valid_parts,
    var_not_host,
    var_bit,
    var_hash,
    var_qm
);


// Release cached frame if used for exception.
if (frame_frame_mdurl$_parse$$$function__2_parse == cache_frame_frame_mdurl$_parse$$$function__2_parse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_mdurl$_parse$$$function__2_parse);
    cache_frame_frame_mdurl$_parse$$$function__2_parse = NULL;
}

assertFrameObject(frame_frame_mdurl$_parse$$$function__2_parse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_lower_proto);
CHECK_OBJECT(var_lower_proto);
Py_DECREF(var_lower_proto);
var_lower_proto = NULL;
CHECK_OBJECT(var_slashes);
CHECK_OBJECT(var_slashes);
Py_DECREF(var_slashes);
var_slashes = NULL;
Py_XDECREF(var_rest);
var_rest = NULL;
Py_XDECREF(var_simple_path);
var_simple_path = NULL;
Py_XDECREF(var_proto);
var_proto = NULL;
Py_XDECREF(var_proto_match);
var_proto_match = NULL;
Py_XDECREF(var_host_end);
var_host_end = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_hec);
var_hec = NULL;
Py_XDECREF(var_at_sign);
var_at_sign = NULL;
Py_XDECREF(var_auth);
var_auth = NULL;
Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_ipv6_hostname);
var_ipv6_hostname = NULL;
Py_XDECREF(var_hostparts);
var_hostparts = NULL;
Py_XDECREF(var_l);
var_l = NULL;
Py_XDECREF(var_part);
var_part = NULL;
Py_XDECREF(var_newpart);
var_newpart = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_j);
var_j = NULL;
Py_XDECREF(var_valid_parts);
var_valid_parts = NULL;
Py_XDECREF(var_not_host);
var_not_host = NULL;
Py_XDECREF(var_bit);
var_bit = NULL;
Py_XDECREF(var_hash);
var_hash = NULL;
Py_XDECREF(var_qm);
var_qm = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_lower_proto);
CHECK_OBJECT(var_lower_proto);
Py_DECREF(var_lower_proto);
var_lower_proto = NULL;
CHECK_OBJECT(var_slashes);
CHECK_OBJECT(var_slashes);
Py_DECREF(var_slashes);
var_slashes = NULL;
Py_XDECREF(var_rest);
var_rest = NULL;
Py_XDECREF(var_simple_path);
var_simple_path = NULL;
Py_XDECREF(var_proto);
var_proto = NULL;
Py_XDECREF(var_proto_match);
var_proto_match = NULL;
Py_XDECREF(var_host_end);
var_host_end = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_hec);
var_hec = NULL;
Py_XDECREF(var_at_sign);
var_at_sign = NULL;
Py_XDECREF(var_auth);
var_auth = NULL;
Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_ipv6_hostname);
var_ipv6_hostname = NULL;
Py_XDECREF(var_hostparts);
var_hostparts = NULL;
Py_XDECREF(var_l);
var_l = NULL;
Py_XDECREF(var_part);
var_part = NULL;
Py_XDECREF(var_newpart);
var_newpart = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_j);
var_j = NULL;
Py_XDECREF(var_valid_parts);
var_valid_parts = NULL;
Py_XDECREF(var_not_host);
var_not_host = NULL;
Py_XDECREF(var_bit);
var_bit = NULL;
Py_XDECREF(var_hash);
var_hash = NULL;
Py_XDECREF(var_qm);
var_qm = NULL;
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
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_slashes_denote_host);
Py_DECREF(par_slashes_denote_host);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_slashes_denote_host);
Py_DECREF(par_slashes_denote_host);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_mdurl$_parse$$$function__3_parse_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_host = python_pars[1];
PyObject *var_port_match = NULL;
PyObject *var_port = NULL;
struct Nuitka_FrameObject *frame_frame_mdurl$_parse$$$function__3_parse_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_mdurl$_parse$$$function__3_parse_host = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_mdurl$_parse$$$function__3_parse_host)) {
    Py_XDECREF(cache_frame_frame_mdurl$_parse$$$function__3_parse_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_mdurl$_parse$$$function__3_parse_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_mdurl$_parse$$$function__3_parse_host = MAKE_FUNCTION_FRAME(tstate, code_objects_0d49efe22fe60987195e7bfedf77fde6, module_mdurl$_parse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_mdurl$_parse$$$function__3_parse_host->m_type_description == NULL);
frame_frame_mdurl$_parse$$$function__3_parse_host = cache_frame_frame_mdurl$_parse$$$function__3_parse_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_mdurl$_parse$$$function__3_parse_host);
assert(Py_REFCNT(frame_frame_mdurl$_parse$$$function__3_parse_host) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_mdurl$_parse$PORT_PATTERN(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PORT_PATTERN);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_host);
tmp_args_element_value_1 = par_host;
frame_frame_mdurl$_parse$$$function__3_parse_host->m_frame.f_lineno = 287;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_search, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_port_match == NULL);
var_port_match = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_port_match);
tmp_truth_name_1 = CHECK_IF_TRUE(var_port_match);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_port_match);
tmp_called_instance_2 = var_port_match;
frame_frame_mdurl$_parse$$$function__3_parse_host->m_frame.f_lineno = 289;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_group);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_port == NULL);
var_port = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_port);
tmp_cmp_expr_left_1 = var_port;
tmp_cmp_expr_right_1 = mod_consts.const_str_chr_58;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_port);
tmp_expression_value_1 = var_port;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_1_none_none;
tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_port, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_stop_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_host);
tmp_expression_value_2 = par_host;
CHECK_OBJECT(var_port);
tmp_len_arg_1 = var_port;
tmp_operand_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
assert(!(tmp_stop_value_1 == NULL));
tmp_subscript_value_2 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_host;
    assert(old != NULL);
    par_host = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
if (par_host == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 293;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(par_host);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooo";
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
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
if (par_host == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_2 = par_host;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_hostname, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_parse$$$function__3_parse_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_mdurl$_parse$$$function__3_parse_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_parse$$$function__3_parse_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_mdurl$_parse$$$function__3_parse_host,
    type_description_1,
    par_self,
    par_host,
    var_port_match,
    var_port
);


// Release cached frame if used for exception.
if (frame_frame_mdurl$_parse$$$function__3_parse_host == cache_frame_frame_mdurl$_parse$$$function__3_parse_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_mdurl$_parse$$$function__3_parse_host);
    cache_frame_frame_mdurl$_parse$$$function__3_parse_host = NULL;
}

assertFrameObject(frame_frame_mdurl$_parse$$$function__3_parse_host);

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
Py_XDECREF(par_host);
par_host = NULL;
CHECK_OBJECT(var_port_match);
CHECK_OBJECT(var_port_match);
Py_DECREF(var_port_match);
var_port_match = NULL;
Py_XDECREF(var_port);
var_port = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_host);
par_host = NULL;
Py_XDECREF(var_port_match);
var_port_match = NULL;
Py_XDECREF(var_port);
var_port = NULL;
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


static PyObject *impl_mdurl$_parse$$$function__4_url_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_slashes_denote_host = python_pars[1];
PyObject *var_u = NULL;
struct Nuitka_FrameObject *frame_frame_mdurl$_parse$$$function__4_url_parse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_mdurl$_parse$$$function__4_url_parse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_mdurl$_parse$$$function__4_url_parse)) {
    Py_XDECREF(cache_frame_frame_mdurl$_parse$$$function__4_url_parse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_mdurl$_parse$$$function__4_url_parse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_mdurl$_parse$$$function__4_url_parse = MAKE_FUNCTION_FRAME(tstate, code_objects_27ce345063a92aa85006ccf89d65527c, module_mdurl$_parse, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_mdurl$_parse$$$function__4_url_parse->m_type_description == NULL);
frame_frame_mdurl$_parse$$$function__4_url_parse = cache_frame_frame_mdurl$_parse$$$function__4_url_parse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_mdurl$_parse$$$function__4_url_parse);
assert(Py_REFCNT(frame_frame_mdurl$_parse$$$function__4_url_parse) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_url);
tmp_isinstance_inst_1 = par_url;
tmp_isinstance_cls_1 = module_var_accessor_mdurl$_parse$URL(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_URL);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooo";
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
CHECK_OBJECT(par_url);
tmp_return_value = par_url;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_mdurl$_parse$MutableURL(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MutableURL);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 300;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__4_url_parse->m_frame.f_lineno = 300;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_u == NULL);
var_u = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_u);
tmp_called_instance_1 = var_u;
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
CHECK_OBJECT(par_slashes_denote_host);
tmp_args_element_value_2 = par_slashes_denote_host;
frame_frame_mdurl$_parse$$$function__4_url_parse->m_frame.f_lineno = 301;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_parse,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_8;
tmp_called_value_2 = module_var_accessor_mdurl$_parse$URL(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_URL);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 302;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_1 = var_u;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_protocol);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_2 = var_u;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_slashes);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_3 = var_u;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_auth);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_4 = var_u;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_port);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_5 = var_u;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_hostname);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_6 = var_u;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_hash);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_7 = var_u;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_search);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_8 = var_u;
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_pathname);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 303;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse$$$function__4_url_parse->m_frame.f_lineno = 302;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_parse$$$function__4_url_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_mdurl$_parse$$$function__4_url_parse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_parse$$$function__4_url_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_mdurl$_parse$$$function__4_url_parse,
    type_description_1,
    par_url,
    par_slashes_denote_host,
    var_u
);


// Release cached frame if used for exception.
if (frame_frame_mdurl$_parse$$$function__4_url_parse == cache_frame_frame_mdurl$_parse$$$function__4_url_parse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_mdurl$_parse$$$function__4_url_parse);
    cache_frame_frame_mdurl$_parse$$$function__4_url_parse = NULL;
}

assertFrameObject(frame_frame_mdurl$_parse$$$function__4_url_parse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_u);
var_u = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_u);
var_u = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_slashes_denote_host);
Py_DECREF(par_slashes_denote_host);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_slashes_denote_host);
Py_DECREF(par_slashes_denote_host);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_mdurl$_parse$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mdurl$_parse$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7aaae5183b4149f6808071637106bc97,
#endif
        code_objects_1d6f673ad6d3d6791cbeb1259c3972fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_mdurl$_parse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mdurl$_parse$$$function__2_parse(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mdurl$_parse$$$function__2_parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6c336537bb1d218cfdf23c7b6898e3e8,
#endif
        code_objects_111524e5d0955a6bda834f97f9d24120,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_mdurl$_parse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mdurl$_parse$$$function__3_parse_host(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mdurl$_parse$$$function__3_parse_host,
        mod_consts.const_str_plain_parse_host,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5a4f96a3fbb70c8ff9609698f4dafeb6,
#endif
        code_objects_0d49efe22fe60987195e7bfedf77fde6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_mdurl$_parse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mdurl$_parse$$$function__4_url_parse(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mdurl$_parse$$$function__4_url_parse,
        mod_consts.const_str_plain_url_parse,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_27ce345063a92aa85006ccf89d65527c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_mdurl$_parse,
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

static function_impl_code const function_table_mdurl$_parse[] = {
impl_mdurl$_parse$$$function__1___init__,
impl_mdurl$_parse$$$function__2_parse,
impl_mdurl$_parse$$$function__3_parse_host,
impl_mdurl$_parse$$$function__4_url_parse,
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

    return Nuitka_Function_GetFunctionState(function, function_table_mdurl$_parse);
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
        module_mdurl$_parse,
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
        function_table_mdurl$_parse,
        sizeof(function_table_mdurl$_parse) / sizeof(function_impl_code)
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
static char const *module_full_name = "mdurl._parse";
#endif

// Internal entry point for module code.
PyObject *module_code_mdurl$_parse(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("mdurl$_parse");

    // Store the module for future use.
    module_mdurl$_parse = module;

    moduledict_mdurl$_parse = MODULE_DICT(module_mdurl$_parse);

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
        PRINT_STRING("mdurl$_parse: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("mdurl$_parse: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("mdurl$_parse: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "mdurl._parse" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmdurl$_parse\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_mdurl$_parse,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_mdurl$_parse,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_mdurl$_parse,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_mdurl$_parse,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_mdurl$_parse,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_mdurl$_parse);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_mdurl$_parse);
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

        UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_mdurl$_parse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_mdurl$_parse$$$class__1_MutableURL_105 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_mdurl$_parse = MAKE_MODULE_FRAME(code_objects_23349218d80baefd45d83c5c4c2c70de, module_mdurl$_parse);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_mdurl$_parse);
assert(Py_REFCNT(frame_frame_mdurl$_parse) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_mdurl$_parse$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_mdurl$_parse$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_collections;
tmp_globals_arg_value_1 = (PyObject *)moduledict_mdurl$_parse;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_defaultdict_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_mdurl$_parse->m_frame.f_lineno = 44;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_mdurl$_parse,
        mod_consts.const_str_plain_defaultdict,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_defaultdict);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_2 = (PyObject *)moduledict_mdurl$_parse;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_mdurl$_parse->m_frame.f_lineno = 45;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_5ece8a697c0f97abfdec5720bb4054e7;
tmp_globals_arg_value_3 = (PyObject *)moduledict_mdurl$_parse;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_URL_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_mdurl$_parse->m_frame.f_lineno = 47;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_mdurl$_parse,
        mod_consts.const_str_plain_URL,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_URL);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_URL, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_mdurl$_parse$re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_compile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_mdurl$_parse$re(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 53;

    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse->m_frame.f_lineno = 53;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_e18527f31b255ac4f2cb2c3a009e77da_tuple, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_PATTERN, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_mdurl$_parse$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse->m_frame.f_lineno = 54;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_a938513bccd2e821474bb3bedd170bd2_tuple, 0)
);

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_PORT_PATTERN, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_mdurl$_parse$re(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse->m_frame.f_lineno = 57;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_3d05dce12a29630824dc19b653e00424_tuple, 0)
);

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SIMPLE_PATH_PATTERN, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_tuple_b9707b2939c42d45ed634bd6fe629dd5_tuple;
UPDATE_STRING_DICT0(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_DELIMS, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_add_expr_left_1 = mod_consts.const_tuple_743501d87164bf23bd26171b978ef52c_tuple;
tmp_add_expr_right_1 = module_var_accessor_mdurl$_parse$DELIMS(tstate);
assert(!(tmp_add_expr_right_1 == NULL));
tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_TUPLE_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
assert(!(tmp_assign_source_12 == NULL));
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_UNWISE, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
tmp_add_expr_left_2 = mod_consts.const_tuple_str_chr_39_tuple;
tmp_add_expr_right_2 = module_var_accessor_mdurl$_parse$UNWISE(tstate);
assert(!(tmp_add_expr_right_2 == NULL));
tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_TUPLE_TUPLE(tmp_add_expr_left_2, tmp_add_expr_right_2);
assert(!(tmp_assign_source_13 == NULL));
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTO_ESCAPE, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
tmp_add_expr_left_3 = mod_consts.const_tuple_str_chr_37_str_slash_str_chr_63_str_chr_59_str_chr_35_tuple;
tmp_add_expr_right_3 = module_var_accessor_mdurl$_parse$AUTO_ESCAPE(tstate);
assert(!(tmp_add_expr_right_3 == NULL));
tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_TUPLE_TUPLE(tmp_add_expr_left_3, tmp_add_expr_right_3);
assert(!(tmp_assign_source_14 == NULL));
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_NON_HOST_CHARS, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_tuple_str_slash_str_chr_63_str_chr_35_tuple;
UPDATE_STRING_DICT0(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOST_ENDING_CHARS, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_int_pos_255;
UPDATE_STRING_DICT0(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_MAX_LEN, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_mdurl$_parse$re(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse->m_frame.f_lineno = 75;
tmp_assign_source_17 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_1746a2d1bc3b5da054d12da7193ab8fc_tuple, 0)
);

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_PART_PATTERN, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = module_var_accessor_mdurl$_parse$re(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;

    goto frame_exception_exit_1;
}
frame_frame_mdurl$_parse->m_frame.f_lineno = 76;
tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_2228b1eb5e54a5bf4b401dcb38c60f6f_tuple, 0)
);

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTNAME_PART_START, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_2;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
tmp_called_value_2 = module_var_accessor_mdurl$_parse$defaultdict(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_defaultdict);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = (PyObject *)&PyBool_Type;
tmp_call_arg_element_2 = DICT_COPY(tstate, mod_consts.const_dict_165725d409d3178e8db189434c88389f);
frame_frame_mdurl$_parse->m_frame.f_lineno = 80;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HOSTLESS_PROTOCOL, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_3;
PyObject *tmp_call_arg_element_3;
PyObject *tmp_call_arg_element_4;
tmp_called_value_3 = module_var_accessor_mdurl$_parse$defaultdict(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_defaultdict);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_3 = (PyObject *)&PyBool_Type;
tmp_call_arg_element_4 = DICT_COPY(tstate, mod_consts.const_dict_98dd0a3cb45dd92f9e32b8106ba34874);
frame_frame_mdurl$_parse->m_frame.f_lineno = 88;
{
    PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_call_arg_element_4);
Py_DECREF(tmp_call_arg_element_4);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SLASHED_PROTOCOL, tmp_assign_source_20);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_22;
}
// Tried code:
{
PyObject *tmp_assign_source_23;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_mdurl$_parse$$$class__1_MutableURL_105 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_668cd43f33d8122865bde8fd43601ea0;
tmp_result = DICT_SET_ITEM(locals_mdurl$_parse$$$class__1_MutableURL_105, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_MutableURL;
tmp_result = DICT_SET_ITEM(locals_mdurl$_parse$$$class__1_MutableURL_105, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_105;
tmp_result = DICT_SET_ITEM(locals_mdurl$_parse$$$class__1_MutableURL_105, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_mdurl$_parse$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_mdurl$_parse$$$class__1_MutableURL_105, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_be37d6593f2e23b499f45d937a6f6e79);

tmp_dictset_value = MAKE_FUNCTION_mdurl$_parse$$$function__2_parse(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_mdurl$_parse$$$class__1_MutableURL_105, mod_consts.const_str_plain_parse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_8c7c24ec61055476dde8d15e8b186ce1);

tmp_dictset_value = MAKE_FUNCTION_mdurl$_parse$$$function__3_parse_host(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_mdurl$_parse$$$class__1_MutableURL_105, mod_consts.const_str_plain_parse_host, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_e9fdf484d6528b4f159155f2abc7ba61_tuple;
tmp_result = DICT_SET_ITEM(locals_mdurl$_parse$$$class__1_MutableURL_105, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_4 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_MutableURL;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_mdurl$_parse$$$class__1_MutableURL_105;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_mdurl$_parse->m_frame.f_lineno = 105;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_24;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_23 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_23);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_mdurl$_parse$$$class__1_MutableURL_105);
locals_mdurl$_parse$$$class__1_MutableURL_105 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_mdurl$_parse$$$class__1_MutableURL_105);
locals_mdurl$_parse$$$class__1_MutableURL_105 = NULL;
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
exception_lineno = 105;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableURL, tmp_assign_source_23);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_mdurl$_parse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_mdurl$_parse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_4;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_c3d83afe55d1cd9a2b45fee851a7037d);
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_30c7224c62313cad551e70d6b34d76a3);

tmp_assign_source_25 = MAKE_FUNCTION_mdurl$_parse$$$function__4_url_parse(tstate, tmp_kw_defaults_1, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_mdurl$_parse, (Nuitka_StringObject *)mod_consts.const_str_plain_url_parse, tmp_assign_source_25);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("mdurl$_parse", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "mdurl._parse" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_mdurl$_parse);
    return module_mdurl$_parse;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_parse, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("mdurl$_parse", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'h11$_receivebuffer'
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



/* The "module_h11$_receivebuffer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_h11$_receivebuffer;
PyDictObject *moduledict_h11$_receivebuffer;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e;
PyObject *const_str_plain__data;
PyObject *const_str_plain__next_line_search;
PyObject *const_str_plain__multiple_lines_search;
PyObject *const_str_plain__extract;
PyObject *const_str_digest_8b566ad89be261003a373a979f3fb3ad;
PyObject *const_str_plain_max;
PyObject *const_str_plain_find;
PyObject *const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014;
PyObject *const_int_pos_2;
PyObject *const_str_digest_9ee5b78b706187ec53a6022f70f8a08e;
PyObject *const_slice_none_int_pos_1_none;
PyObject *const_bytes_chr_10;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_slice_none_int_pos_2_none;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_str_plain_blank_line_regex;
PyObject *const_str_plain_search;
PyObject *const_str_plain_span;
PyObject *const_tuple_int_0_tuple;
PyObject *const_tuple_bytes_chr_10_tuple;
PyObject *const_str_plain_endswith;
PyObject *const_tuple_bytes_chr_13_tuple;
PyObject *const_int_neg_2;
PyObject *const_slice_int_neg_2_none_none;
PyObject *const_str_digest_d07e598a1d0d48493c6add7ffd407a32;
PyObject *const_int_pos_33;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_re;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_ReceiveBuffer;
PyObject *const_bytes_digest_5fa2066e6ce52a33aac3714246236fde;
PyObject *const_str_plain_MULTILINE;
PyObject *const_str_digest_77f83117f2d379540997cb654ed2ad59;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_47;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_str_digest_2653d6e50c108df7c4a2eefe0f2af640;
PyObject *const_str_plain_byteslike;
PyObject *const_tuple_type_bytes_type_bytearray_tuple;
PyObject *const_str_plain_return;
PyObject *const_str_plain___iadd__;
PyObject *const_str_digest_5e9a355862e99819e53f9a90ff53f1bb;
PyObject *const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1;
PyObject *const_str_plain___bool__;
PyObject *const_str_digest_85ac9322f5eb6a47b45594db693cd482;
PyObject *const_dict_1259841a0de68bdf7d5f55bbd030b617;
PyObject *const_str_plain___len__;
PyObject *const_str_digest_d676fba8d8d6c3ab8e05ac010052092e;
PyObject *const_dict_86ee5f6d233d9d8a00243cd68c2d9335;
PyObject *const_str_plain___bytes__;
PyObject *const_str_digest_fc7d95da83609de62fc460db1ce8c0e0;
PyObject *const_dict_e0783b52486e2276fa70122d3189b006;
PyObject *const_str_digest_6d9e912b897fbcc25cb68d4f9744c9ed;
PyObject *const_str_plain_count;
PyObject *const_str_plain_maybe_extract_at_most;
PyObject *const_str_digest_e133952a2083fb64bf6dca720cc7851a;
PyObject *const_str_plain_maybe_extract_next_line;
PyObject *const_str_digest_e227dbdb92d4eee9794188d6a50ce814;
PyObject *const_str_plain_maybe_extract_lines;
PyObject *const_str_digest_02c9c21c5e0e4ee4b5de777a1ec2407c;
PyObject *const_str_digest_8b7f83ed1dc443aced977410d0e1f002;
PyObject *const_str_digest_894d80ba30ace39ae809910bdd8dee0b;
PyObject *const_tuple_8057ccd1564f0faac20c9e0eab3ac7d0_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_e5584c4a2b295aa2d39aaddfb7962a17;
PyObject *const_str_digest_ee5e69baba1e8759a349079cf108f47d;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_byteslike_tuple;
PyObject *const_tuple_str_plain_self_str_plain_count_str_plain_out_tuple;
PyObject *const_tuple_3ca3ee756bb45d1654148e879143da8b_tuple;
PyObject *const_tuple_ec79b3611def70c6b2f9c63748d593b2_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[78];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("h11._receivebuffer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__data);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__next_line_search);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__multiple_lines_search);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__extract);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b566ad89be261003a373a979f3fb3ad);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_find);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ee5b78b706187ec53a6022f70f8a08e);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_1_none);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_10);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2_none);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_blank_line_regex);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_span);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_10_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_13_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_int_neg_2);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_slice_int_neg_2_none_none);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_d07e598a1d0d48493c6add7ffd407a32);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_int_pos_33);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReceiveBuffer);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_5fa2066e6ce52a33aac3714246236fde);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_MULTILINE);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_77f83117f2d379540997cb654ed2ad59);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_int_pos_47);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_2653d6e50c108df7c4a2eefe0f2af640);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_byteslike);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain___iadd__);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e9a355862e99819e53f9a90ff53f1bb);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain___bool__);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_85ac9322f5eb6a47b45594db693cd482);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_dict_1259841a0de68bdf7d5f55bbd030b617);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain___len__);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_d676fba8d8d6c3ab8e05ac010052092e);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_dict_86ee5f6d233d9d8a00243cd68c2d9335);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain___bytes__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc7d95da83609de62fc460db1ce8c0e0);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_dict_e0783b52486e2276fa70122d3189b006);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d9e912b897fbcc25cb68d4f9744c9ed);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_count);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_extract_at_most);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_e133952a2083fb64bf6dca720cc7851a);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_extract_next_line);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_e227dbdb92d4eee9794188d6a50ce814);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_extract_lines);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_02c9c21c5e0e4ee4b5de777a1ec2407c);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b7f83ed1dc443aced977410d0e1f002);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_894d80ba30ace39ae809910bdd8dee0b);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_8057ccd1564f0faac20c9e0eab3ac7d0_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5584c4a2b295aa2d39aaddfb7962a17);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee5e69baba1e8759a349079cf108f47d);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_byteslike_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_count_str_plain_out_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_3ca3ee756bb45d1654148e879143da8b_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_ec79b3611def70c6b2f9c63748d593b2_tuple);
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
void checkModuleConstants_h11$_receivebuffer(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e));
CHECK_OBJECT_DEEP(mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__data);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__next_line_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__next_line_search);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__multiple_lines_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__multiple_lines_search);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__extract));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__extract);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b566ad89be261003a373a979f3fb3ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b566ad89be261003a373a979f3fb3ad);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_find));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ee5b78b706187ec53a6022f70f8a08e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ee5b78b706187ec53a6022f70f8a08e);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_1_none);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_10));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_chr_10);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_2_none);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_blank_line_regex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blank_line_regex);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_span));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_span);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_10_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_chr_10_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_13_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_chr_13_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_int_neg_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_2);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_slice_int_neg_2_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_neg_2_none_none);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_d07e598a1d0d48493c6add7ffd407a32));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d07e598a1d0d48493c6add7ffd407a32);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_int_pos_33));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_33);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReceiveBuffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReceiveBuffer);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_5fa2066e6ce52a33aac3714246236fde));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_5fa2066e6ce52a33aac3714246236fde);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_MULTILINE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MULTILINE);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_77f83117f2d379540997cb654ed2ad59));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77f83117f2d379540997cb654ed2ad59);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_int_pos_47));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_47);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_2653d6e50c108df7c4a2eefe0f2af640));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2653d6e50c108df7c4a2eefe0f2af640);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_byteslike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byteslike);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain___iadd__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___iadd__);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e9a355862e99819e53f9a90ff53f1bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e9a355862e99819e53f9a90ff53f1bb);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain___bool__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___bool__);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_85ac9322f5eb6a47b45594db693cd482));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85ac9322f5eb6a47b45594db693cd482);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_dict_1259841a0de68bdf7d5f55bbd030b617));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1259841a0de68bdf7d5f55bbd030b617);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain___len__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___len__);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_d676fba8d8d6c3ab8e05ac010052092e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d676fba8d8d6c3ab8e05ac010052092e);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_dict_86ee5f6d233d9d8a00243cd68c2d9335));
CHECK_OBJECT_DEEP(mod_consts.const_dict_86ee5f6d233d9d8a00243cd68c2d9335);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain___bytes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___bytes__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc7d95da83609de62fc460db1ce8c0e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc7d95da83609de62fc460db1ce8c0e0);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_dict_e0783b52486e2276fa70122d3189b006));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e0783b52486e2276fa70122d3189b006);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d9e912b897fbcc25cb68d4f9744c9ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d9e912b897fbcc25cb68d4f9744c9ed);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_count);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_extract_at_most));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_extract_at_most);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_e133952a2083fb64bf6dca720cc7851a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e133952a2083fb64bf6dca720cc7851a);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_extract_next_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_extract_next_line);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_e227dbdb92d4eee9794188d6a50ce814));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e227dbdb92d4eee9794188d6a50ce814);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_extract_lines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_extract_lines);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_02c9c21c5e0e4ee4b5de777a1ec2407c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02c9c21c5e0e4ee4b5de777a1ec2407c);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b7f83ed1dc443aced977410d0e1f002));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b7f83ed1dc443aced977410d0e1f002);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_894d80ba30ace39ae809910bdd8dee0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_894d80ba30ace39ae809910bdd8dee0b);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_8057ccd1564f0faac20c9e0eab3ac7d0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8057ccd1564f0faac20c9e0eab3ac7d0_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5584c4a2b295aa2d39aaddfb7962a17));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5584c4a2b295aa2d39aaddfb7962a17);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee5e69baba1e8759a349079cf108f47d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee5e69baba1e8759a349079cf108f47d);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_byteslike_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_byteslike_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_count_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_count_str_plain_out_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_3ca3ee756bb45d1654148e879143da8b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3ca3ee756bb45d1654148e879143da8b_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_ec79b3611def70c6b2f9c63748d593b2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ec79b3611def70c6b2f9c63748d593b2_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 6
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
static PyObject *module_var_accessor_h11$_receivebuffer$List(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_receivebuffer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_receivebuffer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_receivebuffer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_List);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_List, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_List);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_List, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_receivebuffer$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_receivebuffer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_receivebuffer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_receivebuffer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_receivebuffer$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_receivebuffer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_receivebuffer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_receivebuffer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_receivebuffer$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_receivebuffer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_receivebuffer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_receivebuffer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_receivebuffer$blank_line_regex(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_receivebuffer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_receivebuffer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_blank_line_regex);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_receivebuffer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_blank_line_regex);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_blank_line_regex, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_blank_line_regex);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_blank_line_regex, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_blank_line_regex);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_blank_line_regex);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_blank_line_regex);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_receivebuffer$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_receivebuffer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_receivebuffer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_receivebuffer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_7d8d8d1c3f1489f91afee76b2c62546b;
static PyCodeObject *code_objects_2919de0bd15ac3066de331d5c8a9575b;
static PyCodeObject *code_objects_fd3fda937fe696abb96c9b5b4783eac0;
static PyCodeObject *code_objects_8926752491c4a09a757b99b444e212e2;
static PyCodeObject *code_objects_8c9f432d70b3900e43f9ea10106601f4;
static PyCodeObject *code_objects_372b01d431306f40953813d00b0d761c;
static PyCodeObject *code_objects_3e32a8239f4cc8fea17e1f7c61ea076b;
static PyCodeObject *code_objects_cdcea189d6a7c1825623cb5d22479e68;
static PyCodeObject *code_objects_07c9ccc3e13b253ad96049ddd1675e21;
static PyCodeObject *code_objects_8024135fb97bd3f93fc440056553e22a;
static PyCodeObject *code_objects_4e2e99729a8b1dca25508d5709d136e7;
static PyCodeObject *code_objects_e19a6c485abe3ea409e3e6ff922754db;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e5584c4a2b295aa2d39aaddfb7962a17); CHECK_OBJECT(module_filename_obj);
code_objects_7d8d8d1c3f1489f91afee76b2c62546b = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_ee5e69baba1e8759a349079cf108f47d, mod_consts.const_str_digest_ee5e69baba1e8759a349079cf108f47d, NULL, NULL, 0, 0, 0);
code_objects_2919de0bd15ac3066de331d5c8a9575b = MAKE_CODE_OBJECT(module_filename_obj, 47, 0, mod_consts.const_str_plain_ReceiveBuffer, mod_consts.const_str_plain_ReceiveBuffer, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fd3fda937fe696abb96c9b5b4783eac0 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___bool__, mod_consts.const_str_digest_85ac9322f5eb6a47b45594db693cd482, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8926752491c4a09a757b99b444e212e2 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___bytes__, mod_consts.const_str_digest_fc7d95da83609de62fc460db1ce8c0e0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8c9f432d70b3900e43f9ea10106601f4 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___iadd__, mod_consts.const_str_digest_5e9a355862e99819e53f9a90ff53f1bb, mod_consts.const_tuple_str_plain_self_str_plain_byteslike_tuple, NULL, 2, 0, 0);
code_objects_372b01d431306f40953813d00b0d761c = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_2653d6e50c108df7c4a2eefe0f2af640, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3e32a8239f4cc8fea17e1f7c61ea076b = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___len__, mod_consts.const_str_digest_d676fba8d8d6c3ab8e05ac010052092e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cdcea189d6a7c1825623cb5d22479e68 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__extract, mod_consts.const_str_digest_6d9e912b897fbcc25cb68d4f9744c9ed, mod_consts.const_tuple_str_plain_self_str_plain_count_str_plain_out_tuple, NULL, 2, 0, 0);
code_objects_07c9ccc3e13b253ad96049ddd1675e21 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_digest_8b7f83ed1dc443aced977410d0e1f002, mod_consts.const_str_digest_894d80ba30ace39ae809910bdd8dee0b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8024135fb97bd3f93fc440056553e22a = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_maybe_extract_at_most, mod_consts.const_str_digest_e133952a2083fb64bf6dca720cc7851a, mod_consts.const_tuple_str_plain_self_str_plain_count_str_plain_out_tuple, NULL, 2, 0, 0);
code_objects_4e2e99729a8b1dca25508d5709d136e7 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_maybe_extract_lines, mod_consts.const_str_digest_02c9c21c5e0e4ee4b5de777a1ec2407c, mod_consts.const_tuple_3ca3ee756bb45d1654148e879143da8b_tuple, NULL, 1, 0, 0);
code_objects_e19a6c485abe3ea409e3e6ff922754db = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_maybe_extract_next_line, mod_consts.const_str_digest_e227dbdb92d4eee9794188d6a50ce814, mod_consts.const_tuple_ec79b3611def70c6b2f9c63748d593b2_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__2___iadd__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__3___bool__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__4___len__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__5___bytes__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__6__extract(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__7_maybe_extract_at_most(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__8_maybe_extract_next_line(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__9_maybe_extract_lines(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_h11$_receivebuffer$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_receivebuffer$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_receivebuffer$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_receivebuffer$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_h11$_receivebuffer$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_receivebuffer$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_receivebuffer$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_372b01d431306f40953813d00b0d761c, module_h11$_receivebuffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_receivebuffer$$$function__1___init__->m_type_description == NULL);
frame_frame_h11$_receivebuffer$$$function__1___init__ = cache_frame_frame_h11$_receivebuffer$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_receivebuffer$$$function__1___init__);
assert(Py_REFCNT(frame_frame_h11$_receivebuffer$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = BYTEARRAY_COPY(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__data, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__next_line_search, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__multiple_lines_search, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_receivebuffer$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_receivebuffer$$$function__1___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_receivebuffer$$$function__1___init__ == cache_frame_frame_h11$_receivebuffer$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_receivebuffer$$$function__1___init__);
    cache_frame_frame_h11$_receivebuffer$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_h11$_receivebuffer$$$function__1___init__);

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


static PyObject *impl_h11$_receivebuffer$$$function__2___iadd__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_byteslike = python_pars[1];
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_receivebuffer$$$function__2___iadd__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_receivebuffer$$$function__2___iadd__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_receivebuffer$$$function__2___iadd__)) {
    Py_XDECREF(cache_frame_frame_h11$_receivebuffer$$$function__2___iadd__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_receivebuffer$$$function__2___iadd__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_receivebuffer$$$function__2___iadd__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8c9f432d70b3900e43f9ea10106601f4, module_h11$_receivebuffer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_receivebuffer$$$function__2___iadd__->m_type_description == NULL);
frame_frame_h11$_receivebuffer$$$function__2___iadd__ = cache_frame_frame_h11$_receivebuffer$$$function__2___iadd__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_receivebuffer$$$function__2___iadd__);
assert(Py_REFCNT(frame_frame_h11$_receivebuffer$$$function__2___iadd__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__data);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
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
CHECK_OBJECT(par_byteslike);
tmp_iadd_expr_right_1 = par_byteslike;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
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
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__data, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer$$$function__2___iadd__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_receivebuffer$$$function__2___iadd__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer$$$function__2___iadd__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_receivebuffer$$$function__2___iadd__,
    type_description_1,
    par_self,
    par_byteslike
);


// Release cached frame if used for exception.
if (frame_frame_h11$_receivebuffer$$$function__2___iadd__ == cache_frame_frame_h11$_receivebuffer$$$function__2___iadd__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_receivebuffer$$$function__2___iadd__);
    cache_frame_frame_h11$_receivebuffer$$$function__2___iadd__ = NULL;
}

assertFrameObject(frame_frame_h11$_receivebuffer$$$function__2___iadd__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_byteslike);
Py_DECREF(par_byteslike);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_byteslike);
Py_DECREF(par_byteslike);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_receivebuffer$$$function__3___bool__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_receivebuffer$$$function__3___bool__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_receivebuffer$$$function__3___bool__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_receivebuffer$$$function__3___bool__)) {
    Py_XDECREF(cache_frame_frame_h11$_receivebuffer$$$function__3___bool__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_receivebuffer$$$function__3___bool__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_receivebuffer$$$function__3___bool__ = MAKE_FUNCTION_FRAME(tstate, code_objects_fd3fda937fe696abb96c9b5b4783eac0, module_h11$_receivebuffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_receivebuffer$$$function__3___bool__->m_type_description == NULL);
frame_frame_h11$_receivebuffer$$$function__3___bool__ = cache_frame_frame_h11$_receivebuffer$$$function__3___bool__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_receivebuffer$$$function__3___bool__);
assert(Py_REFCNT(frame_frame_h11$_receivebuffer$$$function__3___bool__) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_self);
tmp_len_arg_1 = par_self;
tmp_value_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
assert(!(tmp_res == -1));
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer$$$function__3___bool__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_receivebuffer$$$function__3___bool__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer$$$function__3___bool__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_receivebuffer$$$function__3___bool__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_receivebuffer$$$function__3___bool__ == cache_frame_frame_h11$_receivebuffer$$$function__3___bool__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_receivebuffer$$$function__3___bool__);
    cache_frame_frame_h11$_receivebuffer$$$function__3___bool__ = NULL;
}

assertFrameObject(frame_frame_h11$_receivebuffer$$$function__3___bool__);

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


static PyObject *impl_h11$_receivebuffer$$$function__4___len__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_receivebuffer$$$function__4___len__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_receivebuffer$$$function__4___len__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_receivebuffer$$$function__4___len__)) {
    Py_XDECREF(cache_frame_frame_h11$_receivebuffer$$$function__4___len__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_receivebuffer$$$function__4___len__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_receivebuffer$$$function__4___len__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3e32a8239f4cc8fea17e1f7c61ea076b, module_h11$_receivebuffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_receivebuffer$$$function__4___len__->m_type_description == NULL);
frame_frame_h11$_receivebuffer$$$function__4___len__ = cache_frame_frame_h11$_receivebuffer$$$function__4___len__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_receivebuffer$$$function__4___len__);
assert(Py_REFCNT(frame_frame_h11$_receivebuffer$$$function__4___len__) == 2);

// Framed code:
{
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__data);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer$$$function__4___len__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_receivebuffer$$$function__4___len__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer$$$function__4___len__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_receivebuffer$$$function__4___len__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_receivebuffer$$$function__4___len__ == cache_frame_frame_h11$_receivebuffer$$$function__4___len__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_receivebuffer$$$function__4___len__);
    cache_frame_frame_h11$_receivebuffer$$$function__4___len__ = NULL;
}

assertFrameObject(frame_frame_h11$_receivebuffer$$$function__4___len__);

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


static PyObject *impl_h11$_receivebuffer$$$function__5___bytes__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_receivebuffer$$$function__5___bytes__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_receivebuffer$$$function__5___bytes__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_receivebuffer$$$function__5___bytes__)) {
    Py_XDECREF(cache_frame_frame_h11$_receivebuffer$$$function__5___bytes__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_receivebuffer$$$function__5___bytes__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_receivebuffer$$$function__5___bytes__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8926752491c4a09a757b99b444e212e2, module_h11$_receivebuffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_receivebuffer$$$function__5___bytes__->m_type_description == NULL);
frame_frame_h11$_receivebuffer$$$function__5___bytes__ = cache_frame_frame_h11$_receivebuffer$$$function__5___bytes__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_receivebuffer$$$function__5___bytes__);
assert(Py_REFCNT(frame_frame_h11$_receivebuffer$$$function__5___bytes__) == 2);

// Framed code:
{
PyObject *tmp_bytes_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_bytes_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__data);
if (tmp_bytes_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
CHECK_OBJECT(tmp_bytes_arg_1);
Py_DECREF(tmp_bytes_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer$$$function__5___bytes__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_receivebuffer$$$function__5___bytes__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer$$$function__5___bytes__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_receivebuffer$$$function__5___bytes__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_receivebuffer$$$function__5___bytes__ == cache_frame_frame_h11$_receivebuffer$$$function__5___bytes__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_receivebuffer$$$function__5___bytes__);
    cache_frame_frame_h11$_receivebuffer$$$function__5___bytes__ = NULL;
}

assertFrameObject(frame_frame_h11$_receivebuffer$$$function__5___bytes__);

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


static PyObject *impl_h11$_receivebuffer$$$function__6__extract(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_count = python_pars[1];
PyObject *var_out = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_receivebuffer$$$function__6__extract;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_receivebuffer$$$function__6__extract = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_receivebuffer$$$function__6__extract)) {
    Py_XDECREF(cache_frame_frame_h11$_receivebuffer$$$function__6__extract);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_receivebuffer$$$function__6__extract == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_receivebuffer$$$function__6__extract = MAKE_FUNCTION_FRAME(tstate, code_objects_cdcea189d6a7c1825623cb5d22479e68, module_h11$_receivebuffer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_receivebuffer$$$function__6__extract->m_type_description == NULL);
frame_frame_h11$_receivebuffer$$$function__6__extract = cache_frame_frame_h11$_receivebuffer$$$function__6__extract;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_receivebuffer$$$function__6__extract);
assert(Py_REFCNT(frame_frame_h11$_receivebuffer$$$function__6__extract) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__data);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_count);
tmp_stop_value_1 = par_count;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_out == NULL);
var_out = tmp_assign_source_1;
}
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_delsubscr_subscript_1;
PyObject *tmp_stop_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__data);
if (tmp_delsubscr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_count);
tmp_stop_value_2 = par_count;
tmp_delsubscr_subscript_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_2);
assert(!(tmp_delsubscr_subscript_1 == NULL));
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
CHECK_OBJECT(tmp_delsubscr_target_1);
Py_DECREF(tmp_delsubscr_target_1);
CHECK_OBJECT(tmp_delsubscr_subscript_1);
Py_DECREF(tmp_delsubscr_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__next_line_search, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__multiple_lines_search, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer$$$function__6__extract, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_receivebuffer$$$function__6__extract->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer$$$function__6__extract, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_receivebuffer$$$function__6__extract,
    type_description_1,
    par_self,
    par_count,
    var_out
);


// Release cached frame if used for exception.
if (frame_frame_h11$_receivebuffer$$$function__6__extract == cache_frame_frame_h11$_receivebuffer$$$function__6__extract) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_receivebuffer$$$function__6__extract);
    cache_frame_frame_h11$_receivebuffer$$$function__6__extract = NULL;
}

assertFrameObject(frame_frame_h11$_receivebuffer$$$function__6__extract);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_out);
tmp_return_value = var_out;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_out);
CHECK_OBJECT(var_out);
Py_DECREF(var_out);
var_out = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_out);
var_out = NULL;
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
CHECK_OBJECT(par_count);
Py_DECREF(par_count);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_count);
Py_DECREF(par_count);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_receivebuffer$$$function__7_maybe_extract_at_most(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_count = python_pars[1];
PyObject *var_out = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most)) {
    Py_XDECREF(cache_frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most = MAKE_FUNCTION_FRAME(tstate, code_objects_8024135fb97bd3f93fc440056553e22a, module_h11$_receivebuffer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most->m_type_description == NULL);
frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most = cache_frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most);
assert(Py_REFCNT(frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__data);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_count);
tmp_stop_value_1 = par_count;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_out == NULL);
var_out = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_out);
tmp_operand_value_1 = var_out;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_count);
tmp_args_element_value_1 = par_count;
frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most->m_frame.f_lineno = 85;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__extract, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most,
    type_description_1,
    par_self,
    par_count,
    var_out
);


// Release cached frame if used for exception.
if (frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most == cache_frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most);
    cache_frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most = NULL;
}

assertFrameObject(frame_frame_h11$_receivebuffer$$$function__7_maybe_extract_at_most);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_out);
CHECK_OBJECT(var_out);
Py_DECREF(var_out);
var_out = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_out);
var_out = NULL;
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
CHECK_OBJECT(par_count);
Py_DECREF(par_count);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_count);
Py_DECREF(par_count);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h11$_receivebuffer$$$function__8_maybe_extract_next_line(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_search_start_index = NULL;
PyObject *var_partial_idx = NULL;
PyObject *var_idx = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line)) {
    Py_XDECREF(cache_frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line = MAKE_FUNCTION_FRAME(tstate, code_objects_e19a6c485abe3ea409e3e6ff922754db, module_h11$_receivebuffer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line->m_type_description == NULL);
frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line = cache_frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line);
assert(Py_REFCNT(frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_1 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__next_line_search);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_search_start_index == NULL);
var_search_start_index = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__data);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_find);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014;
CHECK_OBJECT(var_search_start_index);
tmp_args_element_value_4 = var_search_start_index;
frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line->m_frame.f_lineno = 93;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_partial_idx == NULL);
var_partial_idx = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_partial_idx);
tmp_cmp_expr_left_1 = var_partial_idx;
tmp_cmp_expr_right_1 = const_int_neg_1;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__data);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__next_line_search, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_partial_idx);
tmp_add_expr_left_1 = var_partial_idx;
tmp_add_expr_right_1 = mod_consts.const_int_pos_2;
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_idx == NULL);
var_idx = tmp_assign_source_3;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_idx);
tmp_args_element_value_5 = var_idx;
frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line->m_frame.f_lineno = 102;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__extract, tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line,
    type_description_1,
    par_self,
    var_search_start_index,
    var_partial_idx,
    var_idx
);


// Release cached frame if used for exception.
if (frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line == cache_frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line);
    cache_frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line = NULL;
}

assertFrameObject(frame_frame_h11$_receivebuffer$$$function__8_maybe_extract_next_line);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_search_start_index);
CHECK_OBJECT(var_search_start_index);
Py_DECREF(var_search_start_index);
var_search_start_index = NULL;
CHECK_OBJECT(var_partial_idx);
CHECK_OBJECT(var_partial_idx);
Py_DECREF(var_partial_idx);
var_partial_idx = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_search_start_index);
var_search_start_index = NULL;
Py_XDECREF(var_partial_idx);
var_partial_idx = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
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


static PyObject *impl_h11$_receivebuffer$$$function__9_maybe_extract_lines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_match = NULL;
PyObject *var_idx = NULL;
PyObject *var_out = NULL;
PyObject *var_lines = NULL;
PyObject *var_line = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines)) {
    Py_XDECREF(cache_frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines = MAKE_FUNCTION_FRAME(tstate, code_objects_4e2e99729a8b1dca25508d5709d136e7, module_h11$_receivebuffer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines->m_type_description == NULL);
frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines = cache_frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines);
assert(Py_REFCNT(frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__data);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_1_none;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_bytes_chr_10;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines->m_frame.f_lineno = 110;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain__extract,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = MAKE_LIST_EMPTY(tstate, 0);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__data);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_slice_none_int_pos_2_none;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
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
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines->m_frame.f_lineno = 114;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain__extract,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_return_value = MAKE_LIST_EMPTY(tstate, 0);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
tmp_expression_value_5 = module_var_accessor_h11$_receivebuffer$blank_line_regex(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_blank_line_regex);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_search);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__data);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 118;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__multiple_lines_search);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 118;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines->m_frame.f_lineno = 118;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_match == NULL);
var_match = tmp_assign_source_1;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_match);
tmp_cmp_expr_left_3 = var_match;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_1;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_2 != NULL);
tmp_args_element_value_3 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__data);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = 2;
tmp_args_element_value_4 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
assert(!(tmp_args_element_value_4 == NULL));
frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines->m_frame.f_lineno = 120;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__multiple_lines_search, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_instance_3;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_match);
tmp_called_instance_3 = var_match;
frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines->m_frame.f_lineno = 124;
tmp_expression_value_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_span,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_neg_1;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_3, -1);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_idx == NULL);
var_idx = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
CHECK_OBJECT(var_idx);
tmp_args_element_value_5 = var_idx;
frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines->m_frame.f_lineno = 125;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain__extract, tmp_args_element_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_out == NULL);
var_out = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_out);
tmp_expression_value_10 = var_out;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_split);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines->m_frame.f_lineno = 126;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_bytes_chr_10_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_lines == NULL);
var_lines = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_lines);
tmp_iter_arg_1 = var_lines;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 128;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_7 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_line;
    var_line = tmp_assign_source_7;
    Py_INCREF(var_line);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_line);
tmp_expression_value_11 = var_line;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_endswith);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines->m_frame.f_lineno = 129;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_bytes_chr_13_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 129;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_delsubscr_subscript_1;
CHECK_OBJECT(var_line);
tmp_delsubscr_target_1 = var_line;
tmp_delsubscr_subscript_1 = const_int_neg_1;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
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
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_lines);
tmp_expression_value_12 = var_lines;
tmp_subscript_value_4 = const_int_neg_1;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_4, -1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_comparison_chain_1__operand_2 == NULL);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var_lines);
tmp_expression_value_13 = var_lines;
tmp_subscript_value_5 = mod_consts.const_int_neg_2;
tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_5, -2);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_4 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_9 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_9;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_1);
goto try_return_handler_3;
branch_no_6:;
{
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_5 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_5 = const_bytes_empty;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_BYTES(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
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
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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


exception_lineno = 132;
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
{
PyObject *tmp_raise_type_1;
frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines->m_frame.f_lineno = 132;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 132;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_delsubscr_target_2;
PyObject *tmp_delsubscr_subscript_2;
CHECK_OBJECT(var_lines);
tmp_delsubscr_target_2 = var_lines;
tmp_delsubscr_subscript_2 = mod_consts.const_slice_int_neg_2_none_none;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines,
    type_description_1,
    par_self,
    var_match,
    var_idx,
    var_out,
    var_lines,
    var_line
);


// Release cached frame if used for exception.
if (frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines == cache_frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines);
    cache_frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines = NULL;
}

assertFrameObject(frame_frame_h11$_receivebuffer$$$function__9_maybe_extract_lines);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_lines);
tmp_return_value = var_lines;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_line);
var_line = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_line);
var_line = NULL;
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


static PyObject *impl_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line)) {
    Py_XDECREF(cache_frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line = MAKE_FUNCTION_FRAME(tstate, code_objects_07c9ccc3e13b253ad96049ddd1675e21, module_h11$_receivebuffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line->m_type_description == NULL);
frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line = cache_frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line);
assert(Py_REFCNT(frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__data);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_33;
tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "o";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_IndexError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
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
goto try_return_handler_2;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 148;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line->m_frame)) {
        frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line == cache_frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line);
    cache_frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line = NULL;
}

assertFrameObject(frame_frame_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line);

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



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line,
        mod_consts.const_str_digest_8b7f83ed1dc443aced977410d0e1f002,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_894d80ba30ace39ae809910bdd8dee0b,
#endif
        code_objects_07c9ccc3e13b253ad96049ddd1675e21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2653d6e50c108df7c4a2eefe0f2af640,
#endif
        code_objects_372b01d431306f40953813d00b0d761c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__2___iadd__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__2___iadd__,
        mod_consts.const_str_plain___iadd__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5e9a355862e99819e53f9a90ff53f1bb,
#endif
        code_objects_8c9f432d70b3900e43f9ea10106601f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__3___bool__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__3___bool__,
        mod_consts.const_str_plain___bool__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_85ac9322f5eb6a47b45594db693cd482,
#endif
        code_objects_fd3fda937fe696abb96c9b5b4783eac0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__4___len__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__4___len__,
        mod_consts.const_str_plain___len__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d676fba8d8d6c3ab8e05ac010052092e,
#endif
        code_objects_3e32a8239f4cc8fea17e1f7c61ea076b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__5___bytes__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__5___bytes__,
        mod_consts.const_str_plain___bytes__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fc7d95da83609de62fc460db1ce8c0e0,
#endif
        code_objects_8926752491c4a09a757b99b444e212e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__6__extract(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__6__extract,
        mod_consts.const_str_plain__extract,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6d9e912b897fbcc25cb68d4f9744c9ed,
#endif
        code_objects_cdcea189d6a7c1825623cb5d22479e68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__7_maybe_extract_at_most(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__7_maybe_extract_at_most,
        mod_consts.const_str_plain_maybe_extract_at_most,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e133952a2083fb64bf6dca720cc7851a,
#endif
        code_objects_8024135fb97bd3f93fc440056553e22a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        mod_consts.const_str_digest_8b566ad89be261003a373a979f3fb3ad,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__8_maybe_extract_next_line(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__8_maybe_extract_next_line,
        mod_consts.const_str_plain_maybe_extract_next_line,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e227dbdb92d4eee9794188d6a50ce814,
#endif
        code_objects_e19a6c485abe3ea409e3e6ff922754db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        mod_consts.const_str_digest_9ee5b78b706187ec53a6022f70f8a08e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__9_maybe_extract_lines(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__9_maybe_extract_lines,
        mod_consts.const_str_plain_maybe_extract_lines,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_02c9c21c5e0e4ee4b5de777a1ec2407c,
#endif
        code_objects_4e2e99729a8b1dca25508d5709d136e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        mod_consts.const_str_digest_d07e598a1d0d48493c6add7ffd407a32,
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

static function_impl_code const function_table_h11$_receivebuffer[] = {
impl_h11$_receivebuffer$$$function__1___init__,
impl_h11$_receivebuffer$$$function__2___iadd__,
impl_h11$_receivebuffer$$$function__3___bool__,
impl_h11$_receivebuffer$$$function__4___len__,
impl_h11$_receivebuffer$$$function__5___bytes__,
impl_h11$_receivebuffer$$$function__6__extract,
impl_h11$_receivebuffer$$$function__7_maybe_extract_at_most,
impl_h11$_receivebuffer$$$function__8_maybe_extract_next_line,
impl_h11$_receivebuffer$$$function__9_maybe_extract_lines,
impl_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line,
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

    return Nuitka_Function_GetFunctionState(function, function_table_h11$_receivebuffer);
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
        module_h11$_receivebuffer,
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
        function_table_h11$_receivebuffer,
        sizeof(function_table_h11$_receivebuffer) / sizeof(function_impl_code)
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
static char const *module_full_name = "h11._receivebuffer";
#endif

// Internal entry point for module code.
PyObject *module_code_h11$_receivebuffer(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("h11$_receivebuffer");

    // Store the module for future use.
    module_h11$_receivebuffer = module;

    moduledict_h11$_receivebuffer = MODULE_DICT(module_h11$_receivebuffer);

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
        PRINT_STRING("h11$_receivebuffer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("h11$_receivebuffer: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("h11$_receivebuffer: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "h11._receivebuffer" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inith11$_receivebuffer\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_h11$_receivebuffer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_h11$_receivebuffer,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_h11$_receivebuffer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_receivebuffer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_receivebuffer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_h11$_receivebuffer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_h11$_receivebuffer);
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

        UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_h11$_receivebuffer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_h11$_receivebuffer$$$class__1_ReceiveBuffer_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_h11$_receivebuffer = MAKE_MODULE_FRAME(code_objects_7d8d8d1c3f1489f91afee76b2c62546b, module_h11$_receivebuffer);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_receivebuffer);
assert(Py_REFCNT(frame_frame_h11$_receivebuffer) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_h11$_receivebuffer$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_h11$_receivebuffer$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_h11$_receivebuffer;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_h11$_receivebuffer->m_frame.f_lineno = 1;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_h11$_receivebuffer,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_h11$_receivebuffer,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_8);
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
        (PyObject *)moduledict_h11$_receivebuffer,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_9);
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
tmp_assign_source_10 = MAKE_LIST1(tstate, mod_consts.const_str_plain_ReceiveBuffer);
UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_h11$_receivebuffer$re(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_compile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_bytes_digest_5fa2066e6ce52a33aac3714246236fde;
tmp_expression_value_2 = module_var_accessor_h11$_receivebuffer$re(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 44;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MULTILINE);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 44;

    goto frame_exception_exit_1;
}
frame_frame_h11$_receivebuffer->m_frame.f_lineno = 44;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_blank_line_regex, tmp_assign_source_11);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_77f83117f2d379540997cb654ed2ad59;
tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ReceiveBuffer;
tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_47;
tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_h11$_receivebuffer$$$class__1_ReceiveBuffer_2 = MAKE_CLASS_FRAME(tstate, code_objects_2919de0bd15ac3066de331d5c8a9575b, module_h11$_receivebuffer, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_receivebuffer$$$class__1_ReceiveBuffer_2);
assert(Py_REFCNT(frame_frame_h11$_receivebuffer$$$class__1_ReceiveBuffer_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_byteslike;
tmp_expression_value_3 = module_var_accessor_h11$_receivebuffer$Union(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_1 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_2 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = mod_consts.const_str_plain_ReceiveBuffer;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__2___iadd__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts.const_str_plain___iadd__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);

tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__3___bool__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts.const_str_plain___bool__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_1259841a0de68bdf7d5f55bbd030b617);

tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__4___len__(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts.const_str_plain___len__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_86ee5f6d233d9d8a00243cd68c2d9335);

tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__5___bytes__(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts.const_str_plain___bytes__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_e0783b52486e2276fa70122d3189b006);

tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__6__extract(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts.const_str_plain__extract, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_count;
tmp_dict_value_2 = (PyObject *)&PyLong_Type;
tmp_annotations_7 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_4 = module_var_accessor_h11$_receivebuffer$Optional(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_subscript_value_2 = (PyObject *)&PyByteArray_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_7);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__7_maybe_extract_at_most(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts.const_str_plain_maybe_extract_at_most, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_8;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_expression_value_5 = module_var_accessor_h11$_receivebuffer$Optional(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_3 = (PyObject *)&PyByteArray_Type;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_8 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__8_maybe_extract_next_line(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts.const_str_plain_maybe_extract_next_line, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_9;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_5;
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_expression_value_6 = module_var_accessor_h11$_receivebuffer$Optional(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_7 = module_var_accessor_h11$_receivebuffer$List(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_5 = (PyObject *)&PyByteArray_Type;
tmp_subscript_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
if (tmp_subscript_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_9 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__9_maybe_extract_lines(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts.const_str_plain_maybe_extract_lines, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer$$$class__1_ReceiveBuffer_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_receivebuffer$$$class__1_ReceiveBuffer_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer$$$class__1_ReceiveBuffer_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h11$_receivebuffer$$$class__1_ReceiveBuffer_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_h11$_receivebuffer$$$class__1_ReceiveBuffer_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);

tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts.const_str_digest_8b7f83ed1dc443aced977410d0e1f002, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_8057ccd1564f0faac20c9e0eab3ac7d0_tuple;
tmp_result = DICT_SET_ITEM(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_ReceiveBuffer;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_h11$_receivebuffer->m_frame.f_lineno = 47;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_15;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_14 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_14);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47);
locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47);
locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47 = NULL;
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
exception_lineno = 47;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts.const_str_plain_ReceiveBuffer, tmp_assign_source_14);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_receivebuffer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_receivebuffer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_receivebuffer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_h11$_receivebuffer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("h11$_receivebuffer", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "h11._receivebuffer" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_h11$_receivebuffer);
    return module_h11$_receivebuffer;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("h11$_receivebuffer", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

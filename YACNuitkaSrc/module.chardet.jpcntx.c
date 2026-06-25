/* Generated code for Python module 'chardet$jpcntx'
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



/* The "module_chardet$jpcntx" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$jpcntx;
PyDictObject *moduledict_chardet$jpcntx;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__total_rel;
PyObject *const_str_plain__rel_sample;
PyObject *const_str_plain__need_to_skip_char_num;
PyObject *const_str_plain__last_char_order;
PyObject *const_str_plain__done;
PyObject *const_str_plain_reset;
PyObject *const_str_plain_NUM_OF_CATEGORY;
PyObject *const_str_plain_i;
PyObject *const_str_plain_num_bytes;
PyObject *const_str_plain_self;
PyObject *const_str_plain_get_order;
PyObject *const_int_pos_2;
PyObject *const_str_plain_MAX_REL_THRESHOLD;
PyObject *const_str_plain_jp2_char_context;
PyObject *const_str_plain_ENOUGH_REL_THRESHOLD;
PyObject *const_str_plain_MINIMUM_DATA_THRESHOLD;
PyObject *const_str_plain_DONT_KNOW;
PyObject *const_str_plain_SHIFT_JIS;
PyObject *const_str_plain__charset_name;
PyObject *const_tuple_int_neg_1_int_pos_1_tuple;
PyObject *const_int_pos_129;
PyObject *const_int_pos_159;
PyObject *const_int_pos_224;
PyObject *const_int_pos_252;
PyObject *const_int_pos_135;
PyObject *const_int_pos_250;
PyObject *const_str_plain_CP932;
PyObject *const_int_pos_202;
PyObject *const_int_pos_241;
PyObject *const_int_pos_142;
PyObject *const_int_pos_161;
PyObject *const_int_pos_254;
PyObject *const_int_pos_143;
PyObject *const_int_pos_3;
PyObject *const_int_pos_164;
PyObject *const_int_pos_243;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Tuple;
PyObject *const_str_plain_Union;
PyObject *const_tuple_5fed71172b5ab5fdaa99957ff12e9014_tuple;
PyObject *const_str_digest_c6e429a71fde053d8e68cdb70acfd8ce;
PyObject *const_str_plain_JapaneseContextAnalysis;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_120;
PyObject *const_str_plain___firstlineno__;
PyObject *const_int_pos_6;
PyObject *const_int_pos_100;
PyObject *const_int_pos_1000;
PyObject *const_int_pos_4;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_str_digest_9b52630297eedac62308f45f81ea4075;
PyObject *const_str_digest_8a5daf8f6da3aef3adcbd2ae8a15fd47;
PyObject *const_str_plain_byte_str;
PyObject *const_tuple_type_bytes_type_bytearray_tuple;
PyObject *const_str_plain_return;
PyObject *const_str_plain_feed;
PyObject *const_str_digest_789ab30d197e8fe6c207b489ef559254;
PyObject *const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1;
PyObject *const_str_plain_got_enough_data;
PyObject *const_str_digest_f46528c54d535fecd0d9e7e65fa40eb0;
PyObject *const_dict_d81fb943d4ac67fcbc2f42d607a17bb4;
PyObject *const_str_plain_get_confidence;
PyObject *const_str_digest_cfd16a8ec0decae98e96bd7c3a079ca1;
PyObject *const_tuple_type_int_type_int_tuple;
PyObject *const_str_digest_b67dbbba9f1160ac6a3c859d538f2049;
PyObject *const_tuple_51ce1d7757eaed8bd35a607597c143aa_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_SJISContextAnalysis;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_int_pos_189;
PyObject *const_str_digest_48f4c4f67057490d113cf4a4c74b5387;
PyObject *const_str_plain_property;
PyObject *const_str_plain_str;
PyObject *const_str_plain_charset_name;
PyObject *const_str_digest_7065400ab02faddeccf35c317f8460d1;
PyObject *const_str_digest_f169fb3a1f692d4c7beb725a93b6e18a;
PyObject *const_tuple_str_plain__charset_name_tuple;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_EUCJPContextAnalysis;
PyObject *const_int_pos_219;
PyObject *const_str_digest_454cc91cdffdd1487a4dc494efb8bf4c;
PyObject *const_str_digest_57c720123ed58c8eaf2cd827c331aa6e;
PyObject *const_str_digest_c4c19ff50cb74a2bc0721a6b04341225;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_8d64e34e39720a765d0edd2299c485e2_tuple;
PyObject *const_tuple_697ffd6d5ebffd3b89b1995a446e536d_tuple;
PyObject *const_tuple_str_plain_self_str_underscore_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[94];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("chardet.jpcntx"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__total_rel);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__rel_sample);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__need_to_skip_char_num);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__last_char_order);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__done);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_reset);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUM_OF_CATEGORY);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_i);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_num_bytes);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_order);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_REL_THRESHOLD);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_jp2_char_context);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENOUGH_REL_THRESHOLD);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_MINIMUM_DATA_THRESHOLD);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_DONT_KNOW);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHIFT_JIS);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__charset_name);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_int_pos_1_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_int_pos_129);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_159);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_int_pos_224);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_int_pos_252);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_int_pos_135);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_int_pos_250);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_CP932);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_int_pos_202);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_int_pos_241);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_pos_142);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_int_pos_161);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_int_pos_254);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_143);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_int_pos_164);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_243);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_5fed71172b5ab5fdaa99957ff12e9014_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6e429a71fde053d8e68cdb70acfd8ce);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_JapaneseContextAnalysis);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_int_pos_120);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_6);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_int_pos_1000);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b52630297eedac62308f45f81ea4075);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a5daf8f6da3aef3adcbd2ae8a15fd47);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_byte_str);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_feed);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_789ab30d197e8fe6c207b489ef559254);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_got_enough_data);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_f46528c54d535fecd0d9e7e65fa40eb0);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_dict_d81fb943d4ac67fcbc2f42d607a17bb4);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_confidence);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_cfd16a8ec0decae98e96bd7c3a079ca1);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_b67dbbba9f1160ac6a3c859d538f2049);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_51ce1d7757eaed8bd35a607597c143aa_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_SJISContextAnalysis);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_int_pos_189);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_48f4c4f67057490d113cf4a4c74b5387);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_charset_name);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_7065400ab02faddeccf35c317f8460d1);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_f169fb3a1f692d4c7beb725a93b6e18a);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__charset_name_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_EUCJPContextAnalysis);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_int_pos_219);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_454cc91cdffdd1487a4dc494efb8bf4c);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_57c720123ed58c8eaf2cd827c331aa6e);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4c19ff50cb74a2bc0721a6b04341225);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_8d64e34e39720a765d0edd2299c485e2_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_697ffd6d5ebffd3b89b1995a446e536d_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_underscore_tuple);
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
void checkModuleConstants_chardet$jpcntx(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__total_rel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__total_rel);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__rel_sample));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__rel_sample);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__need_to_skip_char_num));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__need_to_skip_char_num);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__last_char_order));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__last_char_order);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__done));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__done);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_reset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reset);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUM_OF_CATEGORY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NUM_OF_CATEGORY);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_i));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_i);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_num_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_num_bytes);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_order));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_order);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_REL_THRESHOLD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAX_REL_THRESHOLD);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_jp2_char_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_jp2_char_context);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENOUGH_REL_THRESHOLD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENOUGH_REL_THRESHOLD);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_MINIMUM_DATA_THRESHOLD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MINIMUM_DATA_THRESHOLD);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_DONT_KNOW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DONT_KNOW);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHIFT_JIS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHIFT_JIS);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__charset_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__charset_name);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_int_pos_1_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_int_pos_129));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_129);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_159));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_159);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_int_pos_224));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_224);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_int_pos_252));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_252);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_int_pos_135));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_135);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_int_pos_250));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_250);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_CP932));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CP932);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_int_pos_202));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_202);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_int_pos_241));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_241);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_pos_142));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_142);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_int_pos_161));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_161);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_int_pos_254));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_254);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_143));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_143);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_int_pos_164));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_164);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_243));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_243);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_5fed71172b5ab5fdaa99957ff12e9014_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5fed71172b5ab5fdaa99957ff12e9014_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6e429a71fde053d8e68cdb70acfd8ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c6e429a71fde053d8e68cdb70acfd8ce);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_JapaneseContextAnalysis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_JapaneseContextAnalysis);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_int_pos_120));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_120);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_6));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_6);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_int_pos_100));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_100);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_int_pos_1000));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1000);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b52630297eedac62308f45f81ea4075));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b52630297eedac62308f45f81ea4075);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a5daf8f6da3aef3adcbd2ae8a15fd47));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a5daf8f6da3aef3adcbd2ae8a15fd47);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_byte_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byte_str);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_feed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_feed);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_789ab30d197e8fe6c207b489ef559254));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_789ab30d197e8fe6c207b489ef559254);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_got_enough_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_got_enough_data);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_f46528c54d535fecd0d9e7e65fa40eb0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f46528c54d535fecd0d9e7e65fa40eb0);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_dict_d81fb943d4ac67fcbc2f42d607a17bb4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d81fb943d4ac67fcbc2f42d607a17bb4);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_confidence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_confidence);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_cfd16a8ec0decae98e96bd7c3a079ca1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cfd16a8ec0decae98e96bd7c3a079ca1);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_type_int_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_b67dbbba9f1160ac6a3c859d538f2049));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b67dbbba9f1160ac6a3c859d538f2049);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_51ce1d7757eaed8bd35a607597c143aa_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_51ce1d7757eaed8bd35a607597c143aa_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_SJISContextAnalysis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SJISContextAnalysis);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_int_pos_189));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_189);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_48f4c4f67057490d113cf4a4c74b5387));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48f4c4f67057490d113cf4a4c74b5387);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_charset_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charset_name);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_7065400ab02faddeccf35c317f8460d1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7065400ab02faddeccf35c317f8460d1);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_f169fb3a1f692d4c7beb725a93b6e18a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f169fb3a1f692d4c7beb725a93b6e18a);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__charset_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__charset_name_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_EUCJPContextAnalysis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EUCJPContextAnalysis);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_int_pos_219));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_219);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_454cc91cdffdd1487a4dc494efb8bf4c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_454cc91cdffdd1487a4dc494efb8bf4c);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_57c720123ed58c8eaf2cd827c331aa6e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57c720123ed58c8eaf2cd827c331aa6e);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4c19ff50cb74a2bc0721a6b04341225));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4c19ff50cb74a2bc0721a6b04341225);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_8d64e34e39720a765d0edd2299c485e2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8d64e34e39720a765d0edd2299c485e2_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_697ffd6d5ebffd3b89b1995a446e536d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_697ffd6d5ebffd3b89b1995a446e536d_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_underscore_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_chardet$jpcntx$JapaneseContextAnalysis(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$jpcntx->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$jpcntx->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_JapaneseContextAnalysis);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$jpcntx->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_JapaneseContextAnalysis);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_JapaneseContextAnalysis, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_JapaneseContextAnalysis);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_JapaneseContextAnalysis, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_JapaneseContextAnalysis);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_JapaneseContextAnalysis);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_JapaneseContextAnalysis);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$jpcntx$Tuple(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$jpcntx->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$jpcntx->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$jpcntx->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$jpcntx$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$jpcntx->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$jpcntx->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$jpcntx->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$jpcntx$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$jpcntx->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$jpcntx->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$jpcntx->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$jpcntx$jp2_char_context(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$jpcntx->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$jpcntx->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_jp2_char_context);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$jpcntx->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_jp2_char_context);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_jp2_char_context, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_jp2_char_context);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_jp2_char_context, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_jp2_char_context);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_jp2_char_context);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_jp2_char_context);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_81c4edcfb359ed4f873e7fa103b70a0b;
static PyCodeObject *code_objects_f5a09296f6fcbedb9adaa3953ad05629;
static PyCodeObject *code_objects_136be3ebc4c5fae9488a72613a632124;
static PyCodeObject *code_objects_2497ac80dbf942f3d1d7d61cacbff18a;
static PyCodeObject *code_objects_d15f7be1a14a87e47462e2a1ae87088a;
static PyCodeObject *code_objects_c21b0ee64102c91bde438fcfdf179a83;
static PyCodeObject *code_objects_41b92ac3840875803d6317043ac22472;
static PyCodeObject *code_objects_7b8358159b41203f832eb4c6e8790d23;
static PyCodeObject *code_objects_8f8aa4acc56b8f212278db94003a5f5a;
static PyCodeObject *code_objects_342f2076b45a495985fc297792b1464b;
static PyCodeObject *code_objects_8294d752d5c4c7fda58fedde707e192e;
static PyCodeObject *code_objects_7de9e4a644a50ac5808a1ebc3585223a;
static PyCodeObject *code_objects_441ec9d7d9009ba68419a8580e0a655e;
static PyCodeObject *code_objects_7caffac0a400bdce49b6aa6ecc2e1839;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_57c720123ed58c8eaf2cd827c331aa6e); CHECK_OBJECT(module_filename_obj);
code_objects_81c4edcfb359ed4f873e7fa103b70a0b = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_c4c19ff50cb74a2bc0721a6b04341225, mod_consts.const_str_digest_c4c19ff50cb74a2bc0721a6b04341225, NULL, NULL, 0, 0, 0);
code_objects_f5a09296f6fcbedb9adaa3953ad05629 = MAKE_CODE_OBJECT(module_filename_obj, 219, 0, mod_consts.const_str_plain_EUCJPContextAnalysis, mod_consts.const_str_plain_EUCJPContextAnalysis, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_136be3ebc4c5fae9488a72613a632124 = MAKE_CODE_OBJECT(module_filename_obj, 120, 0, mod_consts.const_str_plain_JapaneseContextAnalysis, mod_consts.const_str_plain_JapaneseContextAnalysis, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2497ac80dbf942f3d1d7d61cacbff18a = MAKE_CODE_OBJECT(module_filename_obj, 189, 0, mod_consts.const_str_plain_SJISContextAnalysis, mod_consts.const_str_plain_SJISContextAnalysis, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d15f7be1a14a87e47462e2a1ae87088a = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_9b52630297eedac62308f45f81ea4075, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c21b0ee64102c91bde438fcfdf179a83 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_48f4c4f67057490d113cf4a4c74b5387, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_41b92ac3840875803d6317043ac22472 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_charset_name, mod_consts.const_str_digest_7065400ab02faddeccf35c317f8460d1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7b8358159b41203f832eb4c6e8790d23 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_feed, mod_consts.const_str_digest_789ab30d197e8fe6c207b489ef559254, mod_consts.const_tuple_8d64e34e39720a765d0edd2299c485e2_tuple, NULL, 3, 0, 0);
code_objects_8f8aa4acc56b8f212278db94003a5f5a = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_confidence, mod_consts.const_str_digest_cfd16a8ec0decae98e96bd7c3a079ca1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_342f2076b45a495985fc297792b1464b = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_order, mod_consts.const_str_digest_454cc91cdffdd1487a4dc494efb8bf4c, mod_consts.const_tuple_697ffd6d5ebffd3b89b1995a446e536d_tuple, NULL, 2, 0, 0);
code_objects_8294d752d5c4c7fda58fedde707e192e = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_order, mod_consts.const_str_digest_b67dbbba9f1160ac6a3c859d538f2049, mod_consts.const_tuple_str_plain_self_str_underscore_tuple, NULL, 2, 0, 0);
code_objects_7de9e4a644a50ac5808a1ebc3585223a = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_order, mod_consts.const_str_digest_f169fb3a1f692d4c7beb725a93b6e18a, mod_consts.const_tuple_697ffd6d5ebffd3b89b1995a446e536d_tuple, NULL, 2, 0, 0);
code_objects_441ec9d7d9009ba68419a8580e0a655e = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_got_enough_data, mod_consts.const_str_digest_f46528c54d535fecd0d9e7e65fa40eb0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7caffac0a400bdce49b6aa6ecc2e1839 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_reset, mod_consts.const_str_digest_8a5daf8f6da3aef3adcbd2ae8a15fd47, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__10_get_order(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__2_reset(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__3_feed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__4_got_enough_data(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__5_get_confidence(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__6_get_order(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__7___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__8_charset_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__9_get_order(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_chardet$jpcntx$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$jpcntx$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$jpcntx$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_chardet$jpcntx$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$jpcntx$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$jpcntx$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d15f7be1a14a87e47462e2a1ae87088a, module_chardet$jpcntx, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$jpcntx$$$function__1___init__->m_type_description == NULL);
frame_frame_chardet$jpcntx$$$function__1___init__ = cache_frame_frame_chardet$jpcntx$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx$$$function__1___init__);
assert(Py_REFCNT(frame_frame_chardet$jpcntx$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__total_rel, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__rel_sample, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
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
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__need_to_skip_char_num, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = const_int_neg_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__last_char_order, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__done, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_chardet$jpcntx$$$function__1___init__->m_frame.f_lineno = 133;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_reset);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$jpcntx$$$function__1___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$jpcntx$$$function__1___init__ == cache_frame_frame_chardet$jpcntx$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$jpcntx$$$function__1___init__);
    cache_frame_frame_chardet$jpcntx$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_chardet$jpcntx$$$function__1___init__);

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


static PyObject *impl_chardet$jpcntx$$$function__2_reset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx$$$function__2_reset;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$jpcntx$$$function__2_reset = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$jpcntx$$$function__2_reset)) {
    Py_XDECREF(cache_frame_frame_chardet$jpcntx$$$function__2_reset);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$jpcntx$$$function__2_reset == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$jpcntx$$$function__2_reset = MAKE_FUNCTION_FRAME(tstate, code_objects_7caffac0a400bdce49b6aa6ecc2e1839, module_chardet$jpcntx, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$jpcntx$$$function__2_reset->m_type_description == NULL);
frame_frame_chardet$jpcntx$$$function__2_reset = cache_frame_frame_chardet$jpcntx$$$function__2_reset;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx$$$function__2_reset);
assert(Py_REFCNT(frame_frame_chardet$jpcntx$$$function__2_reset) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__total_rel, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_2;
tmp_mult_expr_left_1 = MAKE_LIST1(tstate, const_int_0);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_NUM_OF_CATEGORY);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 138;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_assattr_value_2 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__rel_sample, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
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
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__need_to_skip_char_num, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = const_int_neg_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__last_char_order, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__done, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx$$$function__2_reset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx$$$function__2_reset->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx$$$function__2_reset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$jpcntx$$$function__2_reset,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$jpcntx$$$function__2_reset == cache_frame_frame_chardet$jpcntx$$$function__2_reset) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$jpcntx$$$function__2_reset);
    cache_frame_frame_chardet$jpcntx$$$function__2_reset = NULL;
}

assertFrameObject(frame_frame_chardet$jpcntx$$$function__2_reset);

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


static PyObject *impl_chardet$jpcntx$$$function__3_feed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_byte_str = python_pars[1];
PyObject *par_num_bytes = python_pars[2];
PyObject *var_i = NULL;
PyObject *var_order = NULL;
PyObject *var_char_len = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx$$$function__3_feed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$jpcntx$$$function__3_feed = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$jpcntx$$$function__3_feed)) {
    Py_XDECREF(cache_frame_frame_chardet$jpcntx$$$function__3_feed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$jpcntx$$$function__3_feed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$jpcntx$$$function__3_feed = MAKE_FUNCTION_FRAME(tstate, code_objects_7b8358159b41203f832eb4c6e8790d23, module_chardet$jpcntx, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$jpcntx$$$function__3_feed->m_type_description == NULL);
frame_frame_chardet$jpcntx$$$function__3_feed = cache_frame_frame_chardet$jpcntx$$$function__3_feed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx$$$function__3_feed);
assert(Py_REFCNT(frame_frame_chardet$jpcntx$$$function__3_feed) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__done);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 148;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__need_to_skip_char_num);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_i == NULL);
var_i = tmp_assign_source_1;
}
loop_start_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = var_i;
if (par_num_bytes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_num_bytes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_1 = par_num_bytes;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
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
goto loop_end_1;
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_get_order);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_byte_str);
tmp_expression_value_4 = par_byte_str;
if (var_i == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_start_value_1 = var_i;
if (var_i == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_add_expr_left_1 = var_i;
tmp_add_expr_right_1 = mod_consts.const_int_pos_2;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_chardet$jpcntx$$$function__3_feed->m_frame.f_lineno = 160;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

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



exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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



exception_lineno = 160;
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_order;
    var_order = tmp_assign_source_5;
    Py_INCREF(var_order);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_char_len;
    var_char_len = tmp_assign_source_6;
    Py_INCREF(var_char_len);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 161;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_i;
CHECK_OBJECT(var_char_len);
tmp_iadd_expr_right_1 = var_char_len;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_iadd_expr_left_1;
var_i = tmp_assign_source_7;

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_i);
tmp_cmp_expr_left_2 = var_i;
if (par_num_bytes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_num_bytes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 162;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_2 = par_num_bytes;
tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_1 = var_i;
if (par_num_bytes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_num_bytes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 163;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_right_1 = par_num_bytes;
tmp_assattr_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 163;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__need_to_skip_char_num, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = const_int_neg_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 164;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__last_char_order, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_order);
tmp_cmp_expr_left_3 = var_order;
tmp_cmp_expr_right_3 = const_int_neg_1;
tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 166;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__last_char_order);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = const_int_neg_1;
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_6;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = par_self;
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__total_rel);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_inplace_assign_1__value;
    tmp_inplace_assign_1__value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_2 = tmp_inplace_assign_1__value;
tmp_iadd_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_assign_source_9 = tmp_iadd_expr_left_2;
tmp_inplace_assign_1__value = tmp_assign_source_9;

}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_3 = tmp_inplace_assign_1__value;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}

tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__total_rel, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 168;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__total_rel);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 168;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_self;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_MAX_REL_THRESHOLD);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 168;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_True;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 169;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__done, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
goto loop_end_1;
branch_no_5:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_9;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 171;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_self;
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__rel_sample);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_3;
tmp_expression_value_11 = module_var_accessor_chardet$jpcntx$jp2_char_context(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_jp2_char_context);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 172;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}

tmp_expression_value_12 = par_self;
tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__last_char_order);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_order);
tmp_subscript_value_3 = var_order;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_13 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_4 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_iadd_expr_left_3 = tmp_inplace_assign_subscript_1__value;
tmp_iadd_expr_right_3 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
tmp_assign_source_13 = tmp_iadd_expr_left_3;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_13;

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_1 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_ass_subscript_1 = tmp_inplace_assign_subscript_1__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
Py_DECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
branch_no_4:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(var_order);
tmp_assattr_value_5 = var_order;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 174;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__last_char_order, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx$$$function__3_feed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx$$$function__3_feed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx$$$function__3_feed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$jpcntx$$$function__3_feed,
    type_description_1,
    par_self,
    par_byte_str,
    par_num_bytes,
    var_i,
    var_order,
    var_char_len
);


// Release cached frame if used for exception.
if (frame_frame_chardet$jpcntx$$$function__3_feed == cache_frame_frame_chardet$jpcntx$$$function__3_feed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$jpcntx$$$function__3_feed);
    cache_frame_frame_chardet$jpcntx$$$function__3_feed = NULL;
}

assertFrameObject(frame_frame_chardet$jpcntx$$$function__3_feed);

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
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_order);
var_order = NULL;
Py_XDECREF(var_char_len);
var_char_len = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_order);
var_order = NULL;
Py_XDECREF(var_char_len);
var_char_len = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_byte_str);
Py_DECREF(par_byte_str);
CHECK_OBJECT(par_num_bytes);
Py_DECREF(par_num_bytes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_byte_str);
Py_DECREF(par_byte_str);
CHECK_OBJECT(par_num_bytes);
Py_DECREF(par_num_bytes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_chardet$jpcntx$$$function__4_got_enough_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx$$$function__4_got_enough_data;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$jpcntx$$$function__4_got_enough_data = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$jpcntx$$$function__4_got_enough_data)) {
    Py_XDECREF(cache_frame_frame_chardet$jpcntx$$$function__4_got_enough_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$jpcntx$$$function__4_got_enough_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$jpcntx$$$function__4_got_enough_data = MAKE_FUNCTION_FRAME(tstate, code_objects_441ec9d7d9009ba68419a8580e0a655e, module_chardet$jpcntx, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$jpcntx$$$function__4_got_enough_data->m_type_description == NULL);
frame_frame_chardet$jpcntx$$$function__4_got_enough_data = cache_frame_frame_chardet$jpcntx$$$function__4_got_enough_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx$$$function__4_got_enough_data);
assert(Py_REFCNT(frame_frame_chardet$jpcntx$$$function__4_got_enough_data) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__total_rel);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ENOUGH_REL_THRESHOLD);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 177;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx$$$function__4_got_enough_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx$$$function__4_got_enough_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx$$$function__4_got_enough_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$jpcntx$$$function__4_got_enough_data,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$jpcntx$$$function__4_got_enough_data == cache_frame_frame_chardet$jpcntx$$$function__4_got_enough_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$jpcntx$$$function__4_got_enough_data);
    cache_frame_frame_chardet$jpcntx$$$function__4_got_enough_data = NULL;
}

assertFrameObject(frame_frame_chardet$jpcntx$$$function__4_got_enough_data);

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


static PyObject *impl_chardet$jpcntx$$$function__5_get_confidence(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx$$$function__5_get_confidence;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$jpcntx$$$function__5_get_confidence = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$jpcntx$$$function__5_get_confidence)) {
    Py_XDECREF(cache_frame_frame_chardet$jpcntx$$$function__5_get_confidence);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$jpcntx$$$function__5_get_confidence == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$jpcntx$$$function__5_get_confidence = MAKE_FUNCTION_FRAME(tstate, code_objects_8f8aa4acc56b8f212278db94003a5f5a, module_chardet$jpcntx, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$jpcntx$$$function__5_get_confidence->m_type_description == NULL);
frame_frame_chardet$jpcntx$$$function__5_get_confidence = cache_frame_frame_chardet$jpcntx$$$function__5_get_confidence;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx$$$function__5_get_confidence);
assert(Py_REFCNT(frame_frame_chardet$jpcntx$$$function__5_get_confidence) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__total_rel);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MINIMUM_DATA_THRESHOLD);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 181;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "o";
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
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__total_rel);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__rel_sample);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 182;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 182;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__total_rel);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 182;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_DONT_KNOW);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx$$$function__5_get_confidence, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx$$$function__5_get_confidence->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx$$$function__5_get_confidence, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$jpcntx$$$function__5_get_confidence,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$jpcntx$$$function__5_get_confidence == cache_frame_frame_chardet$jpcntx$$$function__5_get_confidence) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$jpcntx$$$function__5_get_confidence);
    cache_frame_frame_chardet$jpcntx$$$function__5_get_confidence = NULL;
}

assertFrameObject(frame_frame_chardet$jpcntx$$$function__5_get_confidence);

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


static PyObject *impl_chardet$jpcntx$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$jpcntx$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$jpcntx$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_chardet$jpcntx$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$jpcntx$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$jpcntx$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c21b0ee64102c91bde438fcfdf179a83, module_chardet$jpcntx, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$jpcntx$$$function__7___init__->m_type_description == NULL);
frame_frame_chardet$jpcntx$$$function__7___init__ = cache_frame_frame_chardet$jpcntx$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx$$$function__7___init__);
assert(Py_REFCNT(frame_frame_chardet$jpcntx$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_chardet$jpcntx, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_chardet$jpcntx$$$function__7___init__->m_frame.f_lineno = 191;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = mod_consts.const_str_plain_SHIFT_JIS;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__charset_name, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$jpcntx$$$function__7___init__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_chardet$jpcntx$$$function__7___init__ == cache_frame_frame_chardet$jpcntx$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$jpcntx$$$function__7___init__);
    cache_frame_frame_chardet$jpcntx$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_chardet$jpcntx$$$function__7___init__);

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


static PyObject *impl_chardet$jpcntx$$$function__8_charset_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx$$$function__8_charset_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$jpcntx$$$function__8_charset_name = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_chardet$jpcntx$$$function__8_charset_name)) {
    Py_XDECREF(cache_frame_frame_chardet$jpcntx$$$function__8_charset_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$jpcntx$$$function__8_charset_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$jpcntx$$$function__8_charset_name = MAKE_FUNCTION_FRAME(tstate, code_objects_41b92ac3840875803d6317043ac22472, module_chardet$jpcntx, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$jpcntx$$$function__8_charset_name->m_type_description == NULL);
frame_frame_chardet$jpcntx$$$function__8_charset_name = cache_frame_frame_chardet$jpcntx$$$function__8_charset_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx$$$function__8_charset_name);
assert(Py_REFCNT(frame_frame_chardet$jpcntx$$$function__8_charset_name) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__charset_name);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx$$$function__8_charset_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx$$$function__8_charset_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx$$$function__8_charset_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$jpcntx$$$function__8_charset_name,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_chardet$jpcntx$$$function__8_charset_name == cache_frame_frame_chardet$jpcntx$$$function__8_charset_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$jpcntx$$$function__8_charset_name);
    cache_frame_frame_chardet$jpcntx$$$function__8_charset_name = NULL;
}

assertFrameObject(frame_frame_chardet$jpcntx$$$function__8_charset_name);

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


static PyObject *impl_chardet$jpcntx$$$function__9_get_order(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_byte_str = python_pars[1];
PyObject *var_first_char = NULL;
PyObject *var_char_len = NULL;
PyObject *var_second_char = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
PyObject *tmp_comparison_chain_3__comparison_result = NULL;
PyObject *tmp_comparison_chain_3__operand_2 = NULL;
PyObject *tmp_comparison_chain_4__comparison_result = NULL;
PyObject *tmp_comparison_chain_4__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx$$$function__9_get_order;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$jpcntx$$$function__9_get_order = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$jpcntx$$$function__9_get_order)) {
    Py_XDECREF(cache_frame_frame_chardet$jpcntx$$$function__9_get_order);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$jpcntx$$$function__9_get_order == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$jpcntx$$$function__9_get_order = MAKE_FUNCTION_FRAME(tstate, code_objects_7de9e4a644a50ac5808a1ebc3585223a, module_chardet$jpcntx, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$jpcntx$$$function__9_get_order->m_type_description == NULL);
frame_frame_chardet$jpcntx$$$function__9_get_order = cache_frame_frame_chardet$jpcntx$$$function__9_get_order;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx$$$function__9_get_order);
assert(Py_REFCNT(frame_frame_chardet$jpcntx$$$function__9_get_order) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_byte_str);
tmp_operand_value_1 = par_byte_str;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
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
tmp_return_value = mod_consts.const_tuple_int_neg_1_int_pos_1_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_byte_str);
tmp_expression_value_1 = par_byte_str;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_first_char == NULL);
var_first_char = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
PyObject *tmp_outline_return_value_2;
int tmp_truth_name_2;
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(var_first_char);
tmp_assign_source_2 = var_first_char;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_2);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_int_pos_129;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_3 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_3;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooo";
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
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_2;
branch_no_3:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_159;
tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_outline_return_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooo";
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
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 203;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(var_first_char);
tmp_assign_source_4 = var_first_char;
assert(tmp_comparison_chain_2__operand_2 == NULL);
Py_INCREF(tmp_assign_source_4);
tmp_comparison_chain_2__operand_2 = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = mod_consts.const_int_pos_224;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_3 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_5 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_comparison_chain_2__comparison_result == NULL);
tmp_comparison_chain_2__comparison_result = tmp_assign_source_5;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooo";
    goto try_except_handler_3;
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
tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_outline_return_value_2);
goto try_return_handler_3;
branch_no_4:;
{
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_4 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_252;
tmp_outline_return_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_outline_return_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooo";
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
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_2);

exception_lineno = 203;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = mod_consts.const_int_pos_2;
assert(var_char_len == NULL);
Py_INCREF(tmp_assign_source_6);
var_char_len = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_5;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_outline_return_value_3;
int tmp_truth_name_3;
CHECK_OBJECT(var_first_char);
tmp_cmp_expr_left_5 = var_first_char;
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_135;
tmp_or_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(var_first_char);
tmp_assign_source_7 = var_first_char;
assert(tmp_comparison_chain_3__operand_2 == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_comparison_chain_3__operand_2 = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = mod_consts.const_int_pos_250;
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
tmp_cmp_expr_right_6 = tmp_comparison_chain_3__operand_2;
tmp_assign_source_8 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(tmp_comparison_chain_3__comparison_result == NULL);
tmp_comparison_chain_3__comparison_result = tmp_assign_source_8;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
tmp_operand_value_4 = tmp_comparison_chain_3__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
tmp_outline_return_value_3 = tmp_comparison_chain_3__comparison_result;
Py_INCREF(tmp_outline_return_value_3);
goto try_return_handler_4;
branch_no_6:;
{
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
tmp_cmp_expr_left_7 = tmp_comparison_chain_3__operand_2;
tmp_cmp_expr_right_7 = mod_consts.const_int_pos_252;
tmp_outline_return_value_3 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_outline_return_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
Py_DECREF(tmp_comparison_chain_3__operand_2);
tmp_comparison_chain_3__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
Py_DECREF(tmp_comparison_chain_3__comparison_result);
tmp_comparison_chain_3__comparison_result = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
Py_DECREF(tmp_comparison_chain_3__operand_2);
tmp_comparison_chain_3__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_3__comparison_result);
tmp_comparison_chain_3__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_outline_return_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_3);

exception_lineno = 205;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
tmp_condition_result_5 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_5 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = mod_consts.const_str_plain_CP932;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__charset_name, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_5:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = const_int_pos_1;
assert(var_char_len == NULL);
Py_INCREF(tmp_assign_source_9);
var_char_len = tmp_assign_source_9;
}
branch_end_2:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_8;
nuitka_digit tmp_cmp_expr_right_8;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_byte_str);
tmp_len_arg_1 = par_byte_str;
tmp_cmp_expr_left_8 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = 1;
tmp_condition_result_7 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_byte_str);
tmp_expression_value_2 = par_byte_str;
tmp_subscript_value_2 = const_int_pos_1;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_second_char == NULL);
var_second_char = tmp_assign_source_10;
}
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_outline_return_value_4;
int tmp_truth_name_4;
CHECK_OBJECT(var_first_char);
tmp_cmp_expr_left_9 = var_first_char;
tmp_cmp_expr_right_9 = mod_consts.const_int_pos_202;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(var_second_char);
tmp_assign_source_11 = var_second_char;
assert(tmp_comparison_chain_4__operand_2 == NULL);
Py_INCREF(tmp_assign_source_11);
tmp_comparison_chain_4__operand_2 = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
tmp_cmp_expr_left_10 = mod_consts.const_int_pos_159;
CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
tmp_cmp_expr_right_10 = tmp_comparison_chain_4__operand_2;
tmp_assign_source_12 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
assert(tmp_comparison_chain_4__comparison_result == NULL);
tmp_comparison_chain_4__comparison_result = tmp_assign_source_12;
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_5;
CHECK_OBJECT(tmp_comparison_chain_4__comparison_result);
tmp_operand_value_5 = tmp_comparison_chain_4__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_comparison_chain_4__comparison_result);
tmp_outline_return_value_4 = tmp_comparison_chain_4__comparison_result;
Py_INCREF(tmp_outline_return_value_4);
goto try_return_handler_5;
branch_no_9:;
{
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
tmp_cmp_expr_left_11 = tmp_comparison_chain_4__operand_2;
tmp_cmp_expr_right_11 = mod_consts.const_int_pos_241;
tmp_outline_return_value_4 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_outline_return_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
goto try_return_handler_5;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
Py_DECREF(tmp_comparison_chain_4__operand_2);
tmp_comparison_chain_4__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_4__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_4__comparison_result);
Py_DECREF(tmp_comparison_chain_4__comparison_result);
tmp_comparison_chain_4__comparison_result = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
Py_DECREF(tmp_comparison_chain_4__operand_2);
tmp_comparison_chain_4__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_4__comparison_result);
tmp_comparison_chain_4__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_outline_return_value_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_4);

exception_lineno = 213;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
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
PyObject *tmp_tuple_element_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_second_char);
tmp_sub_expr_left_1 = var_second_char;
tmp_sub_expr_right_1 = mod_consts.const_int_pos_159;
tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_char_len);
tmp_tuple_element_1 = var_char_len;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto frame_return_exit_1;
}
branch_no_8:;
branch_no_7:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx$$$function__9_get_order, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx$$$function__9_get_order->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx$$$function__9_get_order, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$jpcntx$$$function__9_get_order,
    type_description_1,
    par_self,
    par_byte_str,
    var_first_char,
    var_char_len,
    var_second_char
);


// Release cached frame if used for exception.
if (frame_frame_chardet$jpcntx$$$function__9_get_order == cache_frame_frame_chardet$jpcntx$$$function__9_get_order) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$jpcntx$$$function__9_get_order);
    cache_frame_frame_chardet$jpcntx$$$function__9_get_order = NULL;
}

assertFrameObject(frame_frame_chardet$jpcntx$$$function__9_get_order);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = const_int_neg_1;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_char_len);
tmp_tuple_element_2 = var_char_len;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_first_char);
var_first_char = NULL;
Py_XDECREF(var_char_len);
var_char_len = NULL;
Py_XDECREF(var_second_char);
var_second_char = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_first_char);
var_first_char = NULL;
Py_XDECREF(var_char_len);
var_char_len = NULL;
Py_XDECREF(var_second_char);
var_second_char = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_byte_str);
Py_DECREF(par_byte_str);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_byte_str);
Py_DECREF(par_byte_str);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_chardet$jpcntx$$$function__10_get_order(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_byte_str = python_pars[1];
PyObject *var_first_char = NULL;
PyObject *var_char_len = NULL;
PyObject *var_second_char = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx$$$function__10_get_order;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_chardet$jpcntx$$$function__10_get_order = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_chardet$jpcntx$$$function__10_get_order)) {
    Py_XDECREF(cache_frame_frame_chardet$jpcntx$$$function__10_get_order);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_chardet$jpcntx$$$function__10_get_order == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_chardet$jpcntx$$$function__10_get_order = MAKE_FUNCTION_FRAME(tstate, code_objects_342f2076b45a495985fc297792b1464b, module_chardet$jpcntx, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_chardet$jpcntx$$$function__10_get_order->m_type_description == NULL);
frame_frame_chardet$jpcntx$$$function__10_get_order = cache_frame_frame_chardet$jpcntx$$$function__10_get_order;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx$$$function__10_get_order);
assert(Py_REFCNT(frame_frame_chardet$jpcntx$$$function__10_get_order) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_byte_str);
tmp_operand_value_1 = par_byte_str;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
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
tmp_return_value = mod_consts.const_tuple_int_neg_1_int_pos_1_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_byte_str);
tmp_expression_value_1 = par_byte_str;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_first_char == NULL);
var_first_char = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_first_char);
tmp_cmp_expr_left_1 = var_first_char;
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_142;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(var_first_char);
tmp_assign_source_2 = var_first_char;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_2);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_int_pos_161;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_2 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_3 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_3;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooo";
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
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_2;
branch_no_3:;
{
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_3 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_254;
tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_outline_return_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooo";
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
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 225;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = mod_consts.const_int_pos_2;
assert(var_char_len == NULL);
Py_INCREF(tmp_assign_source_4);
var_char_len = tmp_assign_source_4;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_first_char);
tmp_cmp_expr_left_4 = var_first_char;
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_143;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_int_pos_3;
assert(var_char_len == NULL);
Py_INCREF(tmp_assign_source_5);
var_char_len = tmp_assign_source_5;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = const_int_pos_1;
assert(var_char_len == NULL);
Py_INCREF(tmp_assign_source_6);
var_char_len = tmp_assign_source_6;
}
branch_end_4:;
branch_end_2:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
nuitka_digit tmp_cmp_expr_right_5;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_byte_str);
tmp_len_arg_1 = par_byte_str;
tmp_cmp_expr_left_5 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = 1;
tmp_condition_result_5 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_byte_str);
tmp_expression_value_2 = par_byte_str;
tmp_subscript_value_2 = const_int_pos_1;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_second_char == NULL);
var_second_char = tmp_assign_source_7;
}
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_outline_return_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_first_char);
tmp_cmp_expr_left_6 = var_first_char;
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_164;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(var_second_char);
tmp_assign_source_8 = var_second_char;
assert(tmp_comparison_chain_2__operand_2 == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_comparison_chain_2__operand_2 = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = mod_consts.const_int_pos_161;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_7 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_9 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_comparison_chain_2__comparison_result == NULL);
tmp_comparison_chain_2__comparison_result = tmp_assign_source_9;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooo";
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
tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_outline_return_value_2);
goto try_return_handler_3;
branch_no_7:;
{
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_8 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_8 = mod_consts.const_int_pos_243;
tmp_outline_return_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_outline_return_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooo";
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
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_2);

exception_lineno = 235;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_second_char);
tmp_sub_expr_left_1 = var_second_char;
tmp_sub_expr_right_1 = mod_consts.const_int_pos_161;
tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_char_len);
tmp_tuple_element_1 = var_char_len;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto frame_return_exit_1;
}
branch_no_6:;
branch_no_5:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx$$$function__10_get_order, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx$$$function__10_get_order->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx$$$function__10_get_order, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$jpcntx$$$function__10_get_order,
    type_description_1,
    par_self,
    par_byte_str,
    var_first_char,
    var_char_len,
    var_second_char
);


// Release cached frame if used for exception.
if (frame_frame_chardet$jpcntx$$$function__10_get_order == cache_frame_frame_chardet$jpcntx$$$function__10_get_order) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_chardet$jpcntx$$$function__10_get_order);
    cache_frame_frame_chardet$jpcntx$$$function__10_get_order = NULL;
}

assertFrameObject(frame_frame_chardet$jpcntx$$$function__10_get_order);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = const_int_neg_1;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_char_len);
tmp_tuple_element_2 = var_char_len;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_first_char);
var_first_char = NULL;
Py_XDECREF(var_char_len);
var_char_len = NULL;
Py_XDECREF(var_second_char);
var_second_char = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_first_char);
var_first_char = NULL;
Py_XDECREF(var_char_len);
var_char_len = NULL;
Py_XDECREF(var_second_char);
var_second_char = NULL;
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
CHECK_OBJECT(par_byte_str);
Py_DECREF(par_byte_str);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_byte_str);
Py_DECREF(par_byte_str);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__10_get_order(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$jpcntx$$$function__10_get_order,
        mod_consts.const_str_plain_get_order,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_454cc91cdffdd1487a4dc494efb8bf4c,
#endif
        code_objects_342f2076b45a495985fc297792b1464b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$jpcntx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$jpcntx$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9b52630297eedac62308f45f81ea4075,
#endif
        code_objects_d15f7be1a14a87e47462e2a1ae87088a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$jpcntx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__2_reset(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$jpcntx$$$function__2_reset,
        mod_consts.const_str_plain_reset,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8a5daf8f6da3aef3adcbd2ae8a15fd47,
#endif
        code_objects_7caffac0a400bdce49b6aa6ecc2e1839,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$jpcntx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__3_feed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$jpcntx$$$function__3_feed,
        mod_consts.const_str_plain_feed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_789ab30d197e8fe6c207b489ef559254,
#endif
        code_objects_7b8358159b41203f832eb4c6e8790d23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$jpcntx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__4_got_enough_data(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$jpcntx$$$function__4_got_enough_data,
        mod_consts.const_str_plain_got_enough_data,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f46528c54d535fecd0d9e7e65fa40eb0,
#endif
        code_objects_441ec9d7d9009ba68419a8580e0a655e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$jpcntx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__5_get_confidence(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$jpcntx$$$function__5_get_confidence,
        mod_consts.const_str_plain_get_confidence,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cfd16a8ec0decae98e96bd7c3a079ca1,
#endif
        code_objects_8f8aa4acc56b8f212278db94003a5f5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$jpcntx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__6_get_order(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_get_order,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b67dbbba9f1160ac6a3c859d538f2049,
#endif
        code_objects_8294d752d5c4c7fda58fedde707e192e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$jpcntx,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnGeneric(result, mod_consts.const_tuple_int_neg_1_int_pos_1_tuple);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__7___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$jpcntx$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_48f4c4f67057490d113cf4a4c74b5387,
#endif
        code_objects_c21b0ee64102c91bde438fcfdf179a83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$jpcntx,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__8_charset_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$jpcntx$$$function__8_charset_name,
        mod_consts.const_str_plain_charset_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7065400ab02faddeccf35c317f8460d1,
#endif
        code_objects_41b92ac3840875803d6317043ac22472,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$jpcntx,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$jpcntx$$$function__9_get_order(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$jpcntx$$$function__9_get_order,
        mod_consts.const_str_plain_get_order,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f169fb3a1f692d4c7beb725a93b6e18a,
#endif
        code_objects_7de9e4a644a50ac5808a1ebc3585223a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_chardet$jpcntx,
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

static function_impl_code const function_table_chardet$jpcntx[] = {
impl_chardet$jpcntx$$$function__1___init__,
impl_chardet$jpcntx$$$function__2_reset,
impl_chardet$jpcntx$$$function__3_feed,
impl_chardet$jpcntx$$$function__4_got_enough_data,
impl_chardet$jpcntx$$$function__5_get_confidence,
impl_chardet$jpcntx$$$function__7___init__,
impl_chardet$jpcntx$$$function__8_charset_name,
impl_chardet$jpcntx$$$function__9_get_order,
impl_chardet$jpcntx$$$function__10_get_order,
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

    return Nuitka_Function_GetFunctionState(function, function_table_chardet$jpcntx);
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
        module_chardet$jpcntx,
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
        function_table_chardet$jpcntx,
        sizeof(function_table_chardet$jpcntx) / sizeof(function_impl_code)
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
static char const *module_full_name = "chardet.jpcntx";
#endif

// Internal entry point for module code.
PyObject *module_code_chardet$jpcntx(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("chardet$jpcntx");

    // Store the module for future use.
    module_chardet$jpcntx = module;

    moduledict_chardet$jpcntx = MODULE_DICT(module_chardet$jpcntx);

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
        PRINT_STRING("chardet$jpcntx: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("chardet$jpcntx: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("chardet$jpcntx: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "chardet.jpcntx" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initchardet$jpcntx\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_chardet$jpcntx,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$jpcntx,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$jpcntx,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_chardet$jpcntx,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_chardet$jpcntx,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$jpcntx);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_chardet$jpcntx);
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

        UPDATE_STRING_DICT1(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189 = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx$$$class__2_SJISContextAnalysis_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219 = NULL;
struct Nuitka_FrameObject *frame_frame_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_4;
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
UPDATE_STRING_DICT0(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_chardet$jpcntx = MAKE_MODULE_FRAME(code_objects_81c4edcfb359ed4f873e7fa103b70a0b, module_chardet$jpcntx);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx);
assert(Py_REFCNT(frame_frame_chardet$jpcntx) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_chardet$jpcntx$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_chardet$jpcntx$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_4 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_4);
tmp_import_from_1__module = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_chardet$jpcntx,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_chardet$jpcntx,
        mod_consts.const_str_plain_Tuple,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Tuple);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_chardet$jpcntx,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_7);
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
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_tuple_5fed71172b5ab5fdaa99957ff12e9014_tuple;
UPDATE_STRING_DICT0(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_jp2_char_context, tmp_assign_source_8);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_c6e429a71fde053d8e68cdb70acfd8ce;
tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_JapaneseContextAnalysis;
tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_120;
tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_6;
tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain_NUM_OF_CATEGORY, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_int_neg_1;
tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain_DONT_KNOW, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_100;
tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain_ENOUGH_REL_THRESHOLD, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_1000;
tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain_MAX_REL_THRESHOLD, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_4;
tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain_MINIMUM_DATA_THRESHOLD, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_chardet$jpcntx$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_chardet$jpcntx$$$function__2_reset(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain_reset, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_2 = MAKE_CLASS_FRAME(tstate, code_objects_136be3ebc4c5fae9488a72613a632124, module_chardet$jpcntx, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_2);
assert(Py_REFCNT(frame_frame_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_byte_str;
tmp_expression_value_1 = module_var_accessor_chardet$jpcntx$Union(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_subscript_value_1 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_3 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_num_bytes;
tmp_dict_value_1 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_chardet$jpcntx$$$function__3_feed(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain_feed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);

tmp_dictset_value = MAKE_FUNCTION_chardet$jpcntx$$$function__4_got_enough_data(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain_got_enough_data, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_d81fb943d4ac67fcbc2f42d607a17bb4);

tmp_dictset_value = MAKE_FUNCTION_chardet$jpcntx$$$function__5_get_confidence(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain_get_confidence, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_dict_key_2 = const_str_underscore;
tmp_expression_value_2 = module_var_accessor_chardet$jpcntx$Union(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_2 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_6 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_3 = module_var_accessor_chardet$jpcntx$Tuple(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_subscript_value_3 = mod_consts.const_tuple_type_int_type_int_tuple;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_6);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_dictset_value = MAKE_FUNCTION_chardet$jpcntx$$$function__6_get_order(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain_get_order, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_51ce1d7757eaed8bd35a607597c143aa_tuple;
tmp_result = DICT_SET_ITEM(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_JapaneseContextAnalysis;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_chardet$jpcntx->m_frame.f_lineno = 120;
tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_12;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_11 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_11);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120);
locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120);
locals_chardet$jpcntx$$$class__1_JapaneseContextAnalysis_120 = NULL;
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
exception_lineno = 120;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_JapaneseContextAnalysis, tmp_assign_source_11);
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
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_chardet$jpcntx$JapaneseContextAnalysis(tstate);
assert(!(tmp_tuple_element_2 == NULL));
tmp_assign_source_13 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_13, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_14 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_5;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_4 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_4, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_5;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_5;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_16 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_16;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_5;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_SJISContextAnalysis;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_chardet$jpcntx->m_frame.f_lineno = 189;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_17;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_7 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_7, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_5;
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
PyObject *tmp_expression_value_8;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_1 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_8, tmp_name_value_1, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_5;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_9;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_9 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_5;
}
frame_frame_chardet$jpcntx->m_frame.f_lineno = 189;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 189;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_18;
}
branch_end_1:;
{
PyObject *tmp_assign_source_19;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_c6e429a71fde053d8e68cdb70acfd8ce;
tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_SJISContextAnalysis;
tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_189;
tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
frame_frame_chardet$jpcntx$$$class__2_SJISContextAnalysis_3 = MAKE_CLASS_FRAME(tstate, code_objects_2497ac80dbf942f3d1d7d61cacbff18a, module_chardet$jpcntx, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx$$$class__2_SJISContextAnalysis_3);
assert(Py_REFCNT(frame_frame_chardet$jpcntx$$$class__2_SJISContextAnalysis_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_7;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
tmp_closure_1[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_chardet$jpcntx$$$function__7___init__(tstate, tmp_annotations_7, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_8;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_called_value_3 = PyObject_GetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = PyObject_GetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, mod_consts.const_str_plain_str);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_8 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_args_element_value_1 = MAKE_FUNCTION_chardet$jpcntx$$$function__8_charset_name(tstate, tmp_annotations_8);

frame_frame_chardet$jpcntx$$$class__2_SJISContextAnalysis_3->m_frame.f_lineno = 194;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, mod_consts.const_str_plain_charset_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_9;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_5;
PyObject *tmp_tuple_element_5;
tmp_dict_key_4 = mod_consts.const_str_plain_byte_str;
tmp_expression_value_10 = PyObject_GetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, mod_consts.const_str_plain_Union);

if (tmp_expression_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_10 = module_var_accessor_chardet$jpcntx$Union(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_tuple_element_5 = PyObject_GetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, const_str_plain_bytes);

if (tmp_tuple_element_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_5 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = PyObject_GetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, const_str_plain_bytearray);

if (tmp_tuple_element_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_5 = (PyObject *)&PyByteArray_Type;
        Py_INCREF(tmp_tuple_element_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_5);
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_annotations_9 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_6;
PyObject *tmp_tuple_element_6;
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_expression_value_11 = PyObject_GetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, mod_consts.const_str_plain_Tuple);

if (tmp_expression_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_11 = module_var_accessor_chardet$jpcntx$Tuple(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;
type_description_2 = "c";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_tuple_element_6 = PyObject_GetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, const_str_plain_int);

if (tmp_tuple_element_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_6 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = PyObject_GetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, const_str_plain_int);

if (tmp_tuple_element_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_6 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_6);
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_2 = "c";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_9);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_dictset_value = MAKE_FUNCTION_chardet$jpcntx$$$function__9_get_order(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, mod_consts.const_str_plain_get_order, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx$$$class__2_SJISContextAnalysis_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx$$$class__2_SJISContextAnalysis_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx$$$class__2_SJISContextAnalysis_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$jpcntx$$$class__2_SJISContextAnalysis_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_chardet$jpcntx$$$class__2_SJISContextAnalysis_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__charset_name_tuple;
tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
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


exception_lineno = 189;

    goto try_except_handler_7;
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
tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
branch_no_3:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_7 = mod_consts.const_str_plain_SJISContextAnalysis;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_chardet$jpcntx->m_frame.f_lineno = 189;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_7;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_20);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_19 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189);
locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189);
locals_chardet$jpcntx$$$class__2_SJISContextAnalysis_189 = NULL;
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
exception_lineno = 189;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_SJISContextAnalysis, tmp_assign_source_19);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
PyObject *tmp_assign_source_21;
PyObject *tmp_tuple_element_8;
tmp_tuple_element_8 = module_var_accessor_chardet$jpcntx$JapaneseContextAnalysis(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_JapaneseContextAnalysis);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;

    goto try_except_handler_8;
}
tmp_assign_source_21 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_8);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_22 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_8;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_12 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_7, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_8;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_8;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_24;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_8;
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
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_8;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_EUCJPContextAnalysis;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_chardet$jpcntx->m_frame.f_lineno = 219;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_25;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_15 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_8;
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
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_16;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_16, tmp_name_value_2, tmp_default_value_2);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_8;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_17;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_17 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_8;
}
frame_frame_chardet$jpcntx->m_frame.f_lineno = 219;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 219;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_26;
}
branch_end_4:;
{
PyObject *tmp_assign_source_27;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_c6e429a71fde053d8e68cdb70acfd8ce;
tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_EUCJPContextAnalysis;
tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_219;
tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_10;
}
frame_frame_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_4 = MAKE_CLASS_FRAME(tstate, code_objects_f5a09296f6fcbedb9adaa3953ad05629, module_chardet$jpcntx, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_4);
assert(Py_REFCNT(frame_frame_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_4) == 2);

// Framed code:
{
PyObject *tmp_annotations_10;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_8;
PyObject *tmp_tuple_element_11;
tmp_dict_key_5 = mod_consts.const_str_plain_byte_str;
tmp_expression_value_18 = PyObject_GetItem(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219, mod_consts.const_str_plain_Union);

if (tmp_expression_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_18 = module_var_accessor_chardet$jpcntx$Union(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_tuple_element_11 = PyObject_GetItem(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219, const_str_plain_bytes);

if (tmp_tuple_element_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_11 = (PyObject *)&PyBytes_Type;
        Py_INCREF(tmp_tuple_element_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = PyObject_GetItem(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219, const_str_plain_bytearray);

if (tmp_tuple_element_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_11 = (PyObject *)&PyByteArray_Type;
        Py_INCREF(tmp_tuple_element_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_11);
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_10 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_9;
PyObject *tmp_tuple_element_12;
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_expression_value_19 = PyObject_GetItem(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219, mod_consts.const_str_plain_Tuple);

if (tmp_expression_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_19 = module_var_accessor_chardet$jpcntx$Tuple(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_tuple_element_12 = PyObject_GetItem(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219, const_str_plain_int);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_9, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = PyObject_GetItem(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219, const_str_plain_int);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_12);
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_annotations_10);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;

tmp_dictset_value = MAKE_FUNCTION_chardet$jpcntx$$$function__10_get_order(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219, mod_consts.const_str_plain_get_order, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_4);

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
tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_10;
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


exception_lineno = 219;

    goto try_except_handler_10;
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
tmp_res = PyObject_SetItem(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_10;
}
branch_no_6:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain_EUCJPContextAnalysis;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_chardet$jpcntx->m_frame.f_lineno = 219;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_28;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_27 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219);
locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219);
locals_chardet$jpcntx$$$class__3_EUCJPContextAnalysis_219 = NULL;
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
exception_lineno = 219;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_chardet$jpcntx, (Nuitka_StringObject *)mod_consts.const_str_plain_EUCJPContextAnalysis, tmp_assign_source_27);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$jpcntx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$jpcntx->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$jpcntx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_chardet$jpcntx);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("chardet$jpcntx", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "chardet.jpcntx" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_chardet$jpcntx);
    return module_chardet$jpcntx;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$jpcntx, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("chardet$jpcntx", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

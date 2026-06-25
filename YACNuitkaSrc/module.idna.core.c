/* Generated code for Python module 'idna$core'
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



/* The "module_idna$core" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_idna$core;
PyDictObject *moduledict_idna$core;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_unicodedata;
PyObject *const_str_plain_combining;
PyObject *const_str_digest_a9579d8352df50ff432b8f9429274863;
PyObject *const_str_plain_intranges_contain;
PyObject *const_str_plain_idnadata;
PyObject *const_str_plain_scripts;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_plain_punycode_tuple;
PyObject *const_str_digest_1f1cd3656fdf48e3dae63564a3ad7520;
PyObject *const_int_pos_254;
PyObject *const_int_pos_253;
PyObject *const_str_plain_bidirectional;
PyObject *const_str_plain_IDNABidiError;
PyObject *const_str_digest_93348eee035aac5c7a85526aaf982538;
PyObject *const_tuple_str_plain_R_str_plain_AL_str_plain_AN_tuple;
PyObject *const_str_plain_bidi_label;
PyObject *const_tuple_str_plain_R_str_plain_AL_tuple;
PyObject *const_str_plain_L;
PyObject *const_str_digest_4f129bf8420533b23777b253ab1593af;
PyObject *const_tuple_61eaadcea739aff1e9ea48970339ff28_tuple;
PyObject *const_str_digest_3ef5af4ae23e2a8360157d4c54db0163;
PyObject *const_tuple_str_plain_R_str_plain_AL_str_plain_EN_str_plain_AN_tuple;
PyObject *const_str_plain_NSM;
PyObject *const_tuple_str_plain_AN_str_plain_EN_tuple;
PyObject *const_str_plain_number_type;
PyObject *const_tuple_str_digest_605b58d0c1c5cf938152228b96274f86_tuple;
PyObject *const_tuple_2e59f76dcc959e7e70d3c5ea962e2d91_tuple;
PyObject *const_str_digest_9ec0837ae1c1a4139698102577728ec4;
PyObject *const_tuple_str_plain_L_str_plain_EN_tuple;
PyObject *const_str_plain_valid_ending;
PyObject *const_tuple_str_digest_22cec68a39d14686fae79a3fa6366a55_tuple;
PyObject *const_str_plain_category;
PyObject *const_str_plain_M;
PyObject *const_str_plain_IDNAError;
PyObject *const_tuple_str_digest_06318853b3da8c992fb7d5806a3c32d5_tuple;
PyObject *const_slice_int_pos_2_int_pos_4_none;
PyObject *const_str_digest_85fe97af08c9a213aa891dc673aeaa3e;
PyObject *const_tuple_str_digest_5c0dbcae4d83cdc8477d972936c0108a_tuple;
PyObject *const_str_chr_45;
PyObject *const_tuple_str_digest_5b0c5bdd5678d543134ffa247b29ab90_tuple;
PyObject *const_str_plain_normalize;
PyObject *const_str_plain_NFC;
PyObject *const_tuple_str_digest_fece26b19d490db7c477add484776e83_tuple;
PyObject *const_int_pos_8204;
PyObject *const_str_plain__combining_class;
PyObject *const_str_plain__virama_combining_class;
PyObject *const_str_plain_joining_types;
PyObject *const_int_pos_84;
PyObject *const_tuple_int_pos_76_int_pos_68_tuple;
PyObject *const_tuple_int_pos_82_int_pos_68_tuple;
PyObject *const_int_pos_8205;
PyObject *const_int_pos_183;
PyObject *const_int_pos_108;
PyObject *const_int_pos_885;
PyObject *const_str_plain__is_script;
PyObject *const_str_plain_Greek;
PyObject *const_int_pos_1523;
PyObject *const_int_pos_1524;
PyObject *const_str_plain_Hebrew;
PyObject *const_int_pos_12539;
PyObject *const_str_chr_12539;
PyObject *const_str_plain_Hiragana;
PyObject *const_str_plain_Katakana;
PyObject *const_str_plain_Han;
PyObject *const_int_pos_1632;
PyObject *const_int_pos_1641;
PyObject *const_int_pos_1776;
PyObject *const_int_pos_1785;
PyObject *const_tuple_type_bytes_type_bytearray_tuple;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_tuple_str_digest_3e430cf8094baed334137f742bbbca9c_tuple;
PyObject *const_str_plain_check_nfc;
PyObject *const_str_plain_check_hyphen_ok;
PyObject *const_str_plain_check_initial_combiner;
PyObject *const_str_plain_codepoint_classes;
PyObject *const_str_plain_PVALID;
PyObject *const_str_plain_CONTEXTJ;
PyObject *const_str_plain_valid_contextj;
PyObject *const_str_plain_label;
PyObject *const_str_plain_InvalidCodepointContext;
PyObject *const_str_digest_d46b95a5af3277be22196e328bc37523;
PyObject *const_str_plain__unot;
PyObject *const_str_plain_CONTEXTO;
PyObject *const_str_plain_valid_contexto;
PyObject *const_str_digest_e30bab305c219751248ed2d68f64c1dd;
PyObject *const_str_plain_InvalidCodepoint;
PyObject *const_str_digest_8222f21ac3a06ae183d1adfa38d8c727;
PyObject *const_str_plain_check_bidi;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_plain_ulabel;
PyObject *const_str_plain_valid_label_length;
PyObject *const_tuple_str_digest_788895316fe334f6cdeca564e6cf403f_tuple;
PyObject *const_str_plain_check_label;
PyObject *const_str_plain__alabel_prefix;
PyObject *const_str_plain__punycode;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_digest_0225c5711079fe238181490cb3975dd0_tuple;
PyObject *const_tuple_str_digest_a599fdf6f8305ca3f84e4e0f315cdb94_tuple;
PyObject *const_tuple_str_digest_57eeb014d7bd9923dc7c9e12e8ca339f_tuple;
PyObject *const_str_plain_uts46data;
PyObject *const_tuple_str_plain_uts46data_tuple;
PyObject *const_int_pos_256;
PyObject *const_str_plain_bisect;
PyObject *const_str_plain_bisect_left;
PyObject *const_str_plain_Z;
PyObject *const_int_pos_2;
PyObject *const_str_plain_V;
PyObject *const_str_plain_D;
PyObject *const_str_plain_3;
PyObject *const_str_plain_output;
PyObject *const_str_plain_I;
PyObject *const_str_digest_0f3533c39450b1b80fd1e6a4aa6432c8;
PyObject *const_tuple_str_digest_a21cf6121f718213cb773ef8811e6220_tuple;
PyObject *const_str_plain_uts46_remap;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_plain__unicode_dots_re;
PyObject *const_tuple_str_digest_32d01bb85dbacc8ae6418d5da68c16bd_tuple;
PyObject *const_str_plain_alabel;
PyObject *const_str_plain_result;
PyObject *const_tuple_str_digest_8d1e528d58e56065b2e077de5f0eabe7_tuple;
PyObject *const_bytes_chr_46;
PyObject *const_str_plain_valid_string_length;
PyObject *const_tuple_str_digest_5c38507723994c94ef4f0ca7aa0e0566_tuple;
PyObject *const_tuple_str_digest_349d6d0cb88e0f4ece68f70d028fd5ad_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_tuple_str_plain_idnadata_tuple;
PyObject *const_str_plain_re;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_intranges;
PyObject *const_tuple_str_plain_intranges_contain_tuple;
PyObject *const_int_pos_9;
PyObject *const_bytes_digest_04fa33b5cf88d501cb5810fc66ba4694;
PyObject *const_tuple_str_digest_82627f758675f073cdd0409b4b9ad06a_tuple;
PyObject *const_tuple_type_UnicodeError_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_edeff97c587189785db0603b7785ff30;
PyObject *const_str_digest_49850f3237afd199e7e9492b32721454;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_12;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_8b966b71484004ad4765280b404782ad;
PyObject *const_int_pos_17;
PyObject *const_str_digest_0e8ea4333972bc9aa2d7f9b9ce9f0ef1;
PyObject *const_int_pos_22;
PyObject *const_str_digest_ae1b703d419669a797bc5fa5dc5303ad;
PyObject *const_int_pos_27;
PyObject *const_dict_4d47a5dd3b13c432666ba87ea9bc2f14;
PyObject *const_dict_bea9a6d5931a5319a98fa083185906cf;
PyObject *const_dict_897f9798a723f90452a03ba9faba942e;
PyObject *const_dict_e60f9789bfc2399ececc34c68a490cd2;
PyObject *const_tuple_type_bytes_type_str_tuple;
PyObject *const_str_plain_return;
PyObject *const_str_plain_trailing_dot;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_34a6b8c9b80895acf1a8ba6d0caa01d6;
PyObject *const_dict_738ec846619d43adfba48ba5c4035cb1;
PyObject *const_dict_5fc2ba89ae62647c1eb40749a6d1ad7c;
PyObject *const_dict_78361af86576b652bbee218f92aea3a2;
PyObject *const_dict_7dfd8cbcd1c9387b21c6d6f09a62de97;
PyObject *const_tuple_type_str_type_bytes_type_bytearray_tuple;
PyObject *const_dict_4d75cf5916068f559f931a03f02e1077;
PyObject *const_tuple_true_false_tuple;
PyObject *const_dict_81da4facd9efd36cf55e9e0211cf3bb1;
PyObject *const_tuple_false_false_false_false_tuple;
PyObject *const_str_plain_s;
PyObject *const_str_plain_strict;
PyObject *const_str_plain_uts46;
PyObject *const_str_plain_std3_rules;
PyObject *const_str_plain_transitional;
PyObject *const_tuple_false_false_false_tuple;
PyObject *const_str_digest_b4052fbc7e4f64c7ab54f8e45d335e0f;
PyObject *const_str_digest_33daa0ee5a3c20dd867c73a8b5dea23b;
PyObject *const_tuple_str_plain_cp_str_plain_v_tuple;
PyObject *const_tuple_str_plain_cp_str_plain_script_tuple;
PyObject *const_tuple_str_plain_s_tuple;
PyObject *const_tuple_str_plain_label_str_plain_label_bytes_tuple;
PyObject *const_tuple_2d6d657e6a997442a44dbe07b68562fb_tuple;
PyObject *const_tuple_str_plain_label_tuple;
PyObject *const_tuple_d37be3bbe9f5e32970ad309fea3c270b_tuple;
PyObject *const_tuple_2507614def3988dfb41414cf8878adcb_tuple;
PyObject *const_tuple_a1324ab4edb10018212dbcdbcbfd07ed_tuple;
PyObject *const_tuple_f37930c377bea0b65d6334f7374a5e4d_tuple;
PyObject *const_tuple_32d22ecefb92ae555fb937d3f94fdf81_tuple;
PyObject *const_tuple_4f8a78687a1ef13406ef9a49e811ffa1_tuple;
PyObject *const_tuple_str_plain_label_str_plain_trailing_dot_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[193];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("idna.core"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_unicodedata);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_combining);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9579d8352df50ff432b8f9429274863);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_intranges_contain);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_idnadata);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_scripts);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_punycode_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f1cd3656fdf48e3dae63564a3ad7520);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_int_pos_254);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_int_pos_253);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_bidirectional);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_IDNABidiError);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_93348eee035aac5c7a85526aaf982538);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_R_str_plain_AL_str_plain_AN_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_bidi_label);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_R_str_plain_AL_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_L);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f129bf8420533b23777b253ab1593af);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_61eaadcea739aff1e9ea48970339ff28_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ef5af4ae23e2a8360157d4c54db0163);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_R_str_plain_AL_str_plain_EN_str_plain_AN_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_NSM);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AN_str_plain_EN_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_number_type);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_605b58d0c1c5cf938152228b96274f86_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_2e59f76dcc959e7e70d3c5ea962e2d91_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ec0837ae1c1a4139698102577728ec4);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_L_str_plain_EN_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_valid_ending);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_22cec68a39d14686fae79a3fa6366a55_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_category);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_M);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_IDNAError);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_06318853b3da8c992fb7d5806a3c32d5_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_int_pos_4_none);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_85fe97af08c9a213aa891dc673aeaa3e);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5c0dbcae4d83cdc8477d972936c0108a_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_chr_45);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5b0c5bdd5678d543134ffa247b29ab90_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_NFC);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fece26b19d490db7c477add484776e83_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_int_pos_8204);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__combining_class);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__virama_combining_class);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_joining_types);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_84);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_76_int_pos_68_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_82_int_pos_68_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_int_pos_8205);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_int_pos_183);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_int_pos_108);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_int_pos_885);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_script);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_Greek);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_int_pos_1523);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_int_pos_1524);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Hebrew);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_int_pos_12539);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_chr_12539);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_Hiragana);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_Katakana);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_Han);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_int_pos_1632);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_int_pos_1641);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_pos_1776);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_int_pos_1785);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3e430cf8094baed334137f742bbbca9c_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_nfc);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_hyphen_ok);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_initial_combiner);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_codepoint_classes);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_PVALID);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONTEXTJ);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_valid_contextj);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_label);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidCodepointContext);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_d46b95a5af3277be22196e328bc37523);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__unot);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONTEXTO);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_valid_contexto);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_e30bab305c219751248ed2d68f64c1dd);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidCodepoint);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_8222f21ac3a06ae183d1adfa38d8c727);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_bidi);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_ulabel);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_valid_label_length);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_788895316fe334f6cdeca564e6cf403f_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_label);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain__alabel_prefix);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__punycode);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0225c5711079fe238181490cb3975dd0_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a599fdf6f8305ca3f84e4e0f315cdb94_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_57eeb014d7bd9923dc7c9e12e8ca339f_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_uts46data);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_uts46data_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_bisect);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_left);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_Z);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_V);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_D);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_3);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_output);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_I);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f3533c39450b1b80fd1e6a4aa6432c8);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a21cf6121f718213cb773ef8811e6220_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_uts46_remap);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__unicode_dots_re);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_32d01bb85dbacc8ae6418d5da68c16bd_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_alabel);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_result);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8d1e528d58e56065b2e077de5f0eabe7_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_46);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_valid_string_length);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5c38507723994c94ef4f0ca7aa0e0566_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_349d6d0cb88e0f4ece68f70d028fd5ad_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_idnadata_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_intranges);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_intranges_contain_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_9);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_04fa33b5cf88d501cb5810fc66ba4694);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_82627f758675f073cdd0409b4b9ad06a_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_type_UnicodeError_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_edeff97c587189785db0603b7785ff30);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_49850f3237afd199e7e9492b32721454);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_int_pos_12);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b966b71484004ad4765280b404782ad);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e8ea4333972bc9aa2d7f9b9ce9f0ef1);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_int_pos_22);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae1b703d419669a797bc5fa5dc5303ad);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_int_pos_27);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_4d47a5dd3b13c432666ba87ea9bc2f14);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_dict_bea9a6d5931a5319a98fa083185906cf);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_dict_897f9798a723f90452a03ba9faba942e);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_dict_e60f9789bfc2399ececc34c68a490cd2);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_str_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_trailing_dot);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_34a6b8c9b80895acf1a8ba6d0caa01d6);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_738ec846619d43adfba48ba5c4035cb1);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_5fc2ba89ae62647c1eb40749a6d1ad7c);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_dict_78361af86576b652bbee218f92aea3a2);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_dict_7dfd8cbcd1c9387b21c6d6f09a62de97);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_type_bytearray_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_4d75cf5916068f559f931a03f02e1077);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_true_false_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_dict_81da4facd9efd36cf55e9e0211cf3bb1);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_false_false_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_s);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_strict);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_uts46);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_std3_rules);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_transitional);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_false_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4052fbc7e4f64c7ab54f8e45d335e0f);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_33daa0ee5a3c20dd867c73a8b5dea23b);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cp_str_plain_v_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cp_str_plain_script_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_label_str_plain_label_bytes_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_2d6d657e6a997442a44dbe07b68562fb_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_label_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_d37be3bbe9f5e32970ad309fea3c270b_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_2507614def3988dfb41414cf8878adcb_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_a1324ab4edb10018212dbcdbcbfd07ed_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_f37930c377bea0b65d6334f7374a5e4d_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_32d22ecefb92ae555fb937d3f94fdf81_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_4f8a78687a1ef13406ef9a49e811ffa1_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_label_str_plain_trailing_dot_tuple);
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
void checkModuleConstants_idna$core(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_unicodedata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unicodedata);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_combining));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_combining);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9579d8352df50ff432b8f9429274863));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9579d8352df50ff432b8f9429274863);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_intranges_contain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intranges_contain);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_idnadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_idnadata);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_scripts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scripts);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_punycode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_punycode_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f1cd3656fdf48e3dae63564a3ad7520));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1f1cd3656fdf48e3dae63564a3ad7520);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_int_pos_254));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_254);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_int_pos_253));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_253);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_bidirectional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bidirectional);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_IDNABidiError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IDNABidiError);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_93348eee035aac5c7a85526aaf982538));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93348eee035aac5c7a85526aaf982538);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_R_str_plain_AL_str_plain_AN_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_R_str_plain_AL_str_plain_AN_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_bidi_label));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bidi_label);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_R_str_plain_AL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_R_str_plain_AL_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_L));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_L);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f129bf8420533b23777b253ab1593af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f129bf8420533b23777b253ab1593af);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_61eaadcea739aff1e9ea48970339ff28_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_61eaadcea739aff1e9ea48970339ff28_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ef5af4ae23e2a8360157d4c54db0163));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ef5af4ae23e2a8360157d4c54db0163);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_R_str_plain_AL_str_plain_EN_str_plain_AN_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_R_str_plain_AL_str_plain_EN_str_plain_AN_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_NSM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NSM);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AN_str_plain_EN_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AN_str_plain_EN_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_number_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_number_type);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_605b58d0c1c5cf938152228b96274f86_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_605b58d0c1c5cf938152228b96274f86_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_2e59f76dcc959e7e70d3c5ea962e2d91_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2e59f76dcc959e7e70d3c5ea962e2d91_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ec0837ae1c1a4139698102577728ec4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ec0837ae1c1a4139698102577728ec4);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_L_str_plain_EN_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_L_str_plain_EN_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_valid_ending));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_valid_ending);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_22cec68a39d14686fae79a3fa6366a55_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_22cec68a39d14686fae79a3fa6366a55_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_category));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_category);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_M));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_M);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_IDNAError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IDNAError);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_06318853b3da8c992fb7d5806a3c32d5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_06318853b3da8c992fb7d5806a3c32d5_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_int_pos_4_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_2_int_pos_4_none);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_85fe97af08c9a213aa891dc673aeaa3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85fe97af08c9a213aa891dc673aeaa3e);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5c0dbcae4d83cdc8477d972936c0108a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_5c0dbcae4d83cdc8477d972936c0108a_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_chr_45));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_45);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5b0c5bdd5678d543134ffa247b29ab90_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_5b0c5bdd5678d543134ffa247b29ab90_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_NFC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NFC);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fece26b19d490db7c477add484776e83_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_fece26b19d490db7c477add484776e83_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_int_pos_8204));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8204);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__combining_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__combining_class);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__virama_combining_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__virama_combining_class);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_joining_types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_joining_types);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_84));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_84);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_76_int_pos_68_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_76_int_pos_68_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_82_int_pos_68_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_82_int_pos_68_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_int_pos_8205));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8205);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_int_pos_183));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_183);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_int_pos_108));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_108);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_int_pos_885));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_885);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_script));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_script);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_Greek));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Greek);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_int_pos_1523));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1523);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_int_pos_1524));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1524);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Hebrew));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Hebrew);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_int_pos_12539));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_12539);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_chr_12539));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_12539);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_Hiragana));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Hiragana);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_Katakana));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Katakana);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_Han));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Han);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_int_pos_1632));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1632);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_int_pos_1641));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1641);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_pos_1776));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1776);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_int_pos_1785));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1785);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3e430cf8094baed334137f742bbbca9c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3e430cf8094baed334137f742bbbca9c_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_nfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_nfc);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_hyphen_ok));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_hyphen_ok);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_initial_combiner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_initial_combiner);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_codepoint_classes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_codepoint_classes);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_PVALID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PVALID);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONTEXTJ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CONTEXTJ);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_valid_contextj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_valid_contextj);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_label));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_label);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidCodepointContext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidCodepointContext);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_d46b95a5af3277be22196e328bc37523));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d46b95a5af3277be22196e328bc37523);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__unot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unot);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONTEXTO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CONTEXTO);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_valid_contexto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_valid_contexto);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_e30bab305c219751248ed2d68f64c1dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e30bab305c219751248ed2d68f64c1dd);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidCodepoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidCodepoint);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_8222f21ac3a06ae183d1adfa38d8c727));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8222f21ac3a06ae183d1adfa38d8c727);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_bidi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_bidi);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_ulabel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ulabel);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_valid_label_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_valid_label_length);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_788895316fe334f6cdeca564e6cf403f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_788895316fe334f6cdeca564e6cf403f_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_label));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_label);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain__alabel_prefix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__alabel_prefix);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__punycode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__punycode);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0225c5711079fe238181490cb3975dd0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_0225c5711079fe238181490cb3975dd0_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a599fdf6f8305ca3f84e4e0f315cdb94_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a599fdf6f8305ca3f84e4e0f315cdb94_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_57eeb014d7bd9923dc7c9e12e8ca339f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_57eeb014d7bd9923dc7c9e12e8ca339f_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_uts46data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uts46data);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_uts46data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_uts46data_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_int_pos_256));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_256);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_bisect));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bisect);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_left));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bisect_left);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_Z));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Z);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_V));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_V);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_D));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_D);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_3);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_output));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_output);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_I));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_I);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f3533c39450b1b80fd1e6a4aa6432c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0f3533c39450b1b80fd1e6a4aa6432c8);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a21cf6121f718213cb773ef8811e6220_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a21cf6121f718213cb773ef8811e6220_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_uts46_remap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uts46_remap);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__unicode_dots_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unicode_dots_re);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_32d01bb85dbacc8ae6418d5da68c16bd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_32d01bb85dbacc8ae6418d5da68c16bd_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_alabel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_alabel);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8d1e528d58e56065b2e077de5f0eabe7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8d1e528d58e56065b2e077de5f0eabe7_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_46));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_chr_46);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_valid_string_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_valid_string_length);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5c38507723994c94ef4f0ca7aa0e0566_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_5c38507723994c94ef4f0ca7aa0e0566_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_349d6d0cb88e0f4ece68f70d028fd5ad_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_349d6d0cb88e0f4ece68f70d028fd5ad_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_idnadata_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_idnadata_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_intranges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intranges);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_intranges_contain_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_intranges_contain_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_9));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_9);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_04fa33b5cf88d501cb5810fc66ba4694));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_04fa33b5cf88d501cb5810fc66ba4694);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_82627f758675f073cdd0409b4b9ad06a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_82627f758675f073cdd0409b4b9ad06a_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_type_UnicodeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_UnicodeError_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_edeff97c587189785db0603b7785ff30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edeff97c587189785db0603b7785ff30);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_49850f3237afd199e7e9492b32721454));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_49850f3237afd199e7e9492b32721454);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_int_pos_12));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_12);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b966b71484004ad4765280b404782ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b966b71484004ad4765280b404782ad);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_int_pos_17));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_17);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e8ea4333972bc9aa2d7f9b9ce9f0ef1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e8ea4333972bc9aa2d7f9b9ce9f0ef1);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_int_pos_22));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_22);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae1b703d419669a797bc5fa5dc5303ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae1b703d419669a797bc5fa5dc5303ad);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_int_pos_27));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_27);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_4d47a5dd3b13c432666ba87ea9bc2f14));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4d47a5dd3b13c432666ba87ea9bc2f14);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_dict_bea9a6d5931a5319a98fa083185906cf));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bea9a6d5931a5319a98fa083185906cf);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_dict_897f9798a723f90452a03ba9faba942e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_897f9798a723f90452a03ba9faba942e);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_dict_e60f9789bfc2399ececc34c68a490cd2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e60f9789bfc2399ececc34c68a490cd2);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_str_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_trailing_dot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trailing_dot);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_34a6b8c9b80895acf1a8ba6d0caa01d6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_34a6b8c9b80895acf1a8ba6d0caa01d6);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_738ec846619d43adfba48ba5c4035cb1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_738ec846619d43adfba48ba5c4035cb1);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_5fc2ba89ae62647c1eb40749a6d1ad7c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5fc2ba89ae62647c1eb40749a6d1ad7c);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_dict_78361af86576b652bbee218f92aea3a2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_78361af86576b652bbee218f92aea3a2);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_dict_7dfd8cbcd1c9387b21c6d6f09a62de97));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7dfd8cbcd1c9387b21c6d6f09a62de97);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_type_bytearray_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_type_bytes_type_bytearray_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_4d75cf5916068f559f931a03f02e1077));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4d75cf5916068f559f931a03f02e1077);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_true_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_false_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_dict_81da4facd9efd36cf55e9e0211cf3bb1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_81da4facd9efd36cf55e9e0211cf3bb1);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_false_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_false_false_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_s));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_s);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_strict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strict);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_uts46));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uts46);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_std3_rules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_std3_rules);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_transitional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transitional);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_false_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4052fbc7e4f64c7ab54f8e45d335e0f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4052fbc7e4f64c7ab54f8e45d335e0f);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_33daa0ee5a3c20dd867c73a8b5dea23b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33daa0ee5a3c20dd867c73a8b5dea23b);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cp_str_plain_v_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cp_str_plain_v_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cp_str_plain_script_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cp_str_plain_script_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_s_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_label_str_plain_label_bytes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_label_str_plain_label_bytes_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_2d6d657e6a997442a44dbe07b68562fb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2d6d657e6a997442a44dbe07b68562fb_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_label_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_label_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_d37be3bbe9f5e32970ad309fea3c270b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d37be3bbe9f5e32970ad309fea3c270b_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_2507614def3988dfb41414cf8878adcb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2507614def3988dfb41414cf8878adcb_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_a1324ab4edb10018212dbcdbcbfd07ed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a1324ab4edb10018212dbcdbcbfd07ed_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_f37930c377bea0b65d6334f7374a5e4d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f37930c377bea0b65d6334f7374a5e4d_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_32d22ecefb92ae555fb937d3f94fdf81_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_32d22ecefb92ae555fb937d3f94fdf81_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_4f8a78687a1ef13406ef9a49e811ffa1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4f8a78687a1ef13406ef9a49e811ffa1_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_label_str_plain_trailing_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_label_str_plain_trailing_dot_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 30
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
static PyObject *module_var_accessor_idna$core$IDNABidiError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_IDNABidiError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IDNABidiError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IDNABidiError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IDNABidiError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IDNABidiError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_IDNABidiError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_IDNABidiError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IDNABidiError);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$IDNAError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_IDNAError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IDNAError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IDNAError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IDNAError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IDNAError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_IDNAError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_IDNAError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IDNAError);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$InvalidCodepoint(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidCodepoint);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidCodepoint);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidCodepoint, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidCodepoint);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidCodepoint, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidCodepoint);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidCodepoint);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidCodepoint);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$InvalidCodepointContext(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidCodepointContext);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidCodepointContext);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidCodepointContext, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidCodepointContext);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidCodepointContext, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidCodepointContext);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidCodepointContext);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidCodepointContext);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$_alabel_prefix(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__alabel_prefix);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__alabel_prefix);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__alabel_prefix, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__alabel_prefix);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__alabel_prefix, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__alabel_prefix);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__alabel_prefix);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__alabel_prefix);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$_combining_class(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__combining_class);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__combining_class);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__combining_class, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__combining_class);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__combining_class, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__combining_class);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__combining_class);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__combining_class);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$_is_script(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__is_script);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_script);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_script, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_script);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_script, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__is_script);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__is_script);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_script);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$_punycode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__punycode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__punycode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__punycode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__punycode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__punycode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__punycode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__punycode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__punycode);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$_unicode_dots_re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__unicode_dots_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unicode_dots_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unicode_dots_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unicode_dots_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unicode_dots_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__unicode_dots_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__unicode_dots_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unicode_dots_re);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$_unot(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__unot);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unot);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unot, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unot);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unot, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__unot);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__unot);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unot);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$_virama_combining_class(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__virama_combining_class);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__virama_combining_class);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__virama_combining_class, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__virama_combining_class);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__virama_combining_class, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__virama_combining_class);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__virama_combining_class);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__virama_combining_class);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$alabel(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_alabel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_alabel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_alabel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_alabel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_alabel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_alabel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_alabel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_alabel);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$bisect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_bisect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_bisect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_bisect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_bisect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_bisect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_bisect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_bisect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_bisect);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$check_bidi(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_bidi);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_bidi);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_bidi, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_bidi);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_bidi, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_bidi);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_bidi);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_check_bidi);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$check_hyphen_ok(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_hyphen_ok);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_hyphen_ok);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_hyphen_ok, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_hyphen_ok);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_hyphen_ok, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_hyphen_ok);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_hyphen_ok);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_check_hyphen_ok);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$check_initial_combiner(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_initial_combiner);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_initial_combiner);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_initial_combiner, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_initial_combiner);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_initial_combiner, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_initial_combiner);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_initial_combiner);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_check_initial_combiner);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$check_label(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_label);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_label);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_label, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_label);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_label, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_label);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_label);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_check_label);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$check_nfc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_nfc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_nfc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_nfc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_nfc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_nfc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_nfc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_nfc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_check_nfc);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$idnadata(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_idnadata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_idnadata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_idnadata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_idnadata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_idnadata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_idnadata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_idnadata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_idnadata);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$intranges_contain(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_intranges_contain);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_intranges_contain);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_intranges_contain, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_intranges_contain);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_intranges_contain, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_intranges_contain);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_intranges_contain);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_intranges_contain);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$ulabel(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_ulabel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ulabel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ulabel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ulabel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ulabel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_ulabel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_ulabel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ulabel);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$unicodedata(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unicodedata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unicodedata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unicodedata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unicodedata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$uts46_remap(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_uts46_remap);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_uts46_remap);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_uts46_remap, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_uts46_remap);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_uts46_remap, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_uts46_remap);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_uts46_remap);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_uts46_remap);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$valid_contextj(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_contextj);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_valid_contextj);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_valid_contextj, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_valid_contextj);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_valid_contextj, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_contextj);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_contextj);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_contextj);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$valid_contexto(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_contexto);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_valid_contexto);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_valid_contexto, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_valid_contexto);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_valid_contexto, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_contexto);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_contexto);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_contexto);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$valid_label_length(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_label_length);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_valid_label_length);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_valid_label_length, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_valid_label_length);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_valid_label_length, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_label_length);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_label_length);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_label_length);
    }

    return result;
}

static PyObject *module_var_accessor_idna$core$valid_string_length(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_string_length);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_valid_string_length);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_valid_string_length, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_valid_string_length);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_valid_string_length, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_string_length);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_string_length);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_string_length);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1b1371083959875bc5f032f3d62d395f;
static PyCodeObject *code_objects_5396221ae5650beba757fb9d4576c6cf;
static PyCodeObject *code_objects_8091c1a85378db6c04d3617090bb5ae7;
static PyCodeObject *code_objects_f121aae14a484167a992250a5ddb2d8c;
static PyCodeObject *code_objects_651c81aa909a2b0bbc1af8d5b952bfb6;
static PyCodeObject *code_objects_d0e1c38f01593c021d5163101491503e;
static PyCodeObject *code_objects_1105104fa319cc8050e0b513f8de90a0;
static PyCodeObject *code_objects_53b82e525ce64c732247ec4384063d55;
static PyCodeObject *code_objects_5d1f0be220810c41a008203d137cc43f;
static PyCodeObject *code_objects_78141d3d232dfbe5b82b6c0b5c4643a8;
static PyCodeObject *code_objects_e18c6e5dd7d629bfb5d906f6c7744269;
static PyCodeObject *code_objects_f360ad927815833eea1353798a0bd9ba;
static PyCodeObject *code_objects_ee44d936dd64938b2e99fa4bb8f0c282;
static PyCodeObject *code_objects_d982f97fc52ff03d4f2f75be9fa3122e;
static PyCodeObject *code_objects_86bf2b0f5224ce5c8c0cc017b4b73f8b;
static PyCodeObject *code_objects_208f353fc103ba86ed6c2a91f2696c95;
static PyCodeObject *code_objects_f28e1647da292002ac9a26c3aafb49b7;
static PyCodeObject *code_objects_344d11f860de9915f8d5de257cfdf111;
static PyCodeObject *code_objects_e5acf4c585c3b9a489bc744181f6d2aa;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b4052fbc7e4f64c7ab54f8e45d335e0f); CHECK_OBJECT(module_filename_obj);
code_objects_1b1371083959875bc5f032f3d62d395f = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_33daa0ee5a3c20dd867c73a8b5dea23b, mod_consts.const_str_digest_33daa0ee5a3c20dd867c73a8b5dea23b, NULL, NULL, 0, 0, 0);
code_objects_5396221ae5650beba757fb9d4576c6cf = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__combining_class, mod_consts.const_str_plain__combining_class, mod_consts.const_tuple_str_plain_cp_str_plain_v_tuple, NULL, 1, 0, 0);
code_objects_8091c1a85378db6c04d3617090bb5ae7 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__is_script, mod_consts.const_str_plain__is_script, mod_consts.const_tuple_str_plain_cp_str_plain_script_tuple, NULL, 2, 0, 0);
code_objects_f121aae14a484167a992250a5ddb2d8c = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__punycode, mod_consts.const_str_plain__punycode, mod_consts.const_tuple_str_plain_s_tuple, NULL, 1, 0, 0);
code_objects_651c81aa909a2b0bbc1af8d5b952bfb6 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__unot, mod_consts.const_str_plain__unot, mod_consts.const_tuple_str_plain_s_tuple, NULL, 1, 0, 0);
code_objects_d0e1c38f01593c021d5163101491503e = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_alabel, mod_consts.const_str_plain_alabel, mod_consts.const_tuple_str_plain_label_str_plain_label_bytes_tuple, NULL, 1, 0, 0);
code_objects_1105104fa319cc8050e0b513f8de90a0 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_check_bidi, mod_consts.const_str_plain_check_bidi, mod_consts.const_tuple_2d6d657e6a997442a44dbe07b68562fb_tuple, NULL, 2, 0, 0);
code_objects_53b82e525ce64c732247ec4384063d55 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_check_hyphen_ok, mod_consts.const_str_plain_check_hyphen_ok, mod_consts.const_tuple_str_plain_label_tuple, NULL, 1, 0, 0);
code_objects_5d1f0be220810c41a008203d137cc43f = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_check_initial_combiner, mod_consts.const_str_plain_check_initial_combiner, mod_consts.const_tuple_str_plain_label_tuple, NULL, 1, 0, 0);
code_objects_78141d3d232dfbe5b82b6c0b5c4643a8 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_check_label, mod_consts.const_str_plain_check_label, mod_consts.const_tuple_d37be3bbe9f5e32970ad309fea3c270b_tuple, NULL, 1, 0, 0);
code_objects_e18c6e5dd7d629bfb5d906f6c7744269 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_check_nfc, mod_consts.const_str_plain_check_nfc, mod_consts.const_tuple_str_plain_label_tuple, NULL, 1, 0, 0);
code_objects_f360ad927815833eea1353798a0bd9ba = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_decode, mod_consts.const_str_plain_decode, mod_consts.const_tuple_2507614def3988dfb41414cf8878adcb_tuple, NULL, 4, 0, 0);
code_objects_ee44d936dd64938b2e99fa4bb8f0c282 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_encode, mod_consts.const_str_plain_encode, mod_consts.const_tuple_a1324ab4edb10018212dbcdbcbfd07ed_tuple, NULL, 5, 0, 0);
code_objects_d982f97fc52ff03d4f2f75be9fa3122e = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ulabel, mod_consts.const_str_plain_ulabel, mod_consts.const_tuple_str_plain_label_str_plain_label_bytes_tuple, NULL, 1, 0, 0);
code_objects_86bf2b0f5224ce5c8c0cc017b4b73f8b = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_uts46_remap, mod_consts.const_str_plain_uts46_remap, mod_consts.const_tuple_f37930c377bea0b65d6334f7374a5e4d_tuple, NULL, 3, 0, 0);
code_objects_208f353fc103ba86ed6c2a91f2696c95 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_valid_contextj, mod_consts.const_str_plain_valid_contextj, mod_consts.const_tuple_32d22ecefb92ae555fb937d3f94fdf81_tuple, NULL, 2, 0, 0);
code_objects_f28e1647da292002ac9a26c3aafb49b7 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_valid_contexto, mod_consts.const_str_plain_valid_contexto, mod_consts.const_tuple_4f8a78687a1ef13406ef9a49e811ffa1_tuple, NULL, 3, 0, 0);
code_objects_344d11f860de9915f8d5de257cfdf111 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_valid_label_length, mod_consts.const_str_plain_valid_label_length, mod_consts.const_tuple_str_plain_label_tuple, NULL, 1, 0, 0);
code_objects_e5acf4c585c3b9a489bc744181f6d2aa = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_valid_string_length, mod_consts.const_str_plain_valid_string_length, mod_consts.const_tuple_str_plain_label_str_plain_trailing_dot_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_idna$core$$$function__10_check_nfc(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__11_valid_contextj(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__12_valid_contexto(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__13_check_label(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__14_alabel(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__15_ulabel(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__16_uts46_remap(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__17_encode(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__18_decode(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__1__combining_class(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__2__is_script(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__3__punycode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__4__unot(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__5_valid_label_length(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__6_valid_string_length(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__7_check_bidi(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__8_check_initial_combiner(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$core$$$function__9_check_hyphen_ok(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_idna$core$$$function__1__combining_class(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cp = python_pars[0];
PyObject *var_v = NULL;
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__1__combining_class;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__1__combining_class = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__1__combining_class)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__1__combining_class);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__1__combining_class == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__1__combining_class = MAKE_FUNCTION_FRAME(tstate, code_objects_5396221ae5650beba757fb9d4576c6cf, module_idna$core, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__1__combining_class->m_type_description == NULL);
frame_frame_idna$core$$$function__1__combining_class = cache_frame_frame_idna$core$$$function__1__combining_class;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__1__combining_class);
assert(Py_REFCNT(frame_frame_idna$core$$$function__1__combining_class) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_chr_arg_1;
tmp_expression_value_1 = module_var_accessor_idna$core$unicodedata(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_combining);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cp);
tmp_chr_arg_1 = par_cp;
tmp_args_element_value_1 = BUILTIN_CHR(tstate, tmp_chr_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 33;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__1__combining_class->m_frame.f_lineno = 33;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_v == NULL);
var_v = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_v);
tmp_cmp_expr_left_1 = var_v;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
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
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_chr_arg_2;
tmp_expression_value_2 = module_var_accessor_idna$core$unicodedata(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cp);
tmp_chr_arg_2 = par_cp;
tmp_args_element_value_2 = BUILTIN_CHR(tstate, tmp_chr_arg_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__1__combining_class->m_frame.f_lineno = 35;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_a9579d8352df50ff432b8f9429274863;
frame_frame_idna$core$$$function__1__combining_class->m_frame.f_lineno = 36;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 36;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__1__combining_class, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__1__combining_class->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__1__combining_class, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__1__combining_class,
    type_description_1,
    par_cp,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__1__combining_class == cache_frame_frame_idna$core$$$function__1__combining_class) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__1__combining_class);
    cache_frame_frame_idna$core$$$function__1__combining_class = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__1__combining_class);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_v);
tmp_return_value = var_v;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_v);
CHECK_OBJECT(var_v);
Py_DECREF(var_v);
var_v = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_v);
var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cp);
Py_DECREF(par_cp);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cp);
Py_DECREF(par_cp);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__2__is_script(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cp = python_pars[0];
PyObject *par_script = python_pars[1];
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__2__is_script;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__2__is_script = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__2__is_script)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__2__is_script);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__2__is_script == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__2__is_script = MAKE_FUNCTION_FRAME(tstate, code_objects_8091c1a85378db6c04d3617090bb5ae7, module_idna$core, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__2__is_script->m_type_description == NULL);
frame_frame_idna$core$$$function__2__is_script = cache_frame_frame_idna$core$$$function__2__is_script;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__2__is_script);
assert(Py_REFCNT(frame_frame_idna$core$$$function__2__is_script) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_ord_arg_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_idna$core$intranges_contain(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_intranges_contain);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cp);
tmp_ord_arg_1 = par_cp;
tmp_args_element_value_1 = BUILTIN_ORD(tmp_ord_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_idna$core$idnadata(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_idnadata);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_1);

exception_lineno = 40;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_scripts);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 40;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_script);
tmp_subscript_value_1 = par_script;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 40;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__2__is_script->m_frame.f_lineno = 40;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__2__is_script, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__2__is_script->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__2__is_script, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__2__is_script,
    type_description_1,
    par_cp,
    par_script
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__2__is_script == cache_frame_frame_idna$core$$$function__2__is_script) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__2__is_script);
    cache_frame_frame_idna$core$$$function__2__is_script = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__2__is_script);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cp);
Py_DECREF(par_cp);
CHECK_OBJECT(par_script);
Py_DECREF(par_script);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cp);
Py_DECREF(par_cp);
CHECK_OBJECT(par_script);
Py_DECREF(par_script);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__3__punycode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_s = python_pars[0];
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__3__punycode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__3__punycode = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__3__punycode)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__3__punycode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__3__punycode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__3__punycode = MAKE_FUNCTION_FRAME(tstate, code_objects_f121aae14a484167a992250a5ddb2d8c, module_idna$core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__3__punycode->m_type_description == NULL);
frame_frame_idna$core$$$function__3__punycode = cache_frame_frame_idna$core$$$function__3__punycode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__3__punycode);
assert(Py_REFCNT(frame_frame_idna$core$$$function__3__punycode) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_s);
tmp_expression_value_1 = par_s;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__3__punycode->m_frame.f_lineno = 43;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_punycode_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__3__punycode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__3__punycode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__3__punycode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__3__punycode,
    type_description_1,
    par_s
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__3__punycode == cache_frame_frame_idna$core$$$function__3__punycode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__3__punycode);
    cache_frame_frame_idna$core$$$function__3__punycode = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__3__punycode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_s);
Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__4__unot(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_s = python_pars[0];
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__4__unot;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__4__unot = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__4__unot)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__4__unot);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__4__unot == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__4__unot = MAKE_FUNCTION_FRAME(tstate, code_objects_651c81aa909a2b0bbc1af8d5b952bfb6, module_idna$core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__4__unot->m_type_description == NULL);
frame_frame_idna$core$$$function__4__unot = cache_frame_frame_idna$core$$$function__4__unot;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__4__unot);
assert(Py_REFCNT(frame_frame_idna$core$$$function__4__unot) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_1f1cd3656fdf48e3dae63564a3ad7520;
CHECK_OBJECT(par_s);
tmp_kw_call_arg_value_1_1 = par_s;
frame_frame_idna$core$$$function__4__unot->m_frame.f_lineno = 46;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__4__unot, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__4__unot->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__4__unot, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__4__unot,
    type_description_1,
    par_s
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__4__unot == cache_frame_frame_idna$core$$$function__4__unot) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__4__unot);
    cache_frame_frame_idna$core$$$function__4__unot = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__4__unot);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_s);
Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__5_valid_label_length(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_label = python_pars[0];
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__5_valid_label_length;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__5_valid_label_length = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__5_valid_label_length)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__5_valid_label_length);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__5_valid_label_length == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__5_valid_label_length = MAKE_FUNCTION_FRAME(tstate, code_objects_344d11f860de9915f8d5de257cfdf111, module_idna$core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__5_valid_label_length->m_type_description == NULL);
frame_frame_idna$core$$$function__5_valid_label_length = cache_frame_frame_idna$core$$$function__5_valid_label_length;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__5_valid_label_length);
assert(Py_REFCNT(frame_frame_idna$core$$$function__5_valid_label_length) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_label);
tmp_len_arg_1 = par_label;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 63;
tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__5_valid_label_length, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__5_valid_label_length->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__5_valid_label_length, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__5_valid_label_length,
    type_description_1,
    par_label
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__5_valid_label_length == cache_frame_frame_idna$core$$$function__5_valid_label_length) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__5_valid_label_length);
    cache_frame_frame_idna$core$$$function__5_valid_label_length = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__5_valid_label_length);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_label);
Py_DECREF(par_label);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__6_valid_string_length(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_label = python_pars[0];
PyObject *par_trailing_dot = python_pars[1];
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__6_valid_string_length;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__6_valid_string_length = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__6_valid_string_length)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__6_valid_string_length);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__6_valid_string_length == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__6_valid_string_length = MAKE_FUNCTION_FRAME(tstate, code_objects_e5acf4c585c3b9a489bc744181f6d2aa, module_idna$core, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__6_valid_string_length->m_type_description == NULL);
frame_frame_idna$core$$$function__6_valid_string_length = cache_frame_frame_idna$core$$$function__6_valid_string_length;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__6_valid_string_length);
assert(Py_REFCNT(frame_frame_idna$core$$$function__6_valid_string_length) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_label);
tmp_len_arg_1 = par_label;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_trailing_dot);
tmp_truth_name_1 = CHECK_IF_TRUE(par_trailing_dot);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 56;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_254;
goto condexpr_end_1;
condexpr_false_1:;
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_253;
condexpr_end_1:;
tmp_condition_result_1 = RICH_COMPARE_LE_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_condition_result_1 = !tmp_condition_result_1;
if (tmp_condition_result_1 != false) {
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__6_valid_string_length, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__6_valid_string_length->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__6_valid_string_length, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__6_valid_string_length,
    type_description_1,
    par_label,
    par_trailing_dot
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__6_valid_string_length == cache_frame_frame_idna$core$$$function__6_valid_string_length) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__6_valid_string_length);
    cache_frame_frame_idna$core$$$function__6_valid_string_length = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__6_valid_string_length);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
CHECK_OBJECT(par_trailing_dot);
Py_DECREF(par_trailing_dot);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
CHECK_OBJECT(par_trailing_dot);
Py_DECREF(par_trailing_dot);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__7_check_bidi(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_label = python_pars[0];
PyObject *par_check_ltr = python_pars[1];
PyObject *var_bidi_label = NULL;
PyObject *var_idx = NULL;
PyObject *var_cp = NULL;
PyObject *var_direction = NULL;
nuitka_bool var_rtl = NUITKA_BOOL_UNASSIGNED;
PyObject *var_valid_ending = NULL;
PyObject *var_number_type = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__7_check_bidi;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__7_check_bidi = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_False;
assert(var_bidi_label == NULL);
Py_INCREF(tmp_assign_source_1);
var_bidi_label = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__7_check_bidi)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__7_check_bidi);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__7_check_bidi == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__7_check_bidi = MAKE_FUNCTION_FRAME(tstate, code_objects_1105104fa319cc8050e0b513f8de90a0, module_idna$core, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__7_check_bidi->m_type_description == NULL);
frame_frame_idna$core$$$function__7_check_bidi = cache_frame_frame_idna$core$$$function__7_check_bidi;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__7_check_bidi);
assert(Py_REFCNT(frame_frame_idna$core$$$function__7_check_bidi) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_label);
tmp_args_element_value_1 = par_label;
tmp_args_element_value_2 = const_int_pos_1;
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 64;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooboo";
exception_lineno = 64;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooboo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

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



exception_lineno = 64;
type_description_1 = "ooooooboo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "ooooooboo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 64;
type_description_1 = "ooooooboo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_idx;
    var_idx = tmp_assign_source_7;
    Py_INCREF(var_idx);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_cp;
    var_cp = tmp_assign_source_8;
    Py_INCREF(var_cp);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_idna$core$unicodedata(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "ooooooboo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_cp);
tmp_args_element_value_3 = var_cp;
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 65;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_bidirectional, tmp_args_element_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooboo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_direction;
    var_direction = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_direction);
tmp_cmp_expr_left_1 = var_direction;
tmp_cmp_expr_right_1 = const_str_empty;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooboo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
tmp_called_value_2 = module_var_accessor_idna$core$IDNABidiError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNABidiError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_1 = "ooooooboo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_93348eee035aac5c7a85526aaf982538;
CHECK_OBJECT(par_label);
tmp_operand_value_1 = par_label;
tmp_kw_call_arg_value_1_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooboo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_idx);
tmp_kw_call_arg_value_2_1 = var_idx;
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 68;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooboo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 68;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooboo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooboo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 68;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooboo";
goto try_except_handler_2;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_direction);
tmp_cmp_expr_left_2 = var_direction;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_str_plain_R_str_plain_AL_str_plain_AN_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooboo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = Py_True;
{
    PyObject *old = var_bidi_label;
    var_bidi_label = tmp_assign_source_10;
    Py_INCREF(var_bidi_label);
    Py_XDECREF(old);
}

}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooboo";
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
bool tmp_condition_result_3;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_operand_value_3;
if (var_bidi_label == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bidi_label);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}

tmp_operand_value_2 = var_bidi_label;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooboo";
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
CHECK_OBJECT(par_check_ltr);
tmp_operand_value_3 = par_check_ltr;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_idna$core$unicodedata(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_bidirectional);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_expression_value_2 = par_label;
tmp_subscript_value_1 = const_int_0;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 75;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 75;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_direction;
    var_direction = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_direction);
tmp_cmp_expr_left_3 = var_direction;
tmp_cmp_expr_right_3 = mod_consts.const_tuple_str_plain_R_str_plain_AL_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_TRUE;
var_rtl = tmp_assign_source_12;
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_direction);
tmp_cmp_expr_left_4 = var_direction;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_L;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooboo";
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
nuitka_bool tmp_assign_source_13;
tmp_assign_source_13 = NUITKA_BOOL_FALSE;
var_rtl = tmp_assign_source_13;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_operand_value_4;
tmp_called_value_4 = module_var_accessor_idna$core$IDNABidiError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNABidiError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_4f129bf8420533b23777b253ab1593af;
CHECK_OBJECT(par_label);
tmp_operand_value_4 = par_label;
tmp_kw_call_arg_value_1_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 81;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 81;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 81;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooboo";
goto frame_exception_exit_1;
}
branch_end_5:;
branch_end_4:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = Py_False;
assert(var_valid_ending == NULL);
Py_INCREF(tmp_assign_source_14);
var_valid_ending = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = Py_None;
assert(var_number_type == NULL);
Py_INCREF(tmp_assign_source_15);
var_number_type = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_5 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_label);
tmp_args_element_value_7 = par_label;
tmp_args_element_value_8 = const_int_pos_1;
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 85;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_16;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooboo";
exception_lineno = 85;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooboo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "ooooooboo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "ooooooboo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_20;
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



exception_lineno = 85;
type_description_1 = "ooooooboo";
    goto try_except_handler_7;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_21 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_idx;
    var_idx = tmp_assign_source_21;
    Py_INCREF(var_idx);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_22 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_cp;
    var_cp = tmp_assign_source_22;
    Py_INCREF(var_cp);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_9;
tmp_called_instance_2 = module_var_accessor_idna$core$unicodedata(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_cp);
tmp_args_element_value_9 = var_cp;
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 86;
tmp_assign_source_23 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_bidirectional, tmp_args_element_value_9);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_direction;
    var_direction = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
assert(var_rtl != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_6 = var_rtl == NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_direction);
tmp_cmp_expr_left_5 = var_direction;
tmp_cmp_expr_right_5 = mod_consts.const_tuple_61eaadcea739aff1e9ea48970339ff28_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_10;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
tmp_called_value_6 = module_var_accessor_idna$core$IDNABidiError(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNABidiError);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
tmp_kw_call_arg_value_0_3 = mod_consts.const_str_digest_3ef5af4ae23e2a8360157d4c54db0163;
CHECK_OBJECT(var_idx);
tmp_kw_call_arg_value_1_3 = var_idx;
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 91;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
    tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 91;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 91;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooboo";
goto try_except_handler_5;
}
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_direction);
tmp_cmp_expr_left_6 = var_direction;
tmp_cmp_expr_right_6 = mod_consts.const_tuple_str_plain_R_str_plain_AL_str_plain_EN_str_plain_AN_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
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
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = Py_True;
{
    PyObject *old = var_valid_ending;
    var_valid_ending = tmp_assign_source_24;
    Py_INCREF(var_valid_ending);
    Py_XDECREF(old);
}

}
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_direction);
tmp_cmp_expr_left_7 = var_direction;
tmp_cmp_expr_right_7 = mod_consts.const_str_plain_NSM;
tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = Py_False;
{
    PyObject *old = var_valid_ending;
    var_valid_ending = tmp_assign_source_25;
    Py_INCREF(var_valid_ending);
    Py_XDECREF(old);
}

}
branch_no_9:;
branch_end_8:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_direction);
tmp_cmp_expr_left_8 = var_direction;
tmp_cmp_expr_right_8 = mod_consts.const_tuple_str_plain_AN_str_plain_EN_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
tmp_condition_result_10 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_5;
if (var_number_type == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_number_type);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}

tmp_operand_value_5 = var_number_type;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(var_direction);
tmp_assign_source_26 = var_direction;
{
    PyObject *old = var_number_type;
    var_number_type = tmp_assign_source_26;
    Py_INCREF(var_number_type);
    Py_XDECREF(old);
}

}
goto branch_end_11;
branch_no_11:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
if (var_number_type == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_number_type);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}

tmp_cmp_expr_left_9 = var_number_type;
CHECK_OBJECT(var_direction);
tmp_cmp_expr_right_9 = var_direction;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_idna$core$IDNABidiError(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNABidiError);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 103;
tmp_raise_type_input_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_digest_605b58d0c1c5cf938152228b96274f86_tuple);

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooboo";
goto try_except_handler_5;
}
branch_no_12:;
branch_end_11:;
branch_no_10:;
goto branch_end_6;
branch_no_6:;
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_direction);
tmp_cmp_expr_left_10 = var_direction;
tmp_cmp_expr_right_10 = mod_consts.const_tuple_2e59f76dcc959e7e70d3c5ea962e2d91_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_10, tmp_cmp_expr_left_10);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
tmp_condition_result_13 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_raise_type_input_5;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_11;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_arg_value_1_4;
tmp_called_value_8 = module_var_accessor_idna$core$IDNABidiError(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNABidiError);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
tmp_kw_call_arg_value_0_4 = mod_consts.const_str_digest_9ec0837ae1c1a4139698102577728ec4;
CHECK_OBJECT(var_idx);
tmp_kw_call_arg_value_1_4 = var_idx;
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 107;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4};
    tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 107;
tmp_raise_type_input_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_raise_type_input_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_5);
CHECK_OBJECT(tmp_raise_type_input_5);
Py_DECREF(tmp_raise_type_input_5);
if (tmp_raise_type_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 107;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooboo";
goto try_except_handler_5;
}
branch_no_13:;
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(var_direction);
tmp_cmp_expr_left_11 = var_direction;
tmp_cmp_expr_right_11 = mod_consts.const_tuple_str_plain_L_str_plain_EN_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
tmp_condition_result_14 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = Py_True;
{
    PyObject *old = var_valid_ending;
    var_valid_ending = tmp_assign_source_27;
    Py_INCREF(var_valid_ending);
    Py_XDECREF(old);
}

}
goto branch_end_14;
branch_no_14:;
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(var_direction);
tmp_cmp_expr_left_12 = var_direction;
tmp_cmp_expr_right_12 = mod_consts.const_str_plain_NSM;
tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = Py_False;
{
    PyObject *old = var_valid_ending;
    var_valid_ending = tmp_assign_source_28;
    Py_INCREF(var_valid_ending);
    Py_XDECREF(old);
}

}
branch_no_15:;
branch_end_14:;
branch_end_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooboo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_6;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
bool tmp_condition_result_16;
PyObject *tmp_operand_value_6;
if (var_valid_ending == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_valid_ending);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 114;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}

tmp_operand_value_6 = var_valid_ending;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooboo";
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
PyObject *tmp_raise_type_6;
PyObject *tmp_raise_type_input_6;
PyObject *tmp_called_value_9;
tmp_called_value_9 = module_var_accessor_idna$core$IDNABidiError(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNABidiError);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__7_check_bidi->m_frame.f_lineno = 115;
tmp_raise_type_input_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_digest_22cec68a39d14686fae79a3fa6366a55_tuple);

if (tmp_raise_type_input_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_raise_type_6 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_6);
CHECK_OBJECT(tmp_raise_type_input_6);
Py_DECREF(tmp_raise_type_input_6);
if (tmp_raise_type_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 115;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooboo";
goto frame_exception_exit_1;
}
branch_no_16:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__7_check_bidi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__7_check_bidi->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__7_check_bidi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__7_check_bidi,
    type_description_1,
    par_label,
    par_check_ltr,
    var_bidi_label,
    var_idx,
    var_cp,
    var_direction,
    (int)var_rtl,
    var_valid_ending,
    var_number_type
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__7_check_bidi == cache_frame_frame_idna$core$$$function__7_check_bidi) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__7_check_bidi);
    cache_frame_frame_idna$core$$$function__7_check_bidi = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__7_check_bidi);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_bidi_label);
var_bidi_label = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_cp);
var_cp = NULL;
Py_XDECREF(var_direction);
var_direction = NULL;
var_rtl = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_valid_ending);
var_valid_ending = NULL;
Py_XDECREF(var_number_type);
var_number_type = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_bidi_label);
var_bidi_label = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_cp);
var_cp = NULL;
Py_XDECREF(var_direction);
var_direction = NULL;
var_rtl = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_valid_ending);
var_valid_ending = NULL;
Py_XDECREF(var_number_type);
var_number_type = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
CHECK_OBJECT(par_check_ltr);
Py_DECREF(par_check_ltr);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
CHECK_OBJECT(par_check_ltr);
Py_DECREF(par_check_ltr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__8_check_initial_combiner(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_label = python_pars[0];
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__8_check_initial_combiner;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__8_check_initial_combiner = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__8_check_initial_combiner)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__8_check_initial_combiner);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__8_check_initial_combiner == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__8_check_initial_combiner = MAKE_FUNCTION_FRAME(tstate, code_objects_5d1f0be220810c41a008203d137cc43f, module_idna$core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__8_check_initial_combiner->m_type_description == NULL);
frame_frame_idna$core$$$function__8_check_initial_combiner = cache_frame_frame_idna$core$$$function__8_check_initial_combiner;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__8_check_initial_combiner);
assert(Py_REFCNT(frame_frame_idna$core$$$function__8_check_initial_combiner) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_value_2;
tmp_expression_value_2 = module_var_accessor_idna$core$unicodedata(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_category);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_expression_value_3 = par_label;
tmp_subscript_value_1 = const_int_0;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 121;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__8_check_initial_combiner->m_frame.f_lineno = 121;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_0;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_M;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__8_check_initial_combiner->m_frame.f_lineno = 122;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_06318853b3da8c992fb7d5806a3c32d5_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 122;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__8_check_initial_combiner, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__8_check_initial_combiner->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__8_check_initial_combiner, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__8_check_initial_combiner,
    type_description_1,
    par_label
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__8_check_initial_combiner == cache_frame_frame_idna$core$$$function__8_check_initial_combiner) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__8_check_initial_combiner);
    cache_frame_frame_idna$core$$$function__8_check_initial_combiner = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__8_check_initial_combiner);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_label);
Py_DECREF(par_label);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__9_check_hyphen_ok(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_label = python_pars[0];
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__9_check_hyphen_ok;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__9_check_hyphen_ok = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__9_check_hyphen_ok)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__9_check_hyphen_ok);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__9_check_hyphen_ok == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__9_check_hyphen_ok = MAKE_FUNCTION_FRAME(tstate, code_objects_53b82e525ce64c732247ec4384063d55, module_idna$core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__9_check_hyphen_ok->m_type_description == NULL);
frame_frame_idna$core$$$function__9_check_hyphen_ok = cache_frame_frame_idna$core$$$function__9_check_hyphen_ok;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__9_check_hyphen_ok);
assert(Py_REFCNT(frame_frame_idna$core$$$function__9_check_hyphen_ok) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_label);
tmp_expression_value_1 = par_label;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_2_int_pos_4_none;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_85fe97af08c9a213aa891dc673aeaa3e;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__9_check_hyphen_ok->m_frame.f_lineno = 128;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_5c0dbcae4d83cdc8477d972936c0108a_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 128;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_label);
tmp_expression_value_2 = par_label;
tmp_subscript_value_2 = const_int_0;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_chr_45;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_label);
tmp_expression_value_3 = par_label;
tmp_subscript_value_3 = const_int_neg_1;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, -1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_chr_45;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__9_check_hyphen_ok->m_frame.f_lineno = 130;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_5b0c5bdd5678d543134ffa247b29ab90_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 130;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__9_check_hyphen_ok, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__9_check_hyphen_ok->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__9_check_hyphen_ok, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__9_check_hyphen_ok,
    type_description_1,
    par_label
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__9_check_hyphen_ok == cache_frame_frame_idna$core$$$function__9_check_hyphen_ok) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__9_check_hyphen_ok);
    cache_frame_frame_idna$core$$$function__9_check_hyphen_ok = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__9_check_hyphen_ok);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_label);
Py_DECREF(par_label);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__10_check_nfc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_label = python_pars[0];
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__10_check_nfc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__10_check_nfc = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__10_check_nfc)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__10_check_nfc);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__10_check_nfc == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__10_check_nfc = MAKE_FUNCTION_FRAME(tstate, code_objects_e18c6e5dd7d629bfb5d906f6c7744269, module_idna$core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__10_check_nfc->m_type_description == NULL);
frame_frame_idna$core$$$function__10_check_nfc = cache_frame_frame_idna$core$$$function__10_check_nfc;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__10_check_nfc);
assert(Py_REFCNT(frame_frame_idna$core$$$function__10_check_nfc) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_idna$core$unicodedata(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_NFC;
CHECK_OBJECT(par_label);
tmp_args_element_value_2 = par_label;
frame_frame_idna$core$$$function__10_check_nfc->m_frame.f_lineno = 135;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_normalize,
        call_args
    );
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_cmp_expr_right_1 = par_label;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__10_check_nfc->m_frame.f_lineno = 136;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_fece26b19d490db7c477add484776e83_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 136;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__10_check_nfc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__10_check_nfc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__10_check_nfc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__10_check_nfc,
    type_description_1,
    par_label
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__10_check_nfc == cache_frame_frame_idna$core$$$function__10_check_nfc) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__10_check_nfc);
    cache_frame_frame_idna$core$$$function__10_check_nfc = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__10_check_nfc);

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
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_label);
Py_DECREF(par_label);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__11_valid_contextj(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_label = python_pars[0];
PyObject *par_pos = python_pars[1];
PyObject *var_cp_value = NULL;
nuitka_bool var_ok = NUITKA_BOOL_UNASSIGNED;
PyObject *var_i = NULL;
PyObject *var_joining_type = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__11_valid_contextj;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__11_valid_contextj = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__11_valid_contextj)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__11_valid_contextj);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__11_valid_contextj == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__11_valid_contextj = MAKE_FUNCTION_FRAME(tstate, code_objects_208f353fc103ba86ed6c2a91f2696c95, module_idna$core, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__11_valid_contextj->m_type_description == NULL);
frame_frame_idna$core$$$function__11_valid_contextj = cache_frame_frame_idna$core$$$function__11_valid_contextj;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__11_valid_contextj);
assert(Py_REFCNT(frame_frame_idna$core$$$function__11_valid_contextj) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_ord_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_label);
tmp_expression_value_1 = par_label;
CHECK_OBJECT(par_pos);
tmp_subscript_value_1 = par_pos;
tmp_ord_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_ord_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BUILTIN_ORD(tmp_ord_arg_1);
CHECK_OBJECT(tmp_ord_arg_1);
Py_DECREF(tmp_ord_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
assert(var_cp_value == NULL);
var_cp_value = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_cp_value);
tmp_cmp_expr_left_1 = var_cp_value;
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_8204;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooboo";
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_pos);
tmp_cmp_expr_left_2 = par_pos;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooboo";
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
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_ord_arg_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
tmp_called_value_1 = module_var_accessor_idna$core$_combining_class(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__combining_class);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_expression_value_2 = par_label;
CHECK_OBJECT(par_pos);
tmp_sub_expr_left_1 = par_pos;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_subscript_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_ord_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_ord_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BUILTIN_ORD(tmp_ord_arg_2);
CHECK_OBJECT(tmp_ord_arg_2);
Py_DECREF(tmp_ord_arg_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__11_valid_contextj->m_frame.f_lineno = 145;
tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = module_var_accessor_idna$core$_virama_combining_class(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__virama_combining_class);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 145;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
branch_no_2:;
{
nuitka_bool tmp_assign_source_2;
tmp_assign_source_2 = NUITKA_BOOL_FALSE;
var_ok = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_xrange_high_1;
PyObject *tmp_xrange_step_1;
CHECK_OBJECT(par_pos);
tmp_sub_expr_left_2 = par_pos;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_xrange_low_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_xrange_high_1 = const_int_neg_1;
tmp_xrange_step_1 = const_int_neg_1;
tmp_iter_arg_1 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooboo";
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
type_description_1 = "oooboo";
exception_lineno = 149;
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
    PyObject *old = var_i;
    var_i = tmp_assign_source_5;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_ord_arg_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
tmp_expression_value_4 = module_var_accessor_idna$core$idnadata(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_idnadata);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "oooboo";
    goto try_except_handler_2;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_joining_types);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooboo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooboo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_label);
tmp_expression_value_5 = par_label;
CHECK_OBJECT(var_i);
tmp_subscript_value_3 = var_i;
tmp_ord_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_ord_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 150;
type_description_1 = "oooboo";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = BUILTIN_ORD(tmp_ord_arg_3);
CHECK_OBJECT(tmp_ord_arg_3);
Py_DECREF(tmp_ord_arg_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 150;
type_description_1 = "oooboo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__11_valid_contextj->m_frame.f_lineno = 150;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooboo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_joining_type;
    var_joining_type = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_joining_type);
tmp_cmp_expr_left_4 = var_joining_type;
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_84;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooboo";
    goto try_except_handler_2;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
goto loop_start_1;
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_joining_type);
tmp_cmp_expr_left_5 = var_joining_type;
tmp_cmp_expr_right_5 = mod_consts.const_tuple_int_pos_76_int_pos_68_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooboo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_TRUE;
var_ok = tmp_assign_source_7;
}
goto loop_end_1;
goto branch_end_5;
branch_no_5:;
goto loop_end_1;
branch_end_5:;
branch_end_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooboo";
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
bool tmp_condition_result_6;
PyObject *tmp_operand_value_1;
assert(var_ok != NUITKA_BOOL_UNASSIGNED);
tmp_operand_value_1 = (var_ok == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_6:;
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
var_ok = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_xrange_high_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_pos);
tmp_add_expr_left_1 = par_pos;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_xrange_low_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_xrange_low_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_len_arg_1 = par_label;
tmp_xrange_high_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_xrange_high_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_xrange_low_2);

exception_lineno = 163;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_2 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_2, tmp_xrange_high_2);
CHECK_OBJECT(tmp_xrange_low_2);
Py_DECREF(tmp_xrange_low_2);
CHECK_OBJECT(tmp_xrange_high_2);
Py_DECREF(tmp_xrange_high_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_9;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooboo";
exception_lineno = 163;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_11 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_11;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_ord_arg_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
tmp_expression_value_7 = module_var_accessor_idna$core$idnadata(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_idnadata);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_1 = "oooboo";
    goto try_except_handler_3;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_joining_types);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooboo";
    goto try_except_handler_3;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooboo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_label);
tmp_expression_value_8 = par_label;
CHECK_OBJECT(var_i);
tmp_subscript_value_4 = var_i;
tmp_ord_arg_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
if (tmp_ord_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 164;
type_description_1 = "oooboo";
    goto try_except_handler_3;
}
tmp_args_element_value_3 = BUILTIN_ORD(tmp_ord_arg_4);
CHECK_OBJECT(tmp_ord_arg_4);
Py_DECREF(tmp_ord_arg_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 164;
type_description_1 = "oooboo";
    goto try_except_handler_3;
}
frame_frame_idna$core$$$function__11_valid_contextj->m_frame.f_lineno = 164;
tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooboo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_joining_type;
    var_joining_type = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_joining_type);
tmp_cmp_expr_left_6 = var_joining_type;
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_84;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooboo";
    goto try_except_handler_3;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
goto loop_start_2;
goto branch_end_7;
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_joining_type);
tmp_cmp_expr_left_7 = var_joining_type;
tmp_cmp_expr_right_7 = mod_consts.const_tuple_int_pos_82_int_pos_68_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooboo";
    goto try_except_handler_3;
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
nuitka_bool tmp_assign_source_13;
tmp_assign_source_13 = NUITKA_BOOL_TRUE;
var_ok = tmp_assign_source_13;
}
goto loop_end_2;
goto branch_end_8;
branch_no_8:;
goto loop_end_2;
branch_end_8:;
branch_end_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooboo";
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
assert(var_ok != NUITKA_BOOL_UNASSIGNED);
tmp_return_value = (var_ok == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_cp_value);
tmp_cmp_expr_left_8 = var_cp_value;
tmp_cmp_expr_right_8 = mod_consts.const_int_pos_8205;
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooboo";
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
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(par_pos);
tmp_cmp_expr_left_9 = par_pos;
tmp_cmp_expr_right_9 = const_int_0;
tmp_condition_result_10 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooboo";
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
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_ord_arg_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
tmp_called_value_4 = module_var_accessor_idna$core$_combining_class(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__combining_class);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_expression_value_9 = par_label;
CHECK_OBJECT(par_pos);
tmp_sub_expr_left_3 = par_pos;
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_subscript_value_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_subscript_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_ord_arg_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_ord_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = BUILTIN_ORD(tmp_ord_arg_5);
CHECK_OBJECT(tmp_ord_arg_5);
Py_DECREF(tmp_ord_arg_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__11_valid_contextj->m_frame.f_lineno = 177;
tmp_cmp_expr_left_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = module_var_accessor_idna$core$_virama_combining_class(tstate);
if (unlikely(tmp_cmp_expr_right_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__virama_combining_class);
}

if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_10);

exception_lineno = 177;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooboo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_11:;
branch_no_10:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_9;
branch_no_9:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_end_9:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__11_valid_contextj, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__11_valid_contextj->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__11_valid_contextj, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__11_valid_contextj,
    type_description_1,
    par_label,
    par_pos,
    var_cp_value,
    (int)var_ok,
    var_i,
    var_joining_type
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__11_valid_contextj == cache_frame_frame_idna$core$$$function__11_valid_contextj) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__11_valid_contextj);
    cache_frame_frame_idna$core$$$function__11_valid_contextj = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__11_valid_contextj);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cp_value);
CHECK_OBJECT(var_cp_value);
Py_DECREF(var_cp_value);
var_cp_value = NULL;
var_ok = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_joining_type);
var_joining_type = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cp_value);
var_cp_value = NULL;
var_ok = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_joining_type);
var_joining_type = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__12_valid_contexto(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_label = python_pars[0];
PyObject *par_pos = python_pars[1];
PyObject *par_exception = python_pars[2];
PyObject *var_cp_value = NULL;
PyObject *var_cp = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
PyObject *tmp_comparison_chain_3__comparison_result = NULL;
PyObject *tmp_comparison_chain_3__operand_2 = NULL;
PyObject *tmp_comparison_chain_4__comparison_result = NULL;
PyObject *tmp_comparison_chain_4__operand_2 = NULL;
PyObject *tmp_comparison_chain_5__comparison_result = NULL;
PyObject *tmp_comparison_chain_5__operand_2 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__12_valid_contexto;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
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
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__12_valid_contexto = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__12_valid_contexto)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__12_valid_contexto);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__12_valid_contexto == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__12_valid_contexto = MAKE_FUNCTION_FRAME(tstate, code_objects_f28e1647da292002ac9a26c3aafb49b7, module_idna$core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__12_valid_contexto->m_type_description == NULL);
frame_frame_idna$core$$$function__12_valid_contexto = cache_frame_frame_idna$core$$$function__12_valid_contexto;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__12_valid_contexto);
assert(Py_REFCNT(frame_frame_idna$core$$$function__12_valid_contexto) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_ord_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_label);
tmp_expression_value_1 = par_label;
CHECK_OBJECT(par_pos);
tmp_subscript_value_1 = par_pos;
tmp_ord_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_ord_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BUILTIN_ORD(tmp_ord_arg_1);
CHECK_OBJECT(tmp_ord_arg_1);
Py_DECREF(tmp_ord_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_cp_value == NULL);
var_cp_value = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_cp_value);
tmp_cmp_expr_left_1 = var_cp_value;
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_183;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(par_pos);
tmp_assign_source_2 = par_pos;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_2);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = const_int_0;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_2 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_3 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_3;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
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
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_3 = tmp_comparison_chain_1__operand_2;
CHECK_OBJECT(par_label);
tmp_len_arg_1 = par_label;
tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_right_1 = 1;
tmp_cmp_expr_right_3 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
assert(!(tmp_cmp_expr_right_3 == NULL));
tmp_outline_return_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_outline_return_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
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

exception_lineno = 190;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_ord_arg_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_ord_arg_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_label);
tmp_expression_value_2 = par_label;
CHECK_OBJECT(par_pos);
tmp_sub_expr_left_2 = par_pos;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_subscript_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_ord_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_ord_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_4 = BUILTIN_ORD(tmp_ord_arg_2);
CHECK_OBJECT(tmp_ord_arg_2);
Py_DECREF(tmp_ord_arg_2);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_108;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_label);
tmp_expression_value_3 = par_label;
CHECK_OBJECT(par_pos);
tmp_add_expr_left_1 = par_pos;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_subscript_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_ord_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_ord_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_5 = BUILTIN_ORD(tmp_ord_arg_3);
CHECK_OBJECT(tmp_ord_arg_3);
Py_DECREF(tmp_ord_arg_3);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_108;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
branch_no_2:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_cp_value);
tmp_cmp_expr_left_6 = var_cp_value;
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_885;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooo";
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
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_sub_expr_left_3;
nuitka_digit tmp_sub_expr_right_3;
PyObject *tmp_len_arg_2;
PyObject *tmp_cmp_expr_left_8;
nuitka_digit tmp_cmp_expr_right_8;
PyObject *tmp_len_arg_3;
bool tmp_tmp_and_right_value_2_cbool_1;
CHECK_OBJECT(par_pos);
tmp_cmp_expr_left_7 = par_pos;
CHECK_OBJECT(par_label);
tmp_len_arg_2 = par_label;
tmp_sub_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_3 = 1;
tmp_cmp_expr_right_7 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
assert(!(tmp_cmp_expr_right_7 == NULL));
tmp_and_left_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_label);
tmp_len_arg_3 = par_label;
tmp_cmp_expr_left_8 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = 1;
tmp_tmp_and_right_value_2_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
tmp_and_right_value_2 = tmp_tmp_and_right_value_2_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_idna$core$_is_script(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_script);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_expression_value_4 = par_label;
CHECK_OBJECT(par_pos);
tmp_add_expr_left_2 = par_pos;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_subscript_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_subscript_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_Greek;
frame_frame_idna$core$$$function__12_valid_contexto->m_frame.f_lineno = 197;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_6:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_7;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_cp_value);
tmp_cmp_expr_left_9 = var_cp_value;
tmp_cmp_expr_right_9 = mod_consts.const_int_pos_1523;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_cp_value);
tmp_cmp_expr_left_10 = var_cp_value;
tmp_cmp_expr_right_10 = mod_consts.const_int_pos_1524;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_7 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(par_pos);
tmp_cmp_expr_left_11 = par_pos;
tmp_cmp_expr_right_11 = const_int_0;
tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "ooooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_5;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_idna$core$_is_script(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_script);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_expression_value_5 = par_label;
CHECK_OBJECT(par_pos);
tmp_sub_expr_left_4 = par_pos;
tmp_sub_expr_right_4 = const_int_pos_1;
tmp_subscript_value_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
if (tmp_subscript_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_Hebrew;
frame_frame_idna$core$$$function__12_valid_contexto->m_frame.f_lineno = 202;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_8:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(var_cp_value);
tmp_cmp_expr_left_12 = var_cp_value;
tmp_cmp_expr_right_12 = mod_consts.const_int_pos_12539;
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_label);
tmp_iter_arg_1 = par_label;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 206;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_cp;
    var_cp = tmp_assign_source_6;
    Py_INCREF(var_cp);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(var_cp);
tmp_cmp_expr_left_13 = var_cp;
tmp_cmp_expr_right_13 = mod_consts.const_str_chr_12539;
tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
goto loop_start_1;
branch_no_10:;
{
nuitka_bool tmp_condition_result_11;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
int tmp_truth_name_2;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
int tmp_truth_name_3;
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
int tmp_truth_name_4;
tmp_called_value_3 = module_var_accessor_idna$core$_is_script(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_script);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_cp);
tmp_args_element_value_5 = var_cp;
tmp_args_element_value_6 = mod_consts.const_str_plain_Hiragana;
frame_frame_idna$core$$$function__12_valid_contexto->m_frame.f_lineno = 209;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 209;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_called_value_4 = module_var_accessor_idna$core$_is_script(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_script);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_cp);
tmp_args_element_value_7 = var_cp;
tmp_args_element_value_8 = mod_consts.const_str_plain_Katakana;
frame_frame_idna$core$$$function__12_valid_contexto->m_frame.f_lineno = 209;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 209;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_or_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
tmp_called_value_5 = module_var_accessor_idna$core$_is_script(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_script);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_cp);
tmp_args_element_value_9 = var_cp;
tmp_args_element_value_10 = mod_consts.const_str_plain_Han;
frame_frame_idna$core$$$function__12_valid_contexto->m_frame.f_lineno = 209;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 209;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_or_right_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_or_right_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_or_right_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_condition_result_11 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_11 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
branch_no_11:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Return handler code:
try_return_handler_3:;
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
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_9;
branch_no_9:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_outline_return_value_2;
int tmp_truth_name_5;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(var_cp_value);
tmp_assign_source_7 = var_cp_value;
assert(tmp_comparison_chain_2__operand_2 == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_comparison_chain_2__operand_2 = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
tmp_cmp_expr_left_14 = mod_consts.const_int_pos_1632;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_14 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_8 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(tmp_comparison_chain_2__comparison_result == NULL);
tmp_comparison_chain_2__comparison_result = tmp_assign_source_8;
}
{
bool tmp_condition_result_13;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_condition_result_13 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_outline_return_value_2);
goto try_return_handler_4;
branch_no_13:;
{
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_15 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_15 = mod_consts.const_int_pos_1641;
tmp_outline_return_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_outline_return_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
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
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_outline_return_value_2);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_2);

exception_lineno = 213;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_label);
tmp_iter_arg_2 = par_label;
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_9;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 214;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_11 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_cp;
    var_cp = tmp_assign_source_11;
    Py_INCREF(var_cp);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_outline_return_value_3;
int tmp_truth_name_6;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_ord_arg_4;
CHECK_OBJECT(var_cp);
tmp_ord_arg_4 = var_cp;
tmp_assign_source_12 = BUILTIN_ORD(tmp_ord_arg_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_comparison_chain_3__operand_2;
    tmp_comparison_chain_3__operand_2 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
tmp_cmp_expr_left_16 = mod_consts.const_int_pos_1776;
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
tmp_cmp_expr_right_16 = tmp_comparison_chain_3__operand_2;
tmp_assign_source_13 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_comparison_chain_3__comparison_result;
    tmp_comparison_chain_3__comparison_result = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_3__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
tmp_outline_return_value_3 = tmp_comparison_chain_3__comparison_result;
Py_INCREF(tmp_outline_return_value_3);
goto try_return_handler_6;
branch_no_15:;
{
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
tmp_cmp_expr_left_17 = tmp_comparison_chain_3__operand_2;
tmp_cmp_expr_right_17 = mod_consts.const_int_pos_1785;
tmp_outline_return_value_3 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_outline_return_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
goto try_return_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
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
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_3__operand_2);
tmp_comparison_chain_3__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_3__comparison_result);
tmp_comparison_chain_3__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_outline_return_value_3);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_3);

exception_lineno = 215;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_condition_result_14 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_5;
branch_no_14:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
CHECK_OBJECT(tmp_for_loop_2__iter_value);
Py_DECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_12;
branch_no_12:;
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_outline_return_value_4;
int tmp_truth_name_7;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(var_cp_value);
tmp_assign_source_14 = var_cp_value;
assert(tmp_comparison_chain_4__operand_2 == NULL);
Py_INCREF(tmp_assign_source_14);
tmp_comparison_chain_4__operand_2 = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
tmp_cmp_expr_left_18 = mod_consts.const_int_pos_1776;
CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
tmp_cmp_expr_right_18 = tmp_comparison_chain_4__operand_2;
tmp_assign_source_15 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
assert(tmp_comparison_chain_4__comparison_result == NULL);
tmp_comparison_chain_4__comparison_result = tmp_assign_source_15;
}
{
bool tmp_condition_result_17;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(tmp_comparison_chain_4__comparison_result);
tmp_operand_value_4 = tmp_comparison_chain_4__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
tmp_condition_result_17 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
CHECK_OBJECT(tmp_comparison_chain_4__comparison_result);
tmp_outline_return_value_4 = tmp_comparison_chain_4__comparison_result;
Py_INCREF(tmp_outline_return_value_4);
goto try_return_handler_7;
branch_no_17:;
{
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
tmp_cmp_expr_left_19 = tmp_comparison_chain_4__operand_2;
tmp_cmp_expr_right_19 = mod_consts.const_int_pos_1785;
tmp_outline_return_value_4 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
if (tmp_outline_return_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
goto try_return_handler_7;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
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
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
CHECK_OBJECT(tmp_comparison_chain_4__operand_2);
Py_DECREF(tmp_comparison_chain_4__operand_2);
tmp_comparison_chain_4__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_4__comparison_result);
tmp_comparison_chain_4__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_outline_return_value_4);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_4);

exception_lineno = 219;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_16 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(par_label);
tmp_iter_arg_3 = par_label;
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_16;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 220;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_18 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_cp;
    var_cp = tmp_assign_source_18;
    Py_INCREF(var_cp);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_18;
PyObject *tmp_outline_return_value_5;
int tmp_truth_name_8;
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_ord_arg_5;
CHECK_OBJECT(var_cp);
tmp_ord_arg_5 = var_cp;
tmp_assign_source_19 = BUILTIN_ORD(tmp_ord_arg_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_comparison_chain_5__operand_2;
    tmp_comparison_chain_5__operand_2 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
tmp_cmp_expr_left_20 = mod_consts.const_int_pos_1632;
CHECK_OBJECT(tmp_comparison_chain_5__operand_2);
tmp_cmp_expr_right_20 = tmp_comparison_chain_5__operand_2;
tmp_assign_source_20 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_comparison_chain_5__comparison_result;
    tmp_comparison_chain_5__comparison_result = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
CHECK_OBJECT(tmp_comparison_chain_5__comparison_result);
tmp_operand_value_5 = tmp_comparison_chain_5__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
CHECK_OBJECT(tmp_comparison_chain_5__comparison_result);
tmp_outline_return_value_5 = tmp_comparison_chain_5__comparison_result;
Py_INCREF(tmp_outline_return_value_5);
goto try_return_handler_9;
branch_no_19:;
{
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
CHECK_OBJECT(tmp_comparison_chain_5__operand_2);
tmp_cmp_expr_left_21 = tmp_comparison_chain_5__operand_2;
tmp_cmp_expr_right_21 = mod_consts.const_int_pos_1641;
tmp_outline_return_value_5 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
if (tmp_outline_return_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
goto try_return_handler_9;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(tmp_comparison_chain_5__operand_2);
CHECK_OBJECT(tmp_comparison_chain_5__operand_2);
Py_DECREF(tmp_comparison_chain_5__operand_2);
tmp_comparison_chain_5__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_5__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_5__comparison_result);
Py_DECREF(tmp_comparison_chain_5__comparison_result);
tmp_comparison_chain_5__comparison_result = NULL;
goto outline_result_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_5__operand_2);
tmp_comparison_chain_5__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_5__comparison_result);
tmp_comparison_chain_5__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_outline_return_value_5);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_5);

exception_lineno = 221;
type_description_1 = "ooooo";
    goto try_except_handler_8;
}
tmp_condition_result_18 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_8;
branch_no_18:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooo";
    goto try_except_handler_8;
}
goto loop_start_3;
loop_end_3:;
goto try_end_3;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
CHECK_OBJECT(tmp_for_loop_3__iter_value);
Py_DECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_16:;
branch_end_12:;
branch_end_9:;
branch_end_7:;
branch_end_5:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__12_valid_contexto, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__12_valid_contexto->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__12_valid_contexto, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__12_valid_contexto,
    type_description_1,
    par_label,
    par_pos,
    par_exception,
    var_cp_value,
    var_cp
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__12_valid_contexto == cache_frame_frame_idna$core$$$function__12_valid_contexto) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__12_valid_contexto);
    cache_frame_frame_idna$core$$$function__12_valid_contexto = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__12_valid_contexto);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cp_value);
CHECK_OBJECT(var_cp_value);
Py_DECREF(var_cp_value);
var_cp_value = NULL;
Py_XDECREF(var_cp);
var_cp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cp_value);
var_cp_value = NULL;
Py_XDECREF(var_cp);
var_cp = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);
CHECK_OBJECT(par_exception);
Py_DECREF(par_exception);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);
CHECK_OBJECT(par_exception);
Py_DECREF(par_exception);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__13_check_label(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_label = python_pars[0];
PyObject *var_pos = NULL;
PyObject *var_cp = NULL;
PyObject *var_cp_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__13_check_label;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__13_check_label = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__13_check_label)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__13_check_label);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__13_check_label == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__13_check_label = MAKE_FUNCTION_FRAME(tstate, code_objects_78141d3d232dfbe5b82b6c0b5c4643a8, module_idna$core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__13_check_label->m_type_description == NULL);
frame_frame_idna$core$$$function__13_check_label = cache_frame_frame_idna$core$$$function__13_check_label;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__13_check_label);
assert(Py_REFCNT(frame_frame_idna$core$$$function__13_check_label) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_label);
tmp_isinstance_inst_1 = par_label;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooo";
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_label);
tmp_expression_value_1 = par_label;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 230;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_label;
    assert(old != NULL);
    par_label = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_label);
tmp_len_arg_1 = par_label;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 0;
tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 232;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_3e430cf8094baed334137f742bbbca9c_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 232;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_3 = module_var_accessor_idna$core$check_nfc(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_nfc);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_args_element_value_1 = par_label;
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 234;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_4 = module_var_accessor_idna$core$check_hyphen_ok(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_hyphen_ok);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_args_element_value_2 = par_label;
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 235;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_5 = module_var_accessor_idna$core$check_initial_combiner(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_initial_combiner);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_args_element_value_3 = par_label;
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 236;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
tmp_called_value_6 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_label);
tmp_args_element_value_4 = par_label;
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 238;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 238;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

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



exception_lineno = 238;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 238;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_7;
    Py_INCREF(var_pos);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_cp;
    var_cp = tmp_assign_source_8;
    Py_INCREF(var_cp);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_ord_arg_1;
CHECK_OBJECT(var_cp);
tmp_ord_arg_1 = var_cp;
tmp_assign_source_9 = BUILTIN_ORD(tmp_ord_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_cp_value;
    var_cp_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
int tmp_truth_name_1;
tmp_called_value_7 = module_var_accessor_idna$core$intranges_contain(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_intranges_contain);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_cp_value);
tmp_args_element_value_5 = var_cp_value;
tmp_expression_value_3 = module_var_accessor_idna$core$idnadata(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_idnadata);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_codepoint_classes);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_PVALID;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 240;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 240;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
goto loop_start_1;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
int tmp_truth_name_2;
tmp_called_value_8 = module_var_accessor_idna$core$intranges_contain(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_intranges_contain);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_cp_value);
tmp_args_element_value_7 = var_cp_value;
tmp_expression_value_5 = module_var_accessor_idna$core$idnadata(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_idnadata);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_codepoint_classes);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_CONTEXTJ;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 242;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_5);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_5);

exception_lineno = 242;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_9 = module_var_accessor_idna$core$valid_contextj(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_valid_contextj);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_label == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_label);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 243;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_args_element_value_9 = par_label;
CHECK_OBJECT(var_pos);
tmp_args_element_value_10 = var_pos;
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 243;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oooo";
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
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_operand_value_2;
tmp_called_value_10 = module_var_accessor_idna$core$InvalidCodepointContext(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidCodepointContext);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_d46b95a5af3277be22196e328bc37523;
tmp_called_value_11 = module_var_accessor_idna$core$_unot(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unot);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_cp_value);
tmp_args_element_value_12 = var_cp_value;
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 245;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_12);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_pos);
tmp_add_expr_left_1 = var_pos;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_kw_call_arg_value_2_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 245;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_label == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_label);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 245;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_operand_value_2 = par_label;
tmp_kw_call_arg_value_3_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 245;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 244;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
CHECK_OBJECT(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 244;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 244;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto try_except_handler_2;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
int tmp_truth_name_3;
tmp_called_value_12 = module_var_accessor_idna$core$intranges_contain(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_intranges_contain);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_cp_value);
tmp_args_element_value_13 = var_cp_value;
tmp_expression_value_7 = module_var_accessor_idna$core$idnadata(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_idnadata);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_codepoint_classes);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_subscript_value_3 = mod_consts.const_str_plain_CONTEXTO;
tmp_args_element_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 246;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_6);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_6);

exception_lineno = 246;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_13 = module_var_accessor_idna$core$valid_contexto(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_valid_contexto);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_label == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_label);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 247;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_args_element_value_15 = par_label;
CHECK_OBJECT(var_pos);
tmp_args_element_value_16 = var_pos;
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 247;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_17;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_18;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_kw_call_arg_value_3_2;
PyObject *tmp_operand_value_4;
tmp_called_value_14 = module_var_accessor_idna$core$InvalidCodepointContext(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidCodepointContext);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_e30bab305c219751248ed2d68f64c1dd;
tmp_called_value_15 = module_var_accessor_idna$core$_unot(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unot);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_cp_value);
tmp_args_element_value_18 = var_cp_value;
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 248;
tmp_kw_call_arg_value_1_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_18);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_pos);
tmp_add_expr_left_2 = var_pos;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_kw_call_arg_value_2_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_kw_call_arg_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_2);

exception_lineno = 248;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_label == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_2_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_label);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_operand_value_4 = par_label;
tmp_kw_call_arg_value_3_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_kw_call_arg_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_2_2);

exception_lineno = 248;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 248;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2};
    tmp_args_element_value_17 = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
CHECK_OBJECT(tmp_kw_call_arg_value_2_2);
Py_DECREF(tmp_kw_call_arg_value_2_2);
CHECK_OBJECT(tmp_kw_call_arg_value_3_2);
Py_DECREF(tmp_kw_call_arg_value_3_2);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 248;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_17);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 248;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto try_except_handler_2;
}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_19;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_20;
PyObject *tmp_kw_call_arg_value_2_3;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_kw_call_arg_value_3_3;
PyObject *tmp_operand_value_5;
tmp_called_value_16 = module_var_accessor_idna$core$InvalidCodepoint(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidCodepoint);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_3 = mod_consts.const_str_digest_8222f21ac3a06ae183d1adfa38d8c727;
tmp_called_value_17 = module_var_accessor_idna$core$_unot(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unot);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_cp_value);
tmp_args_element_value_20 = var_cp_value;
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 250;
tmp_kw_call_arg_value_1_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_20);
if (tmp_kw_call_arg_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_pos);
tmp_add_expr_left_3 = var_pos;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_kw_call_arg_value_2_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_kw_call_arg_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_3);

exception_lineno = 250;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_label == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_label);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 250;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_operand_value_5 = par_label;
tmp_kw_call_arg_value_3_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_5);
if (tmp_kw_call_arg_value_3_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);

exception_lineno = 250;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 250;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3, tmp_kw_call_arg_value_3_3};
    tmp_args_element_value_19 = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
CHECK_OBJECT(tmp_kw_call_arg_value_2_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);
CHECK_OBJECT(tmp_kw_call_arg_value_3_3);
Py_DECREF(tmp_kw_call_arg_value_3_3);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 250;
tmp_raise_type_input_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 250;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto try_except_handler_2;
}
branch_end_6:;
branch_end_4:;
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooo";
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
PyObject *tmp_called_value_18;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_21;
tmp_called_value_18 = module_var_accessor_idna$core$check_bidi(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_bidi);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (par_label == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_label);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_21 = par_label;
frame_frame_idna$core$$$function__13_check_label->m_frame.f_lineno = 252;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_21);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__13_check_label, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__13_check_label->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__13_check_label, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__13_check_label,
    type_description_1,
    par_label,
    var_pos,
    var_cp,
    var_cp_value
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__13_check_label == cache_frame_frame_idna$core$$$function__13_check_label) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__13_check_label);
    cache_frame_frame_idna$core$$$function__13_check_label = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__13_check_label);

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
Py_XDECREF(par_label);
par_label = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_cp);
var_cp = NULL;
Py_XDECREF(var_cp_value);
var_cp_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_label);
par_label = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_cp);
var_cp = NULL;
Py_XDECREF(var_cp_value);
var_cp_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_idna$core$$$function__14_alabel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_label = python_pars[0];
PyObject *var_label_bytes = NULL;
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__14_alabel;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__14_alabel = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__14_alabel)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__14_alabel);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__14_alabel == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__14_alabel = MAKE_FUNCTION_FRAME(tstate, code_objects_d0e1c38f01593c021d5163101491503e, module_idna$core, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__14_alabel->m_type_description == NULL);
frame_frame_idna$core$$$function__14_alabel = cache_frame_frame_idna$core$$$function__14_alabel;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__14_alabel);
assert(Py_REFCNT(frame_frame_idna$core$$$function__14_alabel) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_label);
tmp_expression_value_1 = par_label;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__14_alabel->m_frame.f_lineno = 257;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(var_label_bytes == NULL);
var_label_bytes = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_idna$core$ulabel(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ulabel);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_label_bytes);
tmp_args_element_value_1 = var_label_bytes;
frame_frame_idna$core$$$function__14_alabel->m_frame.f_lineno = 258;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_idna$core$valid_label_length(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_valid_label_length);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_label_bytes);
tmp_args_element_value_2 = var_label_bytes;
frame_frame_idna$core$$$function__14_alabel->m_frame.f_lineno = 259;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__14_alabel->m_frame.f_lineno = 260;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_788895316fe334f6cdeca564e6cf403f_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 260;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_2;
}
branch_no_1:;
CHECK_OBJECT(var_label_bytes);
tmp_return_value = var_label_bytes;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__14_alabel, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__14_alabel, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_UnicodeEncodeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 256;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_idna$core$$$function__14_alabel->m_frame)) {
        frame_frame_idna$core$$$function__14_alabel->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_no_2:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_5 = module_var_accessor_idna$core$check_label(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_label);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_args_element_value_3 = par_label;
frame_frame_idna$core$$$function__14_alabel->m_frame.f_lineno = 265;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
tmp_add_expr_left_1 = module_var_accessor_idna$core$_alabel_prefix(tstate);
if (unlikely(tmp_add_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__alabel_prefix);
}

if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_idna$core$_punycode(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__punycode);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_args_element_value_4 = par_label;
frame_frame_idna$core$$$function__14_alabel->m_frame.f_lineno = 266;
tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_label_bytes;
    var_label_bytes = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_5;
tmp_called_value_7 = module_var_accessor_idna$core$valid_label_length(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_valid_label_length);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_label_bytes);
tmp_args_element_value_5 = var_label_bytes;
frame_frame_idna$core$$$function__14_alabel->m_frame.f_lineno = 268;
tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oo";
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
PyObject *tmp_called_value_8;
tmp_called_value_8 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__14_alabel->m_frame.f_lineno = 269;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_digest_788895316fe334f6cdeca564e6cf403f_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 269;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__14_alabel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__14_alabel->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__14_alabel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__14_alabel,
    type_description_1,
    par_label,
    var_label_bytes
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__14_alabel == cache_frame_frame_idna$core$$$function__14_alabel) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__14_alabel);
    cache_frame_frame_idna$core$$$function__14_alabel = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__14_alabel);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_label_bytes);
tmp_return_value = var_label_bytes;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_label_bytes);
var_label_bytes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_label_bytes);
var_label_bytes = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_label);
Py_DECREF(par_label);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__15_ulabel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_label = python_pars[0];
PyObject *var_label_bytes = NULL;
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__15_ulabel;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__15_ulabel = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__15_ulabel)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__15_ulabel);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__15_ulabel == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__15_ulabel = MAKE_FUNCTION_FRAME(tstate, code_objects_d982f97fc52ff03d4f2f75be9fa3122e, module_idna$core, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__15_ulabel->m_type_description == NULL);
frame_frame_idna$core$$$function__15_ulabel = cache_frame_frame_idna$core$$$function__15_ulabel;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__15_ulabel);
assert(Py_REFCNT(frame_frame_idna$core$$$function__15_ulabel) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_label);
tmp_isinstance_inst_1 = par_label;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_label);
tmp_expression_value_1 = par_label;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = 277;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(var_label_bytes == NULL);
var_label_bytes = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__15_ulabel, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__15_ulabel, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_UnicodeEncodeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_idna$core$check_label(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_label);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_label);
tmp_args_element_value_1 = par_label;
frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = 279;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
CHECK_OBJECT(par_label);
tmp_return_value = par_label;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 276;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_idna$core$$$function__15_ulabel->m_frame)) {
        frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_2:;
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
try_end_1:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(par_label);
tmp_assign_source_2 = par_label;
assert(var_label_bytes == NULL);
Py_INCREF(tmp_assign_source_2);
var_label_bytes = tmp_assign_source_2;
}
branch_end_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_label_bytes);
tmp_expression_value_2 = var_label_bytes;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = 284;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_label_bytes;
    assert(old != NULL);
    var_label_bytes = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_label_bytes);
tmp_expression_value_3 = var_label_bytes;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_idna$core$_alabel_prefix(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__alabel_prefix);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 285;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = 285;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 285;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(var_label_bytes);
tmp_expression_value_4 = var_label_bytes;
tmp_len_arg_1 = module_var_accessor_idna$core$_alabel_prefix(tstate);
if (unlikely(tmp_len_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__alabel_prefix);
}

if (tmp_len_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_start_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_label_bytes;
    assert(old != NULL);
    var_label_bytes = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_label_bytes);
tmp_operand_value_2 = var_label_bytes;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = 288;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_0225c5711079fe238181490cb3975dd0_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 288;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_label_bytes);
tmp_expression_value_6 = var_label_bytes;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_decode);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = 289;
tmp_expression_value_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_neg_1;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, -1);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_chr_45;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = 290;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_digest_a599fdf6f8305ca3f84e4e0f315cdb94_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 290;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_5:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_8 = module_var_accessor_idna$core$check_label(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_label);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_label_bytes);
tmp_args_element_value_3 = var_label_bytes;
frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = 292;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_label_bytes);
tmp_expression_value_7 = var_label_bytes;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_decode);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = 293;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_3:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_label_bytes);
tmp_expression_value_8 = var_label_bytes;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_decode);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oo";
    goto try_except_handler_4;
}
frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = 296;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_plain_punycode_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_label;
    assert(old != NULL);
    par_label = tmp_assign_source_5;
    Py_DECREF(old);
}

}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__15_ulabel, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__15_ulabel, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_UnicodeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_11;
tmp_called_value_11 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "oo";
    goto try_except_handler_5;
}
frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = 298;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_digest_57eeb014d7bd9923dc7c9e12e8ca339f_tuple);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oo";
    goto try_except_handler_5;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 298;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_5;
}
goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 295;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_idna$core$$$function__15_ulabel->m_frame)) {
        frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_end_6:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
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
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_4;
tmp_called_value_12 = module_var_accessor_idna$core$check_label(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_label);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_label);
tmp_args_element_value_4 = par_label;
frame_frame_idna$core$$$function__15_ulabel->m_frame.f_lineno = 299;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__15_ulabel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__15_ulabel->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__15_ulabel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__15_ulabel,
    type_description_1,
    par_label,
    var_label_bytes
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__15_ulabel == cache_frame_frame_idna$core$$$function__15_ulabel) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__15_ulabel);
    cache_frame_frame_idna$core$$$function__15_ulabel = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__15_ulabel);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_label);
tmp_return_value = par_label;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_label);
par_label = NULL;
Py_XDECREF(var_label_bytes);
var_label_bytes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_label);
par_label = NULL;
Py_XDECREF(var_label_bytes);
var_label_bytes = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

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


static PyObject *impl_idna$core$$$function__16_uts46_remap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_domain = python_pars[0];
PyObject *par_std3_rules = python_pars[1];
PyObject *par_transitional = python_pars[2];
PyObject *var_uts46data = NULL;
PyObject *var_output = NULL;
PyObject *var_pos = NULL;
PyObject *var_char = NULL;
PyObject *var_code_point = NULL;
PyObject *var_uts46row = NULL;
PyObject *var_status = NULL;
PyObject *var_replacement = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__16_uts46_remap;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__16_uts46_remap = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__16_uts46_remap)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__16_uts46_remap);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__16_uts46_remap == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__16_uts46_remap = MAKE_FUNCTION_FRAME(tstate, code_objects_86bf2b0f5224ce5c8c0cc017b4b73f8b, module_idna$core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__16_uts46_remap->m_type_description == NULL);
frame_frame_idna$core$$$function__16_uts46_remap = cache_frame_frame_idna$core$$$function__16_uts46_remap;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__16_uts46_remap);
assert(Py_REFCNT(frame_frame_idna$core$$$function__16_uts46_remap) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_uts46data;
tmp_globals_arg_value_1 = (PyObject *)moduledict_idna$core;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_uts46data_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_idna$core$$$function__16_uts46_remap->m_frame.f_lineno = 305;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_idna$core,
        mod_consts.const_str_plain_uts46data,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_uts46data);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_uts46data == NULL);
var_uts46data = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_str_empty;
assert(var_output == NULL);
Py_INCREF(tmp_assign_source_2);
var_output = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_domain);
tmp_args_element_value_1 = par_domain;
frame_frame_idna$core$$$function__16_uts46_remap->m_frame.f_lineno = 308;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooooooooo";
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
type_description_1 = "ooooooooooo";
exception_lineno = 308;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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



exception_lineno = 308;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_8;
    Py_INCREF(var_pos);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_char;
    var_char = tmp_assign_source_9;
    Py_INCREF(var_char);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_10;
PyObject *tmp_ord_arg_1;
CHECK_OBJECT(var_char);
tmp_ord_arg_1 = var_char;
tmp_assign_source_10 = BUILTIN_ORD(tmp_ord_arg_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_code_point;
    var_code_point = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_tuple_element_1;
if (var_uts46data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_uts46data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 311;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_1 = var_uts46data;
CHECK_OBJECT(var_code_point);
tmp_cmp_expr_left_1 = var_code_point;
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_256;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_code_point);
tmp_subscript_value_1 = var_code_point;
Py_INCREF(tmp_subscript_value_1);
goto condexpr_end_1;
condexpr_false_1:;
tmp_expression_value_2 = module_var_accessor_idna$core$bisect(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bisect);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 312;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_bisect_left);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
if (var_uts46data == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_uts46data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 312;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_2 = var_uts46data;
CHECK_OBJECT(var_code_point);
tmp_tuple_element_1 = var_code_point;
tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain_Z;
PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_1);
frame_frame_idna$core$$$function__16_uts46_remap->m_frame.f_lineno = 312;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_sub_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_subscript_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
condexpr_end_1:;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_uts46row;
    var_uts46row = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_uts46row);
tmp_expression_value_3 = var_uts46row;
tmp_subscript_value_2 = const_int_pos_1;
tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_status;
    var_status = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_None;
{
    PyObject *old = var_replacement;
    var_replacement = tmp_assign_source_13;
    Py_INCREF(var_replacement);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_uts46row);
tmp_len_arg_1 = var_uts46row;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_2 = 3;
tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_uts46row);
tmp_expression_value_4 = var_uts46row;
tmp_subscript_value_3 = mod_consts.const_int_pos_2;
tmp_assign_source_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_3, 2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_replacement;
    assert(old != NULL);
    var_replacement = tmp_assign_source_14;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_operand_value_1;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_status);
tmp_cmp_expr_left_3 = var_status;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_V;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_status);
tmp_cmp_expr_left_4 = var_status;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_D;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_transitional);
tmp_operand_value_1 = par_transitional;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_value_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_left_value_2 = tmp_and_left_value_1;
and_end_1:;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_status);
tmp_cmp_expr_left_5 = var_status;
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_3;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_std3_rules);
tmp_operand_value_2 = par_std3_rules;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_replacement);
tmp_cmp_expr_left_6 = var_replacement;
tmp_cmp_expr_right_6 = Py_None;
tmp_and_right_value_3 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_or_right_value_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_or_right_value_2 = tmp_and_left_value_2;
and_end_2:;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 320;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}

tmp_iadd_expr_left_1 = var_output;
CHECK_OBJECT(var_char);
tmp_iadd_expr_right_1 = var_char;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_15 = tmp_iadd_expr_left_1;
var_output = tmp_assign_source_15;

}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
int tmp_or_left_truth_4;
nuitka_bool tmp_or_left_value_4;
nuitka_bool tmp_or_right_value_4;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_operand_value_3;
int tmp_and_left_truth_6;
nuitka_bool tmp_and_left_value_6;
nuitka_bool tmp_and_right_value_6;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
int tmp_truth_name_1;
CHECK_OBJECT(var_replacement);
tmp_cmp_expr_left_7 = var_replacement;
tmp_cmp_expr_right_7 = Py_None;
tmp_and_left_value_4 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(var_status);
tmp_cmp_expr_left_8 = var_status;
tmp_cmp_expr_right_8 = mod_consts.const_str_plain_M;
tmp_or_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_status);
tmp_cmp_expr_left_9 = var_status;
tmp_cmp_expr_right_9 = mod_consts.const_str_plain_3;
tmp_and_left_value_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_and_left_value_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(par_std3_rules);
tmp_operand_value_3 = par_std3_rules;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_and_right_value_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_value_4 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_or_left_value_4 = tmp_and_left_value_5;
and_end_5:;
tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(var_status);
tmp_cmp_expr_left_10 = var_status;
tmp_cmp_expr_right_10 = mod_consts.const_str_plain_D;
tmp_and_left_value_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_and_left_value_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(par_transitional);
tmp_truth_name_1 = CHECK_IF_TRUE(par_transitional);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_and_right_value_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_right_value_4 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_or_right_value_4 = tmp_and_left_value_6;
and_end_6:;
tmp_or_right_value_3 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_or_right_value_3 = tmp_or_left_value_4;
or_end_4:;
tmp_and_right_value_4 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_and_right_value_4 = tmp_or_left_value_3;
or_end_3:;
tmp_condition_result_4 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_4 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 324;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}

tmp_iadd_expr_left_2 = var_output;
CHECK_OBJECT(var_replacement);
tmp_iadd_expr_right_2 = var_replacement;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_16 = tmp_iadd_expr_left_2;
var_output = tmp_assign_source_16;

}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(var_status);
tmp_cmp_expr_left_11 = var_status;
tmp_cmp_expr_right_11 = mod_consts.const_str_plain_I;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
frame_frame_idna$core$$$function__16_uts46_remap->m_frame.f_lineno = 326;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_IndexError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 326;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto try_except_handler_5;
}
branch_no_4:;
branch_end_3:;
branch_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__16_uts46_remap, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__16_uts46_remap, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
tmp_cmp_expr_left_12 = EXC_TYPE(tstate);
tmp_cmp_expr_right_12 = PyExc_IndexError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_operand_value_4;
tmp_called_value_3 = module_var_accessor_idna$core$InvalidCodepoint(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidCodepoint);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_e30bab305c219751248ed2d68f64c1dd;
tmp_called_value_4 = module_var_accessor_idna$core$_unot(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unot);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 330;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_code_point);
tmp_args_element_value_5 = var_code_point;
frame_frame_idna$core$$$function__16_uts46_remap->m_frame.f_lineno = 330;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_pos);
tmp_add_expr_left_1 = var_pos;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_kw_call_arg_value_2_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 330;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_domain);
tmp_operand_value_4 = par_domain;
tmp_kw_call_arg_value_3_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 330;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
frame_frame_idna$core$$$function__16_uts46_remap->m_frame.f_lineno = 329;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
CHECK_OBJECT(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
frame_frame_idna$core$$$function__16_uts46_remap->m_frame.f_lineno = 328;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 328;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto try_except_handler_6;
}
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 310;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_idna$core$$$function__16_uts46_remap->m_frame)) {
        frame_frame_idna$core$$$function__16_uts46_remap->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_6;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
// End of try:
try_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_5 = module_var_accessor_idna$core$unicodedata(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_normalize);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = mod_consts.const_str_plain_NFC;
if (var_output == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 332;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = var_output;
frame_frame_idna$core$$$function__16_uts46_remap->m_frame.f_lineno = 332;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__16_uts46_remap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__16_uts46_remap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__16_uts46_remap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__16_uts46_remap,
    type_description_1,
    par_domain,
    par_std3_rules,
    par_transitional,
    var_uts46data,
    var_output,
    var_pos,
    var_char,
    var_code_point,
    var_uts46row,
    var_status,
    var_replacement
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__16_uts46_remap == cache_frame_frame_idna$core$$$function__16_uts46_remap) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__16_uts46_remap);
    cache_frame_frame_idna$core$$$function__16_uts46_remap = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__16_uts46_remap);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_uts46data);
var_uts46data = NULL;
Py_XDECREF(var_output);
var_output = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_char);
var_char = NULL;
Py_XDECREF(var_code_point);
var_code_point = NULL;
Py_XDECREF(var_uts46row);
var_uts46row = NULL;
Py_XDECREF(var_status);
var_status = NULL;
Py_XDECREF(var_replacement);
var_replacement = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_uts46data);
var_uts46data = NULL;
Py_XDECREF(var_output);
var_output = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_char);
var_char = NULL;
Py_XDECREF(var_code_point);
var_code_point = NULL;
Py_XDECREF(var_uts46row);
var_uts46row = NULL;
Py_XDECREF(var_status);
var_status = NULL;
Py_XDECREF(var_replacement);
var_replacement = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_std3_rules);
Py_DECREF(par_std3_rules);
CHECK_OBJECT(par_transitional);
Py_DECREF(par_transitional);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_std3_rules);
Py_DECREF(par_std3_rules);
CHECK_OBJECT(par_transitional);
Py_DECREF(par_transitional);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__17_encode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_s = python_pars[0];
PyObject *par_strict = python_pars[1];
PyObject *par_uts46 = python_pars[2];
PyObject *par_std3_rules = python_pars[3];
PyObject *par_transitional = python_pars[4];
PyObject *var_trailing_dot = NULL;
PyObject *var_result = NULL;
PyObject *var_labels = NULL;
PyObject *var_label = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__17_encode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__17_encode = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__17_encode)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__17_encode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__17_encode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__17_encode = MAKE_FUNCTION_FRAME(tstate, code_objects_ee44d936dd64938b2e99fa4bb8f0c282, module_idna$core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__17_encode->m_type_description == NULL);
frame_frame_idna$core$$$function__17_encode = cache_frame_frame_idna$core$$$function__17_encode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__17_encode);
assert(Py_REFCNT(frame_frame_idna$core$$$function__17_encode) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_s);
tmp_isinstance_inst_1 = par_s;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooooooo";
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_unicode_encoding_1;
CHECK_OBJECT(par_s);
tmp_unicode_arg_1 = par_s;
tmp_unicode_encoding_1 = const_str_plain_ascii;
tmp_assign_source_1 = BUILTIN_UNICODE3(tmp_unicode_arg_1, tmp_unicode_encoding_1, NULL);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_s;
    assert(old != NULL);
    par_s = tmp_assign_source_1;
    Py_DECREF(old);
}

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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__17_encode, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__17_encode, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_UnicodeDecodeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
tmp_called_value_1 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 340;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
frame_frame_idna$core$$$function__17_encode->m_frame.f_lineno = 340;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_a21cf6121f718213cb773ef8811e6220_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 340;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto try_except_handler_3;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 337;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_idna$core$$$function__17_encode->m_frame)) {
        frame_frame_idna$core$$$function__17_encode->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
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
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(par_uts46);
tmp_truth_name_1 = CHECK_IF_TRUE(par_uts46);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_idna$core$uts46_remap(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_uts46_remap);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_s);
tmp_args_element_value_1 = par_s;
CHECK_OBJECT(par_std3_rules);
tmp_args_element_value_2 = par_std3_rules;
CHECK_OBJECT(par_transitional);
tmp_args_element_value_3 = par_transitional;
frame_frame_idna$core$$$function__17_encode->m_frame.f_lineno = 342;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_s;
    assert(old != NULL);
    par_s = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_False;
assert(var_trailing_dot == NULL);
Py_INCREF(tmp_assign_source_3);
var_trailing_dot = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_result == NULL);
var_result = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(par_strict);
tmp_truth_name_2 = CHECK_IF_TRUE(par_strict);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_s);
tmp_expression_value_1 = par_s;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__17_encode->m_frame.f_lineno = 346;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_labels == NULL);
var_labels = tmp_assign_source_5;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_4;
tmp_expression_value_2 = module_var_accessor_idna$core$_unicode_dots_re(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unicode_dots_re);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 348;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_s);
tmp_args_element_value_4 = par_s;
frame_frame_idna$core$$$function__17_encode->m_frame.f_lineno = 348;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_labels == NULL);
var_labels = tmp_assign_source_6;
}
branch_end_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_labels);
tmp_operand_value_2 = var_labels;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_labels);
tmp_cmp_expr_left_2 = var_labels;
tmp_cmp_expr_right_2 = MAKE_LIST1(tstate, const_str_empty);
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LIST(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 350;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__17_encode->m_frame.f_lineno = 350;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_32d01bb85dbacc8ae6418d5da68c16bd_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 350;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_labels);
tmp_expression_value_3 = var_labels;
tmp_subscript_value_1 = const_int_neg_1;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, -1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_str_empty;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_delsubscr_subscript_1;
CHECK_OBJECT(var_labels);
tmp_delsubscr_target_1 = var_labels;
tmp_delsubscr_subscript_1 = const_int_neg_1;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_True;
{
    PyObject *old = var_trailing_dot;
    assert(old != NULL);
    var_trailing_dot = tmp_assign_source_7;
    Py_INCREF(var_trailing_dot);
    Py_DECREF(old);
}

}
branch_no_6:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_labels);
tmp_iter_arg_1 = var_labels;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 354;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_10 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_label;
    var_label = tmp_assign_source_10;
    Py_INCREF(var_label);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
tmp_called_value_6 = module_var_accessor_idna$core$alabel(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_alabel);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_label);
tmp_args_element_value_5 = var_label;
frame_frame_idna$core$$$function__17_encode->m_frame.f_lineno = 355;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_s;
    par_s = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_3;
CHECK_OBJECT(par_s);
tmp_truth_name_3 = CHECK_IF_TRUE(par_s);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 357;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_list_arg_value_1 = var_result;
CHECK_OBJECT(par_s);
tmp_item_value_1 = par_s;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_idna$core$$$function__17_encode->m_frame.f_lineno = 359;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_digest_8d1e528d58e56065b2e077de5f0eabe7_tuple);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 359;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto try_except_handler_4;
}
branch_end_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
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
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_8;
CHECK_OBJECT(var_trailing_dot);
tmp_condition_result_8 = CHECK_IF_TRUE(var_trailing_dot) == 1;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 361;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_2 = var_result;
tmp_item_value_2 = const_bytes_empty;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_8:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_bytes_arg_value_1 = mod_consts.const_bytes_chr_46;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 362;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_result;
tmp_assign_source_12 = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_s;
    par_s = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_8 = module_var_accessor_idna$core$valid_string_length(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_valid_string_length);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_s);
tmp_args_element_value_6 = par_s;
CHECK_OBJECT(var_trailing_dot);
tmp_args_element_value_7 = var_trailing_dot;
frame_frame_idna$core$$$function__17_encode->m_frame.f_lineno = 363;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooooooo";
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
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_9;
tmp_called_value_9 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 364;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__17_encode->m_frame.f_lineno = 364;
tmp_raise_type_input_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_digest_5c38507723994c94ef4f0ca7aa0e0566_tuple);

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 364;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_9:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__17_encode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__17_encode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__17_encode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__17_encode,
    type_description_1,
    par_s,
    par_strict,
    par_uts46,
    par_std3_rules,
    par_transitional,
    var_trailing_dot,
    var_result,
    var_labels,
    var_label
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__17_encode == cache_frame_frame_idna$core$$$function__17_encode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__17_encode);
    cache_frame_frame_idna$core$$$function__17_encode = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__17_encode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_s);
tmp_return_value = par_s;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_s);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
par_s = NULL;
CHECK_OBJECT(var_trailing_dot);
CHECK_OBJECT(var_trailing_dot);
Py_DECREF(var_trailing_dot);
var_trailing_dot = NULL;
Py_XDECREF(var_result);
var_result = NULL;
CHECK_OBJECT(var_labels);
CHECK_OBJECT(var_labels);
Py_DECREF(var_labels);
var_labels = NULL;
Py_XDECREF(var_label);
var_label = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_s);
par_s = NULL;
Py_XDECREF(var_trailing_dot);
var_trailing_dot = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_labels);
var_labels = NULL;
Py_XDECREF(var_label);
var_label = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
CHECK_OBJECT(par_uts46);
Py_DECREF(par_uts46);
CHECK_OBJECT(par_std3_rules);
Py_DECREF(par_std3_rules);
CHECK_OBJECT(par_transitional);
Py_DECREF(par_transitional);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
CHECK_OBJECT(par_uts46);
Py_DECREF(par_uts46);
CHECK_OBJECT(par_std3_rules);
Py_DECREF(par_std3_rules);
CHECK_OBJECT(par_transitional);
Py_DECREF(par_transitional);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$core$$$function__18_decode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_s = python_pars[0];
PyObject *par_strict = python_pars[1];
PyObject *par_uts46 = python_pars[2];
PyObject *par_std3_rules = python_pars[3];
nuitka_bool var_trailing_dot = NUITKA_BOOL_UNASSIGNED;
PyObject *var_result = NULL;
PyObject *var_labels = NULL;
PyObject *var_label = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_idna$core$$$function__18_decode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_idna$core$$$function__18_decode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_idna$core$$$function__18_decode)) {
    Py_XDECREF(cache_frame_frame_idna$core$$$function__18_decode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_idna$core$$$function__18_decode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_idna$core$$$function__18_decode = MAKE_FUNCTION_FRAME(tstate, code_objects_f360ad927815833eea1353798a0bd9ba, module_idna$core, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_idna$core$$$function__18_decode->m_type_description == NULL);
frame_frame_idna$core$$$function__18_decode = cache_frame_frame_idna$core$$$function__18_decode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core$$$function__18_decode);
assert(Py_REFCNT(frame_frame_idna$core$$$function__18_decode) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_s);
tmp_isinstance_inst_1 = par_s;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooobooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooobooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_unicode_encoding_1;
CHECK_OBJECT(par_s);
tmp_unicode_arg_1 = par_s;
tmp_unicode_encoding_1 = const_str_plain_ascii;
tmp_assign_source_1 = BUILTIN_UNICODE3(tmp_unicode_arg_1, tmp_unicode_encoding_1, NULL);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooobooo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_s;
    assert(old != NULL);
    par_s = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__18_decode, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__18_decode, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_UnicodeDecodeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
tmp_called_value_1 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 373;
type_description_1 = "oooobooo";
    goto try_except_handler_3;
}
frame_frame_idna$core$$$function__18_decode->m_frame.f_lineno = 373;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_349d6d0cb88e0f4ece68f70d028fd5ad_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "oooobooo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "oooobooo";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 373;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooobooo";
goto try_except_handler_3;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 369;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_idna$core$$$function__18_decode->m_frame)) {
        frame_frame_idna$core$$$function__18_decode->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooobooo";
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
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(par_uts46);
tmp_truth_name_1 = CHECK_IF_TRUE(par_uts46);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_idna$core$uts46_remap(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_uts46_remap);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_s);
tmp_args_element_value_1 = par_s;
CHECK_OBJECT(par_std3_rules);
tmp_args_element_value_2 = par_std3_rules;
tmp_args_element_value_3 = Py_False;
frame_frame_idna$core$$$function__18_decode->m_frame.f_lineno = 375;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_s;
    assert(old != NULL);
    par_s = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_3:;
{
nuitka_bool tmp_assign_source_3;
tmp_assign_source_3 = NUITKA_BOOL_FALSE;
var_trailing_dot = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_result == NULL);
var_result = tmp_assign_source_4;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_strict);
tmp_operand_value_2 = par_strict;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooobooo";
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
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_idna$core$_unicode_dots_re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unicode_dots_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 379;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_s);
tmp_args_element_value_4 = par_s;
frame_frame_idna$core$$$function__18_decode->m_frame.f_lineno = 379;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
assert(var_labels == NULL);
var_labels = tmp_assign_source_5;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_s);
tmp_expression_value_2 = par_s;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__18_decode->m_frame.f_lineno = 381;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
assert(var_labels == NULL);
var_labels = tmp_assign_source_6;
}
branch_end_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_labels);
tmp_operand_value_3 = var_labels;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_labels);
tmp_cmp_expr_left_2 = var_labels;
tmp_cmp_expr_right_2 = MAKE_LIST1(tstate, const_str_empty);
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LIST(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 383;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
frame_frame_idna$core$$$function__18_decode->m_frame.f_lineno = 383;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_32d01bb85dbacc8ae6418d5da68c16bd_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 383;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooobooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_labels);
tmp_expression_value_3 = var_labels;
tmp_subscript_value_1 = const_int_neg_1;
tmp_operand_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, -1);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oooobooo";
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
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_delsubscr_subscript_1;
CHECK_OBJECT(var_labels);
tmp_delsubscr_target_1 = var_labels;
tmp_delsubscr_subscript_1 = const_int_neg_1;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_TRUE;
var_trailing_dot = tmp_assign_source_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_labels);
tmp_iter_arg_1 = var_labels;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooobooo";
exception_lineno = 387;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_10 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_label;
    var_label = tmp_assign_source_10;
    Py_INCREF(var_label);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
tmp_called_value_6 = module_var_accessor_idna$core$ulabel(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ulabel);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 388;
type_description_1 = "oooobooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_label);
tmp_args_element_value_5 = var_label;
frame_frame_idna$core$$$function__18_decode->m_frame.f_lineno = 388;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooobooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_s;
    par_s = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_2;
CHECK_OBJECT(par_s);
tmp_truth_name_2 = CHECK_IF_TRUE(par_s);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooobooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 390;
type_description_1 = "oooobooo";
    goto try_except_handler_4;
}

tmp_list_arg_value_1 = var_result;
CHECK_OBJECT(par_s);
tmp_item_value_1 = par_s;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 392;
type_description_1 = "oooobooo";
    goto try_except_handler_4;
}
frame_frame_idna$core$$$function__18_decode->m_frame.f_lineno = 392;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_digest_8d1e528d58e56065b2e077de5f0eabe7_tuple);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooobooo";
    goto try_except_handler_4;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooobooo";
    goto try_except_handler_4;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 392;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooobooo";
goto try_except_handler_4;
}
branch_end_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooobooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
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
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_8;
assert(var_trailing_dot != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_8 = var_trailing_dot == NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 394;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_2 = var_result;
tmp_item_value_2 = const_str_empty;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_8:;
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_dot;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 395;
type_description_1 = "oooobooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_result;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oooobooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core$$$function__18_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core$$$function__18_decode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core$$$function__18_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_idna$core$$$function__18_decode,
    type_description_1,
    par_s,
    par_strict,
    par_uts46,
    par_std3_rules,
    (int)var_trailing_dot,
    var_result,
    var_labels,
    var_label
);


// Release cached frame if used for exception.
if (frame_frame_idna$core$$$function__18_decode == cache_frame_frame_idna$core$$$function__18_decode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_idna$core$$$function__18_decode);
    cache_frame_frame_idna$core$$$function__18_decode = NULL;
}

assertFrameObject(frame_frame_idna$core$$$function__18_decode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_s);
par_s = NULL;
assert(var_trailing_dot != NUITKA_BOOL_UNASSIGNED);
var_trailing_dot = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_result);
var_result = NULL;
CHECK_OBJECT(var_labels);
CHECK_OBJECT(var_labels);
Py_DECREF(var_labels);
var_labels = NULL;
Py_XDECREF(var_label);
var_label = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_s);
par_s = NULL;
var_trailing_dot = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_labels);
var_labels = NULL;
Py_XDECREF(var_label);
var_label = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
CHECK_OBJECT(par_uts46);
Py_DECREF(par_uts46);
CHECK_OBJECT(par_std3_rules);
Py_DECREF(par_std3_rules);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
CHECK_OBJECT(par_uts46);
Py_DECREF(par_uts46);
CHECK_OBJECT(par_std3_rules);
Py_DECREF(par_std3_rules);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__10_check_nfc(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__10_check_nfc,
        mod_consts.const_str_plain_check_nfc,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e18c6e5dd7d629bfb5d906f6c7744269,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__11_valid_contextj(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__11_valid_contextj,
        mod_consts.const_str_plain_valid_contextj,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_208f353fc103ba86ed6c2a91f2696c95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__12_valid_contexto(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__12_valid_contexto,
        mod_consts.const_str_plain_valid_contexto,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f28e1647da292002ac9a26c3aafb49b7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__13_check_label(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__13_check_label,
        mod_consts.const_str_plain_check_label,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_78141d3d232dfbe5b82b6c0b5c4643a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__14_alabel(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__14_alabel,
        mod_consts.const_str_plain_alabel,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d0e1c38f01593c021d5163101491503e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__15_ulabel(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__15_ulabel,
        mod_consts.const_str_plain_ulabel,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d982f97fc52ff03d4f2f75be9fa3122e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__16_uts46_remap(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__16_uts46_remap,
        mod_consts.const_str_plain_uts46_remap,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_86bf2b0f5224ce5c8c0cc017b4b73f8b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        mod_consts.const_str_digest_0f3533c39450b1b80fd1e6a4aa6432c8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__17_encode(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__17_encode,
        mod_consts.const_str_plain_encode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ee44d936dd64938b2e99fa4bb8f0c282,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__18_decode(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__18_decode,
        mod_consts.const_str_plain_decode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f360ad927815833eea1353798a0bd9ba,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__1__combining_class(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__1__combining_class,
        mod_consts.const_str_plain__combining_class,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5396221ae5650beba757fb9d4576c6cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__2__is_script(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__2__is_script,
        mod_consts.const_str_plain__is_script,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8091c1a85378db6c04d3617090bb5ae7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__3__punycode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__3__punycode,
        mod_consts.const_str_plain__punycode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f121aae14a484167a992250a5ddb2d8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__4__unot(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__4__unot,
        mod_consts.const_str_plain__unot,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_651c81aa909a2b0bbc1af8d5b952bfb6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__5_valid_label_length(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__5_valid_label_length,
        mod_consts.const_str_plain_valid_label_length,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_344d11f860de9915f8d5de257cfdf111,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__6_valid_string_length(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__6_valid_string_length,
        mod_consts.const_str_plain_valid_string_length,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e5acf4c585c3b9a489bc744181f6d2aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__7_check_bidi(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__7_check_bidi,
        mod_consts.const_str_plain_check_bidi,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1105104fa319cc8050e0b513f8de90a0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__8_check_initial_combiner(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__8_check_initial_combiner,
        mod_consts.const_str_plain_check_initial_combiner,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5d1f0be220810c41a008203d137cc43f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$core$$$function__9_check_hyphen_ok(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$core$$$function__9_check_hyphen_ok,
        mod_consts.const_str_plain_check_hyphen_ok,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_53b82e525ce64c732247ec4384063d55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$core,
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

static function_impl_code const function_table_idna$core[] = {
impl_idna$core$$$function__1__combining_class,
impl_idna$core$$$function__2__is_script,
impl_idna$core$$$function__3__punycode,
impl_idna$core$$$function__4__unot,
impl_idna$core$$$function__5_valid_label_length,
impl_idna$core$$$function__6_valid_string_length,
impl_idna$core$$$function__7_check_bidi,
impl_idna$core$$$function__8_check_initial_combiner,
impl_idna$core$$$function__9_check_hyphen_ok,
impl_idna$core$$$function__10_check_nfc,
impl_idna$core$$$function__11_valid_contextj,
impl_idna$core$$$function__12_valid_contexto,
impl_idna$core$$$function__13_check_label,
impl_idna$core$$$function__14_alabel,
impl_idna$core$$$function__15_ulabel,
impl_idna$core$$$function__16_uts46_remap,
impl_idna$core$$$function__17_encode,
impl_idna$core$$$function__18_decode,
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

    return Nuitka_Function_GetFunctionState(function, function_table_idna$core);
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
        module_idna$core,
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
        function_table_idna$core,
        sizeof(function_table_idna$core) / sizeof(function_impl_code)
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
static char const *module_full_name = "idna.core";
#endif

// Internal entry point for module code.
PyObject *module_code_idna$core(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("idna$core");

    // Store the module for future use.
    module_idna$core = module;

    moduledict_idna$core = MODULE_DICT(module_idna$core);

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
        PRINT_STRING("idna$core: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("idna$core: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("idna$core: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "idna.core" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initidna$core\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_idna$core,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_idna$core,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_idna$core,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_idna$core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_idna$core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_idna$core);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_idna$core);
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

        UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_idna$core;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_idna$core$$$class__1_IDNAError_12 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_idna$core$$$class__2_IDNABidiError_17 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_idna$core$$$class__3_InvalidCodepoint_22 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_idna$core$$$class__4_InvalidCodepointContext_27 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_idna$core = MAKE_MODULE_FRAME(code_objects_1b1371083959875bc5f032f3d62d395f, module_idna$core);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_idna$core);
assert(Py_REFCNT(frame_frame_idna$core) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_idna$core$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_idna$core$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_idna$core;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_idnadata_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_idna$core->m_frame.f_lineno = 1;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_idna$core,
        mod_consts.const_str_plain_idnadata,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_idnadata);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_idnadata, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_bisect;
tmp_globals_arg_value_2 = (PyObject *)moduledict_idna$core;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_idna$core->m_frame.f_lineno = 2;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_bisect, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_unicodedata;
tmp_globals_arg_value_3 = (PyObject *)moduledict_idna$core;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_idna$core->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_4 = (PyObject *)moduledict_idna$core;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_idna$core->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_8);
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
        (PyObject *)moduledict_idna$core,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_9);
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
        (PyObject *)moduledict_idna$core,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_10);
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
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_intranges;
tmp_globals_arg_value_5 = (PyObject *)moduledict_idna$core;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_intranges_contain_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_idna$core->m_frame.f_lineno = 6;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_idna$core,
        mod_consts.const_str_plain_intranges_contain,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_intranges_contain);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_intranges_contain, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_int_pos_9;
UPDATE_STRING_DICT0(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__virama_combining_class, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_bytes_digest_04fa33b5cf88d501cb5810fc66ba4694;
UPDATE_STRING_DICT0(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__alabel_prefix, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_idna$core$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;

    goto frame_exception_exit_1;
}
frame_frame_idna$core->m_frame.f_lineno = 10;
tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_82627f758675f073cdd0409b4b9ad06a_tuple, 0)
);

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__unicode_dots_re, tmp_assign_source_14);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_UnicodeError_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_15 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
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


exception_lineno = 12;

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
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_17 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_17;
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


exception_lineno = 12;

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
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_IDNAError;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_idna$core->m_frame.f_lineno = 12;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
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


exception_lineno = 12;

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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_6, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


exception_lineno = 12;

    goto try_except_handler_2;
}
frame_frame_idna$core->m_frame.f_lineno = 12;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 12;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_19;
}
branch_end_1:;
{
PyObject *tmp_assign_source_20;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_idna$core$$$class__1_IDNAError_12 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_edeff97c587189785db0603b7785ff30;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__1_IDNAError_12, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_49850f3237afd199e7e9492b32721454;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__1_IDNAError_12, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_IDNAError;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__1_IDNAError_12, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_12;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__1_IDNAError_12, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__1_IDNAError_12, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_UnicodeError_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_UnicodeError_tuple;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__1_IDNAError_12, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_IDNAError;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_idna$core$$$class__1_IDNAError_12;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_idna$core->m_frame.f_lineno = 12;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_21;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_20 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_20);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_idna$core$$$class__1_IDNAError_12);
locals_idna$core$$$class__1_IDNAError_12 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_idna$core$$$class__1_IDNAError_12);
locals_idna$core$$$class__1_IDNAError_12 = NULL;
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
exception_lineno = 12;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_IDNAError, tmp_assign_source_20);
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
PyObject *tmp_assign_source_22;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto try_except_handler_5;
}
tmp_assign_source_22 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_22, 0, tmp_tuple_element_4);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_23 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
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


exception_lineno = 17;

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
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_25;
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


exception_lineno = 17;

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
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_5;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_IDNABidiError;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_idna$core->m_frame.f_lineno = 17;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_26;
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


exception_lineno = 17;

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
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_7, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
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


exception_lineno = 17;

    goto try_except_handler_5;
}
frame_frame_idna$core->m_frame.f_lineno = 17;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 17;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_27;
}
branch_end_4:;
{
PyObject *tmp_assign_source_28;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_idna$core$$$class__2_IDNABidiError_17 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_edeff97c587189785db0603b7785ff30;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__2_IDNABidiError_17, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_8b966b71484004ad4765280b404782ad;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__2_IDNABidiError_17, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_IDNABidiError;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__2_IDNABidiError_17, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_17;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__2_IDNABidiError_17, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_7;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__2_IDNABidiError_17, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

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


exception_lineno = 17;

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
tmp_res = PyObject_SetItem(locals_idna$core$$$class__2_IDNABidiError_17, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_7 = mod_consts.const_str_plain_IDNABidiError;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = locals_idna$core$$$class__2_IDNABidiError_17;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_idna$core->m_frame.f_lineno = 17;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_29;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_28 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_28);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_idna$core$$$class__2_IDNABidiError_17);
locals_idna$core$$$class__2_IDNABidiError_17 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_idna$core$$$class__2_IDNABidiError_17);
locals_idna$core$$$class__2_IDNABidiError_17 = NULL;
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
exception_lineno = 17;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_IDNABidiError, tmp_assign_source_28);
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
PyObject *tmp_assign_source_30;
PyObject *tmp_tuple_element_8;
tmp_tuple_element_8 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto try_except_handler_8;
}
tmp_assign_source_30 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_8);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_31 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
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


exception_lineno = 22;

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
tmp_expression_value_13 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_8;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_33;
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


exception_lineno = 22;

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
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_8;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_InvalidCodepoint;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_idna$core->m_frame.f_lineno = 22;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_34;
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


exception_lineno = 22;

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
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_8, tmp_default_value_3);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
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


exception_lineno = 22;

    goto try_except_handler_8;
}
frame_frame_idna$core->m_frame.f_lineno = 22;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 22;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_35;
}
branch_end_7:;
{
PyObject *tmp_assign_source_36;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_idna$core$$$class__3_InvalidCodepoint_22 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_edeff97c587189785db0603b7785ff30;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__3_InvalidCodepoint_22, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_0e8ea4333972bc9aa2d7f9b9ce9f0ef1;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__3_InvalidCodepoint_22, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidCodepoint;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__3_InvalidCodepoint_22, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_22;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__3_InvalidCodepoint_22, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_10;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__3_InvalidCodepoint_22, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

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


exception_lineno = 22;

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
tmp_res = PyObject_SetItem(locals_idna$core$$$class__3_InvalidCodepoint_22, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_11 = mod_consts.const_str_plain_InvalidCodepoint;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_idna$core$$$class__3_InvalidCodepoint_22;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_idna$core->m_frame.f_lineno = 22;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_37;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_36 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_36);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_idna$core$$$class__3_InvalidCodepoint_22);
locals_idna$core$$$class__3_InvalidCodepoint_22 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_idna$core$$$class__3_InvalidCodepoint_22);
locals_idna$core$$$class__3_InvalidCodepoint_22 = NULL;
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
exception_lineno = 22;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidCodepoint, tmp_assign_source_36);
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
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_tuple_element_12;
tmp_tuple_element_12 = module_var_accessor_idna$core$IDNAError(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDNAError);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto try_except_handler_11;
}
tmp_assign_source_38 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_38, 0, tmp_tuple_element_12);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_39 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_11;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_11;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_11;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_41 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_41;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_11;
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
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_11;
}
tmp_tuple_element_13 = mod_consts.const_str_plain_InvalidCodepointContext;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_idna$core->m_frame.f_lineno = 27;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_42;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_11;
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
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_9, tmp_default_value_4);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_11;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_14);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_11;
}
frame_frame_idna$core->m_frame.f_lineno = 27;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 27;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_43;
}
branch_end_10:;
{
PyObject *tmp_assign_source_44;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_idna$core$$$class__4_InvalidCodepointContext_27 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_edeff97c587189785db0603b7785ff30;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__4_InvalidCodepointContext_27, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_ae1b703d419669a797bc5fa5dc5303ad;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__4_InvalidCodepointContext_27, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidCodepointContext;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__4_InvalidCodepointContext_27, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_27;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__4_InvalidCodepointContext_27, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_13;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_idna$core$$$class__4_InvalidCodepointContext_27, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_13;
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
tmp_res = PyObject_SetItem(locals_idna$core$$$class__4_InvalidCodepointContext_27, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_13;
}
branch_no_12:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_15 = mod_consts.const_str_plain_InvalidCodepointContext;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
tmp_tuple_element_15 = locals_idna$core$$$class__4_InvalidCodepointContext_27;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_idna$core->m_frame.f_lineno = 27;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_13;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_45;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_44 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_44);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_idna$core$$$class__4_InvalidCodepointContext_27);
locals_idna$core$$$class__4_InvalidCodepointContext_27 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_idna$core$$$class__4_InvalidCodepointContext_27);
locals_idna$core$$$class__4_InvalidCodepointContext_27 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 27;
goto try_except_handler_11;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidCodepointContext, tmp_assign_source_44);
}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
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
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_46;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_4d47a5dd3b13c432666ba87ea9bc2f14);

tmp_assign_source_46 = MAKE_FUNCTION_idna$core$$$function__1__combining_class(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__combining_class, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_bea9a6d5931a5319a98fa083185906cf);

tmp_assign_source_47 = MAKE_FUNCTION_idna$core$$$function__2__is_script(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__is_script, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_897f9798a723f90452a03ba9faba942e);

tmp_assign_source_48 = MAKE_FUNCTION_idna$core$$$function__3__punycode(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__punycode, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e60f9789bfc2399ececc34c68a490cd2);

tmp_assign_source_49 = MAKE_FUNCTION_idna$core$$$function__4__unot(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain__unot, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_5;
tmp_dict_key_1 = mod_consts.const_str_plain_label;
tmp_expression_value_25 = module_var_accessor_idna$core$Union(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = mod_consts.const_tuple_type_bytes_type_str_tuple;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_5);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_annotations_5 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_assign_source_50 = MAKE_FUNCTION_idna$core$$$function__5_valid_label_length(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_label_length, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_6;
tmp_dict_key_2 = mod_consts.const_str_plain_label;
tmp_expression_value_26 = module_var_accessor_idna$core$Union(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = mod_consts.const_tuple_type_bytes_type_str_tuple;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_6);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
tmp_annotations_6 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_trailing_dot;
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));

tmp_assign_source_51 = MAKE_FUNCTION_idna$core$$$function__6_valid_string_length(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_string_length, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_7;
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_34a6b8c9b80895acf1a8ba6d0caa01d6);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_52 = MAKE_FUNCTION_idna$core$$$function__7_check_bidi(tstate, tmp_defaults_1, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_bidi, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_738ec846619d43adfba48ba5c4035cb1);

tmp_assign_source_53 = MAKE_FUNCTION_idna$core$$$function__8_check_initial_combiner(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_initial_combiner, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_738ec846619d43adfba48ba5c4035cb1);

tmp_assign_source_54 = MAKE_FUNCTION_idna$core$$$function__9_check_hyphen_ok(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_hyphen_ok, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_5fc2ba89ae62647c1eb40749a6d1ad7c);

tmp_assign_source_55 = MAKE_FUNCTION_idna$core$$$function__10_check_nfc(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_nfc, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_78361af86576b652bbee218f92aea3a2);

tmp_assign_source_56 = MAKE_FUNCTION_idna$core$$$function__11_valid_contextj(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_contextj, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_12;
tmp_defaults_2 = mod_consts.const_tuple_false_tuple;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_7dfd8cbcd1c9387b21c6d6f09a62de97);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_57 = MAKE_FUNCTION_idna$core$$$function__12_valid_contexto(tstate, tmp_defaults_2, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_valid_contexto, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_annotations_13;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_7;
tmp_dict_key_3 = mod_consts.const_str_plain_label;
tmp_expression_value_27 = module_var_accessor_idna$core$Union(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;

    goto frame_exception_exit_1;
}
tmp_subscript_value_7 = mod_consts.const_tuple_type_str_type_bytes_type_bytearray_tuple;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_7);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto frame_exception_exit_1;
}
tmp_annotations_13 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_assign_source_58 = MAKE_FUNCTION_idna$core$$$function__13_check_label(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_check_label, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_4d75cf5916068f559f931a03f02e1077);

tmp_assign_source_59 = MAKE_FUNCTION_idna$core$$$function__14_alabel(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_alabel, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_annotations_15;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_8;
tmp_dict_key_4 = mod_consts.const_str_plain_label;
tmp_expression_value_28 = module_var_accessor_idna$core$Union(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;

    goto frame_exception_exit_1;
}
tmp_subscript_value_8 = mod_consts.const_tuple_type_str_type_bytes_type_bytearray_tuple;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_8);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto frame_exception_exit_1;
}
tmp_annotations_15 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));

tmp_assign_source_60 = MAKE_FUNCTION_idna$core$$$function__15_ulabel(tstate, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_ulabel, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_16;
tmp_defaults_3 = mod_consts.const_tuple_true_false_tuple;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_81da4facd9efd36cf55e9e0211cf3bb1);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_61 = MAKE_FUNCTION_idna$core$$$function__16_uts46_remap(tstate, tmp_defaults_3, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_uts46_remap, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_17;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_9;
tmp_defaults_4 = mod_consts.const_tuple_false_false_false_false_tuple;
tmp_dict_key_5 = mod_consts.const_str_plain_s;
tmp_expression_value_29 = module_var_accessor_idna$core$Union(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 335;

    goto frame_exception_exit_1;
}
tmp_subscript_value_9 = mod_consts.const_tuple_type_str_type_bytes_type_bytearray_tuple;
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_9);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;

    goto frame_exception_exit_1;
}
tmp_annotations_17 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_strict;
tmp_dict_value_5 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_uts46;
tmp_dict_value_5 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_std3_rules;
tmp_dict_value_5 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_transitional;
tmp_dict_value_5 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
Py_INCREF(tmp_defaults_4);

tmp_assign_source_62 = MAKE_FUNCTION_idna$core$$$function__17_encode(tstate, tmp_defaults_4, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_encode, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_18;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_10;
tmp_defaults_5 = mod_consts.const_tuple_false_false_false_tuple;
tmp_dict_key_6 = mod_consts.const_str_plain_s;
tmp_expression_value_30 = module_var_accessor_idna$core$Union(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 368;

    goto frame_exception_exit_1;
}
tmp_subscript_value_10 = mod_consts.const_tuple_type_str_type_bytes_type_bytearray_tuple;
tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_10);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;

    goto frame_exception_exit_1;
}
tmp_annotations_18 = _PyDict_NewPresized( 5 );
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_strict;
tmp_dict_value_6 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_uts46;
tmp_dict_value_6 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_std3_rules;
tmp_dict_value_6 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
Py_INCREF(tmp_defaults_5);

tmp_assign_source_63 = MAKE_FUNCTION_idna$core$$$function__18_decode(tstate, tmp_defaults_5, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_idna$core, (Nuitka_StringObject *)mod_consts.const_str_plain_decode, tmp_assign_source_63);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_idna$core, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_idna$core->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$core, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_idna$core);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("idna$core", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "idna.core" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_idna$core);
    return module_idna$core;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$core, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("idna$core", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'markdown_it$rules_block$list'
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



/* The "module_markdown_it$rules_block$list" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_markdown_it$rules_block$list;
PyDictObject *moduledict_markdown_it$rules_block$list;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_bMarks;
PyObject *const_str_plain_tShift;
PyObject *const_str_plain_eMarks;
PyObject *const_str_plain_src;
PyObject *const_tuple_str_chr_42_str_chr_45_str_chr_43_tuple;
PyObject *const_str_plain_isStrSpace;
PyObject *const_int_pos_48;
PyObject *const_int_pos_57;
PyObject *const_str_plain_pos;
PyObject *const_str_plain_state;
PyObject *const_str_plain_start;
PyObject *const_int_pos_10;
PyObject *const_tuple_str_chr_41_str_dot_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_tokens;
PyObject *const_str_plain_i;
PyObject *const_str_plain_paragraph_open;
PyObject *const_str_plain_hidden;
PyObject *const_str_plain_LOGGER;
PyObject *const_str_plain_debug;
PyObject *const_str_digest_3d83ef24392799f7fa4b20c86d539f4e;
PyObject *const_str_plain_is_code_block;
PyObject *const_str_plain_listIndent;
PyObject *const_str_plain_sCount;
PyObject *const_int_pos_4;
PyObject *const_str_plain_blkIndent;
PyObject *const_str_plain_parentType;
PyObject *const_str_plain_paragraph;
PyObject *const_str_plain_skipOrderedListMarker;
PyObject *const_str_plain_skipBulletListMarker;
PyObject *const_str_plain_skipSpaces;
PyObject *const_str_plain_posAfterMarker;
PyObject *const_str_plain_push;
PyObject *const_tuple_str_plain_ordered_list_open_str_plain_ol_int_pos_1_tuple;
PyObject *const_str_plain_markerValue;
PyObject *const_str_plain_attrs;
PyObject *const_tuple_str_plain_bullet_list_open_str_plain_ul_int_pos_1_tuple;
PyObject *const_str_plain_token;
PyObject *const_str_plain_map;
PyObject *const_str_plain_markup;
PyObject *const_str_plain_md;
PyObject *const_str_plain_block;
PyObject *const_str_plain_ruler;
PyObject *const_str_plain_getRules;
PyObject *const_tuple_str_plain_list_tuple;
PyObject *const_str_plain_list;
PyObject *const_str_plain_nextLine;
PyObject *const_str_plain_endLine;
PyObject *const_str_plain_startLine;
PyObject *const_str_chr_9;
PyObject *const_str_plain_offset;
PyObject *const_str_plain_bsCount;
PyObject *const_str_space;
PyObject *const_tuple_str_plain_list_item_open_str_plain_li_int_pos_1_tuple;
PyObject *const_str_plain_markerChar;
PyObject *const_str_plain_info;
PyObject *const_str_plain_tight;
PyObject *const_str_plain_isEmpty;
PyObject *const_str_plain_min;
PyObject *const_str_plain_line;
PyObject *const_str_plain_tokenize;
PyObject *const_str_plain_prevEmptyEnd;
PyObject *const_tuple_str_plain_list_item_close_str_plain_li_int_neg_1_tuple;
PyObject *const_str_plain_terminatorRules;
PyObject *const_tuple_str_plain_ordered_list_close_str_plain_ol_int_neg_1_tuple;
PyObject *const_tuple_str_plain_bullet_list_close_str_plain_ul_int_neg_1_tuple;
PyObject *const_str_plain_markTightParagraphs;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_logging;
PyObject *const_str_digest_b079a483a5bb3f12a8f5a2f221050499;
PyObject *const_tuple_str_plain_isStrSpace_tuple;
PyObject *const_str_plain_state_block;
PyObject *const_tuple_str_plain_StateBlock_tuple;
PyObject *const_str_plain_StateBlock;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_d245e88b80613a1fb3907eba554ce5e6_tuple;
PyObject *const_str_plain_return;
PyObject *const_str_plain_idx;
PyObject *const_str_plain_silent;
PyObject *const_str_plain_list_block;
PyObject *const_str_digest_750637a278550bce84424a89ab4ffddf;
PyObject *const_str_digest_4b998ec5e6c4c0bb9055b3139db91738;
PyObject *const_tuple_883e11807ccb88dff1f51c5ac5f3246b_tuple;
PyObject *const_tuple_b0ba799de26d2a5ed2e6f608f6ed6875_tuple;
PyObject *const_tuple_2fe5e260c588b6ffe8e1ca8f8368014f_tuple;
PyObject *const_tuple_858c0d95105b327729f310a45eb38de9_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[87];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("markdown_it.rules_block.list"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_bMarks);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_tShift);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_eMarks);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_src);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_42_str_chr_45_str_chr_43_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_isStrSpace);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_int_pos_48);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_int_pos_57);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_pos);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_41_str_dot_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokens);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_i);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_paragraph_open);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_hidden);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_LOGGER);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d83ef24392799f7fa4b20c86d539f4e);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_code_block);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_listIndent);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_sCount);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_blkIndent);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_parentType);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_paragraph);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_skipOrderedListMarker);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_skipBulletListMarker);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_skipSpaces);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_posAfterMarker);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_push);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ordered_list_open_str_plain_ol_int_pos_1_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_markerValue);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_attrs);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bullet_list_open_str_plain_ul_int_pos_1_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_map);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_markup);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_md);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_block);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_ruler);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_getRules);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_list_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_list);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_nextLine);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_endLine);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_startLine);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_chr_9);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_offset);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_bsCount);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_list_item_open_str_plain_li_int_pos_1_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_markerChar);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_tight);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_isEmpty);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_line);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_prevEmptyEnd);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_list_item_close_str_plain_li_int_neg_1_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_terminatorRules);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ordered_list_close_str_plain_ol_int_neg_1_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bullet_list_close_str_plain_ul_int_neg_1_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_markTightParagraphs);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_isStrSpace_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_state_block);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StateBlock_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_StateBlock);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d245e88b80613a1fb3907eba554ce5e6_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_idx);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_silent);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_list_block);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_750637a278550bce84424a89ab4ffddf);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b998ec5e6c4c0bb9055b3139db91738);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_883e11807ccb88dff1f51c5ac5f3246b_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_b0ba799de26d2a5ed2e6f608f6ed6875_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_2fe5e260c588b6ffe8e1ca8f8368014f_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_858c0d95105b327729f310a45eb38de9_tuple);
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
void checkModuleConstants_markdown_it$rules_block$list(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_bMarks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bMarks);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_tShift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tShift);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_eMarks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eMarks);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_src));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_42_str_chr_45_str_chr_43_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_42_str_chr_45_str_chr_43_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_isStrSpace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isStrSpace);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_int_pos_48));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_48);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_int_pos_57));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_57);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_pos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pos);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_10));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_10);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_41_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_41_str_dot_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokens);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_i));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_i);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_paragraph_open));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_paragraph_open);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_hidden));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hidden);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LOGGER);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d83ef24392799f7fa4b20c86d539f4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d83ef24392799f7fa4b20c86d539f4e);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_code_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_code_block);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_listIndent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_listIndent);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_sCount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sCount);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_blkIndent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blkIndent);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_parentType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parentType);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_paragraph));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_paragraph);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_skipOrderedListMarker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_skipOrderedListMarker);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_skipBulletListMarker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_skipBulletListMarker);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_skipSpaces));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_skipSpaces);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_posAfterMarker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_posAfterMarker);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_push));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_push);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ordered_list_open_str_plain_ol_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ordered_list_open_str_plain_ol_int_pos_1_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_markerValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_markerValue);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_attrs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attrs);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bullet_list_open_str_plain_ul_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bullet_list_open_str_plain_ul_int_pos_1_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_map));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_map);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_markup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_markup);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_md));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_md);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_block);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_ruler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ruler);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_getRules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getRules);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_list_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_list);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_nextLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nextLine);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_endLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endLine);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_startLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startLine);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_chr_9));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_9);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_offset);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_bsCount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bsCount);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_list_item_open_str_plain_li_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_list_item_open_str_plain_li_int_pos_1_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_markerChar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_markerChar);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_tight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tight);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_isEmpty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isEmpty);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_line);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokenize);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_prevEmptyEnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prevEmptyEnd);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_list_item_close_str_plain_li_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_list_item_close_str_plain_li_int_neg_1_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_terminatorRules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_terminatorRules);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ordered_list_close_str_plain_ol_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ordered_list_close_str_plain_ol_int_neg_1_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bullet_list_close_str_plain_ul_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bullet_list_close_str_plain_ul_int_neg_1_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_markTightParagraphs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_markTightParagraphs);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_isStrSpace_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_isStrSpace_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_state_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state_block);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StateBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StateBlock_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_StateBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StateBlock);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d245e88b80613a1fb3907eba554ce5e6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d245e88b80613a1fb3907eba554ce5e6_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_idx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_idx);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_silent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_silent);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_list_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_list_block);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_750637a278550bce84424a89ab4ffddf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_750637a278550bce84424a89ab4ffddf);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b998ec5e6c4c0bb9055b3139db91738));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b998ec5e6c4c0bb9055b3139db91738);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_883e11807ccb88dff1f51c5ac5f3246b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_883e11807ccb88dff1f51c5ac5f3246b_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_b0ba799de26d2a5ed2e6f608f6ed6875_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b0ba799de26d2a5ed2e6f608f6ed6875_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_2fe5e260c588b6ffe8e1ca8f8368014f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2fe5e260c588b6ffe8e1ca8f8368014f_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_858c0d95105b327729f310a45eb38de9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_858c0d95105b327729f310a45eb38de9_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 8
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
static PyObject *module_var_accessor_markdown_it$rules_block$list$LOGGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LOGGER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LOGGER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LOGGER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LOGGER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$list$StateBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_StateBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StateBlock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StateBlock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StateBlock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StateBlock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_StateBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_StateBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StateBlock);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$list$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$list->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$list$isStrSpace(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_isStrSpace);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isStrSpace);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isStrSpace, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isStrSpace);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isStrSpace, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_isStrSpace);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_isStrSpace);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isStrSpace);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$list$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$list$markTightParagraphs(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_markTightParagraphs);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_markTightParagraphs);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_markTightParagraphs, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_markTightParagraphs);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_markTightParagraphs, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_markTightParagraphs);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_markTightParagraphs);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_markTightParagraphs);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$list$skipBulletListMarker(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_skipBulletListMarker);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_skipBulletListMarker);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_skipBulletListMarker, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_skipBulletListMarker);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_skipBulletListMarker, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_skipBulletListMarker);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_skipBulletListMarker);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_skipBulletListMarker);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$list$skipOrderedListMarker(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_skipOrderedListMarker);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_skipOrderedListMarker);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_skipOrderedListMarker, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_skipOrderedListMarker);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_skipOrderedListMarker, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_skipOrderedListMarker);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_skipOrderedListMarker);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_skipOrderedListMarker);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_70a6a7ccb5449289e382c8c26f107542;
static PyCodeObject *code_objects_661292a9981e508074091da861f8217d;
static PyCodeObject *code_objects_854f387aac7c56766285ebf12bf30004;
static PyCodeObject *code_objects_fc8a19d22c729b56fb44ef90fce3b31f;
static PyCodeObject *code_objects_aac6f80472714d5eec4c3ea9a38d17f4;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_750637a278550bce84424a89ab4ffddf); CHECK_OBJECT(module_filename_obj);
code_objects_70a6a7ccb5449289e382c8c26f107542 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_4b998ec5e6c4c0bb9055b3139db91738, mod_consts.const_str_digest_4b998ec5e6c4c0bb9055b3139db91738, NULL, NULL, 0, 0, 0);
code_objects_661292a9981e508074091da861f8217d = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_list_block, mod_consts.const_str_plain_list_block, mod_consts.const_tuple_883e11807ccb88dff1f51c5ac5f3246b_tuple, NULL, 4, 0, 0);
code_objects_854f387aac7c56766285ebf12bf30004 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_markTightParagraphs, mod_consts.const_str_plain_markTightParagraphs, mod_consts.const_tuple_b0ba799de26d2a5ed2e6f608f6ed6875_tuple, NULL, 2, 0, 0);
code_objects_fc8a19d22c729b56fb44ef90fce3b31f = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_skipBulletListMarker, mod_consts.const_str_plain_skipBulletListMarker, mod_consts.const_tuple_2fe5e260c588b6ffe8e1ca8f8368014f_tuple, NULL, 2, 0, 0);
code_objects_aac6f80472714d5eec4c3ea9a38d17f4 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_skipOrderedListMarker, mod_consts.const_str_plain_skipOrderedListMarker, mod_consts.const_tuple_858c0d95105b327729f310a45eb38de9_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_markdown_it$rules_block$list$$$function__1_skipBulletListMarker(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$rules_block$list$$$function__3_markTightParagraphs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$rules_block$list$$$function__4_list_block(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_markdown_it$rules_block$list$$$function__1_skipBulletListMarker(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *par_startLine = python_pars[1];
PyObject *var_pos = NULL;
PyObject *var_maximum = NULL;
PyObject *var_marker = NULL;
PyObject *var_ch = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker = MAKE_FUNCTION_FRAME(tstate, code_objects_fc8a19d22c729b56fb44ef90fce3b31f, module_markdown_it$rules_block$list, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker->m_type_description == NULL);
frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker = cache_frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker);
assert(Py_REFCNT(frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_state);
tmp_expression_value_2 = par_state;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_1 = par_startLine;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_expression_value_4 = par_state;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 13;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_2 = par_startLine;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 13;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_pos == NULL);
var_pos = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_state);
tmp_expression_value_6 = par_state;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_eMarks);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_3 = par_startLine;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_maximum == NULL);
var_maximum = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_state);
tmp_expression_value_8 = par_state;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_src);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_pos);
tmp_subscript_value_4 = var_pos;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_marker == NULL);
var_marker = tmp_assign_source_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_IndexError;
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
tmp_return_value = const_int_neg_1;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 16;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker->m_frame)) {
        frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
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
try_end_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(var_pos);
tmp_iadd_expr_left_1 = var_pos;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = tmp_iadd_expr_left_1;
var_pos = tmp_assign_source_4;

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_marker);
tmp_cmp_expr_left_2 = var_marker;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_str_chr_42_str_chr_45_str_chr_43_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
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
tmp_return_value = const_int_neg_1;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_pos);
tmp_cmp_expr_left_3 = var_pos;
CHECK_OBJECT(var_maximum);
tmp_cmp_expr_right_3 = var_maximum;
tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_state);
tmp_expression_value_10 = par_state;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_src);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pos);
tmp_subscript_value_5 = var_pos;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_ch == NULL);
var_ch = tmp_assign_source_5;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_markdown_it$rules_block$list$isStrSpace(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isStrSpace);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ch);
tmp_args_element_value_1 = var_ch;
frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker->m_frame.f_lineno = 28;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oooooo";
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
tmp_return_value = const_int_neg_1;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker,
    type_description_1,
    par_state,
    par_startLine,
    var_pos,
    var_maximum,
    var_marker,
    var_ch
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker == cache_frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker);
    cache_frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_block$list$$$function__1_skipBulletListMarker);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_pos);
tmp_return_value = var_pos;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_pos);
CHECK_OBJECT(var_pos);
Py_DECREF(var_pos);
var_pos = NULL;
CHECK_OBJECT(var_maximum);
CHECK_OBJECT(var_maximum);
Py_DECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_marker);
var_marker = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_marker);
var_marker = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_startLine);
Py_DECREF(par_startLine);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_startLine);
Py_DECREF(par_startLine);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *par_startLine = python_pars[1];
PyObject *var_start = NULL;
PyObject *var_pos = NULL;
PyObject *var_maximum = NULL;
PyObject *var_ch = NULL;
PyObject *var_ch_ord = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker = MAKE_FUNCTION_FRAME(tstate, code_objects_aac6f80472714d5eec4c3ea9a38d17f4, module_markdown_it$rules_block$list, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker->m_type_description == NULL);
frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker = cache_frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker);
assert(Py_REFCNT(frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_state);
tmp_expression_value_2 = par_state;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_1 = par_startLine;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_expression_value_4 = par_state;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 38;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_2 = par_startLine;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 38;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_start == NULL);
var_start = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(var_start);
tmp_assign_source_2 = var_start;
assert(var_pos == NULL);
Py_INCREF(tmp_assign_source_2);
var_pos = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_state);
tmp_expression_value_6 = par_state;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_eMarks);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_3 = par_startLine;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_maximum == NULL);
var_maximum = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(var_pos);
tmp_add_expr_left_2 = var_pos;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_cmp_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_maximum);
tmp_cmp_expr_right_1 = var_maximum;
tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
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
tmp_return_value = const_int_neg_1;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_state);
tmp_expression_value_8 = par_state;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_src);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pos);
tmp_subscript_value_4 = var_pos;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_ch == NULL);
var_ch = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(var_pos);
tmp_iadd_expr_left_1 = var_pos;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = tmp_iadd_expr_left_1;
var_pos = tmp_assign_source_5;

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_ord_arg_1;
CHECK_OBJECT(var_ch);
tmp_ord_arg_1 = var_ch;
tmp_assign_source_6 = BUILTIN_ORD(tmp_ord_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_ch_ord == NULL);
var_ch_ord = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_ch_ord);
tmp_cmp_expr_left_2 = var_ch_ord;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_48;
tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_ch_ord);
tmp_cmp_expr_left_3 = var_ch_ord;
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_57;
tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooo";
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
tmp_return_value = const_int_neg_1;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
loop_start_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 56;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = var_pos;
CHECK_OBJECT(var_maximum);
tmp_cmp_expr_right_4 = var_maximum;
tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = const_int_neg_1;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_5;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 59;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_state;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_src);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (var_pos == NULL) {
Py_DECREF(tmp_expression_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 59;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_5 = var_pos;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ch;
    var_ch = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 60;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_pos;
tmp_iadd_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = tmp_iadd_expr_left_2;
var_pos = tmp_assign_source_8;

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_ord_arg_2;
CHECK_OBJECT(var_ch);
tmp_ord_arg_2 = var_ch;
tmp_assign_source_9 = BUILTIN_ORD(tmp_ord_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ch_ord;
    var_ch_ord = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_ch_ord);
tmp_cmp_expr_left_5 = var_ch_ord;
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_48;
tmp_and_left_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_ch_ord);
tmp_cmp_expr_left_6 = var_ch_ord;
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_57;
tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooo";
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
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_pos);
tmp_sub_expr_left_1 = var_pos;
if (var_start == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_start);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_right_1 = var_start;
tmp_cmp_expr_left_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = mod_consts.const_int_pos_10;
tmp_condition_result_5 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_return_value = const_int_neg_1;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
goto loop_start_1;
branch_no_4:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_8 = var_ch;
tmp_cmp_expr_right_8 = mod_consts.const_tuple_str_chr_41_str_dot_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
goto loop_end_1;
branch_no_6:;
tmp_return_value = const_int_neg_1;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_pos);
tmp_cmp_expr_left_9 = var_pos;
CHECK_OBJECT(var_maximum);
tmp_cmp_expr_right_9 = var_maximum;
tmp_condition_result_7 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_6;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 79;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_state;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_src);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pos);
tmp_subscript_value_6 = var_pos;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ch;
    assert(old != NULL);
    var_ch = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_markdown_it$rules_block$list$isStrSpace(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isStrSpace);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ch);
tmp_args_element_value_1 = var_ch;
frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker->m_frame.f_lineno = 81;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
tmp_return_value = const_int_neg_1;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker,
    type_description_1,
    par_state,
    par_startLine,
    var_start,
    var_pos,
    var_maximum,
    var_ch,
    var_ch_ord
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker == cache_frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker);
    cache_frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_pos);
tmp_return_value = var_pos;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
CHECK_OBJECT(var_maximum);
CHECK_OBJECT(var_maximum);
Py_DECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_ch_ord);
var_ch_ord = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_ch_ord);
var_ch_ord = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_startLine);
Py_DECREF(par_startLine);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_startLine);
Py_DECREF(par_startLine);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$rules_block$list$$$function__3_markTightParagraphs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *par_idx = python_pars[1];
PyObject *var_level = NULL;
PyObject *var_i = NULL;
PyObject *var_length = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs = MAKE_FUNCTION_FRAME(tstate, code_objects_854f387aac7c56766285ebf12bf30004, module_markdown_it$rules_block$list, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs->m_type_description == NULL);
frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs = cache_frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs);
assert(Py_REFCNT(frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_state);
tmp_expression_value_1 = par_state;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_level);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_int_pos_2;
tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_level == NULL);
var_level = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(par_idx);
tmp_add_expr_left_2 = par_idx;
tmp_add_expr_right_2 = mod_consts.const_int_pos_2;
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_i == NULL);
var_i = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_state);
tmp_expression_value_2 = par_state;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_tokens);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = 2;
tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
assert(!(tmp_assign_source_3 == NULL));
assert(var_length == NULL);
var_length = tmp_assign_source_3;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = var_i;
CHECK_OBJECT(var_length);
tmp_cmp_expr_right_1 = var_length;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
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
goto loop_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = par_state;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (var_i == NULL) {
Py_DECREF(tmp_expression_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_1 = var_i;
tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_level);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_level);
tmp_cmp_expr_right_2 = var_level;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_state;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (var_i == NULL) {
Py_DECREF(tmp_expression_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_2 = var_i;
tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_paragraph_open;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_3;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
tmp_assattr_value_1 = Py_True;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 95;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_state;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (var_i == NULL) {
Py_DECREF(tmp_expression_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 95;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_3 = var_i;
tmp_add_expr_right_3 = mod_consts.const_int_pos_2;
tmp_subscript_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_9);

exception_lineno = 95;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_target_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_hidden, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_4;
tmp_assattr_value_2 = Py_True;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_state;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (var_i == NULL) {
Py_DECREF(tmp_expression_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_4 = var_i;
tmp_assattr_target_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_assattr_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_hidden, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_target_2);
Py_DECREF(tmp_assattr_target_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 97;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_i;
tmp_iadd_expr_right_1 = mod_consts.const_int_pos_2;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = tmp_iadd_expr_left_1;
var_i = tmp_assign_source_4;

}
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 98;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_i;
tmp_iadd_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = tmp_iadd_expr_left_2;
var_i = tmp_assign_source_5;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs,
    type_description_1,
    par_state,
    par_idx,
    var_level,
    var_i,
    var_length
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs == cache_frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs);
    cache_frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_block$list$$$function__3_markTightParagraphs);

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
CHECK_OBJECT(var_level);
CHECK_OBJECT(var_level);
Py_DECREF(var_level);
var_level = NULL;
Py_XDECREF(var_i);
var_i = NULL;
CHECK_OBJECT(var_length);
CHECK_OBJECT(var_length);
Py_DECREF(var_length);
var_length = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_level);
var_level = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_length);
var_length = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$rules_block$list$$$function__4_list_block(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *par_startLine = python_pars[1];
PyObject *par_endLine = python_pars[2];
PyObject *par_silent = python_pars[3];
nuitka_bool var_isTerminatingParagraph = NUITKA_BOOL_UNASSIGNED;
PyObject *var_tight = NULL;
PyObject *var_posAfterMarker = NULL;
nuitka_bool var_isOrdered = NUITKA_BOOL_UNASSIGNED;
PyObject *var_start = NULL;
PyObject *var_markerValue = NULL;
PyObject *var_markerChar = NULL;
PyObject *var_listTokIdx = NULL;
PyObject *var_token = NULL;
PyObject *var_listLines = NULL;
PyObject *var_nextLine = NULL;
PyObject *var_prevEmptyEnd = NULL;
PyObject *var_terminatorRules = NULL;
PyObject *var_oldParentType = NULL;
PyObject *var_pos = NULL;
PyObject *var_maximum = NULL;
PyObject *var_initial = NULL;
PyObject *var_offset = NULL;
PyObject *var_ch = NULL;
PyObject *var_contentStart = NULL;
PyObject *var_indentAfterMarker = NULL;
PyObject *var_indent = NULL;
PyObject *var_itemLines = NULL;
PyObject *var_oldTight = NULL;
PyObject *var_oldTShift = NULL;
PyObject *var_oldSCount = NULL;
PyObject *var_oldListIndent = NULL;
PyObject *var_terminate = NULL;
PyObject *var_terminatorRule = NULL;
PyObject *tmp_assign_unpack_1__assign_source = NULL;
PyObject *tmp_assign_unpack_2__assign_source = NULL;
PyObject *tmp_assign_unpack_3__assign_source = NULL;
PyObject *tmp_assign_unpack_4__assign_source = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_block$list$$$function__4_list_block;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_block$list$$$function__4_list_block = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_block$list$$$function__4_list_block)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_block$list$$$function__4_list_block);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_block$list$$$function__4_list_block == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_block$list$$$function__4_list_block = MAKE_FUNCTION_FRAME(tstate, code_objects_661292a9981e508074091da861f8217d, module_markdown_it$rules_block$list, sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_type_description == NULL);
frame_frame_markdown_it$rules_block$list$$$function__4_list_block = cache_frame_frame_markdown_it$rules_block$list$$$function__4_list_block;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_block$list$$$function__4_list_block);
assert(Py_REFCNT(frame_frame_markdown_it$rules_block$list$$$function__4_list_block) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_1 = module_var_accessor_markdown_it$rules_block$list$LOGGER(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LOGGER);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_3d83ef24392799f7fa4b20c86d539f4e;
CHECK_OBJECT(par_state);
tmp_args_element_value_2 = par_state;
CHECK_OBJECT(par_startLine);
tmp_args_element_value_3 = par_startLine;
CHECK_OBJECT(par_endLine);
tmp_args_element_value_4 = par_endLine;
CHECK_OBJECT(par_silent);
tmp_args_element_value_5 = par_silent;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS5(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_assign_source_1;
tmp_assign_source_1 = NUITKA_BOOL_FALSE;
var_isTerminatingParagraph = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_True;
assert(var_tight == NULL);
Py_INCREF(tmp_assign_source_2);
var_tight = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
int tmp_truth_name_1;
CHECK_OBJECT(par_state);
tmp_called_instance_2 = par_state;
CHECK_OBJECT(par_startLine);
tmp_args_element_value_6 = par_startLine;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 107;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_is_code_block, tmp_args_element_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 107;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_state);
tmp_expression_value_1 = par_state;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_listIndent);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_and_left_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_state);
tmp_expression_value_3 = par_state;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_1 = par_startLine;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_expression_value_4 = par_state;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_listIndent);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 118;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_4;
tmp_and_left_value_2 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_state);
tmp_expression_value_6 = par_state;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_2 = par_startLine;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_expression_value_7 = par_state;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_blkIndent);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 119;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
int tmp_truth_name_2;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_silent);
tmp_truth_name_2 = CHECK_IF_TRUE(par_silent);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_state);
tmp_expression_value_8 = par_state;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_parentType);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_paragraph;
tmp_and_left_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(par_state);
tmp_expression_value_10 = par_state;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_3 = par_startLine;
tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_expression_value_11 = par_state;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_blkIndent);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 133;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_4 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_and_right_value_3 = tmp_and_left_value_4;
and_end_4:;
tmp_condition_result_3 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_3 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_3;
tmp_assign_source_3 = NUITKA_BOOL_TRUE;
var_isTerminatingParagraph = tmp_assign_source_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_1 = module_var_accessor_markdown_it$rules_block$list$skipOrderedListMarker(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_skipOrderedListMarker);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_args_element_value_7 = par_state;
CHECK_OBJECT(par_startLine);
tmp_args_element_value_8 = par_startLine;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 138;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_posAfterMarker == NULL);
var_posAfterMarker = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_posAfterMarker);
tmp_cmp_expr_left_6 = var_posAfterMarker;
tmp_cmp_expr_right_6 = const_int_0;
tmp_condition_result_4 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
var_isOrdered = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_state);
tmp_expression_value_13 = par_state;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_4 = par_startLine;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_expression_value_15 = par_state;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 141;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_5 = par_startLine;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 141;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_start == NULL);
var_start = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_int_arg_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_6;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
CHECK_OBJECT(par_state);
tmp_expression_value_17 = par_state;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_src);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_start);
tmp_start_value_1 = var_start;
CHECK_OBJECT(var_posAfterMarker);
tmp_sub_expr_left_2 = var_posAfterMarker;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_stop_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_16);

exception_lineno = 142;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_6 == NULL));
tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_markerValue == NULL);
var_markerValue = tmp_assign_source_7;
}
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
assert(var_isTerminatingParagraph != NUITKA_BOOL_UNASSIGNED);
tmp_and_left_value_5 = var_isTerminatingParagraph;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(var_markerValue);
tmp_cmp_expr_left_7 = var_markerValue;
tmp_cmp_expr_right_7 = const_int_pos_1;
tmp_and_right_value_5 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_and_right_value_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_5 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_2 = module_var_accessor_markdown_it$rules_block$list$skipBulletListMarker(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_skipBulletListMarker);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_args_element_value_9 = par_state;
CHECK_OBJECT(par_startLine);
tmp_args_element_value_10 = par_startLine;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 149;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_posAfterMarker;
    assert(old != NULL);
    var_posAfterMarker = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_posAfterMarker);
tmp_cmp_expr_left_8 = var_posAfterMarker;
tmp_cmp_expr_right_8 = const_int_0;
tmp_condition_result_6 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
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
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
var_isOrdered = tmp_assign_source_9;
}
goto branch_end_6;
branch_no_6:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_end_6:;
branch_end_4:;
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_6;
nuitka_bool tmp_and_left_value_6;
nuitka_bool tmp_and_right_value_6;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_7;
assert(var_isTerminatingParagraph != NUITKA_BOOL_UNASSIGNED);
tmp_and_left_value_6 = var_isTerminatingParagraph;
tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(par_state);
tmp_expression_value_18 = par_state;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_skipSpaces);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_posAfterMarker == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_posAfterMarker);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = var_posAfterMarker;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 159;
tmp_cmp_expr_left_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_expression_value_20 = par_state;
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_eMarks);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_9);

exception_lineno = 159;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_7 = par_startLine;
tmp_cmp_expr_right_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_9);

exception_lineno = 159;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_6 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
CHECK_OBJECT(tmp_cmp_expr_right_9);
Py_DECREF(tmp_cmp_expr_right_9);
if (tmp_and_right_value_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_condition_result_7 = tmp_and_left_value_6;
and_end_6:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_7:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_8;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
CHECK_OBJECT(par_state);
tmp_expression_value_22 = par_state;
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_src);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_posAfterMarker == NULL) {
Py_DECREF(tmp_expression_value_21);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_posAfterMarker);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 164;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_3 = var_posAfterMarker;
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_subscript_value_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_subscript_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_21);

exception_lineno = 164;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_markerChar == NULL);
var_markerChar = tmp_assign_source_10;
}
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_3;
CHECK_OBJECT(par_silent);
tmp_truth_name_3 = CHECK_IF_TRUE(par_silent);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_8:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(par_state);
tmp_expression_value_23 = par_state;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_tokens);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_listTokIdx == NULL);
var_listTokIdx = tmp_assign_source_11;
}
{
bool tmp_condition_result_9;
assert(var_isOrdered != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_9 = var_isOrdered == NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(par_state);
tmp_called_instance_3 = par_state;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 174;
tmp_assign_source_12 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ordered_list_open_str_plain_ol_int_pos_1_tuple, 0)
);

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_12;
}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
if (var_markerValue == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_markerValue);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 175;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_10 = var_markerValue;
tmp_cmp_expr_right_10 = const_int_pos_1;
tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_assattr_target_1;
tmp_dict_key_1 = mod_consts.const_str_plain_start;
if (var_markerValue == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_markerValue);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 176;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = var_markerValue;
tmp_assattr_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(var_token);
tmp_assattr_target_1 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_attrs, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_10:;
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(par_state);
tmp_called_instance_4 = par_state;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 179;
tmp_assign_source_13 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_bullet_list_open_str_plain_ul_int_pos_1_tuple, 0)
);

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_13;
}
branch_end_9:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_startLine);
tmp_list_element_1 = par_startLine;
tmp_assign_source_14 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_assign_source_14, 0, tmp_list_element_1);
tmp_list_element_1 = const_int_0;
PyList_SET_ITEM0(tmp_assign_source_14, 1, tmp_list_element_1);
assert(tmp_assign_unpack_1__assign_source == NULL);
tmp_assign_unpack_1__assign_source = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assattr_value_2 = tmp_assign_unpack_1__assign_source;
if (var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 181;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_assattr_target_2 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_map, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
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

CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_15 = tmp_assign_unpack_1__assign_source;
assert(var_listLines == NULL);
Py_INCREF(tmp_assign_source_15);
var_listLines = tmp_assign_source_15;
}
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_markerChar);
tmp_assattr_value_3 = var_markerChar;
if (var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 182;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_3 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_markup, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(par_startLine);
tmp_assign_source_16 = par_startLine;
assert(var_nextLine == NULL);
Py_INCREF(tmp_assign_source_16);
var_nextLine = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = Py_False;
assert(var_prevEmptyEnd == NULL);
Py_INCREF(tmp_assign_source_17);
var_prevEmptyEnd = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(par_state);
tmp_expression_value_26 = par_state;
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_md);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_block);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_ruler);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 190;
tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_getRules,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_list_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_terminatorRules == NULL);
var_terminatorRules = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(par_state);
tmp_expression_value_27 = par_state;
tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_parentType);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_oldParentType == NULL);
var_oldParentType = tmp_assign_source_19;
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = mod_consts.const_str_plain_list;
CHECK_OBJECT(par_state);
tmp_assattr_target_4 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_parentType, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
loop_start_1:;
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_11 = var_nextLine;
if (par_endLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_endLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_11 = par_endLine;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
goto loop_end_1;
branch_no_11:;
{
PyObject *tmp_assign_source_20;
if (var_posAfterMarker == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_posAfterMarker);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 196;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_20 = var_posAfterMarker;
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_20;
    Py_INCREF(var_pos);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_9;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 197;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_29 = par_state;
tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_eMarks);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_28);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 197;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_9 = var_nextLine;
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_maximum;
    var_maximum = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_10;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_11;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_12;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 200;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_31 = par_state;
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_30);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 200;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_subscript_value_10 = var_nextLine;
tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_10);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
if (var_posAfterMarker == NULL) {
Py_DECREF(tmp_add_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_posAfterMarker);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 201;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_add_expr_right_2 = var_posAfterMarker;
tmp_sub_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_sub_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
if (par_state == NULL) {
Py_DECREF(tmp_sub_expr_left_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 202;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_33 = par_state;
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_4);

exception_lineno = 202;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
if (par_startLine == NULL) {
Py_DECREF(tmp_sub_expr_left_4);
Py_DECREF(tmp_expression_value_32);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 202;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_subscript_value_11 = par_startLine;
tmp_add_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_11);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_4);

exception_lineno = 202;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
if (par_state == NULL) {
Py_DECREF(tmp_sub_expr_left_4);
Py_DECREF(tmp_add_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 202;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_35 = par_state;
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_4);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 202;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
if (par_startLine == NULL) {
Py_DECREF(tmp_sub_expr_left_4);
Py_DECREF(tmp_add_expr_left_3);
Py_DECREF(tmp_expression_value_34);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 202;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_subscript_value_12 = par_startLine;
tmp_add_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_12);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_4);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 202;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_sub_expr_right_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_sub_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_4);

exception_lineno = 202;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_22 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_left_4);
Py_DECREF(tmp_sub_expr_left_4);
CHECK_OBJECT(tmp_sub_expr_right_4);
Py_DECREF(tmp_sub_expr_right_4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_assign_unpack_2__assign_source;
    tmp_assign_unpack_2__assign_source = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assign_unpack_2__assign_source);
tmp_assign_unpack_2__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_assign_source_23 = tmp_assign_unpack_2__assign_source;
{
    PyObject *old = var_initial;
    var_initial = tmp_assign_source_23;
    Py_INCREF(var_initial);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_assign_source_24 = tmp_assign_unpack_2__assign_source;
{
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_24;
    Py_INCREF(var_offset);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
Py_DECREF(tmp_assign_unpack_2__assign_source);
tmp_assign_unpack_2__assign_source = NULL;
loop_start_2:;
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 205;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_12 = var_pos;
CHECK_OBJECT(var_maximum);
tmp_cmp_expr_right_12 = var_maximum;
tmp_operand_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
goto loop_end_2;
branch_no_12:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_13;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 206;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_37 = par_state;
tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_src);
if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_pos == NULL) {
Py_DECREF(tmp_expression_value_36);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 206;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_13 = var_pos;
tmp_assign_source_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_13);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ch;
    var_ch = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_13 = var_ch;
tmp_cmp_expr_right_13 = mod_consts.const_str_chr_9;
tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_sub_expr_left_5;
PyObject *tmp_sub_expr_right_5;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_14;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 209;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_offset;
tmp_sub_expr_left_5 = mod_consts.const_int_pos_4;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 209;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_4 = var_offset;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 209;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_39 = par_state;
tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_bsCount);
if (tmp_expression_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_38);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 209;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_14 = var_nextLine;
tmp_add_expr_right_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_14);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_mod_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = mod_consts.const_int_pos_4;
tmp_sub_expr_right_5 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_left_1);
Py_DECREF(tmp_mod_expr_left_1);
if (tmp_sub_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
CHECK_OBJECT(tmp_sub_expr_right_5);
Py_DECREF(tmp_sub_expr_right_5);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_26 = tmp_iadd_expr_left_1;
var_offset = tmp_assign_source_26;

}
goto branch_end_13;
branch_no_13:;
{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_14 = var_ch;
tmp_cmp_expr_right_14 = mod_consts.const_str_space;
tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 211;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_offset;
tmp_iadd_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_27 = tmp_iadd_expr_left_2;
var_offset = tmp_assign_source_27;

}
goto branch_end_14;
branch_no_14:;
goto loop_end_2;
branch_end_14:;
branch_end_13:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 215;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_3 = var_pos;
tmp_iadd_expr_right_3 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_28 = tmp_iadd_expr_left_3;
var_pos = tmp_assign_source_28;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_2;
loop_end_2:;
{
PyObject *tmp_assign_source_29;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 217;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_29 = var_pos;
{
    PyObject *old = var_contentStart;
    var_contentStart = tmp_assign_source_29;
    Py_INCREF(var_contentStart);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
PyObject *tmp_sub_expr_left_6;
PyObject *tmp_sub_expr_right_6;
CHECK_OBJECT(var_contentStart);
tmp_cmp_expr_left_15 = var_contentStart;
CHECK_OBJECT(var_maximum);
tmp_cmp_expr_right_15 = var_maximum;
tmp_condition_result_15 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_30 = const_int_pos_1;
Py_INCREF(tmp_assign_source_30);
goto condexpr_end_1;
condexpr_false_1:;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 220;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_6 = var_offset;
CHECK_OBJECT(var_initial);
tmp_sub_expr_right_6 = var_initial;
tmp_assign_source_30 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
{
    PyObject *old = var_indentAfterMarker;
    var_indentAfterMarker = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
CHECK_OBJECT(var_indentAfterMarker);
tmp_cmp_expr_left_16 = var_indentAfterMarker;
tmp_cmp_expr_right_16 = mod_consts.const_int_pos_4;
tmp_condition_result_16 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = const_int_pos_1;
{
    PyObject *old = var_indentAfterMarker;
    assert(old != NULL);
    var_indentAfterMarker = tmp_assign_source_31;
    Py_INCREF(var_indentAfterMarker);
    Py_DECREF(old);
}

}
branch_no_15:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
CHECK_OBJECT(var_initial);
tmp_add_expr_left_5 = var_initial;
CHECK_OBJECT(var_indentAfterMarker);
tmp_add_expr_right_5 = var_indentAfterMarker;
tmp_assign_source_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_indent;
    var_indent = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_instance_6;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_6 = par_state;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 232;
tmp_assign_source_33 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_list_item_open_str_plain_li_int_pos_1_tuple, 0)
);

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
if (var_markerChar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_markerChar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 233;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_5 = var_markerChar;
CHECK_OBJECT(var_token);
tmp_assattr_target_5 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_markup, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_list_element_2;
if (par_startLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 234;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_list_element_2 = par_startLine;
tmp_assign_source_34 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_assign_source_34, 0, tmp_list_element_2);
tmp_list_element_2 = const_int_0;
PyList_SET_ITEM0(tmp_assign_source_34, 1, tmp_list_element_2);
{
    PyObject *old = tmp_assign_unpack_3__assign_source;
    tmp_assign_unpack_3__assign_source = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
tmp_assattr_value_6 = tmp_assign_unpack_3__assign_source;
CHECK_OBJECT(var_token);
tmp_assattr_target_6 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_map, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
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

Py_XDECREF(tmp_assign_unpack_3__assign_source);
tmp_assign_unpack_3__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_35;
CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
tmp_assign_source_35 = tmp_assign_unpack_3__assign_source;
{
    PyObject *old = var_itemLines;
    var_itemLines = tmp_assign_source_35;
    Py_INCREF(var_itemLines);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
Py_DECREF(tmp_assign_unpack_3__assign_source);
tmp_assign_unpack_3__assign_source = NULL;
{
bool tmp_condition_result_17;
assert(var_isOrdered != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_17 = var_isOrdered == NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_15;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_2;
PyObject *tmp_sub_expr_left_7;
PyObject *tmp_sub_expr_right_7;
PyObject *tmp_assattr_target_7;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 236;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_41 = par_state;
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_src);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_start == NULL) {
Py_DECREF(tmp_expression_value_40);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_start);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 236;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_start_value_2 = var_start;
if (var_posAfterMarker == NULL) {
Py_DECREF(tmp_expression_value_40);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_posAfterMarker);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 236;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_7 = var_posAfterMarker;
tmp_sub_expr_right_7 = const_int_pos_1;
tmp_stop_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
if (tmp_stop_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_40);

exception_lineno = 236;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_15 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
CHECK_OBJECT(tmp_stop_value_2);
Py_DECREF(tmp_stop_value_2);
assert(!(tmp_subscript_value_15 == NULL));
tmp_assattr_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_15);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
CHECK_OBJECT(tmp_subscript_value_15);
Py_DECREF(tmp_subscript_value_15);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_assattr_target_7 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_info, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_16:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_expression_value_42;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 239;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_42 = par_state;
tmp_assign_source_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_tight);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_oldTight;
    var_oldTight = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_16;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 240;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_44 = par_state;
tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_startLine == NULL) {
Py_DECREF(tmp_expression_value_43);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 240;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_16 = par_startLine;
tmp_assign_source_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_16);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_oldTShift;
    var_oldTShift = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_expression_value_45;
PyObject *tmp_expression_value_46;
PyObject *tmp_subscript_value_17;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 241;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_46 = par_state;
tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_startLine == NULL) {
Py_DECREF(tmp_expression_value_45);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 241;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_17 = par_startLine;
tmp_assign_source_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_17);
CHECK_OBJECT(tmp_expression_value_45);
Py_DECREF(tmp_expression_value_45);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_oldSCount;
    var_oldSCount = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_expression_value_47;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 247;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_47 = par_state;
tmp_assign_source_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_listIndent);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_oldListIndent;
    var_oldListIndent = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_expression_value_48;
PyObject *tmp_assattr_target_8;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_48 = par_state;
tmp_assattr_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_blkIndent);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_assattr_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_8 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_listIndent, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(var_indent);
tmp_assattr_value_9 = var_indent;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_9 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_blkIndent, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
tmp_assattr_value_10 = Py_True;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 251;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_10 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_tight, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_sub_expr_left_8;
PyObject *tmp_sub_expr_right_8;
PyObject *tmp_expression_value_49;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_18;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_51;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_contentStart);
tmp_sub_expr_left_8 = var_contentStart;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_50 = par_state;
tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_startLine == NULL) {
Py_DECREF(tmp_expression_value_49);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_18 = par_startLine;
tmp_sub_expr_right_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_18);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_sub_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
CHECK_OBJECT(tmp_sub_expr_right_8);
Py_DECREF(tmp_sub_expr_right_8);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_51 = par_state;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_tShift);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 252;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_startLine == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subscribed_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_1 = par_startLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_52;
PyObject *tmp_ass_subscript_2;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 253;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subvalue_2 = var_offset;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 253;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_52 = par_state;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_sCount);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_startLine == NULL) {
Py_DECREF(tmp_ass_subscribed_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 253;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_2 = par_startLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_18;
int tmp_and_left_truth_7;
nuitka_bool tmp_and_left_value_7;
nuitka_bool tmp_and_right_value_7;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_53;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_12;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
int tmp_truth_name_4;
CHECK_OBJECT(var_contentStart);
tmp_cmp_expr_left_17 = var_contentStart;
CHECK_OBJECT(var_maximum);
tmp_cmp_expr_right_17 = var_maximum;
tmp_and_left_value_7 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_and_left_value_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_53 = par_state;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_isEmpty);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_startLine == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_6 = par_startLine;
tmp_add_expr_right_6 = const_int_pos_1;
tmp_args_element_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 255;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 255;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 255;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_condition_result_18 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
tmp_condition_result_18 = tmp_and_left_value_7;
and_end_7:;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_13;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_expression_value_54;
PyObject *tmp_args_element_value_14;
PyObject *tmp_assattr_target_11;
tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_5 != NULL);
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_54 = par_state;
tmp_add_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_line);
if (tmp_add_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_7 = mod_consts.const_int_pos_2;
tmp_args_element_value_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_endLine == NULL) {
Py_DECREF(tmp_args_element_value_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_endLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_14 = par_endLine;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 263;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assattr_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assattr_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_assattr_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_11 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain_line, tmp_assattr_value_11);
CHECK_OBJECT(tmp_assattr_value_11);
Py_DECREF(tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_17;
branch_no_17:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_55;
PyObject *tmp_expression_value_56;
PyObject *tmp_expression_value_57;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 268;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_57 = par_state;
tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_md);
if (tmp_expression_value_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_block);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
if (tmp_expression_value_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_tokenize);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 268;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_15 = par_state;
if (par_startLine == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 268;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_16 = par_startLine;
if (par_endLine == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_endLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 268;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_17 = par_endLine;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 268;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_17:;
{
nuitka_bool tmp_condition_result_19;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_58;
int tmp_truth_name_5;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 271;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_58 = par_state;
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_tight);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
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
if (var_prevEmptyEnd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_prevEmptyEnd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 271;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_5 = CHECK_IF_TRUE(var_prevEmptyEnd);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_19 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_19 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = Py_False;
{
    PyObject *old = var_tight;
    var_tight = tmp_assign_source_40;
    Py_INCREF(var_tight);
    Py_XDECREF(old);
}

}
branch_no_18:;
{
PyObject *tmp_assign_source_41;
int tmp_and_left_truth_8;
PyObject *tmp_and_left_value_8;
PyObject *tmp_and_right_value_8;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
PyObject *tmp_sub_expr_left_9;
PyObject *tmp_sub_expr_right_9;
PyObject *tmp_expression_value_59;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_60;
PyObject *tmp_args_element_value_18;
PyObject *tmp_sub_expr_left_10;
PyObject *tmp_sub_expr_right_10;
PyObject *tmp_expression_value_61;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_59 = par_state;
tmp_sub_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_line);
if (tmp_sub_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_startLine == NULL) {
Py_DECREF(tmp_sub_expr_left_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_right_9 = par_startLine;
tmp_cmp_expr_left_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
CHECK_OBJECT(tmp_sub_expr_left_9);
Py_DECREF(tmp_sub_expr_left_9);
if (tmp_cmp_expr_left_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_18 = const_int_pos_1;
tmp_and_left_value_8 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
CHECK_OBJECT(tmp_cmp_expr_left_18);
Py_DECREF(tmp_cmp_expr_left_18);
if (tmp_and_left_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_8 = CHECK_IF_TRUE(tmp_and_left_value_8);
if (tmp_and_left_truth_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_8);

exception_lineno = 276;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_8 == 1) {
    goto and_right_8;
} else {
    goto and_left_8;
}
and_right_8:;
CHECK_OBJECT(tmp_and_left_value_8);
Py_DECREF(tmp_and_left_value_8);
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_60 = par_state;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_isEmpty);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_61 = par_state;
tmp_sub_expr_left_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_line);
if (tmp_sub_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 276;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_10 = const_int_pos_1;
tmp_args_element_value_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
CHECK_OBJECT(tmp_sub_expr_left_10);
Py_DECREF(tmp_sub_expr_left_10);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 276;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 276;
tmp_and_right_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_and_right_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_41 = tmp_and_right_value_8;
goto and_end_8;
and_left_8:;
tmp_assign_source_41 = tmp_and_left_value_8;
and_end_8:;
{
    PyObject *old = var_prevEmptyEnd;
    var_prevEmptyEnd = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_expression_value_62;
PyObject *tmp_assattr_target_12;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 278;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_62 = par_state;
tmp_assattr_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain_listIndent);
if (tmp_assattr_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_assattr_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 278;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_12 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_blkIndent, tmp_assattr_value_12);
CHECK_OBJECT(tmp_assattr_value_12);
Py_DECREF(tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_assattr_target_13;
CHECK_OBJECT(var_oldListIndent);
tmp_assattr_value_13 = var_oldListIndent;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 279;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_13 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain_listIndent, tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_expression_value_63;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(var_oldTShift);
tmp_ass_subvalue_3 = var_oldTShift;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_63 = par_state;
tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain_tShift);
if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_startLine == NULL) {
Py_DECREF(tmp_ass_subscribed_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_3 = par_startLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_expression_value_64;
PyObject *tmp_ass_subscript_4;
CHECK_OBJECT(var_oldSCount);
tmp_ass_subvalue_4 = var_oldSCount;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 281;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_64 = par_state;
tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts.const_str_plain_sCount);
if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_startLine == NULL) {
Py_DECREF(tmp_ass_subscribed_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 281;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_4 = par_startLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_assattr_target_14;
CHECK_OBJECT(var_oldTight);
tmp_assattr_value_14 = var_oldTight;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_14 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain_tight, tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_instance_7;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 284;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_7 = par_state;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 284;
tmp_assign_source_42 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_list_item_close_str_plain_li_int_neg_1_tuple, 0)
);

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    assert(old != NULL);
    var_token = tmp_assign_source_42;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_15;
PyObject *tmp_assattr_target_15;
if (var_markerChar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_markerChar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 285;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_15 = var_markerChar;
CHECK_OBJECT(var_token);
tmp_assattr_target_15 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain_markup, tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_expression_value_65;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 287;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_65 = par_state;
tmp_assign_source_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain_line);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_assign_unpack_4__assign_source;
    tmp_assign_unpack_4__assign_source = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assign_unpack_4__assign_source);
tmp_assign_unpack_4__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
{
PyObject *tmp_assign_source_44;
CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
tmp_assign_source_44 = tmp_assign_unpack_4__assign_source;
{
    PyObject *old = var_nextLine;
    var_nextLine = tmp_assign_source_44;
    Py_INCREF(var_nextLine);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
tmp_assign_source_45 = tmp_assign_unpack_4__assign_source;
{
    PyObject *old = par_startLine;
    par_startLine = tmp_assign_source_45;
    Py_INCREF(par_startLine);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
Py_DECREF(tmp_assign_unpack_4__assign_source);
tmp_assign_unpack_4__assign_source = NULL;
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(var_nextLine);
tmp_ass_subvalue_5 = var_nextLine;
CHECK_OBJECT(var_itemLines);
tmp_ass_subscribed_5 = var_itemLines;
tmp_ass_subscript_5 = const_int_pos_1;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, 1, tmp_ass_subvalue_5);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
CHECK_OBJECT(var_nextLine);
tmp_cmp_expr_left_19 = var_nextLine;
if (par_endLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_endLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 290;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_19 = par_endLine;
tmp_condition_result_20 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
goto loop_end_1;
branch_no_19:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_expression_value_66;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_19;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 293;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_67 = par_state;
tmp_expression_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_19 = par_startLine;
tmp_assign_source_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_19);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_contentStart;
    assert(old != NULL);
    var_contentStart = tmp_assign_source_46;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_21;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
PyObject *tmp_expression_value_68;
PyObject *tmp_expression_value_69;
PyObject *tmp_subscript_value_20;
PyObject *tmp_expression_value_70;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 298;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_69 = par_state;
tmp_expression_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_nextLine);
tmp_subscript_value_20 = var_nextLine;
tmp_cmp_expr_left_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_20);
CHECK_OBJECT(tmp_expression_value_68);
Py_DECREF(tmp_expression_value_68);
if (tmp_cmp_expr_left_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_cmp_expr_left_20);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 298;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_70 = par_state;
tmp_cmp_expr_right_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain_blkIndent);
if (tmp_cmp_expr_right_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_20);

exception_lineno = 298;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_21 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
CHECK_OBJECT(tmp_cmp_expr_left_20);
Py_DECREF(tmp_cmp_expr_left_20);
CHECK_OBJECT(tmp_cmp_expr_right_20);
Py_DECREF(tmp_cmp_expr_right_20);
if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
goto loop_end_1;
branch_no_20:;
{
nuitka_bool tmp_condition_result_22;
PyObject *tmp_called_instance_8;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_19;
int tmp_truth_name_6;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 301;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_8 = par_state;
CHECK_OBJECT(par_startLine);
tmp_args_element_value_19 = par_startLine;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 301;
tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_is_code_block, tmp_args_element_value_19);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_5);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_5);

exception_lineno = 301;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_22 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
goto loop_end_1;
branch_no_21:;
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = Py_False;
{
    PyObject *old = var_terminate;
    var_terminate = tmp_assign_source_47;
    Py_INCREF(var_terminate);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_iter_arg_1;
if (var_terminatorRules == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_terminatorRules);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 306;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = var_terminatorRules;
tmp_assign_source_48 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_48;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_49;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_49 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_49 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooboobooooooooooooooooooooooooo";
exception_lineno = 306;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_50;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_50 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_terminatorRule;
    var_terminatorRule = tmp_assign_source_50;
    Py_INCREF(var_terminatorRule);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_23;
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
int tmp_truth_name_7;
CHECK_OBJECT(var_terminatorRule);
tmp_called_value_8 = var_terminatorRule;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 307;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_20 = par_state;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 307;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_21 = var_nextLine;
if (par_endLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_endLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 307;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_22 = par_endLine;
tmp_args_element_value_23 = Py_True;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 307;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_8, call_args);
}

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_6);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_6);

exception_lineno = 307;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_23 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = Py_True;
{
    PyObject *old = var_terminate;
    assert(old != NULL);
    var_terminate = tmp_assign_source_51;
    Py_INCREF(var_terminate);
    Py_DECREF(old);
}

}
goto loop_end_3;
branch_no_22:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
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
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_24;
CHECK_OBJECT(var_terminate);
tmp_condition_result_24 = CHECK_IF_TRUE(var_terminate) == 1;
if (tmp_condition_result_24 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
goto loop_end_1;
branch_no_23:;
{
bool tmp_condition_result_25;
assert(var_isOrdered != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_25 = var_isOrdered == NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 != false) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
tmp_called_value_9 = module_var_accessor_markdown_it$rules_block$list$skipOrderedListMarker(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_skipOrderedListMarker);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 316;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 316;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_24 = par_state;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 316;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_25 = var_nextLine;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 316;
{
    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_posAfterMarker;
    var_posAfterMarker = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_26;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
CHECK_OBJECT(var_posAfterMarker);
tmp_cmp_expr_left_21 = var_posAfterMarker;
tmp_cmp_expr_right_21 = const_int_0;
tmp_condition_result_26 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
goto loop_end_1;
branch_no_25:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
PyObject *tmp_expression_value_71;
PyObject *tmp_expression_value_72;
PyObject *tmp_subscript_value_21;
PyObject *tmp_expression_value_73;
PyObject *tmp_expression_value_74;
PyObject *tmp_subscript_value_22;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 319;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_72 = par_state;
tmp_expression_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_71);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 319;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_21 = var_nextLine;
tmp_add_expr_left_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_21);
CHECK_OBJECT(tmp_expression_value_71);
Py_DECREF(tmp_expression_value_71);
if (tmp_add_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_add_expr_left_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 319;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_74 = par_state;
tmp_expression_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_8);

exception_lineno = 319;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_add_expr_left_8);
Py_DECREF(tmp_expression_value_73);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 319;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_22 = var_nextLine;
tmp_add_expr_right_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_22);
CHECK_OBJECT(tmp_expression_value_73);
Py_DECREF(tmp_expression_value_73);
if (tmp_add_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_8);

exception_lineno = 319;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_53 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
CHECK_OBJECT(tmp_add_expr_left_8);
Py_DECREF(tmp_add_expr_left_8);
CHECK_OBJECT(tmp_add_expr_right_8);
Py_DECREF(tmp_add_expr_right_8);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_start;
    var_start = tmp_assign_source_53;
    Py_XDECREF(old);
}

}
goto branch_end_24;
branch_no_24:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
tmp_called_value_10 = module_var_accessor_markdown_it$rules_block$list$skipBulletListMarker(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_skipBulletListMarker);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 321;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_26 = par_state;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 321;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_27 = var_nextLine;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 321;
{
    PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
    tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_posAfterMarker;
    var_posAfterMarker = tmp_assign_source_54;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_27;
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
CHECK_OBJECT(var_posAfterMarker);
tmp_cmp_expr_left_22 = var_posAfterMarker;
tmp_cmp_expr_right_22 = const_int_0;
tmp_condition_result_27 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
goto loop_end_1;
branch_no_26:;
branch_end_24:;
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_23;
PyObject *tmp_cmp_expr_right_23;
PyObject *tmp_expression_value_75;
PyObject *tmp_expression_value_76;
PyObject *tmp_subscript_value_23;
PyObject *tmp_sub_expr_left_11;
PyObject *tmp_sub_expr_right_11;
if (var_markerChar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_markerChar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 325;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_23 = var_markerChar;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 325;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_76 = par_state;
tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain_src);
if (tmp_expression_value_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_posAfterMarker);
tmp_sub_expr_left_11 = var_posAfterMarker;
tmp_sub_expr_right_11 = const_int_pos_1;
tmp_subscript_value_23 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
if (tmp_subscript_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_75);

exception_lineno = 325;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_23);
CHECK_OBJECT(tmp_expression_value_75);
Py_DECREF(tmp_expression_value_75);
CHECK_OBJECT(tmp_subscript_value_23);
Py_DECREF(tmp_subscript_value_23);
if (tmp_cmp_expr_right_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
CHECK_OBJECT(tmp_cmp_expr_right_23);
Py_DECREF(tmp_cmp_expr_right_23);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
goto loop_end_1;
branch_no_27:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
bool tmp_condition_result_29;
assert(var_isOrdered != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_29 = var_isOrdered == NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_instance_9;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 330;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_9 = par_state;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 330;
tmp_assign_source_55 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_9,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ordered_list_close_str_plain_ol_int_neg_1_tuple, 0)
);

if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_55;
    Py_XDECREF(old);
}

}
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_instance_10;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 332;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_10 = par_state;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 332;
tmp_assign_source_56 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_10,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_bullet_list_close_str_plain_ul_int_neg_1_tuple, 0)
);

if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_56;
    Py_XDECREF(old);
}

}
branch_end_28:;
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_assattr_target_16;
if (var_markerChar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_markerChar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 334;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_16 = var_markerChar;
CHECK_OBJECT(var_token);
tmp_assattr_target_16 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain_markup, tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
int tmp_ass_subscript_res_2;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 336;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subvalue_6 = var_nextLine;
CHECK_OBJECT(var_listLines);
tmp_ass_subscribed_6 = var_listLines;
tmp_ass_subscript_6 = const_int_pos_1;
tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, 1, tmp_ass_subvalue_6);
if (tmp_ass_subscript_res_2 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_17;
PyObject *tmp_assattr_target_17;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 337;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_17 = var_nextLine;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 337;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_17 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts.const_str_plain_line, tmp_assattr_value_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_18;
PyObject *tmp_assattr_target_18;
CHECK_OBJECT(var_oldParentType);
tmp_assattr_value_18 = var_oldParentType;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 339;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_18 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts.const_str_plain_parentType, tmp_assattr_value_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_30;
int tmp_truth_name_8;
if (var_tight == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tight);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 342;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_8 = CHECK_IF_TRUE(var_tight);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_30 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
tmp_called_value_11 = module_var_accessor_markdown_it$rules_block$list$markTightParagraphs(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_markTightParagraphs);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 343;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 343;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_28 = par_state;
CHECK_OBJECT(var_listTokIdx);
tmp_args_element_value_29 = var_listTokIdx;
frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame.f_lineno = 343;
{
    PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooooboobooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_29:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$list$$$function__4_list_block, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_block$list$$$function__4_list_block->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$list$$$function__4_list_block, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_block$list$$$function__4_list_block,
    type_description_1,
    par_state,
    par_startLine,
    par_endLine,
    par_silent,
    (int)var_isTerminatingParagraph,
    var_tight,
    var_posAfterMarker,
    (int)var_isOrdered,
    var_start,
    var_markerValue,
    var_markerChar,
    var_listTokIdx,
    var_token,
    var_listLines,
    var_nextLine,
    var_prevEmptyEnd,
    var_terminatorRules,
    var_oldParentType,
    var_pos,
    var_maximum,
    var_initial,
    var_offset,
    var_ch,
    var_contentStart,
    var_indentAfterMarker,
    var_indent,
    var_itemLines,
    var_oldTight,
    var_oldTShift,
    var_oldSCount,
    var_oldListIndent,
    var_terminate,
    var_terminatorRule
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_block$list$$$function__4_list_block == cache_frame_frame_markdown_it$rules_block$list$$$function__4_list_block) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_block$list$$$function__4_list_block);
    cache_frame_frame_markdown_it$rules_block$list$$$function__4_list_block = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_block$list$$$function__4_list_block);

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
Py_XDECREF(par_startLine);
par_startLine = NULL;
assert(var_isTerminatingParagraph != NUITKA_BOOL_UNASSIGNED);
var_isTerminatingParagraph = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_tight);
var_tight = NULL;
Py_XDECREF(var_posAfterMarker);
var_posAfterMarker = NULL;
var_isOrdered = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_markerValue);
var_markerValue = NULL;
Py_XDECREF(var_markerChar);
var_markerChar = NULL;
Py_XDECREF(var_listTokIdx);
var_listTokIdx = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_listLines);
var_listLines = NULL;
Py_XDECREF(var_nextLine);
var_nextLine = NULL;
Py_XDECREF(var_prevEmptyEnd);
var_prevEmptyEnd = NULL;
Py_XDECREF(var_terminatorRules);
var_terminatorRules = NULL;
Py_XDECREF(var_oldParentType);
var_oldParentType = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_initial);
var_initial = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_contentStart);
var_contentStart = NULL;
Py_XDECREF(var_indentAfterMarker);
var_indentAfterMarker = NULL;
Py_XDECREF(var_indent);
var_indent = NULL;
Py_XDECREF(var_itemLines);
var_itemLines = NULL;
Py_XDECREF(var_oldTight);
var_oldTight = NULL;
Py_XDECREF(var_oldTShift);
var_oldTShift = NULL;
Py_XDECREF(var_oldSCount);
var_oldSCount = NULL;
Py_XDECREF(var_oldListIndent);
var_oldListIndent = NULL;
Py_XDECREF(var_terminate);
var_terminate = NULL;
Py_XDECREF(var_terminatorRule);
var_terminatorRule = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_startLine);
par_startLine = NULL;
var_isTerminatingParagraph = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_tight);
var_tight = NULL;
Py_XDECREF(var_posAfterMarker);
var_posAfterMarker = NULL;
var_isOrdered = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_markerValue);
var_markerValue = NULL;
Py_XDECREF(var_markerChar);
var_markerChar = NULL;
Py_XDECREF(var_listTokIdx);
var_listTokIdx = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_listLines);
var_listLines = NULL;
Py_XDECREF(var_nextLine);
var_nextLine = NULL;
Py_XDECREF(var_prevEmptyEnd);
var_prevEmptyEnd = NULL;
Py_XDECREF(var_terminatorRules);
var_terminatorRules = NULL;
Py_XDECREF(var_oldParentType);
var_oldParentType = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_initial);
var_initial = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_contentStart);
var_contentStart = NULL;
Py_XDECREF(var_indentAfterMarker);
var_indentAfterMarker = NULL;
Py_XDECREF(var_indent);
var_indent = NULL;
Py_XDECREF(var_itemLines);
var_itemLines = NULL;
Py_XDECREF(var_oldTight);
var_oldTight = NULL;
Py_XDECREF(var_oldTShift);
var_oldTShift = NULL;
Py_XDECREF(var_oldSCount);
var_oldSCount = NULL;
Py_XDECREF(var_oldListIndent);
var_oldListIndent = NULL;
Py_XDECREF(var_terminate);
var_terminate = NULL;
Py_XDECREF(var_terminatorRule);
var_terminatorRule = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_endLine);
Py_DECREF(par_endLine);
CHECK_OBJECT(par_silent);
Py_DECREF(par_silent);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_endLine);
Py_DECREF(par_endLine);
CHECK_OBJECT(par_silent);
Py_DECREF(par_silent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_block$list$$$function__1_skipBulletListMarker(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_block$list$$$function__1_skipBulletListMarker,
        mod_consts.const_str_plain_skipBulletListMarker,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fc8a19d22c729b56fb44ef90fce3b31f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_block$list,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker,
        mod_consts.const_str_plain_skipOrderedListMarker,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aac6f80472714d5eec4c3ea9a38d17f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_block$list,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_block$list$$$function__3_markTightParagraphs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_block$list$$$function__3_markTightParagraphs,
        mod_consts.const_str_plain_markTightParagraphs,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_854f387aac7c56766285ebf12bf30004,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_block$list,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_block$list$$$function__4_list_block(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_block$list$$$function__4_list_block,
        mod_consts.const_str_plain_list_block,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_661292a9981e508074091da861f8217d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_block$list,
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

static function_impl_code const function_table_markdown_it$rules_block$list[] = {
impl_markdown_it$rules_block$list$$$function__1_skipBulletListMarker,
impl_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker,
impl_markdown_it$rules_block$list$$$function__3_markTightParagraphs,
impl_markdown_it$rules_block$list$$$function__4_list_block,
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

    return Nuitka_Function_GetFunctionState(function, function_table_markdown_it$rules_block$list);
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
        module_markdown_it$rules_block$list,
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
        function_table_markdown_it$rules_block$list,
        sizeof(function_table_markdown_it$rules_block$list) / sizeof(function_impl_code)
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
static char const *module_full_name = "markdown_it.rules_block.list";
#endif

// Internal entry point for module code.
PyObject *module_code_markdown_it$rules_block$list(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("markdown_it$rules_block$list");

    // Store the module for future use.
    module_markdown_it$rules_block$list = module;

    moduledict_markdown_it$rules_block$list = MODULE_DICT(module_markdown_it$rules_block$list);

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
        PRINT_STRING("markdown_it$rules_block$list: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("markdown_it$rules_block$list: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("markdown_it$rules_block$list: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_block.list" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmarkdown_it$rules_block$list\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_markdown_it$rules_block$list,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_block$list,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_block$list,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_block$list,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_block$list,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_markdown_it$rules_block$list);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_markdown_it$rules_block$list);
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

        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_block$list;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_markdown_it$rules_block$list = MAKE_MODULE_FRAME(code_objects_70a6a7ccb5449289e382c8c26f107542, module_markdown_it$rules_block$list);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_block$list);
assert(Py_REFCNT(frame_frame_markdown_it$rules_block$list) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_markdown_it$rules_block$list$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_markdown_it$rules_block$list$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_markdown_it$rules_block$list;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_markdown_it$rules_block$list->m_frame.f_lineno = 2;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499;
tmp_globals_arg_value_2 = (PyObject *)moduledict_markdown_it$rules_block$list;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_isStrSpace_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_markdown_it$rules_block$list->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_markdown_it$rules_block$list,
        mod_consts.const_str_plain_isStrSpace,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_isStrSpace);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_isStrSpace, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_state_block;
tmp_globals_arg_value_3 = (PyObject *)moduledict_markdown_it$rules_block$list;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_StateBlock_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_markdown_it$rules_block$list->m_frame.f_lineno = 5;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_markdown_it$rules_block$list,
        mod_consts.const_str_plain_StateBlock,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_StateBlock);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_StateBlock, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_markdown_it$rules_block$list$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 7;

    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_block$list->m_frame.f_lineno = 7;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_d245e88b80613a1fb3907eba554ce5e6_tuple, 0)
);

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_state;
tmp_dict_value_1 = module_var_accessor_markdown_it$rules_block$list$StateBlock(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StateBlock);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_startLine;
tmp_dict_value_1 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_assign_source_8 = MAKE_FUNCTION_markdown_it$rules_block$list$$$function__1_skipBulletListMarker(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_skipBulletListMarker, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_state;
tmp_dict_value_2 = module_var_accessor_markdown_it$rules_block$list$StateBlock(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StateBlock);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_startLine;
tmp_dict_value_2 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));

tmp_assign_source_9 = MAKE_FUNCTION_markdown_it$rules_block$list$$$function__2_skipOrderedListMarker(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_skipOrderedListMarker, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_dict_key_3 = mod_consts.const_str_plain_state;
tmp_dict_value_3 = module_var_accessor_markdown_it$rules_block$list$StateBlock(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StateBlock);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_idx;
tmp_dict_value_3 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_assign_source_10 = MAKE_FUNCTION_markdown_it$rules_block$list$$$function__3_markTightParagraphs(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_markTightParagraphs, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_state;
tmp_dict_value_4 = module_var_accessor_markdown_it$rules_block$list$StateBlock(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StateBlock);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;

    goto frame_exception_exit_1;
}
tmp_annotations_4 = _PyDict_NewPresized( 5 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_startLine;
tmp_dict_value_4 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_endLine;
tmp_dict_value_4 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_silent;
tmp_dict_value_4 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));

tmp_assign_source_11 = MAKE_FUNCTION_markdown_it$rules_block$list$$$function__4_list_block(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)mod_consts.const_str_plain_list_block, tmp_assign_source_11);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_block$list->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_markdown_it$rules_block$list);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("markdown_it$rules_block$list", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_block.list" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_markdown_it$rules_block$list);
    return module_markdown_it$rules_block$list;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$list, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("markdown_it$rules_block$list", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

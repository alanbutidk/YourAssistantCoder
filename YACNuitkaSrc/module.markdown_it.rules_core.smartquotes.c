/* Generated code for Python module 'markdown_it$rules_core$smartquotes'
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



/* The "module_markdown_it$rules_core$smartquotes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_markdown_it$rules_core$smartquotes;
PyDictObject *moduledict_markdown_it$rules_core$smartquotes;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_stack;
PyObject *const_slice_none_none_int_neg_1;
PyObject *const_str_plain_j;
PyObject *const_str_plain_text;
PyObject *const_str_plain_content;
PyObject *const_str_plain_pos;
PyObject *const_str_plain_maximum;
PyObject *const_str_plain_QUOTE_RE;
PyObject *const_str_plain_search;
PyObject *const_str_plain_start;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_group;
PyObject *const_str_chr_39;
PyObject *const_int_pos_32;
PyObject *const_str_plain_charCodeAt;
PyObject *const_str_plain_i;
PyObject *const_str_plain_tokens;
PyObject *const_str_plain_softbreak;
PyObject *const_str_plain_hardbreak;
PyObject *const_str_plain_isMdAsciiPunct;
PyObject *const_str_plain_isPunctChar;
PyObject *const_str_plain_isWhiteSpace;
PyObject *const_int_pos_34;
PyObject *const_str_chr_34;
PyObject *const_int_pos_48;
PyObject *const_int_pos_57;
PyObject *const_str_plain_replaceAt;
PyObject *const_str_plain_token;
PyObject *const_str_plain_APOSTROPHE;
PyObject *const_str_plain_thisLevel;
PyObject *const_str_plain_single;
PyObject *const_str_plain_state;
PyObject *const_str_plain_md;
PyObject *const_str_plain_options;
PyObject *const_str_plain_quotes;
PyObject *const_int_pos_2;
PyObject *const_int_pos_3;
PyObject *const_str_plain_append;
PyObject *const_str_plain_typographer;
PyObject *const_str_plain_inline;
PyObject *const_str_plain_children;
PyObject *const_str_plain_process_inlines;
PyObject *const_str_digest_d992276129af2a30f1c39285d4ad2cde;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_re;
PyObject *const_str_plain_Any;
PyObject *const_str_digest_b079a483a5bb3f12a8f5a2f221050499;
PyObject *const_tuple_4343ab9a03ddb13c55ab9a8374d3e92d_tuple;
PyObject *const_tuple_str_plain_Token_tuple;
PyObject *const_str_plain_Token;
PyObject *const_str_plain_state_core;
PyObject *const_tuple_str_plain_StateCore_tuple;
PyObject *const_str_plain_StateCore;
PyObject *const_tuple_str_digest_4f984eeb31c25c4708c3da9e2d29291b_tuple;
PyObject *const_str_plain_QUOTE_TEST_RE;
PyObject *const_str_chr_8217;
PyObject *const_dict_20c829bdb20f24bd8ce6d1f6d69ce609;
PyObject *const_dict_01df9e907f5f007a2f2cfc32b399e5e9;
PyObject *const_dict_45357cb9388ec8c4a447b4a17242ec59;
PyObject *const_str_plain_smartquotes;
PyObject *const_str_digest_0aa62f7b153ad376d6af9d16e511886b;
PyObject *const_str_digest_4e39cb401e0cc3eb5e21a08e88f75a8e;
PyObject *const_tuple_ac45e08815fdc3371015d3c57266c556_tuple;
PyObject *const_tuple_str_plain_string_str_plain_index_str_plain_ch_tuple;
PyObject *const_tuple_str_plain_state_str_plain_token_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[67];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("markdown_it.rules_core.smartquotes"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_stack);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_int_neg_1);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_j);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_pos);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_maximum);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_QUOTE_RE);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_chr_39);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_charCodeAt);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_i);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokens);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_softbreak);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_hardbreak);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_isMdAsciiPunct);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_isPunctChar);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_isWhiteSpace);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_int_pos_34);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_chr_34);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_int_pos_48);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_int_pos_57);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_replaceAt);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_APOSTROPHE);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_thisLevel);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_single);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_md);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_quotes);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_typographer);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_inline);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_children);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_inlines);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_d992276129af2a30f1c39285d4ad2cde);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_4343ab9a03ddb13c55ab9a8374d3e92d_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Token_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_Token);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_state_core);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StateCore_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_StateCore);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4f984eeb31c25c4708c3da9e2d29291b_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_QUOTE_TEST_RE);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_chr_8217);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_dict_20c829bdb20f24bd8ce6d1f6d69ce609);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_dict_01df9e907f5f007a2f2cfc32b399e5e9);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_45357cb9388ec8c4a447b4a17242ec59);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_smartquotes);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_0aa62f7b153ad376d6af9d16e511886b);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e39cb401e0cc3eb5e21a08e88f75a8e);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_ac45e08815fdc3371015d3c57266c556_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_string_str_plain_index_str_plain_ch_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_state_str_plain_token_tuple);
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
void checkModuleConstants_markdown_it$rules_core$smartquotes(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_stack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stack);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_int_neg_1));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_int_neg_1);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_j));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_j);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_pos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pos);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_maximum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maximum);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_QUOTE_RE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_QUOTE_RE);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_chr_39));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_39);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_charCodeAt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charCodeAt);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_i));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_i);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokens);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_softbreak));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_softbreak);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_hardbreak));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hardbreak);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_isMdAsciiPunct));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isMdAsciiPunct);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_isPunctChar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isPunctChar);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_isWhiteSpace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isWhiteSpace);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_int_pos_34));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_34);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_chr_34));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_34);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_int_pos_48));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_48);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_int_pos_57));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_57);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_replaceAt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replaceAt);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_APOSTROPHE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APOSTROPHE);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_thisLevel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thisLevel);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_single));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_single);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_md));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_md);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_options);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_quotes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quotes);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_typographer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typographer);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_inline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inline);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_children));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_children);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_inlines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_inlines);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_d992276129af2a30f1c39285d4ad2cde));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d992276129af2a30f1c39285d4ad2cde);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_4343ab9a03ddb13c55ab9a8374d3e92d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4343ab9a03ddb13c55ab9a8374d3e92d_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Token_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_Token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Token);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_state_core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state_core);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StateCore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StateCore_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_StateCore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StateCore);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4f984eeb31c25c4708c3da9e2d29291b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_4f984eeb31c25c4708c3da9e2d29291b_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_QUOTE_TEST_RE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_QUOTE_TEST_RE);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_chr_8217));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_8217);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_dict_20c829bdb20f24bd8ce6d1f6d69ce609));
CHECK_OBJECT_DEEP(mod_consts.const_dict_20c829bdb20f24bd8ce6d1f6d69ce609);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_dict_01df9e907f5f007a2f2cfc32b399e5e9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_01df9e907f5f007a2f2cfc32b399e5e9);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_45357cb9388ec8c4a447b4a17242ec59));
CHECK_OBJECT_DEEP(mod_consts.const_dict_45357cb9388ec8c4a447b4a17242ec59);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_smartquotes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_smartquotes);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_0aa62f7b153ad376d6af9d16e511886b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0aa62f7b153ad376d6af9d16e511886b);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e39cb401e0cc3eb5e21a08e88f75a8e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e39cb401e0cc3eb5e21a08e88f75a8e);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_ac45e08815fdc3371015d3c57266c556_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ac45e08815fdc3371015d3c57266c556_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_string_str_plain_index_str_plain_ch_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_string_str_plain_index_str_plain_ch_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_state_str_plain_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_state_str_plain_token_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 10
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
static PyObject *module_var_accessor_markdown_it$rules_core$smartquotes$APOSTROPHE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_core$smartquotes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_core$smartquotes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_APOSTROPHE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_core$smartquotes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APOSTROPHE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APOSTROPHE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APOSTROPHE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APOSTROPHE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_APOSTROPHE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_APOSTROPHE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_APOSTROPHE);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_core$smartquotes$QUOTE_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_core$smartquotes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_core$smartquotes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_QUOTE_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_core$smartquotes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QUOTE_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QUOTE_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_QUOTE_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_QUOTE_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_QUOTE_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_QUOTE_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_QUOTE_RE);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_core$smartquotes$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_core$smartquotes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_core$smartquotes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_core$smartquotes->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_core$smartquotes$charCodeAt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_core$smartquotes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_core$smartquotes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_charCodeAt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_core$smartquotes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_charCodeAt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_charCodeAt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_charCodeAt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_charCodeAt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_charCodeAt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_charCodeAt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_charCodeAt);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_core$smartquotes$isMdAsciiPunct(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_core$smartquotes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_core$smartquotes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_isMdAsciiPunct);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_core$smartquotes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isMdAsciiPunct);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isMdAsciiPunct, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isMdAsciiPunct);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isMdAsciiPunct, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_isMdAsciiPunct);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_isMdAsciiPunct);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isMdAsciiPunct);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_core$smartquotes$isPunctChar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_core$smartquotes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_core$smartquotes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_isPunctChar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_core$smartquotes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isPunctChar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isPunctChar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isPunctChar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isPunctChar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_isPunctChar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_isPunctChar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isPunctChar);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_core$smartquotes$isWhiteSpace(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_core$smartquotes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_core$smartquotes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_isWhiteSpace);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_core$smartquotes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isWhiteSpace);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isWhiteSpace, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isWhiteSpace);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isWhiteSpace, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_isWhiteSpace);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_isWhiteSpace);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isWhiteSpace);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_core$smartquotes$process_inlines(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_core$smartquotes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_core$smartquotes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_process_inlines);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_core$smartquotes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_process_inlines);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_process_inlines, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_process_inlines);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_process_inlines, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_process_inlines);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_process_inlines);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_process_inlines);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_core$smartquotes$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_core$smartquotes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_core$smartquotes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_core$smartquotes->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_core$smartquotes$replaceAt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_core$smartquotes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_core$smartquotes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_replaceAt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_core$smartquotes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_replaceAt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_replaceAt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_replaceAt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_replaceAt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_replaceAt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_replaceAt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_replaceAt);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_86d7787fdc2e76b2d04405eb7744f4ab;
static PyCodeObject *code_objects_d98d3cbcb831a45c340a51d09e71ca3f;
static PyCodeObject *code_objects_51852df1b68adc6b95dda1f464769fba;
static PyCodeObject *code_objects_5d3a5825fdc0c9139f6177db97ac90fe;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0aa62f7b153ad376d6af9d16e511886b); CHECK_OBJECT(module_filename_obj);
code_objects_86d7787fdc2e76b2d04405eb7744f4ab = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_4e39cb401e0cc3eb5e21a08e88f75a8e, mod_consts.const_str_digest_4e39cb401e0cc3eb5e21a08e88f75a8e, NULL, NULL, 0, 0, 0);
code_objects_d98d3cbcb831a45c340a51d09e71ca3f = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_process_inlines, mod_consts.const_str_plain_process_inlines, mod_consts.const_tuple_ac45e08815fdc3371015d3c57266c556_tuple, NULL, 2, 0, 0);
code_objects_51852df1b68adc6b95dda1f464769fba = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_replaceAt, mod_consts.const_str_plain_replaceAt, mod_consts.const_tuple_str_plain_string_str_plain_index_str_plain_ch_tuple, NULL, 3, 0, 0);
code_objects_5d3a5825fdc0c9139f6177db97ac90fe = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_smartquotes, mod_consts.const_str_plain_smartquotes, mod_consts.const_tuple_str_plain_state_str_plain_token_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_markdown_it$rules_core$smartquotes$$$function__1_replaceAt(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$rules_core$smartquotes$$$function__2_process_inlines(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$rules_core$smartquotes$$$function__3_smartquotes(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_markdown_it$rules_core$smartquotes$$$function__1_replaceAt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_string = python_pars[0];
PyObject *par_index = python_pars[1];
PyObject *par_ch = python_pars[2];
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt = MAKE_FUNCTION_FRAME(tstate, code_objects_51852df1b68adc6b95dda1f464769fba, module_markdown_it$rules_core$smartquotes, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt->m_type_description == NULL);
frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt = cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt);
assert(Py_REFCNT(frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_index);
tmp_cmp_expr_left_1 = par_index;
tmp_cmp_expr_right_1 = const_int_0;
tmp_operand_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
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
{
PyObject *tmp_raise_type_1;
frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt->m_frame.f_lineno = 20;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 20;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_1;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_stop_value_2;
CHECK_OBJECT(par_string);
tmp_expression_value_1 = par_string;
CHECK_OBJECT(par_index);
tmp_stop_value_1 = par_index;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ch);
tmp_add_expr_right_2 = par_ch;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_string);
tmp_expression_value_2 = par_string;
CHECK_OBJECT(par_index);
tmp_add_expr_left_3 = par_index;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_start_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 21;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_2 = Py_None;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 21;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt,
    type_description_1,
    par_string,
    par_index,
    par_ch
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt == cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt);
    cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_core$smartquotes$$$function__1_replaceAt);

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
CHECK_OBJECT(par_index);
Py_DECREF(par_index);
CHECK_OBJECT(par_ch);
Py_DECREF(par_ch);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
CHECK_OBJECT(par_index);
Py_DECREF(par_index);
CHECK_OBJECT(par_ch);
Py_DECREF(par_ch);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$rules_core$smartquotes$$$function__2_process_inlines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tokens = python_pars[0];
PyObject *par_state = python_pars[1];
PyObject *var_stack = NULL;
PyObject *var_lastChar = NULL;
PyObject *var_nextChar = NULL;
PyObject *var_i = NULL;
PyObject *var_token = NULL;
PyObject *var_thisLevel = NULL;
PyObject *var_j = NULL;
PyObject *var_text = NULL;
PyObject *var_pos = NULL;
PyObject *var_maximum = NULL;
PyObject *var_goto_outer = NULL;
PyObject *var_lastIndex = NULL;
PyObject *var_t = NULL;
PyObject *var_canOpen = NULL;
PyObject *var_canClose = NULL;
PyObject *var_isSingle = NULL;
PyObject *var_isLastPunctChar = NULL;
PyObject *var_isNextPunctChar = NULL;
PyObject *var_isLastWhiteSpace = NULL;
PyObject *var_isNextWhiteSpace = NULL;
PyObject *var_item = NULL;
PyObject *var_openQuote = NULL;
PyObject *var_closeQuote = NULL;
PyObject *tmp_assign_unpack_1__assign_source = NULL;
PyObject *tmp_assign_unpack_2__assign_source = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
nuitka_bool tmp_for_loop_2__break_indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_for_loop_4__for_iterator = NULL;
PyObject *tmp_for_loop_4__iter_value = NULL;
PyObject *tmp_for_loop_5__for_iterator = NULL;
PyObject *tmp_for_loop_5__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines;
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
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_stack == NULL);
var_stack = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines = MAKE_FUNCTION_FRAME(tstate, code_objects_d98d3cbcb831a45c340a51d09e71ca3f, module_markdown_it$rules_core$smartquotes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_type_description == NULL);
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines = cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines);
assert(Py_REFCNT(frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_tokens);
tmp_args_element_value_1 = par_tokens;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 27;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooooooooooooooooooooooo";
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
type_description_1 = "ooooooooooooooooooooooooo";
exception_lineno = 27;
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


exception_lineno = 27;
type_description_1 = "ooooooooooooooooooooooooo";
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



exception_lineno = 27;
type_description_1 = "ooooooooooooooooooooooooo";
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



exception_lineno = 27;
type_description_1 = "ooooooooooooooooooooooooo";
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



exception_lineno = 27;
type_description_1 = "ooooooooooooooooooooooooo";
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
    PyObject *old = var_i;
    var_i = tmp_assign_source_7;
    Py_INCREF(var_i);
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
    PyObject *old = var_token;
    var_token = tmp_assign_source_8;
    Py_INCREF(var_token);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_token);
tmp_expression_value_1 = var_token;
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_level);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_thisLevel;
    var_thisLevel = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = const_int_0;
{
    PyObject *old = var_j;
    var_j = tmp_assign_source_10;
    Py_INCREF(var_j);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
tmp_for_loop_2__break_indicator = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_xrange_low_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_subscript_value_1;
if (var_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 31;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_len_arg_1 = var_stack;
tmp_xrange_low_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_none_int_neg_1;
tmp_iter_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_value_value_1;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_value_value_1 = tmp_for_loop_2__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_assign_source_13 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = exception_keeper_name_3.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopIteration;
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
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_TRUE;
tmp_for_loop_2__break_indicator = tmp_assign_source_14;
}
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);
goto loop_end_2;
goto branch_end_1;
branch_no_1:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
branch_end_1:;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_15 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_j;
    var_j = tmp_assign_source_15;
    Py_INCREF(var_j);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_subscript_value_3;
if (var_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 32;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_4 = var_stack;
CHECK_OBJECT(var_j);
tmp_subscript_value_2 = var_j;
tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_subscript_value_3 = const_str_plain_level;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_thisLevel);
tmp_cmp_expr_right_2 = var_thisLevel;
tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_end_2;
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_for_loop_2__break_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_for_loop_2__break_indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 37;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_isub_expr_left_1 = var_j;
tmp_isub_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_16 = tmp_isub_expr_left_1;
var_j = tmp_assign_source_16;

}
branch_no_3:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_4;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
if (var_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 39;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = var_stack;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 39;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_add_expr_left_1 = var_j;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_4 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_4 == NULL));
tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_stack;
    var_stack = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_token);
tmp_expression_value_6 = var_token;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_type);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_text;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooooooooooooooooooo";
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
branch_no_4:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_token);
tmp_expression_value_7 = var_token;
tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_content);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = const_int_0;
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_19;
    Py_INCREF(var_pos);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_text);
tmp_len_arg_2 = var_text;
tmp_assign_source_20 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_maximum;
    var_maximum = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
loop_start_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 48;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_5 = var_pos;
if (var_maximum == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 48;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_5 = var_maximum;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooooooooooooooooooooooo";
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
goto loop_end_3;
branch_no_5:;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = Py_False;
{
    PyObject *old = var_goto_outer;
    var_goto_outer = tmp_assign_source_21;
    Py_INCREF(var_goto_outer);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 50;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_22 = var_pos;
{
    PyObject *old = var_lastIndex;
    var_lastIndex = tmp_assign_source_22;
    Py_INCREF(var_lastIndex);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_2;
tmp_expression_value_8 = module_var_accessor_markdown_it$rules_core$smartquotes$QUOTE_RE(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QUOTE_RE);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_search);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_text == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 51;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_9 = var_text;
CHECK_OBJECT(var_lastIndex);
tmp_start_value_1 = var_lastIndex;
tmp_stop_value_2 = Py_None;
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_2);
assert(!(tmp_subscript_value_5 == NULL));
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 51;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 51;
tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_t;
    var_t = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_t);
tmp_operand_value_2 = var_t;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
goto loop_end_3;
branch_no_6:;
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = Py_True;
{
    PyObject *old = tmp_assign_unpack_1__assign_source;
    tmp_assign_unpack_1__assign_source = tmp_assign_source_24;
    Py_INCREF(tmp_assign_unpack_1__assign_source);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_25 = tmp_assign_unpack_1__assign_source;
{
    PyObject *old = var_canOpen;
    var_canOpen = tmp_assign_source_25;
    Py_INCREF(var_canOpen);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_26 = tmp_assign_unpack_1__assign_source;
{
    PyObject *old = var_canClose;
    var_canClose = tmp_assign_source_26;
    Py_INCREF(var_canClose);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_t);
tmp_called_instance_1 = var_t;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 56;
tmp_add_expr_left_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_lastIndex);
tmp_add_expr_right_3 = var_lastIndex;
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_2 = const_int_pos_1;
tmp_assign_source_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_t);
tmp_called_instance_2 = var_t;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 57;
tmp_cmp_expr_left_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_6 = mod_consts.const_str_chr_39;
tmp_assign_source_28 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_isSingle;
    var_isSingle = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = mod_consts.const_int_pos_32;
{
    PyObject *old = var_lastChar;
    var_lastChar = tmp_assign_source_29;
    Py_INCREF(var_lastChar);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_t);
tmp_called_instance_3 = var_t;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 63;
tmp_add_expr_left_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_lastIndex);
tmp_add_expr_right_4 = var_lastIndex;
tmp_sub_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_cmp_expr_left_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_7 = const_int_0;
tmp_condition_result_7 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_called_instance_4;
tmp_called_value_3 = module_var_accessor_markdown_it$rules_core$smartquotes$charCodeAt(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_text == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 64;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = var_text;
CHECK_OBJECT(var_t);
tmp_called_instance_4 = var_t;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 64;
tmp_add_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_lastIndex);
tmp_add_expr_right_5 = var_lastIndex;
tmp_sub_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_args_element_value_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 64;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_lastChar;
    assert(old != NULL);
    var_lastChar = tmp_assign_source_30;
    Py_DECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_xrange_low_2;
PyObject *tmp_subscript_value_6;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 66;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_xrange_low_2 = var_i;
tmp_expression_value_10 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_6 = mod_consts.const_slice_none_none_int_neg_1;
tmp_iter_arg_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_31 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_2 = tmp_for_loop_3__for_iterator;
tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_32 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooo";
exception_lineno = 66;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_33 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_j;
    var_j = tmp_assign_source_33;
    Py_INCREF(var_j);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_7;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_8;
if (par_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_12 = par_tokens;
CHECK_OBJECT(var_j);
tmp_subscript_value_7 = var_j;
tmp_expression_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_7);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_cmp_expr_right_8 = mod_consts.const_str_plain_softbreak;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (par_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_14 = par_tokens;
CHECK_OBJECT(var_j);
tmp_subscript_value_8 = var_j;
tmp_expression_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_8);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_cmp_expr_right_9 = mod_consts.const_str_plain_hardbreak;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_8 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_8 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
goto loop_end_4;
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_9;
if (par_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_16 = par_tokens;
CHECK_OBJECT(var_j);
tmp_subscript_value_9 = var_j;
tmp_expression_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_9);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
goto loop_start_4;
branch_no_9:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_10;
PyObject *tmp_args_element_value_6;
PyObject *tmp_sub_expr_left_3;
nuitka_digit tmp_sub_expr_right_3;
PyObject *tmp_len_arg_3;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_11;
tmp_called_value_4 = module_var_accessor_markdown_it$rules_core$smartquotes$charCodeAt(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (par_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 73;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_18 = par_tokens;
CHECK_OBJECT(var_j);
tmp_subscript_value_10 = var_j;
tmp_expression_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_10);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (par_tokens == NULL) {
Py_DECREF(tmp_args_element_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 73;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_20 = par_tokens;
CHECK_OBJECT(var_j);
tmp_subscript_value_11 = var_j;
tmp_expression_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_11);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 73;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_len_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_len_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 73;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_sub_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_3);
CHECK_OBJECT(tmp_len_arg_3);
Py_DECREF(tmp_len_arg_3);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 73;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_sub_expr_right_3 = 1;
tmp_args_element_value_6 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
assert(!(tmp_args_element_value_6 == NULL));
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 73;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_lastChar;
    assert(old != NULL);
    var_lastChar = tmp_assign_source_34;
    Py_DECREF(old);
}

}
goto loop_end_4;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_4;
loop_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_2;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
branch_end_7:;
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = mod_consts.const_int_pos_32;
{
    PyObject *old = var_nextChar;
    var_nextChar = tmp_assign_source_35;
    Py_INCREF(var_nextChar);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_pos);
tmp_cmp_expr_left_10 = var_pos;
if (var_maximum == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 80;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_10 = var_maximum;
tmp_condition_result_10 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_5 = module_var_accessor_markdown_it$rules_core$smartquotes$charCodeAt(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_text == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 81;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_7 = var_text;
CHECK_OBJECT(var_pos);
tmp_args_element_value_8 = var_pos;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 81;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_nextChar;
    assert(old != NULL);
    var_nextChar = tmp_assign_source_36;
    Py_DECREF(old);
}

}
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_iter_arg_5;
PyObject *tmp_xrange_low_3;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_xrange_high_1;
PyObject *tmp_len_arg_4;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_add_expr_left_6 = var_i;
tmp_add_expr_right_6 = const_int_pos_1;
tmp_xrange_low_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
if (tmp_xrange_low_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (par_tokens == NULL) {
Py_DECREF(tmp_xrange_low_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_len_arg_4 = par_tokens;
tmp_xrange_high_1 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_xrange_high_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_xrange_low_3);

exception_lineno = 83;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_iter_arg_5 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_3, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_low_3);
Py_DECREF(tmp_xrange_low_3);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_37 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_4__for_iterator;
    tmp_for_loop_4__for_iterator = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
tmp_next_source_3 = tmp_for_loop_4__for_iterator;
tmp_assign_source_38 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_38 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooo";
exception_lineno = 83;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_4__iter_value;
    tmp_for_loop_4__iter_value = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_39;
CHECK_OBJECT(tmp_for_loop_4__iter_value);
tmp_assign_source_39 = tmp_for_loop_4__iter_value;
{
    PyObject *old = var_j;
    var_j = tmp_assign_source_39;
    Py_INCREF(var_j);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_11;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_12;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_13;
if (par_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_22 = par_tokens;
CHECK_OBJECT(var_j);
tmp_subscript_value_12 = var_j;
tmp_expression_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_12);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_cmp_expr_right_11 = mod_consts.const_str_plain_softbreak;
tmp_or_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
if (par_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_24 = par_tokens;
CHECK_OBJECT(var_j);
tmp_subscript_value_13 = var_j;
tmp_expression_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_13);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_cmp_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_cmp_expr_right_12 = mod_consts.const_str_plain_hardbreak;
tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
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
goto loop_end_5;
branch_no_11:;
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_14;
if (par_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_26 = par_tokens;
CHECK_OBJECT(var_j);
tmp_subscript_value_14 = var_j;
tmp_expression_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_14);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
goto loop_start_5;
branch_no_12:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_15;
PyObject *tmp_args_element_value_10;
tmp_called_value_6 = module_var_accessor_markdown_it$rules_core$smartquotes$charCodeAt(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (par_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_28 = par_tokens;
CHECK_OBJECT(var_j);
tmp_subscript_value_15 = var_j;
tmp_expression_value_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_15);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_10 = const_int_0;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 91;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_nextChar;
    assert(old != NULL);
    var_nextChar = tmp_assign_source_40;
    Py_DECREF(old);
}

}
goto loop_end_5;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_5;
loop_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_2;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
branch_end_10:;
{
PyObject *tmp_assign_source_41;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_12;
PyObject *tmp_chr_arg_1;
CHECK_OBJECT(var_lastChar);
tmp_cmp_expr_left_13 = var_lastChar;
tmp_cmp_expr_right_13 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_called_value_7 = module_var_accessor_markdown_it$rules_core$smartquotes$isMdAsciiPunct(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isMdAsciiPunct);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_lastChar);
tmp_args_element_value_11 = var_lastChar;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 95;
tmp_or_left_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_11);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 95;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(tmp_or_left_value_3);
Py_DECREF(tmp_or_left_value_3);
tmp_called_value_8 = module_var_accessor_markdown_it$rules_core$smartquotes$isPunctChar(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isPunctChar);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_lastChar);
tmp_chr_arg_1 = var_lastChar;
tmp_args_element_value_12 = BUILTIN_CHR(tstate, tmp_chr_arg_1);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 95;
tmp_or_right_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_and_right_value_1 = tmp_or_left_value_3;
or_end_3:;
tmp_assign_source_41 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_assign_source_41 = tmp_and_left_value_1;
and_end_1:;
{
    PyObject *old = var_isLastPunctChar;
    var_isLastPunctChar = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_14;
PyObject *tmp_chr_arg_2;
CHECK_OBJECT(var_nextChar);
tmp_cmp_expr_left_14 = var_nextChar;
tmp_cmp_expr_right_14 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_14 != tmp_cmp_expr_right_14) ? Py_True : Py_False;
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_called_value_9 = module_var_accessor_markdown_it$rules_core$smartquotes$isMdAsciiPunct(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isMdAsciiPunct);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_nextChar);
tmp_args_element_value_13 = var_nextChar;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 98;
tmp_or_left_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_13);
if (tmp_or_left_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_4);

exception_lineno = 98;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(tmp_or_left_value_4);
Py_DECREF(tmp_or_left_value_4);
tmp_called_value_10 = module_var_accessor_markdown_it$rules_core$smartquotes$isPunctChar(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isPunctChar);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_nextChar);
tmp_chr_arg_2 = var_nextChar;
tmp_args_element_value_14 = BUILTIN_CHR(tstate, tmp_chr_arg_2);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 98;
tmp_or_right_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_or_right_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_2 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_and_right_value_2 = tmp_or_left_value_4;
or_end_4:;
tmp_assign_source_42 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
Py_INCREF(tmp_and_left_value_2);
tmp_assign_source_42 = tmp_and_left_value_2;
and_end_2:;
{
    PyObject *old = var_isNextPunctChar;
    var_isNextPunctChar = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_15;
CHECK_OBJECT(var_lastChar);
tmp_cmp_expr_left_15 = var_lastChar;
tmp_cmp_expr_right_15 = Py_None;
tmp_and_left_value_3 = (tmp_cmp_expr_left_15 != tmp_cmp_expr_right_15) ? Py_True : Py_False;
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
tmp_called_value_11 = module_var_accessor_markdown_it$rules_core$smartquotes$isWhiteSpace(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isWhiteSpace);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_lastChar);
tmp_args_element_value_15 = var_lastChar;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 101;
tmp_and_right_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_15);
if (tmp_and_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_43 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
Py_INCREF(tmp_and_left_value_3);
tmp_assign_source_43 = tmp_and_left_value_3;
and_end_3:;
{
    PyObject *old = var_isLastWhiteSpace;
    var_isLastWhiteSpace = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
int tmp_and_left_truth_4;
PyObject *tmp_and_left_value_4;
PyObject *tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_16;
CHECK_OBJECT(var_nextChar);
tmp_cmp_expr_left_16 = var_nextChar;
tmp_cmp_expr_right_16 = Py_None;
tmp_and_left_value_4 = (tmp_cmp_expr_left_16 != tmp_cmp_expr_right_16) ? Py_True : Py_False;
tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
tmp_called_value_12 = module_var_accessor_markdown_it$rules_core$smartquotes$isWhiteSpace(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isWhiteSpace);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_nextChar);
tmp_args_element_value_16 = var_nextChar;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 102;
tmp_and_right_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_16);
if (tmp_and_right_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_44 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
Py_INCREF(tmp_and_left_value_4);
tmp_assign_source_44 = tmp_and_left_value_4;
and_end_4:;
{
    PyObject *old = var_isNextWhiteSpace;
    var_isNextWhiteSpace = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_1;
CHECK_OBJECT(var_isNextWhiteSpace);
tmp_truth_name_1 = CHECK_IF_TRUE(var_isNextWhiteSpace);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_13 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = Py_False;
{
    PyObject *old = var_canOpen;
    assert(old != NULL);
    var_canOpen = tmp_assign_source_45;
    Py_INCREF(var_canOpen);
    Py_DECREF(old);
}

}
goto branch_end_13;
branch_no_13:;
{
nuitka_bool tmp_condition_result_14;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
int tmp_truth_name_2;
PyObject *tmp_operand_value_5;
int tmp_or_left_truth_5;
PyObject *tmp_or_left_value_5;
PyObject *tmp_or_right_value_5;
CHECK_OBJECT(var_isNextPunctChar);
tmp_truth_name_2 = CHECK_IF_TRUE(var_isNextPunctChar);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(var_isLastWhiteSpace);
tmp_or_left_value_5 = var_isLastWhiteSpace;
tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
if (tmp_or_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_5 == 1) {
    goto or_left_5;
} else {
    goto or_right_5;
}
or_right_5:;
CHECK_OBJECT(var_isLastPunctChar);
tmp_or_right_value_5 = var_isLastPunctChar;
tmp_operand_value_5 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_operand_value_5 = tmp_or_left_value_5;
or_end_5:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_14 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_14 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = Py_False;
{
    PyObject *old = var_canOpen;
    assert(old != NULL);
    var_canOpen = tmp_assign_source_46;
    Py_INCREF(var_canOpen);
    Py_DECREF(old);
}

}
branch_no_14:;
branch_end_13:;
{
nuitka_bool tmp_condition_result_15;
int tmp_truth_name_3;
CHECK_OBJECT(var_isLastWhiteSpace);
tmp_truth_name_3 = CHECK_IF_TRUE(var_isLastWhiteSpace);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_15 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = Py_False;
{
    PyObject *old = var_canClose;
    assert(old != NULL);
    var_canClose = tmp_assign_source_47;
    Py_INCREF(var_canClose);
    Py_DECREF(old);
}

}
goto branch_end_15;
branch_no_15:;
{
nuitka_bool tmp_condition_result_16;
int tmp_and_left_truth_6;
nuitka_bool tmp_and_left_value_6;
nuitka_bool tmp_and_right_value_6;
int tmp_truth_name_4;
PyObject *tmp_operand_value_6;
int tmp_or_left_truth_6;
PyObject *tmp_or_left_value_6;
PyObject *tmp_or_right_value_6;
CHECK_OBJECT(var_isLastPunctChar);
tmp_truth_name_4 = CHECK_IF_TRUE(var_isLastPunctChar);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(var_isNextWhiteSpace);
tmp_or_left_value_6 = var_isNextWhiteSpace;
tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
if (tmp_or_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_6 == 1) {
    goto or_left_6;
} else {
    goto or_right_6;
}
or_right_6:;
CHECK_OBJECT(var_isNextPunctChar);
tmp_or_right_value_6 = var_isNextPunctChar;
tmp_operand_value_6 = tmp_or_right_value_6;
goto or_end_6;
or_left_6:;
tmp_operand_value_6 = tmp_or_left_value_6;
or_end_6:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_16 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_condition_result_16 = tmp_and_left_value_6;
and_end_6:;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = Py_False;
{
    PyObject *old = var_canClose;
    assert(old != NULL);
    var_canClose = tmp_assign_source_48;
    Py_INCREF(var_canClose);
    Py_DECREF(old);
}

}
branch_no_16:;
branch_end_15:;
{
nuitka_bool tmp_condition_result_17;
int tmp_and_left_truth_7;
nuitka_bool tmp_and_left_value_7;
nuitka_bool tmp_and_right_value_7;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(var_nextChar);
tmp_cmp_expr_left_17 = var_nextChar;
tmp_cmp_expr_right_17 = mod_consts.const_int_pos_34;
tmp_and_left_value_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_and_left_value_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
CHECK_OBJECT(var_t);
tmp_called_instance_5 = var_t;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 114;
tmp_cmp_expr_left_18 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_cmp_expr_left_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_18 = mod_consts.const_str_chr_34;
tmp_and_right_value_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
CHECK_OBJECT(tmp_cmp_expr_left_18);
Py_DECREF(tmp_cmp_expr_left_18);
if (tmp_and_right_value_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_17 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
tmp_condition_result_17 = tmp_and_left_value_7;
and_end_7:;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
nuitka_bool tmp_condition_result_18;
int tmp_and_left_truth_8;
nuitka_bool tmp_and_left_value_8;
nuitka_bool tmp_and_right_value_8;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
int tmp_and_left_truth_9;
nuitka_bool tmp_and_left_value_9;
nuitka_bool tmp_and_right_value_9;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
CHECK_OBJECT(var_lastChar);
tmp_cmp_expr_left_19 = var_lastChar;
tmp_cmp_expr_right_19 = Py_None;
tmp_and_left_value_8 = (tmp_cmp_expr_left_19 != tmp_cmp_expr_right_19) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_8 = tmp_and_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_8 == 1) {
    goto and_right_8;
} else {
    goto and_left_8;
}
and_right_8:;
CHECK_OBJECT(var_lastChar);
tmp_cmp_expr_left_20 = var_lastChar;
tmp_cmp_expr_right_20 = mod_consts.const_int_pos_48;
tmp_and_left_value_9 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
if (tmp_and_left_value_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_truth_9 = tmp_and_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_9 == 1) {
    goto and_right_9;
} else {
    goto and_left_9;
}
and_right_9:;
CHECK_OBJECT(var_lastChar);
tmp_cmp_expr_left_21 = var_lastChar;
tmp_cmp_expr_right_21 = mod_consts.const_int_pos_57;
tmp_and_right_value_9 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
if (tmp_and_right_value_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_8 = tmp_and_right_value_9;
goto and_end_9;
and_left_9:;
tmp_and_right_value_8 = tmp_and_left_value_9;
and_end_9:;
tmp_condition_result_18 = tmp_and_right_value_8;
goto and_end_8;
and_left_8:;
tmp_condition_result_18 = tmp_and_left_value_8;
and_end_8:;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = Py_False;
{
    PyObject *old = tmp_assign_unpack_2__assign_source;
    tmp_assign_unpack_2__assign_source = tmp_assign_source_49;
    Py_INCREF(tmp_assign_unpack_2__assign_source);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_50;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_assign_source_50 = tmp_assign_unpack_2__assign_source;
{
    PyObject *old = var_canClose;
    assert(old != NULL);
    var_canClose = tmp_assign_source_50;
    Py_INCREF(var_canClose);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_51;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_assign_source_51 = tmp_assign_unpack_2__assign_source;
{
    PyObject *old = var_canOpen;
    assert(old != NULL);
    var_canOpen = tmp_assign_source_51;
    Py_INCREF(var_canOpen);
    Py_DECREF(old);
}

}
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
Py_DECREF(tmp_assign_unpack_2__assign_source);
tmp_assign_unpack_2__assign_source = NULL;
branch_no_18:;
branch_no_17:;
{
bool tmp_condition_result_19;
int tmp_and_left_truth_10;
bool tmp_and_left_value_10;
bool tmp_and_right_value_10;
CHECK_OBJECT(var_canOpen);
tmp_and_left_value_10 = CHECK_IF_TRUE(var_canOpen) == 1;
tmp_and_left_truth_10 = tmp_and_left_value_10 != false ? 1 : 0;
if (tmp_and_left_truth_10 == 1) {
    goto and_right_10;
} else {
    goto and_left_10;
}
and_right_10:;
CHECK_OBJECT(var_canClose);
tmp_and_right_value_10 = CHECK_IF_TRUE(var_canClose) == 1;
tmp_condition_result_19 = tmp_and_right_value_10;
goto and_end_10;
and_left_10:;
tmp_condition_result_19 = tmp_and_left_value_10;
and_end_10:;
if (tmp_condition_result_19 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_52;
CHECK_OBJECT(var_isLastPunctChar);
tmp_assign_source_52 = var_isLastPunctChar;
{
    PyObject *old = var_canOpen;
    assert(old != NULL);
    var_canOpen = tmp_assign_source_52;
    Py_INCREF(var_canOpen);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_53;
CHECK_OBJECT(var_isNextPunctChar);
tmp_assign_source_53 = var_isNextPunctChar;
{
    PyObject *old = var_canClose;
    assert(old != NULL);
    var_canClose = tmp_assign_source_53;
    Py_INCREF(var_canClose);
    Py_DECREF(old);
}

}
branch_no_19:;
{
bool tmp_condition_result_20;
int tmp_and_left_truth_11;
bool tmp_and_left_value_11;
bool tmp_and_right_value_11;
PyObject *tmp_operand_value_7;
PyObject *tmp_operand_value_8;
CHECK_OBJECT(var_canOpen);
tmp_operand_value_7 = var_canOpen;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_11 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_11 = tmp_and_left_value_11 != false ? 1 : 0;
if (tmp_and_left_truth_11 == 1) {
    goto and_right_11;
} else {
    goto and_left_11;
}
and_right_11:;
CHECK_OBJECT(var_canClose);
tmp_operand_value_8 = var_canClose;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_11 = (tmp_res == 0) ? true : false;
tmp_condition_result_20 = tmp_and_right_value_11;
goto and_end_11;
and_left_11:;
tmp_condition_result_20 = tmp_and_left_value_11;
and_end_11:;
if (tmp_condition_result_20 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_5;
CHECK_OBJECT(var_isSingle);
tmp_truth_name_5 = CHECK_IF_TRUE(var_isSingle);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_21 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_element_value_18;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_19;
PyObject *tmp_assattr_target_1;
tmp_called_value_13 = module_var_accessor_markdown_it$rules_core$smartquotes$replaceAt(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_replaceAt);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_29 = var_token;
tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_content);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_t);
tmp_called_instance_6 = var_t;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 135;
tmp_add_expr_left_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_17);

exception_lineno = 135;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_lastIndex);
tmp_add_expr_right_7 = var_lastIndex;
tmp_args_element_value_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_17);

exception_lineno = 135;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_19 = module_var_accessor_markdown_it$rules_core$smartquotes$APOSTROPHE(tstate);
if (unlikely(tmp_args_element_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APOSTROPHE);
}

if (tmp_args_element_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_18);

exception_lineno = 135;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 134;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_token == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_assattr_target_1 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_content, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
}
branch_no_21:;
goto loop_start_3;
branch_no_20:;
{
nuitka_bool tmp_condition_result_22;
int tmp_truth_name_6;
CHECK_OBJECT(var_canClose);
tmp_truth_name_6 = CHECK_IF_TRUE(var_canClose);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_22 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_iter_arg_6;
PyObject *tmp_expression_value_30;
PyObject *tmp_xrange_low_4;
PyObject *tmp_len_arg_5;
PyObject *tmp_subscript_value_16;
if (var_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_len_arg_5 = var_stack;
tmp_xrange_low_4 = BUILTIN_LEN(tstate, tmp_len_arg_5);
if (tmp_xrange_low_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_30 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_4);
CHECK_OBJECT(tmp_xrange_low_4);
Py_DECREF(tmp_xrange_low_4);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_16 = mod_consts.const_slice_none_none_int_neg_1;
tmp_iter_arg_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_16);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_54 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_5__for_iterator;
    tmp_for_loop_5__for_iterator = tmp_assign_source_54;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_55;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
tmp_next_source_4 = tmp_for_loop_5__for_iterator;
tmp_assign_source_55 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_55 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooo";
exception_lineno = 141;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_for_loop_5__iter_value;
    tmp_for_loop_5__iter_value = tmp_assign_source_55;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_56;
CHECK_OBJECT(tmp_for_loop_5__iter_value);
tmp_assign_source_56 = tmp_for_loop_5__iter_value;
{
    PyObject *old = var_j;
    var_j = tmp_assign_source_56;
    Py_INCREF(var_j);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_17;
if (var_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_31 = var_stack;
CHECK_OBJECT(var_j);
tmp_subscript_value_17 = var_j;
tmp_assign_source_57 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_17);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_item;
    var_item = tmp_assign_source_57;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_23;
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_18;
PyObject *tmp_subscript_value_19;
if (var_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 143;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_33 = var_stack;
CHECK_OBJECT(var_j);
tmp_subscript_value_18 = var_j;
tmp_expression_value_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_18);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_subscript_value_19 = const_str_plain_level;
tmp_cmp_expr_left_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_19);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_cmp_expr_left_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (var_thisLevel == NULL) {
Py_DECREF(tmp_cmp_expr_left_22);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_thisLevel);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 143;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_cmp_expr_right_22 = var_thisLevel;
tmp_condition_result_23 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
CHECK_OBJECT(tmp_cmp_expr_left_22);
Py_DECREF(tmp_cmp_expr_left_22);
if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
goto loop_end_6;
branch_no_23:;
{
nuitka_bool tmp_condition_result_24;
int tmp_and_left_truth_12;
nuitka_bool tmp_and_left_value_12;
nuitka_bool tmp_and_right_value_12;
PyObject *tmp_cmp_expr_left_23;
PyObject *tmp_cmp_expr_right_23;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_20;
PyObject *tmp_cmp_expr_left_24;
PyObject *tmp_cmp_expr_right_24;
PyObject *tmp_expression_value_35;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_21;
PyObject *tmp_subscript_value_22;
CHECK_OBJECT(var_item);
tmp_expression_value_34 = var_item;
tmp_subscript_value_20 = mod_consts.const_str_plain_single;
tmp_cmp_expr_left_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_20);
if (tmp_cmp_expr_left_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_isSingle);
tmp_cmp_expr_right_23 = var_isSingle;
tmp_and_left_value_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
CHECK_OBJECT(tmp_cmp_expr_left_23);
Py_DECREF(tmp_cmp_expr_left_23);
if (tmp_and_left_value_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_and_left_truth_12 = tmp_and_left_value_12 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (tmp_and_left_truth_12 == 1) {
    goto and_right_12;
} else {
    goto and_left_12;
}
and_right_12:;
if (var_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 145;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_36 = var_stack;
CHECK_OBJECT(var_j);
tmp_subscript_value_21 = var_j;
tmp_expression_value_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_21);
if (tmp_expression_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_subscript_value_22 = const_str_plain_level;
tmp_cmp_expr_left_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_22);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_cmp_expr_left_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (var_thisLevel == NULL) {
Py_DECREF(tmp_cmp_expr_left_24);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_thisLevel);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 145;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_cmp_expr_right_24 = var_thisLevel;
tmp_and_right_value_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
CHECK_OBJECT(tmp_cmp_expr_left_24);
Py_DECREF(tmp_cmp_expr_left_24);
if (tmp_and_right_value_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_24 = tmp_and_right_value_12;
goto and_end_12;
and_left_12:;
tmp_condition_result_24 = tmp_and_left_value_12;
and_end_12:;
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_23;
if (var_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_37 = var_stack;
CHECK_OBJECT(var_j);
tmp_subscript_value_23 = var_j;
tmp_assign_source_58 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_23);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_item;
    assert(old != NULL);
    var_item = tmp_assign_source_58;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
CHECK_OBJECT(var_isSingle);
tmp_truth_name_7 = CHECK_IF_TRUE(var_isSingle);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_24;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 149;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_41 = par_state;
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_md);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_options);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_expression_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_quotes);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
if (tmp_expression_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_subscript_value_24 = mod_consts.const_int_pos_2;
tmp_assign_source_59 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_24, 2);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_openQuote;
    var_openQuote = tmp_assign_source_59;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_expression_value_42;
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_subscript_value_25;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 150;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_45 = par_state;
tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_md);
if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_options);
CHECK_OBJECT(tmp_expression_value_44);
Py_DECREF(tmp_expression_value_44);
if (tmp_expression_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_quotes);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_expression_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_subscript_value_25 = mod_consts.const_int_pos_3;
tmp_assign_source_60 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_42, tmp_subscript_value_25, 3);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_closeQuote;
    var_closeQuote = tmp_assign_source_60;
    Py_XDECREF(old);
}

}
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_expression_value_46;
PyObject *tmp_expression_value_47;
PyObject *tmp_expression_value_48;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_26;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 152;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_49 = par_state;
tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_md);
if (tmp_expression_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_options);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_expression_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_quotes);
CHECK_OBJECT(tmp_expression_value_47);
Py_DECREF(tmp_expression_value_47);
if (tmp_expression_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_subscript_value_26 = const_int_0;
tmp_assign_source_61 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_46, tmp_subscript_value_26, 0);
CHECK_OBJECT(tmp_expression_value_46);
Py_DECREF(tmp_expression_value_46);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_openQuote;
    var_openQuote = tmp_assign_source_61;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_expression_value_50;
PyObject *tmp_expression_value_51;
PyObject *tmp_expression_value_52;
PyObject *tmp_expression_value_53;
PyObject *tmp_subscript_value_27;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_53 = par_state;
tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_md);
if (tmp_expression_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_options);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
if (tmp_expression_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_quotes);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_expression_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_subscript_value_27 = const_int_pos_1;
tmp_assign_source_62 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_50, tmp_subscript_value_27, 1);
CHECK_OBJECT(tmp_expression_value_50);
Py_DECREF(tmp_expression_value_50);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_closeQuote;
    var_closeQuote = tmp_assign_source_62;
    Py_XDECREF(old);
}

}
branch_end_25:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_20;
PyObject *tmp_expression_value_54;
PyObject *tmp_args_element_value_21;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_22;
PyObject *tmp_assattr_target_2;
tmp_called_value_14 = module_var_accessor_markdown_it$rules_core$smartquotes$replaceAt(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_replaceAt);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_54 = var_token;
tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_content);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_t);
tmp_called_instance_7 = var_t;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 159;
tmp_add_expr_left_8 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_20);

exception_lineno = 159;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_lastIndex);
tmp_add_expr_right_8 = var_lastIndex;
tmp_args_element_value_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
CHECK_OBJECT(tmp_add_expr_left_8);
Py_DECREF(tmp_add_expr_left_8);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_20);

exception_lineno = 159;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_closeQuote);
tmp_args_element_value_22 = var_closeQuote;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 158;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (var_token == NULL) {
Py_DECREF(tmp_assattr_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 158;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_assattr_target_2 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_content, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_23;
PyObject *tmp_expression_value_55;
PyObject *tmp_expression_value_56;
PyObject *tmp_subscript_value_28;
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_29;
PyObject *tmp_args_element_value_24;
PyObject *tmp_expression_value_58;
PyObject *tmp_subscript_value_30;
PyObject *tmp_args_element_value_25;
PyObject *tmp_assattr_target_3;
PyObject *tmp_expression_value_59;
PyObject *tmp_subscript_value_31;
PyObject *tmp_expression_value_60;
PyObject *tmp_subscript_value_32;
tmp_called_value_15 = module_var_accessor_markdown_it$rules_core$smartquotes$replaceAt(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_replaceAt);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (par_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 162;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_56 = par_tokens;
CHECK_OBJECT(var_item);
tmp_expression_value_57 = var_item;
tmp_subscript_value_29 = mod_consts.const_str_plain_token;
tmp_subscript_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_29);
if (tmp_subscript_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_55 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_28);
CHECK_OBJECT(tmp_subscript_value_28);
Py_DECREF(tmp_subscript_value_28);
if (tmp_expression_value_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_item);
tmp_expression_value_58 = var_item;
tmp_subscript_value_30 = mod_consts.const_str_plain_pos;
tmp_args_element_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_30);
if (tmp_args_element_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_23);

exception_lineno = 162;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_openQuote);
tmp_args_element_value_25 = var_openQuote;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 161;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (par_tokens == NULL) {
Py_DECREF(tmp_assattr_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 161;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_59 = par_tokens;
CHECK_OBJECT(var_item);
tmp_expression_value_60 = var_item;
tmp_subscript_value_32 = mod_consts.const_str_plain_token;
tmp_subscript_value_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_32);
if (tmp_subscript_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_3);

exception_lineno = 161;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_assattr_target_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_31);
CHECK_OBJECT(tmp_subscript_value_31);
Py_DECREF(tmp_subscript_value_31);
if (tmp_assattr_target_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_3);

exception_lineno = 161;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_content, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_target_3);
Py_DECREF(tmp_assattr_target_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_sub_expr_left_4;
nuitka_digit tmp_sub_expr_right_4;
PyObject *tmp_len_arg_6;
CHECK_OBJECT(var_pos);
tmp_iadd_expr_left_1 = var_pos;
CHECK_OBJECT(var_closeQuote);
tmp_len_arg_6 = var_closeQuote;
tmp_sub_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_6);
if (tmp_sub_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_sub_expr_right_4 = 1;
tmp_iadd_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_left_4);
Py_DECREF(tmp_sub_expr_left_4);
assert(!(tmp_iadd_expr_right_1 == NULL));
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_assign_source_63 = tmp_iadd_expr_left_1;
var_pos = tmp_assign_source_63;

}
{
nuitka_bool tmp_condition_result_26;
PyObject *tmp_cmp_expr_left_25;
PyObject *tmp_cmp_expr_right_25;
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_33;
CHECK_OBJECT(var_item);
tmp_expression_value_61 = var_item;
tmp_subscript_value_33 = mod_consts.const_str_plain_token;
tmp_cmp_expr_left_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_33);
if (tmp_cmp_expr_left_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (var_i == NULL) {
Py_DECREF(tmp_cmp_expr_left_25);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 166;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_cmp_expr_right_25 = var_i;
tmp_condition_result_26 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
CHECK_OBJECT(tmp_cmp_expr_left_25);
Py_DECREF(tmp_cmp_expr_left_25);
if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_sub_expr_left_5;
nuitka_digit tmp_sub_expr_right_5;
PyObject *tmp_len_arg_7;
CHECK_OBJECT(var_pos);
tmp_iadd_expr_left_2 = var_pos;
CHECK_OBJECT(var_openQuote);
tmp_len_arg_7 = var_openQuote;
tmp_sub_expr_left_5 = BUILTIN_LEN(tstate, tmp_len_arg_7);
if (tmp_sub_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_sub_expr_right_5 = 1;
tmp_iadd_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
CHECK_OBJECT(tmp_sub_expr_left_5);
Py_DECREF(tmp_sub_expr_left_5);
assert(!(tmp_iadd_expr_right_2 == NULL));
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_assign_source_64 = tmp_iadd_expr_left_2;
var_pos = tmp_assign_source_64;

}
branch_no_26:;
{
PyObject *tmp_assign_source_65;
PyObject *tmp_expression_value_62;
if (var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 169;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_62 = var_token;
tmp_assign_source_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain_content);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_65;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_len_arg_8;
CHECK_OBJECT(var_text);
tmp_len_arg_8 = var_text;
tmp_assign_source_66 = BUILTIN_LEN(tstate, tmp_len_arg_8);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_maximum;
    var_maximum = tmp_assign_source_66;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_34;
PyObject *tmp_stop_value_3;
if (var_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 172;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_63 = var_stack;
CHECK_OBJECT(var_j);
tmp_stop_value_3 = var_j;
tmp_subscript_value_34 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_3);
assert(!(tmp_subscript_value_34 == NULL));
tmp_assign_source_67 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_34);
CHECK_OBJECT(tmp_subscript_value_34);
Py_DECREF(tmp_subscript_value_34);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_stack;
    var_stack = tmp_assign_source_67;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = Py_True;
{
    PyObject *old = var_goto_outer;
    assert(old != NULL);
    var_goto_outer = tmp_assign_source_68;
    Py_INCREF(var_goto_outer);
    Py_DECREF(old);
}

}
goto loop_end_6;
branch_no_24:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
goto loop_start_6;
loop_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
{
bool tmp_condition_result_27;
CHECK_OBJECT(var_goto_outer);
tmp_condition_result_27 = CHECK_IF_TRUE(var_goto_outer) == 1;
if (tmp_condition_result_27 != false) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = Py_False;
{
    PyObject *old = var_goto_outer;
    assert(old != NULL);
    var_goto_outer = tmp_assign_source_69;
    Py_INCREF(var_goto_outer);
    Py_DECREF(old);
}

}
goto loop_start_3;
branch_no_27:;
branch_no_22:;
{
nuitka_bool tmp_condition_result_28;
int tmp_truth_name_8;
CHECK_OBJECT(var_canOpen);
tmp_truth_name_8 = CHECK_IF_TRUE(var_canOpen);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_28 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_64;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_26;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
if (var_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 180;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_64 = var_stack;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts.const_str_plain_append);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_dict_key_1 = mod_consts.const_str_plain_token;
if (var_i == NULL) {
Py_DECREF(tmp_called_value_16);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 182;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_dict_value_1 = var_i;
tmp_args_element_value_26 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_called_instance_8;
tmp_res = PyDict_SetItem(tmp_args_element_value_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_pos;
CHECK_OBJECT(var_t);
tmp_called_instance_8 = var_t;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 183;
tmp_add_expr_left_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_lastIndex);
tmp_add_expr_right_9 = var_lastIndex;
tmp_dict_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
CHECK_OBJECT(tmp_add_expr_left_9);
Py_DECREF(tmp_add_expr_left_9);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_26, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_single;
CHECK_OBJECT(var_isSingle);
tmp_dict_value_1 = var_isSingle;
tmp_res = PyDict_SetItem(tmp_args_element_value_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_level;
if (var_thisLevel == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_thisLevel);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 185;
type_description_1 = "ooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = var_thisLevel;
tmp_res = PyDict_SetItem(tmp_args_element_value_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_16);
Py_DECREF(tmp_args_element_value_26);
goto try_except_handler_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 180;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_28;
branch_no_28:;
{
nuitka_bool tmp_condition_result_29;
int tmp_and_left_truth_13;
nuitka_bool tmp_and_left_value_13;
nuitka_bool tmp_and_right_value_13;
int tmp_truth_name_9;
int tmp_truth_name_10;
CHECK_OBJECT(var_canClose);
tmp_truth_name_9 = CHECK_IF_TRUE(var_canClose);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_13 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_13 = tmp_and_left_value_13 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_13 == 1) {
    goto and_right_13;
} else {
    goto and_left_13;
}
and_right_13:;
CHECK_OBJECT(var_isSingle);
tmp_truth_name_10 = CHECK_IF_TRUE(var_isSingle);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_13 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_29 = tmp_and_right_value_13;
goto and_end_13;
and_left_13:;
tmp_condition_result_29 = tmp_and_left_value_13;
and_end_13:;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_27;
PyObject *tmp_expression_value_65;
PyObject *tmp_args_element_value_28;
PyObject *tmp_add_expr_left_10;
PyObject *tmp_add_expr_right_10;
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_29;
PyObject *tmp_assattr_target_4;
tmp_called_value_17 = module_var_accessor_markdown_it$rules_core$smartquotes$replaceAt(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_replaceAt);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_65 = var_token;
tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain_content);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_t);
tmp_called_instance_9 = var_t;
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 190;
tmp_add_expr_left_10 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_9,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_27);

exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_lastIndex);
tmp_add_expr_right_10 = var_lastIndex;
tmp_args_element_value_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
CHECK_OBJECT(tmp_add_expr_left_10);
Py_DECREF(tmp_add_expr_left_10);
if (tmp_args_element_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_27);

exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_29 = module_var_accessor_markdown_it$rules_core$smartquotes$APOSTROPHE(tstate);
if (unlikely(tmp_args_element_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APOSTROPHE);
}

if (tmp_args_element_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_28);

exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame.f_lineno = 189;
{
    PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
    tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_token == NULL) {
Py_DECREF(tmp_assattr_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 189;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_assattr_target_4 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_content, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
}
branch_no_29:;
branch_end_28:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_3;
loop_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_8;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines,
    type_description_1,
    par_tokens,
    par_state,
    var_stack,
    var_lastChar,
    var_nextChar,
    var_i,
    var_token,
    var_thisLevel,
    var_j,
    var_text,
    var_pos,
    var_maximum,
    var_goto_outer,
    var_lastIndex,
    var_t,
    var_canOpen,
    var_canClose,
    var_isSingle,
    var_isLastPunctChar,
    var_isNextPunctChar,
    var_isLastWhiteSpace,
    var_isNextWhiteSpace,
    var_item,
    var_openQuote,
    var_closeQuote
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines == cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines);
    cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_core$smartquotes$$$function__2_process_inlines);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_stack);
var_stack = NULL;
Py_XDECREF(var_lastChar);
var_lastChar = NULL;
Py_XDECREF(var_nextChar);
var_nextChar = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_thisLevel);
var_thisLevel = NULL;
Py_XDECREF(var_j);
var_j = NULL;
Py_XDECREF(var_text);
var_text = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_goto_outer);
var_goto_outer = NULL;
Py_XDECREF(var_lastIndex);
var_lastIndex = NULL;
Py_XDECREF(var_t);
var_t = NULL;
Py_XDECREF(var_canOpen);
var_canOpen = NULL;
Py_XDECREF(var_canClose);
var_canClose = NULL;
Py_XDECREF(var_isSingle);
var_isSingle = NULL;
Py_XDECREF(var_isLastPunctChar);
var_isLastPunctChar = NULL;
Py_XDECREF(var_isNextPunctChar);
var_isNextPunctChar = NULL;
Py_XDECREF(var_isLastWhiteSpace);
var_isLastWhiteSpace = NULL;
Py_XDECREF(var_isNextWhiteSpace);
var_isNextWhiteSpace = NULL;
Py_XDECREF(var_item);
var_item = NULL;
Py_XDECREF(var_openQuote);
var_openQuote = NULL;
Py_XDECREF(var_closeQuote);
var_closeQuote = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_stack);
var_stack = NULL;
Py_XDECREF(var_lastChar);
var_lastChar = NULL;
Py_XDECREF(var_nextChar);
var_nextChar = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_thisLevel);
var_thisLevel = NULL;
Py_XDECREF(var_j);
var_j = NULL;
Py_XDECREF(var_text);
var_text = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_goto_outer);
var_goto_outer = NULL;
Py_XDECREF(var_lastIndex);
var_lastIndex = NULL;
Py_XDECREF(var_t);
var_t = NULL;
Py_XDECREF(var_canOpen);
var_canOpen = NULL;
Py_XDECREF(var_canClose);
var_canClose = NULL;
Py_XDECREF(var_isSingle);
var_isSingle = NULL;
Py_XDECREF(var_isLastPunctChar);
var_isLastPunctChar = NULL;
Py_XDECREF(var_isNextPunctChar);
var_isNextPunctChar = NULL;
Py_XDECREF(var_isLastWhiteSpace);
var_isLastWhiteSpace = NULL;
Py_XDECREF(var_isNextWhiteSpace);
var_isNextWhiteSpace = NULL;
Py_XDECREF(var_item);
var_item = NULL;
Py_XDECREF(var_openQuote);
var_openQuote = NULL;
Py_XDECREF(var_closeQuote);
var_closeQuote = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$rules_core$smartquotes$$$function__3_smartquotes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *var_token = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes = MAKE_FUNCTION_FRAME(tstate, code_objects_5d3a5825fdc0c9139f6177db97ac90fe, module_markdown_it$rules_core$smartquotes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes->m_type_description == NULL);
frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes = cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes);
assert(Py_REFCNT(frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_state);
tmp_expression_value_3 = par_state;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_md);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_options);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_typographer);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_state);
tmp_expression_value_4 = par_state;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_tokens);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 198;
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
    PyObject *old = var_token;
    var_token = tmp_assign_source_3;
    Py_INCREF(var_token);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_token);
tmp_expression_value_5 = var_token;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_type);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_inline;
tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_expression_value_6 = module_var_accessor_markdown_it$rules_core$smartquotes$QUOTE_RE(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_QUOTE_RE);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_search);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_token);
tmp_expression_value_7 = var_token;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_content);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 199;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes->m_frame.f_lineno = 199;
tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
goto loop_start_1;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_token);
tmp_expression_value_8 = var_token;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_children);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_markdown_it$rules_core$smartquotes$process_inlines(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_process_inlines);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_token);
tmp_expression_value_9 = var_token;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_children);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oo";
    goto try_except_handler_2;
}
if (par_state == NULL) {
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 202;
type_description_1 = "oo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = par_state;
frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes->m_frame.f_lineno = 202;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes,
    type_description_1,
    par_state,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes == cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes);
    cache_frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_core$smartquotes$$$function__3_smartquotes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_token);
var_token = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_state);
Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_core$smartquotes$$$function__1_replaceAt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_core$smartquotes$$$function__1_replaceAt,
        mod_consts.const_str_plain_replaceAt,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_51852df1b68adc6b95dda1f464769fba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_core$smartquotes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_core$smartquotes$$$function__2_process_inlines(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_core$smartquotes$$$function__2_process_inlines,
        mod_consts.const_str_plain_process_inlines,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d98d3cbcb831a45c340a51d09e71ca3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_core$smartquotes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_core$smartquotes$$$function__3_smartquotes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_core$smartquotes$$$function__3_smartquotes,
        mod_consts.const_str_plain_smartquotes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5d3a5825fdc0c9139f6177db97ac90fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_core$smartquotes,
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

static function_impl_code const function_table_markdown_it$rules_core$smartquotes[] = {
impl_markdown_it$rules_core$smartquotes$$$function__1_replaceAt,
impl_markdown_it$rules_core$smartquotes$$$function__2_process_inlines,
impl_markdown_it$rules_core$smartquotes$$$function__3_smartquotes,
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

    return Nuitka_Function_GetFunctionState(function, function_table_markdown_it$rules_core$smartquotes);
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
        module_markdown_it$rules_core$smartquotes,
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
        function_table_markdown_it$rules_core$smartquotes,
        sizeof(function_table_markdown_it$rules_core$smartquotes) / sizeof(function_impl_code)
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
static char const *module_full_name = "markdown_it.rules_core.smartquotes";
#endif

// Internal entry point for module code.
PyObject *module_code_markdown_it$rules_core$smartquotes(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("markdown_it$rules_core$smartquotes");

    // Store the module for future use.
    module_markdown_it$rules_core$smartquotes = module;

    moduledict_markdown_it$rules_core$smartquotes = MODULE_DICT(module_markdown_it$rules_core$smartquotes);

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
        PRINT_STRING("markdown_it$rules_core$smartquotes: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("markdown_it$rules_core$smartquotes: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("markdown_it$rules_core$smartquotes: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_core.smartquotes" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmarkdown_it$rules_core$smartquotes\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_markdown_it$rules_core$smartquotes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_core$smartquotes,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_core$smartquotes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_core$smartquotes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_core$smartquotes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_markdown_it$rules_core$smartquotes);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_markdown_it$rules_core$smartquotes);
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

        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_core$smartquotes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_d992276129af2a30f1c39285d4ad2cde;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_markdown_it$rules_core$smartquotes = MAKE_MODULE_FRAME(code_objects_86d7787fdc2e76b2d04405eb7744f4ab, module_markdown_it$rules_core$smartquotes);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_core$smartquotes);
assert(Py_REFCNT(frame_frame_markdown_it$rules_core$smartquotes) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_markdown_it$rules_core$smartquotes$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_markdown_it$rules_core$smartquotes$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_markdown_it$rules_core$smartquotes;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_markdown_it$rules_core$smartquotes->m_frame.f_lineno = 5;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_markdown_it$rules_core$smartquotes,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499;
tmp_globals_arg_value_2 = (PyObject *)moduledict_markdown_it$rules_core$smartquotes;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_4343ab9a03ddb13c55ab9a8374d3e92d_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_markdown_it$rules_core$smartquotes->m_frame.f_lineno = 8;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_markdown_it$rules_core$smartquotes,
        mod_consts.const_str_plain_charCodeAt,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_charCodeAt, tmp_assign_source_8);
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
        (PyObject *)moduledict_markdown_it$rules_core$smartquotes,
        mod_consts.const_str_plain_isMdAsciiPunct,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_isMdAsciiPunct);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_isMdAsciiPunct, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_markdown_it$rules_core$smartquotes,
        mod_consts.const_str_plain_isPunctChar,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_isPunctChar);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_isPunctChar, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_markdown_it$rules_core$smartquotes,
        mod_consts.const_str_plain_isWhiteSpace,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_isWhiteSpace);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_isWhiteSpace, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_token;
tmp_globals_arg_value_3 = (PyObject *)moduledict_markdown_it$rules_core$smartquotes;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Token_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_markdown_it$rules_core$smartquotes->m_frame.f_lineno = 9;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_markdown_it$rules_core$smartquotes,
        mod_consts.const_str_plain_Token,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Token);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_Token, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_state_core;
tmp_globals_arg_value_4 = (PyObject *)moduledict_markdown_it$rules_core$smartquotes;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_StateCore_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_markdown_it$rules_core$smartquotes->m_frame.f_lineno = 10;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_markdown_it$rules_core$smartquotes,
        mod_consts.const_str_plain_StateCore,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_StateCore);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_StateCore, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_markdown_it$rules_core$smartquotes$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_core$smartquotes->m_frame.f_lineno = 12;
tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_4f984eeb31c25c4708c3da9e2d29291b_tuple, 0)
);

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_QUOTE_TEST_RE, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_markdown_it$rules_core$smartquotes$re(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_core$smartquotes->m_frame.f_lineno = 13;
tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_4f984eeb31c25c4708c3da9e2d29291b_tuple, 0)
);

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_QUOTE_RE, tmp_assign_source_15);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_core$smartquotes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_core$smartquotes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_core$smartquotes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_markdown_it$rules_core$smartquotes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_chr_8217;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_APOSTROPHE, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_20c829bdb20f24bd8ce6d1f6d69ce609);

tmp_assign_source_17 = MAKE_FUNCTION_markdown_it$rules_core$smartquotes$$$function__1_replaceAt(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_replaceAt, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_01df9e907f5f007a2f2cfc32b399e5e9);

tmp_assign_source_18 = MAKE_FUNCTION_markdown_it$rules_core$smartquotes$$$function__2_process_inlines(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_process_inlines, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_45357cb9388ec8c4a447b4a17242ec59);

tmp_assign_source_19 = MAKE_FUNCTION_markdown_it$rules_core$smartquotes$$$function__3_smartquotes(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)mod_consts.const_str_plain_smartquotes, tmp_assign_source_19);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("markdown_it$rules_core$smartquotes", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_core.smartquotes" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_markdown_it$rules_core$smartquotes);
    return module_markdown_it$rules_core$smartquotes;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_core$smartquotes, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("markdown_it$rules_core$smartquotes", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

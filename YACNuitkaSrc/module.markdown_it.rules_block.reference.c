/* Generated code for Python module 'markdown_it$rules_block$reference'
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



/* The "module_markdown_it$rules_block$reference" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_markdown_it$rules_block$reference;
PyDictObject *moduledict_markdown_it$rules_block$reference;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_LOGGER;
PyObject *const_str_plain_debug;
PyObject *const_str_digest_a2aa80b48a13a52095c2ab5870139d40;
PyObject *const_str_plain_bMarks;
PyObject *const_str_plain_tShift;
PyObject *const_str_plain_eMarks;
PyObject *const_str_plain_is_code_block;
PyObject *const_str_plain_src;
PyObject *const_str_chr_91;
PyObject *const_str_plain_pos;
PyObject *const_str_plain_maximum;
PyObject *const_str_plain_charCodeAt;
PyObject *const_str_plain_string;
PyObject *const_int_pos_91;
PyObject *const_int_pos_93;
PyObject *const_int_pos_10;
PyObject *const_str_plain_getNextLine;
PyObject *const_str_plain_state;
PyObject *const_str_plain_nextLine;
PyObject *const_int_pos_92;
PyObject *const_str_plain_lineContent;
PyObject *const_int_pos_58;
PyObject *const_int_pos_2;
PyObject *const_str_plain_isSpace;
PyObject *const_str_plain_md;
PyObject *const_str_plain_helpers;
PyObject *const_str_plain_parseLinkDestination;
PyObject *const_str_plain_ok;
PyObject *const_str_plain_normalizeLink;
PyObject *const_str_plain_str;
PyObject *const_str_plain_validateLink;
PyObject *const_str_plain_parseLinkTitle;
PyObject *const_str_plain_titleRes;
PyObject *const_str_plain_can_continue;
PyObject *const_str_plain_normalizeReference;
PyObject *const_str_plain_references;
PyObject *const_str_plain_env;
PyObject *const_str_plain_line;
PyObject *const_str_plain_options;
PyObject *const_tuple_str_plain_inline_definitions_false_tuple;
PyObject *const_str_plain_push;
PyObject *const_tuple_str_plain_definition_str_empty_int_0_tuple;
PyObject *const_str_plain_id;
PyObject *const_str_plain_title;
PyObject *const_str_plain_url;
PyObject *const_str_plain_label;
PyObject *const_str_plain_meta;
PyObject *const_str_plain_map;
PyObject *const_str_plain_href;
PyObject *const_str_plain_setdefault;
PyObject *const_str_plain_duplicate_refs;
PyObject *const_str_plain_append;
PyObject *const_str_plain_lineMax;
PyObject *const_str_plain_isEmpty;
PyObject *const_str_plain_sCount;
PyObject *const_str_plain_block;
PyObject *const_str_plain_ruler;
PyObject *const_str_plain_getRules;
PyObject *const_tuple_str_plain_reference_tuple;
PyObject *const_str_plain_parentType;
PyObject *const_str_plain_reference;
PyObject *const_str_plain_endLine;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_logging;
PyObject *const_str_digest_b079a483a5bb3f12a8f5a2f221050499;
PyObject *const_tuple_ceb512a649306499b063064d3c3afc93_tuple;
PyObject *const_str_plain_state_block;
PyObject *const_tuple_str_plain_StateBlock_tuple;
PyObject *const_str_plain_StateBlock;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_6b7c847ebf111e3c117b406078b61b65_tuple;
PyObject *const_str_plain_startLine;
PyObject *const_str_plain__endLine;
PyObject *const_str_plain_silent;
PyObject *const_str_plain_return;
PyObject *const_uniontype_tuple_anon_NoneType_type_str_tuple;
PyObject *const_str_digest_3f3f48861abd4db3b1e2c57543344afe;
PyObject *const_str_digest_385b1337668ada2c6a85d8484e8ee0c4;
PyObject *const_tuple_6523a164270b7a16abe4b4bd8938c66f_tuple;
PyObject *const_tuple_e5f08237512f8630600035811ff71541_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[81];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("markdown_it.rules_block.reference"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_LOGGER);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2aa80b48a13a52095c2ab5870139d40);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_bMarks);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_tShift);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_eMarks);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_code_block);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_src);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_chr_91);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_pos);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_maximum);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_charCodeAt);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_string);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_int_pos_91);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_int_pos_93);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_getNextLine);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_nextLine);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_int_pos_92);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_lineContent);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_58);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_isSpace);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_md);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_helpers);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_parseLinkDestination);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_ok);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalizeLink);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_validateLink);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_parseLinkTitle);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_titleRes);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_can_continue);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalizeReference);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_references);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_env);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_line);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_inline_definitions_false_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_push);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_definition_str_empty_int_0_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_title);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_label);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_meta);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_map);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_href);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_duplicate_refs);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_lineMax);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_isEmpty);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_sCount);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_block);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_ruler);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_getRules);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reference_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_parentType);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_reference);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_endLine);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_ceb512a649306499b063064d3c3afc93_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_state_block);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StateBlock_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_StateBlock);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6b7c847ebf111e3c117b406078b61b65_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_startLine);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain__endLine);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_silent);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_uniontype_tuple_anon_NoneType_type_str_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f3f48861abd4db3b1e2c57543344afe);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_385b1337668ada2c6a85d8484e8ee0c4);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_6523a164270b7a16abe4b4bd8938c66f_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_e5f08237512f8630600035811ff71541_tuple);
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
void checkModuleConstants_markdown_it$rules_block$reference(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LOGGER);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2aa80b48a13a52095c2ab5870139d40));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2aa80b48a13a52095c2ab5870139d40);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_bMarks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bMarks);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_tShift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tShift);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_eMarks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eMarks);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_code_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_code_block);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_src));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_chr_91));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_91);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_pos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pos);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_maximum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maximum);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_charCodeAt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_charCodeAt);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_string);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_int_pos_91));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_91);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_int_pos_93));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_93);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_int_pos_10));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_10);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_getNextLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getNextLine);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_nextLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nextLine);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_int_pos_92));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_92);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_lineContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lineContent);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_58));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_58);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_isSpace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isSpace);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_md));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_md);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_helpers);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_parseLinkDestination));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parseLinkDestination);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_ok));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ok);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalizeLink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalizeLink);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_validateLink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validateLink);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_parseLinkTitle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parseLinkTitle);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_titleRes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_titleRes);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_can_continue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_can_continue);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalizeReference));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalizeReference);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_references));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_references);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_env));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_env);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_line);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_options);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_inline_definitions_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_inline_definitions_false_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_push));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_push);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_definition_str_empty_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_definition_str_empty_int_0_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_title));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_title);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_label));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_label);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_meta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_meta);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_map));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_map);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_href));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_href);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setdefault);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_duplicate_refs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_duplicate_refs);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_lineMax));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lineMax);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_isEmpty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isEmpty);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_sCount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sCount);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_block);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_ruler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ruler);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_getRules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getRules);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reference_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_reference_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_parentType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parentType);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_reference));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reference);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_endLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endLine);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_ceb512a649306499b063064d3c3afc93_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ceb512a649306499b063064d3c3afc93_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_state_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state_block);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StateBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StateBlock_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_StateBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StateBlock);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6b7c847ebf111e3c117b406078b61b65_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_6b7c847ebf111e3c117b406078b61b65_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_startLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startLine);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain__endLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__endLine);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_silent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_silent);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_uniontype_tuple_anon_NoneType_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_uniontype_tuple_anon_NoneType_type_str_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f3f48861abd4db3b1e2c57543344afe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f3f48861abd4db3b1e2c57543344afe);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_385b1337668ada2c6a85d8484e8ee0c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_385b1337668ada2c6a85d8484e8ee0c4);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_6523a164270b7a16abe4b4bd8938c66f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6523a164270b7a16abe4b4bd8938c66f_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_e5f08237512f8630600035811ff71541_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e5f08237512f8630600035811ff71541_tuple);
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
static PyObject *module_var_accessor_markdown_it$rules_block$reference$LOGGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$reference->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$reference->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$reference->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$reference$StateBlock(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$reference->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$reference->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_StateBlock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$reference->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_StateBlock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_StateBlock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StateBlock);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$reference$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$reference->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$reference->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$reference->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$reference$charCodeAt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$reference->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$reference->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_charCodeAt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$reference->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_charCodeAt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_charCodeAt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_charCodeAt);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$reference$getNextLine(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$reference->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$reference->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_getNextLine);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$reference->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getNextLine);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getNextLine, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getNextLine);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getNextLine, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_getNextLine);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_getNextLine);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getNextLine);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$reference$isSpace(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$reference->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$reference->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_isSpace);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$reference->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isSpace);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isSpace, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isSpace);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isSpace, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_isSpace);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_isSpace);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isSpace);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$reference$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$reference->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$reference->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$reference->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$reference$normalizeReference(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$reference->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$reference->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_normalizeReference);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$reference->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_normalizeReference);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_normalizeReference, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_normalizeReference);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_normalizeReference, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_normalizeReference);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_normalizeReference);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_normalizeReference);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a76f351721f9a597a696f9c081841ab2;
static PyCodeObject *code_objects_8a8474949c4a90c1af5c80f9c39d61c6;
static PyCodeObject *code_objects_7b1e1e0bca193471f41b8c1dd1f4634c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_3f3f48861abd4db3b1e2c57543344afe); CHECK_OBJECT(module_filename_obj);
code_objects_a76f351721f9a597a696f9c081841ab2 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_385b1337668ada2c6a85d8484e8ee0c4, mod_consts.const_str_digest_385b1337668ada2c6a85d8484e8ee0c4, NULL, NULL, 0, 0, 0);
code_objects_8a8474949c4a90c1af5c80f9c39d61c6 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getNextLine, mod_consts.const_str_plain_getNextLine, mod_consts.const_tuple_6523a164270b7a16abe4b4bd8938c66f_tuple, NULL, 2, 0, 0);
code_objects_7b1e1e0bca193471f41b8c1dd1f4634c = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_reference, mod_consts.const_str_plain_reference, mod_consts.const_tuple_e5f08237512f8630600035811ff71541_tuple, NULL, 4, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_markdown_it$rules_block$reference$$$function__1_reference(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$rules_block$reference$$$function__2_getNextLine(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_markdown_it$rules_block$reference$$$function__1_reference(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *par_startLine = python_pars[1];
PyObject *par__endLine = python_pars[2];
PyObject *par_silent = python_pars[3];
PyObject *var_pos = NULL;
PyObject *var_maximum = NULL;
PyObject *var_nextLine = NULL;
PyObject *var_string = NULL;
PyObject *var_labelEnd = NULL;
PyObject *var_ch = NULL;
PyObject *var_lineContent = NULL;
PyObject *var_destRes = NULL;
PyObject *var_href = NULL;
PyObject *var_destEndPos = NULL;
PyObject *var_destEndLineNo = NULL;
PyObject *var_start = NULL;
PyObject *var_titleRes = NULL;
PyObject *var_title = NULL;
PyObject *var_label = NULL;
PyObject *var_token = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_assignment_expr_2__value = NULL;
PyObject *tmp_assignment_expr_3__value = NULL;
PyObject *tmp_assignment_expr_4__value = NULL;
PyObject *tmp_assignment_expr_5__value = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_block$reference$$$function__1_reference;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_block$reference$$$function__1_reference = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_block$reference$$$function__1_reference)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_block$reference$$$function__1_reference);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_block$reference$$$function__1_reference == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_block$reference$$$function__1_reference = MAKE_FUNCTION_FRAME(tstate, code_objects_7b1e1e0bca193471f41b8c1dd1f4634c, module_markdown_it$rules_block$reference, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_type_description == NULL);
frame_frame_markdown_it$rules_block$reference$$$function__1_reference = cache_frame_frame_markdown_it$rules_block$reference$$$function__1_reference;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_block$reference$$$function__1_reference);
assert(Py_REFCNT(frame_frame_markdown_it$rules_block$reference$$$function__1_reference) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_1 = module_var_accessor_markdown_it$rules_block$reference$LOGGER(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LOGGER);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_a2aa80b48a13a52095c2ab5870139d40;
CHECK_OBJECT(par_state);
tmp_args_element_value_2 = par_state;
CHECK_OBJECT(par_startLine);
tmp_args_element_value_3 = par_startLine;
CHECK_OBJECT(par__endLine);
tmp_args_element_value_4 = par__endLine;
CHECK_OBJECT(par_silent);
tmp_args_element_value_5 = par_silent;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 10;
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


exception_lineno = 10;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
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


exception_lineno = 14;
type_description_1 = "oooooooooooooooooooo";
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


exception_lineno = 14;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_expression_value_4 = par_state;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 14;
type_description_1 = "oooooooooooooooooooo";
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

exception_lineno = 14;
type_description_1 = "oooooooooooooooooooo";
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


exception_lineno = 14;
type_description_1 = "oooooooooooooooooooo";
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


exception_lineno = 15;
type_description_1 = "oooooooooooooooooooo";
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


exception_lineno = 15;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_maximum == NULL);
var_maximum = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(par_startLine);
tmp_add_expr_left_2 = par_startLine;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_nextLine == NULL);
var_nextLine = tmp_assign_source_3;
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
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 18;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_is_code_block, tmp_args_element_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 18;
type_description_1 = "oooooooooooooooooooo";
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
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_state);
tmp_expression_value_8 = par_state;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_src);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pos);
tmp_subscript_value_4 = var_pos;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_chr_91;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
CHECK_OBJECT(par_state);
tmp_expression_value_10 = par_state;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_src);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pos);
tmp_start_value_1 = var_pos;
CHECK_OBJECT(var_maximum);
tmp_add_expr_left_3 = var_maximum;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_9);

exception_lineno = 24;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_5 == NULL));
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_string == NULL);
var_string = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_string);
tmp_len_arg_1 = var_string;
tmp_assign_source_5 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_maximum;
    assert(old != NULL);
    var_maximum = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_None;
assert(var_labelEnd == NULL);
Py_INCREF(tmp_assign_source_6);
var_labelEnd = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = const_int_pos_1;
{
    PyObject *old = var_pos;
    assert(old != NULL);
    var_pos = tmp_assign_source_7;
    Py_INCREF(var_pos);
    Py_DECREF(old);
}

}
loop_start_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 31;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = var_pos;
if (var_maximum == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 31;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_2 = var_maximum;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oooooooooooooooooooo";
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
goto loop_end_1;
branch_no_3:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_1 = module_var_accessor_markdown_it$rules_block$reference$charCodeAt(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 32;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = var_string;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 32;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = var_pos;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 32;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ch;
    var_ch = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_3 = var_ch;
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_91;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_4 = var_ch;
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_93;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oooooooooooooooooooo";
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
PyObject *tmp_assign_source_9;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 36;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_9 = var_pos;
{
    PyObject *old = var_labelEnd;
    assert(old != NULL);
    var_labelEnd = tmp_assign_source_9;
    Py_INCREF(var_labelEnd);
    Py_DECREF(old);
}

}
goto loop_end_1;
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_5 = var_ch;
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_10;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooooooooooooooooooo";
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
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_2 = module_var_accessor_markdown_it$rules_block$reference$getNextLine(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getNextLine);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 39;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_9 = par_state;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 39;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_10 = var_nextLine;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 39;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_11 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_lineContent;
    var_lineContent = tmp_assign_source_11;
    Py_INCREF(var_lineContent);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_6 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_6);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 40;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_string;
CHECK_OBJECT(var_lineContent);
tmp_iadd_expr_right_1 = var_lineContent;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = tmp_iadd_expr_left_1;
var_string = tmp_assign_source_12;

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_string);
tmp_len_arg_2 = var_string;
tmp_assign_source_13 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_maximum;
    var_maximum = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 42;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_nextLine;
tmp_iadd_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = tmp_iadd_expr_left_2;
var_nextLine = tmp_assign_source_14;

}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_7 = var_ch;
tmp_cmp_expr_right_7 = mod_consts.const_int_pos_92;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooooooooooo";
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
PyObject *tmp_assign_source_15;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 44;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_3 = var_pos;
tmp_iadd_expr_right_3 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = tmp_iadd_expr_left_3;
var_pos = tmp_assign_source_15;

}
{
nuitka_bool tmp_condition_result_9;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_pos);
tmp_cmp_expr_left_8 = var_pos;
if (var_maximum == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 46;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_8 = var_maximum;
tmp_and_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_called_value_3 = module_var_accessor_markdown_it$rules_block$reference$charCodeAt(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 47;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = var_string;
CHECK_OBJECT(var_pos);
tmp_args_element_value_12 = var_pos;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 47;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_cmp_expr_left_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = mod_consts.const_int_pos_10;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_4 = module_var_accessor_markdown_it$rules_block$reference$getNextLine(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getNextLine);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_3;
}
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 48;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_13 = par_state;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 48;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_14 = var_nextLine;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 48;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_assignment_expr_2__value;
    tmp_assignment_expr_2__value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_assignment_expr_2__value);
tmp_assign_source_17 = tmp_assignment_expr_2__value;
{
    PyObject *old = var_lineContent;
    var_lineContent = tmp_assign_source_17;
    Py_INCREF(var_lineContent);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_2__value);
tmp_cmp_expr_left_10 = tmp_assignment_expr_2__value;
Py_INCREF(tmp_cmp_expr_left_10);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_assignment_expr_2__value);
CHECK_OBJECT(tmp_assignment_expr_2__value);
Py_DECREF(tmp_assignment_expr_2__value);
tmp_assignment_expr_2__value = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_2__value);
tmp_assignment_expr_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_cmp_expr_right_10 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_9 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_9 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 50;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_4 = var_string;
if (var_lineContent == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lineContent);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 50;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_right_4 = var_lineContent;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = tmp_iadd_expr_left_4;
var_string = tmp_assign_source_18;

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_len_arg_3;
CHECK_OBJECT(var_string);
tmp_len_arg_3 = var_string;
tmp_assign_source_19 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_maximum;
    var_maximum = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iadd_expr_left_5;
PyObject *tmp_iadd_expr_right_5;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 52;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_5 = var_nextLine;
tmp_iadd_expr_right_5 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_20 = tmp_iadd_expr_left_5;
var_nextLine = tmp_assign_source_20;

}
branch_no_9:;
branch_no_8:;
branch_end_6:;
branch_end_5:;
branch_end_4:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iadd_expr_left_6;
PyObject *tmp_iadd_expr_right_6;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 53;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_6 = var_pos;
tmp_iadd_expr_right_6 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_21 = tmp_iadd_expr_left_6;
var_pos = tmp_assign_source_21;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
nuitka_bool tmp_condition_result_10;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
CHECK_OBJECT(var_labelEnd);
tmp_cmp_expr_left_11 = var_labelEnd;
tmp_cmp_expr_right_11 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_labelEnd);
tmp_cmp_expr_left_12 = var_labelEnd;
tmp_cmp_expr_right_12 = const_int_0;
tmp_or_left_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_called_value_5 = module_var_accessor_markdown_it$rules_block$reference$charCodeAt(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 56;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_15 = var_string;
CHECK_OBJECT(var_labelEnd);
tmp_add_expr_left_4 = var_labelEnd;
tmp_add_expr_right_4 = const_int_pos_1;
tmp_args_element_value_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 56;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_cmp_expr_left_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_cmp_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_13 = mod_consts.const_int_pos_58;
tmp_or_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
CHECK_OBJECT(tmp_cmp_expr_left_13);
Py_DECREF(tmp_cmp_expr_left_13);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_10 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_10 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_10:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
CHECK_OBJECT(var_labelEnd);
tmp_add_expr_left_5 = var_labelEnd;
tmp_add_expr_right_5 = mod_consts.const_int_pos_2;
tmp_assign_source_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
loop_start_2:;
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 63;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_14 = var_pos;
if (var_maximum == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 63;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_14 = var_maximum;
tmp_operand_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooooooooooo";
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
goto loop_end_2;
branch_no_11:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
tmp_called_value_6 = module_var_accessor_markdown_it$rules_block$reference$charCodeAt(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 64;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_17 = var_string;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 64;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_18 = var_pos;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 64;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ch;
    var_ch = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_15 = var_ch;
tmp_cmp_expr_right_15 = mod_consts.const_int_pos_10;
tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooooooooooooooo";
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
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
tmp_called_value_7 = module_var_accessor_markdown_it$rules_block$reference$getNextLine(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getNextLine);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_4;
}
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 66;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_19 = par_state;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 66;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_20 = var_nextLine;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 66;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_assignment_expr_3__value;
    tmp_assignment_expr_3__value = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_assignment_expr_3__value);
tmp_assign_source_25 = tmp_assignment_expr_3__value;
{
    PyObject *old = var_lineContent;
    var_lineContent = tmp_assign_source_25;
    Py_INCREF(var_lineContent);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_3__value);
tmp_cmp_expr_left_16 = tmp_assignment_expr_3__value;
Py_INCREF(tmp_cmp_expr_left_16);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_assignment_expr_3__value);
CHECK_OBJECT(tmp_assignment_expr_3__value);
Py_DECREF(tmp_assignment_expr_3__value);
tmp_assignment_expr_3__value = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_3__value);
tmp_assignment_expr_3__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_cmp_expr_right_16 = Py_None;
tmp_condition_result_13 = (tmp_cmp_expr_left_16 != tmp_cmp_expr_right_16) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_16);
Py_DECREF(tmp_cmp_expr_left_16);
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iadd_expr_left_7;
PyObject *tmp_iadd_expr_right_7;
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_7 = var_string;
CHECK_OBJECT(var_lineContent);
tmp_iadd_expr_right_7 = var_lineContent;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_26 = tmp_iadd_expr_left_7;
var_string = tmp_assign_source_26;

}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_len_arg_4;
CHECK_OBJECT(var_string);
tmp_len_arg_4 = var_string;
tmp_assign_source_27 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_maximum;
    var_maximum = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_iadd_expr_left_8;
PyObject *tmp_iadd_expr_right_8;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 69;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_8 = var_nextLine;
tmp_iadd_expr_right_8 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_28 = tmp_iadd_expr_left_8;
var_nextLine = tmp_assign_source_28;

}
branch_no_13:;
goto branch_end_12;
branch_no_12:;
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_21;
tmp_called_value_8 = module_var_accessor_markdown_it$rules_block$reference$isSpace(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isSpace);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ch);
tmp_args_element_value_21 = var_ch;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 70;
tmp_operand_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_21);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooooooo";
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
goto loop_end_2;
branch_no_14:;
branch_end_12:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_iadd_expr_left_9;
PyObject *tmp_iadd_expr_right_9;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 74;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_9 = var_pos;
tmp_iadd_expr_right_9 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_29 = tmp_iadd_expr_left_9;
var_pos = tmp_assign_source_29;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_2;
loop_end_2:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 78;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = par_state;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_md);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_helpers);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_parseLinkDestination);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_string == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 78;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_22 = var_string;
if (var_pos == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 78;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_23 = var_pos;
if (var_maximum == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 78;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_24 = var_maximum;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 78;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_destRes == NULL);
var_destRes = tmp_assign_source_30;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_destRes);
tmp_expression_value_14 = var_destRes;
tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_ok);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_15:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_25;
PyObject *tmp_expression_value_17;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 82;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = par_state;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_md);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_normalizeLink);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_destRes);
tmp_expression_value_17 = var_destRes;
tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_str);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 82;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 82;
tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_href == NULL);
var_href = tmp_assign_source_31;
}
{
bool tmp_condition_result_16;
PyObject *tmp_operand_value_5;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_26;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_18 = par_state;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_md);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_href);
tmp_args_element_value_26 = var_href;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 83;
tmp_operand_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_validateLink, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooooooooooooooo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_16:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(var_destRes);
tmp_expression_value_19 = var_destRes;
tmp_assign_source_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_pos);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(var_pos);
tmp_assign_source_33 = var_pos;
assert(var_destEndPos == NULL);
Py_INCREF(tmp_assign_source_33);
var_destEndPos = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 90;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_34 = var_nextLine;
assert(var_destEndLineNo == NULL);
Py_INCREF(tmp_assign_source_34);
var_destEndLineNo = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
CHECK_OBJECT(var_pos);
tmp_assign_source_35 = var_pos;
assert(var_start == NULL);
Py_INCREF(tmp_assign_source_35);
var_start = tmp_assign_source_35;
}
loop_start_3:;
{
bool tmp_condition_result_17;
PyObject *tmp_operand_value_6;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 95;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_17 = var_pos;
if (var_maximum == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 95;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_17 = var_maximum;
tmp_operand_value_6 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_operand_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
CHECK_OBJECT(tmp_operand_value_6);
Py_DECREF(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooooooooooooooo";
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
goto loop_end_3;
branch_no_17:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
tmp_called_value_11 = module_var_accessor_markdown_it$rules_block$reference$charCodeAt(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_27 = var_string;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_28 = var_pos;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 96;
{
    PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ch;
    var_ch = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_18;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_18 = var_ch;
tmp_cmp_expr_right_18 = mod_consts.const_int_pos_10;
tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
// Tried code:
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
tmp_called_value_12 = module_var_accessor_markdown_it$rules_block$reference$getNextLine(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getNextLine);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_5;
}
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 98;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_29 = par_state;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 98;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_30 = var_nextLine;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 98;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_assignment_expr_4__value;
    tmp_assignment_expr_4__value = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_assignment_expr_4__value);
tmp_assign_source_38 = tmp_assignment_expr_4__value;
{
    PyObject *old = var_lineContent;
    var_lineContent = tmp_assign_source_38;
    Py_INCREF(var_lineContent);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_4__value);
tmp_cmp_expr_left_19 = tmp_assignment_expr_4__value;
Py_INCREF(tmp_cmp_expr_left_19);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_assignment_expr_4__value);
CHECK_OBJECT(tmp_assignment_expr_4__value);
Py_DECREF(tmp_assignment_expr_4__value);
tmp_assignment_expr_4__value = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_4__value);
tmp_assignment_expr_4__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
tmp_cmp_expr_right_19 = Py_None;
tmp_condition_result_19 = (tmp_cmp_expr_left_19 != tmp_cmp_expr_right_19) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_19);
Py_DECREF(tmp_cmp_expr_left_19);
if (tmp_condition_result_19 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_iadd_expr_left_10;
PyObject *tmp_iadd_expr_right_10;
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_10 = var_string;
CHECK_OBJECT(var_lineContent);
tmp_iadd_expr_right_10 = var_lineContent;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_39 = tmp_iadd_expr_left_10;
var_string = tmp_assign_source_39;

}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_len_arg_5;
CHECK_OBJECT(var_string);
tmp_len_arg_5 = var_string;
tmp_assign_source_40 = BUILTIN_LEN(tstate, tmp_len_arg_5);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_maximum;
    var_maximum = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_iadd_expr_left_11;
PyObject *tmp_iadd_expr_right_11;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 101;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_11 = var_nextLine;
tmp_iadd_expr_right_11 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_11, tmp_iadd_expr_right_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_41 = tmp_iadd_expr_left_11;
var_nextLine = tmp_assign_source_41;

}
branch_no_19:;
goto branch_end_18;
branch_no_18:;
{
bool tmp_condition_result_20;
PyObject *tmp_operand_value_7;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_31;
tmp_called_value_13 = module_var_accessor_markdown_it$rules_block$reference$isSpace(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isSpace);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ch);
tmp_args_element_value_31 = var_ch;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 102;
tmp_operand_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_31);
if (tmp_operand_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
CHECK_OBJECT(tmp_operand_value_7);
Py_DECREF(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooooooo";
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
goto loop_end_3;
branch_no_20:;
branch_end_18:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_iadd_expr_left_12;
PyObject *tmp_iadd_expr_right_12;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 106;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_12 = var_pos;
tmp_iadd_expr_right_12 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_12, tmp_iadd_expr_right_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_42 = tmp_iadd_expr_left_12;
var_pos = tmp_assign_source_42;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_3;
loop_end_3:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
PyObject *tmp_args_element_value_35;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 110;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = par_state;
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_md);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_helpers);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_parseLinkTitle);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_string == NULL) {
Py_DECREF(tmp_called_value_14);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 110;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_32 = var_string;
if (var_pos == NULL) {
Py_DECREF(tmp_called_value_14);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 110;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_33 = var_pos;
if (var_maximum == NULL) {
Py_DECREF(tmp_called_value_14);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 110;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_34 = var_maximum;
tmp_args_element_value_35 = Py_None;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 110;
{
    PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
    tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_titleRes == NULL);
var_titleRes = tmp_assign_source_43;
}
loop_start_4:;
{
bool tmp_condition_result_21;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_23;
if (var_titleRes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_titleRes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 111;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_23 = var_titleRes;
tmp_operand_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_can_continue);
if (tmp_operand_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
CHECK_OBJECT(tmp_operand_value_8);
Py_DECREF(tmp_operand_value_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_21 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
goto loop_end_4;
branch_no_21:;
{
bool tmp_condition_result_22;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
// Tried code:
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_36;
PyObject *tmp_args_element_value_37;
tmp_called_value_15 = module_var_accessor_markdown_it$rules_block$reference$getNextLine(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getNextLine);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 112;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_36 = par_state;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 112;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_37 = var_nextLine;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 112;
{
    PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
    tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_assignment_expr_5__value;
    tmp_assignment_expr_5__value = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
CHECK_OBJECT(tmp_assignment_expr_5__value);
tmp_assign_source_45 = tmp_assignment_expr_5__value;
{
    PyObject *old = var_lineContent;
    var_lineContent = tmp_assign_source_45;
    Py_INCREF(var_lineContent);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_5__value);
tmp_cmp_expr_left_20 = tmp_assignment_expr_5__value;
Py_INCREF(tmp_cmp_expr_left_20);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_assignment_expr_5__value);
CHECK_OBJECT(tmp_assignment_expr_5__value);
Py_DECREF(tmp_assignment_expr_5__value);
tmp_assignment_expr_5__value = NULL;
goto outline_result_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_5__value);
tmp_assignment_expr_5__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
tmp_cmp_expr_right_20 = Py_None;
tmp_condition_result_22 = (tmp_cmp_expr_left_20 == tmp_cmp_expr_right_20) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_20);
Py_DECREF(tmp_cmp_expr_left_20);
if (tmp_condition_result_22 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
goto loop_end_4;
branch_no_22:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_iadd_expr_left_13;
PyObject *tmp_iadd_expr_right_13;
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 114;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_13 = var_string;
CHECK_OBJECT(var_lineContent);
tmp_iadd_expr_right_13 = var_lineContent;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_13, tmp_iadd_expr_right_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_46 = tmp_iadd_expr_left_13;
var_string = tmp_assign_source_46;

}
{
PyObject *tmp_assign_source_47;
if (var_maximum == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 115;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_47 = var_maximum;
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_47;
    Py_INCREF(var_pos);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_len_arg_6;
CHECK_OBJECT(var_string);
tmp_len_arg_6 = var_string;
tmp_assign_source_48 = BUILTIN_LEN(tstate, tmp_len_arg_6);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_maximum;
    var_maximum = tmp_assign_source_48;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_iadd_expr_left_14;
PyObject *tmp_iadd_expr_right_14;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 117;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_14 = var_nextLine;
tmp_iadd_expr_right_14 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_14, tmp_iadd_expr_right_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_49 = tmp_iadd_expr_left_14;
var_nextLine = tmp_assign_source_49;

}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_38;
PyObject *tmp_args_element_value_39;
PyObject *tmp_args_element_value_40;
PyObject *tmp_args_element_value_41;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_26 = par_state;
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_md);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_helpers);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_parseLinkTitle);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_string);
tmp_args_element_value_38 = var_string;
CHECK_OBJECT(var_pos);
tmp_args_element_value_39 = var_pos;
CHECK_OBJECT(var_maximum);
tmp_args_element_value_40 = var_maximum;
if (var_titleRes == NULL) {
Py_DECREF(tmp_called_value_16);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_titleRes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_41 = var_titleRes;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 118;
{
    PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41};
    tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_titleRes;
    var_titleRes = tmp_assign_source_50;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_4;
loop_end_4:;
{
nuitka_bool tmp_condition_result_23;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
PyObject *tmp_expression_value_27;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 120;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_21 = var_pos;
if (var_maximum == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 120;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_21 = var_maximum;
tmp_and_left_value_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_start);
tmp_cmp_expr_left_22 = var_start;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 120;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_22 = var_pos;
tmp_and_left_value_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
if (var_titleRes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_titleRes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 120;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_27 = var_titleRes;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_ok);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 120;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_right_value_3 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_and_right_value_3 = tmp_and_left_value_4;
and_end_4:;
tmp_condition_result_23 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_23 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_expression_value_28;
if (var_titleRes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_titleRes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 121;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_28 = var_titleRes;
tmp_assign_source_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_str);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_title == NULL);
var_title = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_expression_value_29;
if (var_titleRes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_titleRes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 122;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_29 = var_titleRes;
tmp_assign_source_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_pos);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
goto branch_end_23;
branch_no_23:;
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = const_str_empty;
assert(var_title == NULL);
Py_INCREF(tmp_assign_source_53);
var_title = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
CHECK_OBJECT(var_destEndPos);
tmp_assign_source_54 = var_destEndPos;
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_54;
    Py_INCREF(var_pos);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_55;
CHECK_OBJECT(var_destEndLineNo);
tmp_assign_source_55 = var_destEndLineNo;
{
    PyObject *old = var_nextLine;
    var_nextLine = tmp_assign_source_55;
    Py_INCREF(var_nextLine);
    Py_XDECREF(old);
}

}
branch_end_23:;
loop_start_5:;
{
bool tmp_condition_result_24;
PyObject *tmp_operand_value_9;
PyObject *tmp_cmp_expr_left_23;
PyObject *tmp_cmp_expr_right_23;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 129;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_23 = var_pos;
if (var_maximum == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 129;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_23 = var_maximum;
tmp_operand_value_9 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
if (tmp_operand_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
CHECK_OBJECT(tmp_operand_value_9);
Py_DECREF(tmp_operand_value_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_24 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_24 != false) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
goto loop_end_5;
branch_no_24:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_42;
PyObject *tmp_args_element_value_43;
tmp_called_value_17 = module_var_accessor_markdown_it$rules_block$reference$charCodeAt(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 130;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_42 = var_string;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 130;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_43 = var_pos;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 130;
{
    PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43};
    tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ch;
    var_ch = tmp_assign_source_56;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_25;
PyObject *tmp_operand_value_10;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_44;
tmp_called_value_18 = module_var_accessor_markdown_it$rules_block$reference$isSpace(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isSpace);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ch);
tmp_args_element_value_44 = var_ch;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 131;
tmp_operand_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_44);
if (tmp_operand_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
CHECK_OBJECT(tmp_operand_value_10);
Py_DECREF(tmp_operand_value_10);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_25 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_25 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
goto loop_end_5;
branch_no_25:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_iadd_expr_left_15;
PyObject *tmp_iadd_expr_right_15;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 133;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_15 = var_pos;
tmp_iadd_expr_right_15 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_15, tmp_iadd_expr_right_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_57 = tmp_iadd_expr_left_15;
var_pos = tmp_assign_source_57;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_5;
loop_end_5:;
{
nuitka_bool tmp_condition_result_26;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_24;
PyObject *tmp_cmp_expr_right_24;
int tmp_and_left_truth_6;
nuitka_bool tmp_and_left_value_6;
nuitka_bool tmp_and_right_value_6;
PyObject *tmp_cmp_expr_left_25;
PyObject *tmp_cmp_expr_right_25;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_45;
PyObject *tmp_args_element_value_46;
int tmp_truth_name_3;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_24 = var_pos;
if (var_maximum == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_24 = var_maximum;
tmp_and_left_value_5 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
if (tmp_and_left_value_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
tmp_called_value_19 = module_var_accessor_markdown_it$rules_block$reference$charCodeAt(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_45 = var_string;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_46 = var_pos;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 135;
{
    PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
    tmp_cmp_expr_left_25 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

if (tmp_cmp_expr_left_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_25 = mod_consts.const_int_pos_10;
tmp_and_left_value_6 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
CHECK_OBJECT(tmp_cmp_expr_left_25);
Py_DECREF(tmp_cmp_expr_left_25);
if (tmp_and_left_value_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(var_title);
tmp_truth_name_3 = CHECK_IF_TRUE(var_title);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_right_value_5 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_and_right_value_5 = tmp_and_left_value_6;
and_end_6:;
tmp_condition_result_26 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_26 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = const_str_empty;
{
    PyObject *old = var_title;
    assert(old != NULL);
    var_title = tmp_assign_source_58;
    Py_INCREF(var_title);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_59;
CHECK_OBJECT(var_destEndPos);
tmp_assign_source_59 = var_destEndPos;
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_59;
    Py_INCREF(var_pos);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_60;
CHECK_OBJECT(var_destEndLineNo);
tmp_assign_source_60 = var_destEndLineNo;
{
    PyObject *old = var_nextLine;
    var_nextLine = tmp_assign_source_60;
    Py_INCREF(var_nextLine);
    Py_XDECREF(old);
}

}
loop_start_6:;
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_11;
PyObject *tmp_cmp_expr_left_26;
PyObject *tmp_cmp_expr_right_26;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_26 = var_pos;
if (var_maximum == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_26 = var_maximum;
tmp_operand_value_11 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
if (tmp_operand_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
CHECK_OBJECT(tmp_operand_value_11);
Py_DECREF(tmp_operand_value_11);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_27 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
goto loop_end_6;
branch_no_27:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_47;
PyObject *tmp_args_element_value_48;
tmp_called_value_20 = module_var_accessor_markdown_it$rules_block$reference$charCodeAt(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_47 = var_string;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_48 = var_pos;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 142;
{
    PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
    tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
}

if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ch;
    var_ch = tmp_assign_source_61;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_28;
PyObject *tmp_operand_value_12;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_49;
tmp_called_value_21 = module_var_accessor_markdown_it$rules_block$reference$isSpace(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isSpace);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ch);
tmp_args_element_value_49 = var_ch;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 143;
tmp_operand_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_49);
if (tmp_operand_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
CHECK_OBJECT(tmp_operand_value_12);
Py_DECREF(tmp_operand_value_12);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_28 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_28 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
goto loop_end_6;
branch_no_28:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_iadd_expr_left_16;
PyObject *tmp_iadd_expr_right_16;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 145;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_16 = var_pos;
tmp_iadd_expr_right_16 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_16, tmp_iadd_expr_right_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_62 = tmp_iadd_expr_left_16;
var_pos = tmp_assign_source_62;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_6;
loop_end_6:;
branch_no_26:;
{
nuitka_bool tmp_condition_result_29;
int tmp_and_left_truth_7;
nuitka_bool tmp_and_left_value_7;
nuitka_bool tmp_and_right_value_7;
PyObject *tmp_cmp_expr_left_27;
PyObject *tmp_cmp_expr_right_27;
PyObject *tmp_cmp_expr_left_28;
PyObject *tmp_cmp_expr_right_28;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_50;
PyObject *tmp_args_element_value_51;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 147;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_27 = var_pos;
if (var_maximum == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maximum);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 147;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_27 = var_maximum;
tmp_and_left_value_7 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
if (tmp_and_left_value_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
tmp_called_value_22 = module_var_accessor_markdown_it$rules_block$reference$charCodeAt(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 147;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_50 = var_string;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 147;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_51 = var_pos;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 147;
{
    PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51};
    tmp_cmp_expr_left_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
}

if (tmp_cmp_expr_left_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_28 = mod_consts.const_int_pos_10;
tmp_and_right_value_7 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
CHECK_OBJECT(tmp_cmp_expr_left_28);
Py_DECREF(tmp_cmp_expr_left_28);
if (tmp_and_right_value_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_29 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
tmp_condition_result_29 = tmp_and_left_value_7;
and_end_7:;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_29:;
{
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_52;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_6;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_2;
tmp_called_value_23 = module_var_accessor_markdown_it$rules_block$reference$normalizeReference(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_normalizeReference);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 151;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_30 = var_string;
tmp_start_value_2 = const_int_pos_1;
CHECK_OBJECT(var_labelEnd);
tmp_stop_value_2 = var_labelEnd;
tmp_subscript_value_6 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
assert(!(tmp_subscript_value_6 == NULL));
tmp_args_element_value_52 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_args_element_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 151;
tmp_assign_source_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_52);
CHECK_OBJECT(tmp_args_element_value_52);
Py_DECREF(tmp_args_element_value_52);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_label == NULL);
var_label = tmp_assign_source_63;
}
{
bool tmp_condition_result_30;
PyObject *tmp_operand_value_13;
CHECK_OBJECT(var_label);
tmp_operand_value_13 = var_label;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_30 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_30:;
{
nuitka_bool tmp_condition_result_31;
int tmp_truth_name_4;
CHECK_OBJECT(par_silent);
tmp_truth_name_4 = CHECK_IF_TRUE(par_silent);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_31 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
    goto branch_yes_31;
} else {
    goto branch_no_31;
}
}
branch_yes_31:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_31:;
{
bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_29;
PyObject *tmp_cmp_expr_right_29;
PyObject *tmp_expression_value_31;
tmp_cmp_expr_left_29 = mod_consts.const_str_plain_references;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_31 = par_state;
tmp_cmp_expr_right_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_env);
if (tmp_cmp_expr_right_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_29, tmp_cmp_expr_left_29);
CHECK_OBJECT(tmp_cmp_expr_right_29);
Py_DECREF(tmp_cmp_expr_right_29);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_32 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_32 != false) {
    goto branch_yes_32;
} else {
    goto branch_no_32;
}
}
branch_yes_32:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_32;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = MAKE_DICT_EMPTY(tstate);
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 161;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_32 = par_state;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_env);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 161;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_references;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_32:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 163;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_1 = var_nextLine;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 163;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_line, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_33;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_call_result_3;
int tmp_truth_name_5;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 166;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_35 = par_state;
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_md);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_options);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 166;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_24, mod_consts.const_tuple_str_plain_inline_definitions_false_tuple);

CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 166;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_33 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_instance_4;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = par_state;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 167;
tmp_assign_source_64 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_definition_str_empty_int_0_tuple, 0)
);

if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_64;
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_assattr_target_2;
tmp_dict_key_1 = mod_consts.const_str_plain_id;
CHECK_OBJECT(var_label);
tmp_dict_value_1 = var_label;
tmp_assattr_value_2 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_7;
PyObject *tmp_start_value_3;
PyObject *tmp_stop_value_3;
tmp_res = PyDict_SetItem(tmp_assattr_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_title;
CHECK_OBJECT(var_title);
tmp_dict_value_1 = var_title;
tmp_res = PyDict_SetItem(tmp_assattr_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_url;
CHECK_OBJECT(var_href);
tmp_dict_value_1 = var_href;
tmp_res = PyDict_SetItem(tmp_assattr_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_label;
if (var_string == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_string);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 172;
type_description_1 = "oooooooooooooooooooo";
    goto dict_build_exception_1;
}

tmp_expression_value_36 = var_string;
tmp_start_value_3 = const_int_pos_1;
CHECK_OBJECT(var_labelEnd);
tmp_stop_value_3 = var_labelEnd;
tmp_subscript_value_7 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_3);
assert(!(tmp_subscript_value_7 == NULL));
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assattr_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assattr_value_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(var_token);
tmp_assattr_target_2 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_meta, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_list_element_1;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_startLine);
tmp_list_element_1 = par_startLine;
tmp_assattr_value_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_37;
PyList_SET_ITEM0(tmp_assattr_value_3, 0, tmp_list_element_1);
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 174;
type_description_1 = "oooooooooooooooooooo";
    goto list_build_exception_1;
}

tmp_expression_value_37 = par_state;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_line);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooooooooooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assattr_value_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assattr_value_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
CHECK_OBJECT(var_token);
tmp_assattr_target_3 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_map, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_33:;
{
bool tmp_condition_result_34;
PyObject *tmp_cmp_expr_left_30;
PyObject *tmp_cmp_expr_right_30;
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(var_label);
tmp_cmp_expr_left_30 = var_label;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 176;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_39 = par_state;
tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_env);
if (tmp_expression_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_8 = mod_consts.const_str_plain_references;
tmp_cmp_expr_right_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_cmp_expr_right_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_30, tmp_cmp_expr_left_30);
CHECK_OBJECT(tmp_cmp_expr_right_30);
Py_DECREF(tmp_cmp_expr_right_30);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_34 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_34 != false) {
    goto branch_yes_34;
} else {
    goto branch_no_34;
}
}
branch_yes_34:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_41;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_9;
PyObject *tmp_ass_subscript_2;
tmp_dict_key_2 = mod_consts.const_str_plain_title;
CHECK_OBJECT(var_title);
tmp_dict_value_2 = var_title;
tmp_ass_subvalue_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_list_element_2;
tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_href;
CHECK_OBJECT(var_href);
tmp_dict_value_2 = var_href;
tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_map;
CHECK_OBJECT(par_startLine);
tmp_list_element_2 = par_startLine;
tmp_dict_value_2 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_40;
PyList_SET_ITEM0(tmp_dict_value_2, 0, tmp_list_element_2);
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 180;
type_description_1 = "oooooooooooooooooooo";
    goto list_build_exception_2;
}

tmp_expression_value_40 = par_state;
tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_line);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooooooooooooooo";
    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_dict_value_2, 1, tmp_list_element_2);
}
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_dict_value_2);
goto dict_build_exception_2;
// Finished with no exception for list_build:
list_build_no_exception_2:;
tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_ass_subvalue_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 177;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_42 = par_state;
tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_env);
if (tmp_expression_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 177;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_9 = mod_consts.const_str_plain_references;
tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 177;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_label);
tmp_ass_subscript_2 = var_label;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_34;
branch_no_34:;
{
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_43;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_53;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 183;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_45 = par_state;
tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_env);
if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_setdefault);
CHECK_OBJECT(tmp_expression_value_44);
Py_DECREF(tmp_expression_value_44);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_duplicate_refs;
tmp_call_arg_element_2 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 183;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_expression_value_43 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
}

CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_expression_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_3 = mod_consts.const_str_plain_title;
CHECK_OBJECT(var_title);
tmp_dict_value_3 = var_title;
tmp_args_element_value_53 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_list_element_3;
tmp_res = PyDict_SetItem(tmp_args_element_value_53, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_href;
CHECK_OBJECT(var_href);
tmp_dict_value_3 = var_href;
tmp_res = PyDict_SetItem(tmp_args_element_value_53, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_label;
CHECK_OBJECT(var_label);
tmp_dict_value_3 = var_label;
tmp_res = PyDict_SetItem(tmp_args_element_value_53, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_map;
CHECK_OBJECT(par_startLine);
tmp_list_element_3 = par_startLine;
tmp_dict_value_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_46;
PyList_SET_ITEM0(tmp_dict_value_3, 0, tmp_list_element_3);
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 188;
type_description_1 = "oooooooooooooooooooo";
    goto list_build_exception_3;
}

tmp_expression_value_46 = par_state;
tmp_list_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_line);
if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooooooooooooooo";
    goto list_build_exception_3;
}
PyList_SET_ITEM(tmp_dict_value_3, 1, tmp_list_element_3);
}
goto list_build_no_exception_3;
// Exception handling pass through code for list_build:
list_build_exception_3:;
Py_DECREF(tmp_dict_value_3);
goto dict_build_exception_3;
// Finished with no exception for list_build:
list_build_no_exception_3:;
tmp_res = PyDict_SetItem(tmp_args_element_value_53, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_called_value_25);
Py_DECREF(tmp_args_element_value_53);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame.f_lineno = 183;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_53);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_53);
Py_DECREF(tmp_args_element_value_53);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_34:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$reference$$$function__1_reference, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_block$reference$$$function__1_reference->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$reference$$$function__1_reference, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_block$reference$$$function__1_reference,
    type_description_1,
    par_state,
    par_startLine,
    par__endLine,
    par_silent,
    var_pos,
    var_maximum,
    var_nextLine,
    var_string,
    var_labelEnd,
    var_ch,
    var_lineContent,
    var_destRes,
    var_href,
    var_destEndPos,
    var_destEndLineNo,
    var_start,
    var_titleRes,
    var_title,
    var_label,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_block$reference$$$function__1_reference == cache_frame_frame_markdown_it$rules_block$reference$$$function__1_reference) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_block$reference$$$function__1_reference);
    cache_frame_frame_markdown_it$rules_block$reference$$$function__1_reference = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_block$reference$$$function__1_reference);

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
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_nextLine);
var_nextLine = NULL;
Py_XDECREF(var_string);
var_string = NULL;
Py_XDECREF(var_labelEnd);
var_labelEnd = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_lineContent);
var_lineContent = NULL;
Py_XDECREF(var_destRes);
var_destRes = NULL;
Py_XDECREF(var_href);
var_href = NULL;
Py_XDECREF(var_destEndPos);
var_destEndPos = NULL;
Py_XDECREF(var_destEndLineNo);
var_destEndLineNo = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_titleRes);
var_titleRes = NULL;
Py_XDECREF(var_title);
var_title = NULL;
Py_XDECREF(var_label);
var_label = NULL;
Py_XDECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_nextLine);
var_nextLine = NULL;
Py_XDECREF(var_string);
var_string = NULL;
Py_XDECREF(var_labelEnd);
var_labelEnd = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_lineContent);
var_lineContent = NULL;
Py_XDECREF(var_destRes);
var_destRes = NULL;
Py_XDECREF(var_href);
var_href = NULL;
Py_XDECREF(var_destEndPos);
var_destEndPos = NULL;
Py_XDECREF(var_destEndLineNo);
var_destEndLineNo = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_titleRes);
var_titleRes = NULL;
Py_XDECREF(var_title);
var_title = NULL;
Py_XDECREF(var_label);
var_label = NULL;
Py_XDECREF(var_token);
var_token = NULL;
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
CHECK_OBJECT(par_startLine);
Py_DECREF(par_startLine);
CHECK_OBJECT(par__endLine);
Py_DECREF(par__endLine);
CHECK_OBJECT(par_silent);
Py_DECREF(par_silent);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_startLine);
Py_DECREF(par_startLine);
CHECK_OBJECT(par__endLine);
Py_DECREF(par__endLine);
CHECK_OBJECT(par_silent);
Py_DECREF(par_silent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$rules_block$reference$$$function__2_getNextLine(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *par_nextLine = python_pars[1];
PyObject *var_endLine = NULL;
nuitka_bool var_isContinuation = NUITKA_BOOL_UNASSIGNED;
PyObject *var_terminatorRules = NULL;
PyObject *var_oldParentType = NULL;
nuitka_bool var_terminate = NUITKA_BOOL_UNASSIGNED;
PyObject *var_terminatorRule = NULL;
PyObject *var_pos = NULL;
PyObject *var_maximum = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine = MAKE_FUNCTION_FRAME(tstate, code_objects_8a8474949c4a90c1af5c80f9c39d61c6, module_markdown_it$rules_block$reference, sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine->m_type_description == NULL);
frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine = cache_frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine);
assert(Py_REFCNT(frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_state);
tmp_expression_value_1 = par_state;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_lineMax);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
assert(var_endLine == NULL);
var_endLine = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_nextLine);
tmp_cmp_expr_left_1 = par_nextLine;
CHECK_OBJECT(var_endLine);
tmp_cmp_expr_right_1 = var_endLine;
tmp_or_left_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_state);
tmp_called_instance_1 = par_state;
CHECK_OBJECT(par_nextLine);
tmp_args_element_value_1 = par_nextLine;
frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine->m_frame.f_lineno = 198;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isEmpty, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 198;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
{
nuitka_bool tmp_assign_source_2;
tmp_assign_source_2 = NUITKA_BOOL_FALSE;
var_isContinuation = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_state);
tmp_called_instance_2 = par_state;
CHECK_OBJECT(par_nextLine);
tmp_args_element_value_2 = par_nextLine;
frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine->m_frame.f_lineno = 206;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_is_code_block, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 206;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_3;
tmp_assign_source_3 = NUITKA_BOOL_TRUE;
var_isContinuation = tmp_assign_source_3;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_state);
tmp_expression_value_3 = par_state;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_nextLine);
tmp_subscript_value_1 = par_nextLine;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooboobooo";
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
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
var_isContinuation = tmp_assign_source_4;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
assert(var_isContinuation != NUITKA_BOOL_UNASSIGNED);
tmp_operand_value_1 = (var_isContinuation == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
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
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_state);
tmp_expression_value_6 = par_state;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_md);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_block);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ruler);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine->m_frame.f_lineno = 214;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_getRules,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_reference_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
assert(var_terminatorRules == NULL);
var_terminatorRules = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_state);
tmp_expression_value_7 = par_state;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_parentType);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
assert(var_oldParentType == NULL);
var_oldParentType = tmp_assign_source_6;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = mod_consts.const_str_plain_reference;
CHECK_OBJECT(par_state);
tmp_assattr_target_1 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_parentType, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
var_terminate = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_terminatorRules);
tmp_iter_arg_1 = var_terminatorRules;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooboobooo";
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
type_description_1 = "oooboobooo";
exception_lineno = 220;
        goto try_except_handler_2;
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
    PyObject *old = var_terminatorRule;
    var_terminatorRule = tmp_assign_source_10;
    Py_INCREF(var_terminatorRule);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
int tmp_truth_name_3;
CHECK_OBJECT(var_terminatorRule);
tmp_called_value_1 = var_terminatorRule;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 221;
type_description_1 = "oooboobooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = par_state;
if (par_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 221;
type_description_1 = "oooboobooo";
    goto try_except_handler_2;
}

tmp_args_element_value_4 = par_nextLine;
if (var_endLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_endLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 221;
type_description_1 = "oooboobooo";
    goto try_except_handler_2;
}

tmp_args_element_value_5 = var_endLine;
tmp_args_element_value_6 = Py_True;
frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine->m_frame.f_lineno = 221;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooboobooo";
    goto try_except_handler_2;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 221;
type_description_1 = "oooboobooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_TRUE;
var_terminate = tmp_assign_source_11;
}
goto loop_end_1;
branch_no_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooboobooo";
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
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_oldParentType);
tmp_assattr_value_2 = var_oldParentType;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_2 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_parentType, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_6;
assert(var_terminate != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_6 = var_terminate == NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_6:;
branch_no_4:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_3;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_state;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
if (par_nextLine == NULL) {
Py_DECREF(tmp_expression_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_2 = par_nextLine;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_add_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = par_state;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 231;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
if (par_nextLine == NULL) {
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_expression_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_3 = par_nextLine;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 231;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
assert(var_pos == NULL);
var_pos = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_4;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = par_state;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_eMarks);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
if (par_nextLine == NULL) {
Py_DECREF(tmp_expression_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_4 = par_nextLine;
tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
assert(var_maximum == NULL);
var_maximum = tmp_assign_source_13;
}
{
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 235;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = par_state;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_src);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pos);
tmp_start_value_1 = var_pos;
CHECK_OBJECT(var_maximum);
tmp_add_expr_left_2 = var_maximum;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_14);

exception_lineno = 235;
type_description_1 = "oooboobooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_5 == NULL));
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooboobooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine,
    type_description_1,
    par_state,
    par_nextLine,
    var_endLine,
    (int)var_isContinuation,
    var_terminatorRules,
    var_oldParentType,
    (int)var_terminate,
    var_terminatorRule,
    var_pos,
    var_maximum
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine == cache_frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine);
    cache_frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_block$reference$$$function__2_getNextLine);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_endLine);
var_endLine = NULL;
var_isContinuation = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_terminatorRules);
var_terminatorRules = NULL;
Py_XDECREF(var_oldParentType);
var_oldParentType = NULL;
var_terminate = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_terminatorRule);
var_terminatorRule = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_endLine);
var_endLine = NULL;
var_isContinuation = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_terminatorRules);
var_terminatorRules = NULL;
Py_XDECREF(var_oldParentType);
var_oldParentType = NULL;
var_terminate = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_terminatorRule);
var_terminatorRule = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
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
CHECK_OBJECT(par_nextLine);
Py_DECREF(par_nextLine);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_nextLine);
Py_DECREF(par_nextLine);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_block$reference$$$function__1_reference(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_block$reference$$$function__1_reference,
        mod_consts.const_str_plain_reference,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7b1e1e0bca193471f41b8c1dd1f4634c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_block$reference,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_block$reference$$$function__2_getNextLine(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_block$reference$$$function__2_getNextLine,
        mod_consts.const_str_plain_getNextLine,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8a8474949c4a90c1af5c80f9c39d61c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_block$reference,
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

static function_impl_code const function_table_markdown_it$rules_block$reference[] = {
impl_markdown_it$rules_block$reference$$$function__1_reference,
impl_markdown_it$rules_block$reference$$$function__2_getNextLine,
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

    return Nuitka_Function_GetFunctionState(function, function_table_markdown_it$rules_block$reference);
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
        module_markdown_it$rules_block$reference,
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
        function_table_markdown_it$rules_block$reference,
        sizeof(function_table_markdown_it$rules_block$reference) / sizeof(function_impl_code)
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
static char const *module_full_name = "markdown_it.rules_block.reference";
#endif

// Internal entry point for module code.
PyObject *module_code_markdown_it$rules_block$reference(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("markdown_it$rules_block$reference");

    // Store the module for future use.
    module_markdown_it$rules_block$reference = module;

    moduledict_markdown_it$rules_block$reference = MODULE_DICT(module_markdown_it$rules_block$reference);

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
        PRINT_STRING("markdown_it$rules_block$reference: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("markdown_it$rules_block$reference: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("markdown_it$rules_block$reference: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_block.reference" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmarkdown_it$rules_block$reference\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_markdown_it$rules_block$reference,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_block$reference,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_block$reference,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_block$reference,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_block$reference,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_markdown_it$rules_block$reference);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_markdown_it$rules_block$reference);
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

        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_block$reference;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_markdown_it$rules_block$reference = MAKE_MODULE_FRAME(code_objects_a76f351721f9a597a696f9c081841ab2, module_markdown_it$rules_block$reference);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_block$reference);
assert(Py_REFCNT(frame_frame_markdown_it$rules_block$reference) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_markdown_it$rules_block$reference$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_markdown_it$rules_block$reference$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_markdown_it$rules_block$reference;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_markdown_it$rules_block$reference->m_frame.f_lineno = 1;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499;
tmp_globals_arg_value_2 = (PyObject *)moduledict_markdown_it$rules_block$reference;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_ceb512a649306499b063064d3c3afc93_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_markdown_it$rules_block$reference->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_markdown_it$rules_block$reference,
        mod_consts.const_str_plain_charCodeAt,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_charCodeAt);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_charCodeAt, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_markdown_it$rules_block$reference,
        mod_consts.const_str_plain_isSpace,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_isSpace);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_isSpace, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_markdown_it$rules_block$reference,
        mod_consts.const_str_plain_normalizeReference,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_normalizeReference);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_normalizeReference, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_state_block;
tmp_globals_arg_value_3 = (PyObject *)moduledict_markdown_it$rules_block$reference;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_StateBlock_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_markdown_it$rules_block$reference->m_frame.f_lineno = 4;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_markdown_it$rules_block$reference,
        mod_consts.const_str_plain_StateBlock,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_StateBlock);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_StateBlock, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_markdown_it$rules_block$reference$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 6;

    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_block$reference->m_frame.f_lineno = 6;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_6b7c847ebf111e3c117b406078b61b65_tuple, 0)
);

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_state;
tmp_dict_value_1 = module_var_accessor_markdown_it$rules_block$reference$StateBlock(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StateBlock);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 9;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 5 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_startLine;
tmp_dict_value_1 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain__endLine;
tmp_dict_value_1 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_silent;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_assign_source_11 = MAKE_FUNCTION_markdown_it$rules_block$reference$$$function__1_reference(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_reference, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_state;
tmp_dict_value_2 = module_var_accessor_markdown_it$rules_block$reference$StateBlock(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StateBlock);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_nextLine;
tmp_dict_value_2 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = mod_consts.const_uniontype_tuple_anon_NoneType_type_str_tuple;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));

tmp_assign_source_12 = MAKE_FUNCTION_markdown_it$rules_block$reference$$$function__2_getNextLine(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)mod_consts.const_str_plain_getNextLine, tmp_assign_source_12);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$reference, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_block$reference->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$reference, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_markdown_it$rules_block$reference);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("markdown_it$rules_block$reference", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_block.reference" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_markdown_it$rules_block$reference);
    return module_markdown_it$rules_block$reference;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$reference, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("markdown_it$rules_block$reference", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'markdown_it$rules_block$blockquote'
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



/* The "module_markdown_it$rules_block$blockquote" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_markdown_it$rules_block$blockquote;
PyDictObject *moduledict_markdown_it$rules_block$blockquote;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_LOGGER;
PyObject *const_str_plain_debug;
PyObject *const_str_digest_0a80740dd8622d770d63e91f32ea1246;
PyObject *const_str_plain_lineMax;
PyObject *const_str_plain_bMarks;
PyObject *const_str_plain_tShift;
PyObject *const_str_plain_eMarks;
PyObject *const_str_plain_is_code_block;
PyObject *const_str_plain_src;
PyObject *const_str_chr_62;
PyObject *const_str_plain_sCount;
PyObject *const_str_space;
PyObject *const_str_chr_9;
PyObject *const_str_plain_bsCount;
PyObject *const_int_pos_4;
PyObject *const_int_pos_3;
PyObject *const_str_plain_pos;
PyObject *const_str_plain_state;
PyObject *const_str_plain_isStrSpace;
PyObject *const_str_plain_offset;
PyObject *const_str_plain_adjustTab;
PyObject *const_str_plain_md;
PyObject *const_str_plain_block;
PyObject *const_str_plain_ruler;
PyObject *const_str_plain_getRules;
PyObject *const_tuple_str_plain_blockquote_tuple;
PyObject *const_str_plain_parentType;
PyObject *const_str_plain_blockquote;
PyObject *const_str_plain_nextLine;
PyObject *const_str_plain_endLine;
PyObject *const_str_plain_blkIndent;
PyObject *const_str_plain_oldBMarks;
PyObject *const_str_plain_oldBSCount;
PyObject *const_str_plain_oldSCount;
PyObject *const_str_plain_oldTShift;
PyObject *const_str_plain_lastLineEmpty;
PyObject *const_str_plain_terminatorRules;
PyObject *const_str_plain_push;
PyObject *const_tuple_str_plain_blockquote_open_str_plain_blockquote_int_pos_1_tuple;
PyObject *const_str_plain_markup;
PyObject *const_str_plain_map;
PyObject *const_str_plain_tokenize;
PyObject *const_tuple_str_plain_blockquote_close_str_plain_blockquote_int_neg_1_tuple;
PyObject *const_str_plain_line;
PyObject *const_str_plain_startLine;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_digest_b079a483a5bb3f12a8f5a2f221050499;
PyObject *const_tuple_str_plain_isStrSpace_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_state_block;
PyObject *const_tuple_str_plain_StateBlock_tuple;
PyObject *const_str_plain_StateBlock;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_24f2f0fae48bf44baa81d3716423a360_tuple;
PyObject *const_dict_9dcdb1c033492f563e0ef94c1d6683b2;
PyObject *const_str_digest_981cb93fa8ad2f6da434b27c7036a35c;
PyObject *const_str_digest_fcee14fc2af627ea24065d16418d7095;
PyObject *const_tuple_aa395b7a11287f23730f89743fcd0a41_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[61];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("markdown_it.rules_block.blockquote"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_LOGGER);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a80740dd8622d770d63e91f32ea1246);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_lineMax);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_bMarks);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_tShift);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_eMarks);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_code_block);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_src);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_sCount);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_chr_9);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_bsCount);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_pos);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_isStrSpace);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_offset);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_adjustTab);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_md);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_block);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_ruler);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_getRules);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_blockquote_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_parentType);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_blockquote);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_nextLine);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_endLine);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_blkIndent);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_oldBMarks);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_oldBSCount);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_oldSCount);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_oldTShift);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_lastLineEmpty);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_terminatorRules);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_push);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_blockquote_open_str_plain_blockquote_int_pos_1_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_markup);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_map);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_blockquote_close_str_plain_blockquote_int_neg_1_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_line);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_startLine);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_isStrSpace_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_state_block);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StateBlock_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_StateBlock);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_24f2f0fae48bf44baa81d3716423a360_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_dict_9dcdb1c033492f563e0ef94c1d6683b2);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_981cb93fa8ad2f6da434b27c7036a35c);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_fcee14fc2af627ea24065d16418d7095);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_aa395b7a11287f23730f89743fcd0a41_tuple);
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
void checkModuleConstants_markdown_it$rules_block$blockquote(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LOGGER);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a80740dd8622d770d63e91f32ea1246));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a80740dd8622d770d63e91f32ea1246);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_lineMax));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lineMax);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_bMarks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bMarks);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_tShift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tShift);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_eMarks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eMarks);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_code_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_code_block);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_src));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_sCount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sCount);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_chr_9));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_9);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_bsCount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bsCount);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_pos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pos);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_isStrSpace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isStrSpace);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_offset);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_adjustTab));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_adjustTab);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_md));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_md);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_block);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_ruler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ruler);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_getRules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getRules);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_blockquote_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_blockquote_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_parentType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parentType);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_blockquote));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blockquote);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_nextLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nextLine);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_endLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endLine);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_blkIndent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blkIndent);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_oldBMarks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_oldBMarks);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_oldBSCount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_oldBSCount);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_oldSCount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_oldSCount);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_oldTShift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_oldTShift);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_lastLineEmpty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lastLineEmpty);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_terminatorRules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_terminatorRules);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_push));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_push);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_blockquote_open_str_plain_blockquote_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_blockquote_open_str_plain_blockquote_int_pos_1_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_markup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_markup);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_map));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_map);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokenize);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_blockquote_close_str_plain_blockquote_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_blockquote_close_str_plain_blockquote_int_neg_1_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_line);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_startLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startLine);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_isStrSpace_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_isStrSpace_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_state_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state_block);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StateBlock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StateBlock_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_StateBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StateBlock);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_24f2f0fae48bf44baa81d3716423a360_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_24f2f0fae48bf44baa81d3716423a360_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_dict_9dcdb1c033492f563e0ef94c1d6683b2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9dcdb1c033492f563e0ef94c1d6683b2);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_981cb93fa8ad2f6da434b27c7036a35c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_981cb93fa8ad2f6da434b27c7036a35c);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_fcee14fc2af627ea24065d16418d7095));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fcee14fc2af627ea24065d16418d7095);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_aa395b7a11287f23730f89743fcd0a41_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aa395b7a11287f23730f89743fcd0a41_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 4
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
static PyObject *module_var_accessor_markdown_it$rules_block$blockquote$LOGGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$blockquote->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$blockquote->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$blockquote->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$blockquote$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$blockquote->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$blockquote->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$blockquote->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$blockquote$isStrSpace(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$blockquote->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$blockquote->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_isStrSpace);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$blockquote->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_isStrSpace);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_isStrSpace);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isStrSpace);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_block$blockquote$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_block$blockquote->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_block$blockquote->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_block$blockquote->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_def276464c5b092524a4e231c7b6ae98;
static PyCodeObject *code_objects_473af2d1def7f2edd2d299d0bc82f019;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_981cb93fa8ad2f6da434b27c7036a35c); CHECK_OBJECT(module_filename_obj);
code_objects_def276464c5b092524a4e231c7b6ae98 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_fcee14fc2af627ea24065d16418d7095, mod_consts.const_str_digest_fcee14fc2af627ea24065d16418d7095, NULL, NULL, 0, 0, 0);
code_objects_473af2d1def7f2edd2d299d0bc82f019 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_blockquote, mod_consts.const_str_plain_blockquote, mod_consts.const_tuple_aa395b7a11287f23730f89743fcd0a41_tuple, NULL, 4, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_markdown_it$rules_block$blockquote$$$function__1_blockquote(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_markdown_it$rules_block$blockquote$$$function__1_blockquote(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *par_startLine = python_pars[1];
PyObject *par_endLine = python_pars[2];
PyObject *par_silent = python_pars[3];
PyObject *var_second_char = NULL;
PyObject *var_next_char = NULL;
PyObject *var_oldLineMax = NULL;
PyObject *var_pos = NULL;
PyObject *var_max = NULL;
PyObject *var_initial = NULL;
PyObject *var_offset = NULL;
PyObject *var_adjustTab = NULL;
nuitka_bool var_spaceAfterMarker = NUITKA_BOOL_UNASSIGNED;
PyObject *var_oldBMarks = NULL;
PyObject *var_ch = NULL;
PyObject *var_oldBSCount = NULL;
PyObject *var_lastLineEmpty = NULL;
PyObject *var_oldSCount = NULL;
PyObject *var_oldTShift = NULL;
PyObject *var_terminatorRules = NULL;
PyObject *var_oldParentType = NULL;
PyObject *var_nextLine = NULL;
PyObject *var_isOutdented = NULL;
PyObject *var_evaluatesTrue = NULL;
PyObject *var_terminate = NULL;
PyObject *var_terminatorRule = NULL;
PyObject *var_oldIndent = NULL;
PyObject *var_token = NULL;
PyObject *var_lines = NULL;
PyObject *var_i = NULL;
PyObject *var_item = NULL;
PyObject *tmp_assign_unpack_1__assign_source = NULL;
PyObject *tmp_assign_unpack_2__assign_source = NULL;
PyObject *tmp_assign_unpack_3__assign_source = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_3;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote = MAKE_FUNCTION_FRAME(tstate, code_objects_473af2d1def7f2edd2d299d0bc82f019, module_markdown_it$rules_block$blockquote, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_type_description == NULL);
frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote = cache_frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote);
assert(Py_REFCNT(frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_1 = module_var_accessor_markdown_it$rules_block$blockquote$LOGGER(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LOGGER);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_0a80740dd8622d770d63e91f32ea1246;
CHECK_OBJECT(par_state);
tmp_args_element_value_2 = par_state;
CHECK_OBJECT(par_startLine);
tmp_args_element_value_3 = par_startLine;
CHECK_OBJECT(par_endLine);
tmp_args_element_value_4 = par_endLine;
CHECK_OBJECT(par_silent);
tmp_args_element_value_5 = par_silent;
frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = 13;
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


exception_lineno = 13;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_state);
tmp_expression_value_1 = par_state;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_lineMax);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_oldLineMax == NULL);
var_oldLineMax = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_state);
tmp_expression_value_3 = par_state;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_1 = par_startLine;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_expression_value_5 = par_state;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 18;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_2 = par_startLine;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 18;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_pos == NULL);
var_pos = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_state);
tmp_expression_value_7 = par_state;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_eMarks);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_3 = par_startLine;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_max == NULL);
var_max = tmp_assign_source_3;
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
frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = 21;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_is_code_block, tmp_args_element_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 21;
type_description_1 = "ooooooooooooboooooooooooooooooo";
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
// Tried code:
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_state);
tmp_expression_value_9 = par_state;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_src);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_pos);
tmp_subscript_value_4 = var_pos;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_chr_62;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_IndexError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 25;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame)) {
        frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooboooooooooooooooooo";
goto try_except_handler_3;
branch_end_3:;
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


exception_lineno = 30;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = tmp_iadd_expr_left_1;
var_pos = tmp_assign_source_4;

}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(par_silent);
tmp_truth_name_2 = CHECK_IF_TRUE(par_silent);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooooooooooooboooooooooooooooooo";
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_state);
tmp_expression_value_11 = par_state;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_5 = par_startLine;
tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = const_int_pos_1;
tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_assign_unpack_1__assign_source == NULL);
tmp_assign_unpack_1__assign_source = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_6 = tmp_assign_unpack_1__assign_source;
assert(var_initial == NULL);
Py_INCREF(tmp_assign_source_6);
var_initial = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_7 = tmp_assign_unpack_1__assign_source;
assert(var_offset == NULL);
Py_INCREF(tmp_assign_source_7);
var_offset = tmp_assign_source_7;
}
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(par_state);
tmp_expression_value_13 = par_state;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_src);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_pos);
tmp_subscript_value_6 = var_pos;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_4;
}
assert(var_second_char == NULL);
var_second_char = tmp_assign_source_8;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_IndexError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_None;
assert(var_second_char == NULL);
Py_INCREF(tmp_assign_source_9);
var_second_char = tmp_assign_source_9;
}
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 40;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame)) {
        frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooboooooooooooooooooo";
goto try_except_handler_5;
branch_end_5:;
goto try_end_3;
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
try_end_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_second_char);
tmp_cmp_expr_left_4 = var_second_char;
tmp_cmp_expr_right_4 = mod_consts.const_str_space;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooooooooooooboooooooooooooooooo";
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
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
CHECK_OBJECT(var_pos);
tmp_iadd_expr_left_2 = var_pos;
tmp_iadd_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = tmp_iadd_expr_left_2;
var_pos = tmp_assign_source_10;

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
CHECK_OBJECT(var_initial);
tmp_iadd_expr_left_3 = var_initial;
tmp_iadd_expr_right_3 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = tmp_iadd_expr_left_3;
var_initial = tmp_assign_source_11;

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
CHECK_OBJECT(var_offset);
tmp_iadd_expr_left_4 = var_offset;
tmp_iadd_expr_right_4 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = tmp_iadd_expr_left_4;
var_offset = tmp_assign_source_12;

}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_False;
assert(var_adjustTab == NULL);
Py_INCREF(tmp_assign_source_13);
var_adjustTab = tmp_assign_source_13;
}
{
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_TRUE;
var_spaceAfterMarker = tmp_assign_source_14;
}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_second_char);
tmp_cmp_expr_left_5 = var_second_char;
tmp_cmp_expr_right_5 = mod_consts.const_str_chr_9;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooooooooboooooooooooooooooo";
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
nuitka_bool tmp_assign_source_15;
tmp_assign_source_15 = NUITKA_BOOL_TRUE;
var_spaceAfterMarker = tmp_assign_source_15;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(par_state);
tmp_expression_value_15 = par_state;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_bsCount);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_7 = par_startLine;
tmp_add_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_offset);
tmp_add_expr_right_3 = var_offset;
tmp_mod_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_mod_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = mod_consts.const_int_pos_4;
tmp_cmp_expr_left_6 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_left_1);
Py_DECREF(tmp_mod_expr_left_1);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_3;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooooooboooooooooooooooooo";
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
PyObject *tmp_assign_source_16;
PyObject *tmp_iadd_expr_left_5;
PyObject *tmp_iadd_expr_right_5;
CHECK_OBJECT(var_pos);
tmp_iadd_expr_left_5 = var_pos;
tmp_iadd_expr_right_5 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = tmp_iadd_expr_left_5;
var_pos = tmp_assign_source_16;

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iadd_expr_left_6;
PyObject *tmp_iadd_expr_right_6;
CHECK_OBJECT(var_initial);
tmp_iadd_expr_left_6 = var_initial;
tmp_iadd_expr_right_6 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_17 = tmp_iadd_expr_left_6;
var_initial = tmp_assign_source_17;

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iadd_expr_left_7;
PyObject *tmp_iadd_expr_right_7;
CHECK_OBJECT(var_offset);
tmp_iadd_expr_left_7 = var_offset;
tmp_iadd_expr_right_7 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = tmp_iadd_expr_left_7;
var_offset = tmp_assign_source_18;

}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = Py_False;
assert(var_adjustTab == NULL);
Py_INCREF(tmp_assign_source_19);
var_adjustTab = tmp_assign_source_19;
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = Py_True;
assert(var_adjustTab == NULL);
Py_INCREF(tmp_assign_source_20);
var_adjustTab = tmp_assign_source_20;
}
branch_end_8:;
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_assign_source_21;
tmp_assign_source_21 = NUITKA_BOOL_FALSE;
var_spaceAfterMarker = tmp_assign_source_21;
}
branch_end_7:;
branch_end_6:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(par_state);
tmp_expression_value_17 = par_state;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_8 = par_startLine;
tmp_list_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_22 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_22, 0, tmp_list_element_1);
assert(var_oldBMarks == NULL);
var_oldBMarks = tmp_assign_source_22;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_pos);
tmp_ass_subvalue_1 = var_pos;
CHECK_OBJECT(par_state);
tmp_expression_value_18 = par_state;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_bMarks);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_ass_subscript_1 = par_startLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
loop_start_1:;
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 76;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_7 = var_pos;
CHECK_OBJECT(var_max);
tmp_cmp_expr_right_7 = var_max;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooooboooooooooooooooooo";
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
goto loop_end_1;
branch_no_9:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_9;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 77;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_20 = par_state;
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_src);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_pos == NULL) {
Py_DECREF(tmp_expression_value_19);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 77;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_9 = var_pos;
tmp_assign_source_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ch;
    var_ch = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_7;
int tmp_truth_name_3;
tmp_called_value_1 = module_var_accessor_markdown_it$rules_block$blockquote$isStrSpace(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isStrSpace);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ch);
tmp_args_element_value_7 = var_ch;
frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = 79;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_7);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 79;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_8 = var_ch;
tmp_cmp_expr_right_8 = mod_consts.const_str_chr_9;
tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iadd_expr_left_8;
PyObject *tmp_iadd_expr_right_8;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_10;
nuitka_bool tmp_condition_result_12;
int tmp_truth_name_4;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 81;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_8 = var_offset;
tmp_sub_expr_left_1 = mod_consts.const_int_pos_4;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_5 = var_offset;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = par_state;
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_bsCount);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_10 = par_startLine;
tmp_add_expr_right_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_10);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_adjustTab == NULL) {
Py_DECREF(tmp_add_expr_left_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_adjustTab);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_4 = CHECK_IF_TRUE(var_adjustTab);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 83;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_add_expr_right_4 = const_int_pos_1;
goto condexpr_end_1;
condexpr_false_1:;
tmp_add_expr_right_4 = const_int_0;
condexpr_end_1:;
tmp_mod_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_mod_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_2 = mod_consts.const_int_pos_4;
tmp_sub_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_left_2);
Py_DECREF(tmp_mod_expr_left_2);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_8 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_iadd_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
CHECK_OBJECT(tmp_iadd_expr_right_8);
Py_DECREF(tmp_iadd_expr_right_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_24 = tmp_iadd_expr_left_8;
var_offset = tmp_assign_source_24;

}
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iadd_expr_left_9;
PyObject *tmp_iadd_expr_right_9;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_9 = var_offset;
tmp_iadd_expr_right_9 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_25 = tmp_iadd_expr_left_9;
var_offset = tmp_assign_source_25;

}
branch_end_11:;
goto branch_end_10;
branch_no_10:;
goto loop_end_1;
branch_end_10:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iadd_expr_left_10;
PyObject *tmp_iadd_expr_right_10;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_10 = var_pos;
tmp_iadd_expr_right_10 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_26 = tmp_iadd_expr_left_10;
var_pos = tmp_assign_source_26;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_list_element_2;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_11;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_24 = par_state;
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_bsCount);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_11 = par_startLine;
tmp_list_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_11);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_27 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_27, 0, tmp_list_element_2);
assert(var_oldBSCount == NULL);
var_oldBSCount = tmp_assign_source_27;
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_12;
bool tmp_condition_result_13;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_27;
PyObject *tmp_ass_subscript_2;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 95;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_26 = par_state;
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_12 = par_startLine;
tmp_add_expr_left_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_12);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_add_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_7 = const_int_pos_1;
tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_spaceAfterMarker != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_13 = var_spaceAfterMarker == NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_add_expr_right_6 = const_int_pos_1;
goto condexpr_end_2;
condexpr_false_2:;
tmp_add_expr_right_6 = const_int_0;
condexpr_end_2:;
tmp_ass_subvalue_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_27 = par_state;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_bsCount);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 94;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_ass_subscript_2 = par_startLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 98;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_9 = var_pos;
CHECK_OBJECT(var_max);
tmp_cmp_expr_right_9 = var_max;
tmp_assign_source_28 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_lastLineEmpty == NULL);
var_lastLineEmpty = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_list_element_3;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_13;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_29 = par_state;
tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_13 = par_startLine;
tmp_list_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_13);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_29 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_29, 0, tmp_list_element_3);
assert(var_oldSCount == NULL);
var_oldSCount = tmp_assign_source_29;
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_expression_value_30;
PyObject *tmp_ass_subscript_3;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 101;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_2 = var_offset;
CHECK_OBJECT(var_initial);
tmp_sub_expr_right_2 = var_initial;
tmp_ass_subvalue_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 101;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_30 = par_state;
tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_sCount);
if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 101;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_ass_subscript_3 = par_startLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_list_element_4;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_14;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_32 = par_state;
tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_14 = par_startLine;
tmp_list_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_14);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_list_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_30 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_30, 0, tmp_list_element_4);
assert(var_oldTShift == NULL);
var_oldTShift = tmp_assign_source_30;
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_15;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_expression_value_35;
PyObject *tmp_ass_subscript_4;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_3 = var_pos;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_34 = par_state;
tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_subscript_value_15 = par_startLine;
tmp_sub_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_15);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_sub_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_right_3);
Py_DECREF(tmp_sub_expr_right_3);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_35 = par_state;
tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_tShift);
if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 104;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_startLine);
tmp_ass_subscript_4 = par_startLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_expression_value_38;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 106;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_38 = par_state;
tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_md);
if (tmp_expression_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_block);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_ruler);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = 106;
tmp_assign_source_31 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_getRules,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_blockquote_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_terminatorRules == NULL);
var_terminatorRules = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_expression_value_39;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 108;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_39 = par_state;
tmp_assign_source_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_parentType);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_oldParentType == NULL);
var_oldParentType = tmp_assign_source_32;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = mod_consts.const_str_plain_blockquote;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 109;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_parentType, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
CHECK_OBJECT(par_startLine);
tmp_add_expr_left_8 = par_startLine;
tmp_add_expr_right_8 = const_int_pos_1;
tmp_assign_source_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_8, tmp_add_expr_right_8);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_nextLine == NULL);
var_nextLine = tmp_assign_source_33;
}
loop_start_2:;
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 132;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_10 = var_nextLine;
if (par_endLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_endLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 132;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_10 = par_endLine;
tmp_operand_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
goto loop_end_2;
branch_no_12:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_16;
PyObject *tmp_expression_value_42;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_41 = par_state;
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_40);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_16 = var_nextLine;
tmp_cmp_expr_left_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_16);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_cmp_expr_left_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_42 = par_state;
tmp_cmp_expr_right_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_blkIndent);
if (tmp_cmp_expr_right_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_11);

exception_lineno = 141;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_34 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
CHECK_OBJECT(tmp_cmp_expr_right_11);
Py_DECREF(tmp_cmp_expr_right_11);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_isOutdented;
    var_isOutdented = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_17;
PyObject *tmp_expression_value_45;
PyObject *tmp_expression_value_46;
PyObject *tmp_subscript_value_18;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 143;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_44 = par_state;
tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_43);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 143;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_17 = var_nextLine;
tmp_add_expr_left_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_17);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_add_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_add_expr_left_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 143;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_46 = par_state;
tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_9);

exception_lineno = 143;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_add_expr_left_9);
Py_DECREF(tmp_expression_value_45);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 143;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_18 = var_nextLine;
tmp_add_expr_right_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_18);
CHECK_OBJECT(tmp_expression_value_45);
Py_DECREF(tmp_expression_value_45);
if (tmp_add_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_9);

exception_lineno = 143;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
CHECK_OBJECT(tmp_add_expr_left_9);
Py_DECREF(tmp_add_expr_left_9);
CHECK_OBJECT(tmp_add_expr_right_9);
Py_DECREF(tmp_add_expr_right_9);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_expression_value_47;
PyObject *tmp_expression_value_48;
PyObject *tmp_subscript_value_19;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 144;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_48 = par_state;
tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_eMarks);
if (tmp_expression_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_47);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 144;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_19 = var_nextLine;
tmp_assign_source_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_19);
CHECK_OBJECT(tmp_expression_value_47);
Py_DECREF(tmp_expression_value_47);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_max;
    var_max = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(var_pos);
tmp_cmp_expr_left_12 = var_pos;
CHECK_OBJECT(var_max);
tmp_cmp_expr_right_12 = var_max;
tmp_condition_result_15 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
goto loop_end_2;
branch_no_13:;
{
PyObject *tmp_assign_source_37;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_expression_value_49;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_20;
PyObject *tmp_operand_value_3;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 150;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_50 = par_state;
tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_src);
if (tmp_expression_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pos);
tmp_subscript_value_20 = var_pos;
tmp_cmp_expr_left_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_20);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_cmp_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_13 = mod_consts.const_str_chr_62;
tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
CHECK_OBJECT(tmp_cmp_expr_left_13);
Py_DECREF(tmp_cmp_expr_left_13);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 150;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(var_isOutdented);
tmp_operand_value_3 = var_isOutdented;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_1);
tmp_assign_source_37 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_assign_source_37 = tmp_and_left_value_1;
and_end_1:;
{
    PyObject *old = var_evaluatesTrue;
    var_evaluatesTrue = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_iadd_expr_left_11;
PyObject *tmp_iadd_expr_right_11;
CHECK_OBJECT(var_pos);
tmp_iadd_expr_left_11 = var_pos;
tmp_iadd_expr_right_11 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_11, tmp_iadd_expr_right_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_38 = tmp_iadd_expr_left_11;
var_pos = tmp_assign_source_38;

}
{
nuitka_bool tmp_condition_result_16;
int tmp_truth_name_5;
CHECK_OBJECT(var_evaluatesTrue);
tmp_truth_name_5 = CHECK_IF_TRUE(var_evaluatesTrue);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_add_expr_left_10;
PyObject *tmp_add_expr_right_10;
PyObject *tmp_expression_value_51;
PyObject *tmp_expression_value_52;
PyObject *tmp_subscript_value_21;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 156;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_expression_value_52 = par_state;
tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_6;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_51);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 156;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_subscript_value_21 = var_nextLine;
tmp_add_expr_left_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_21);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_add_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_add_expr_right_10 = const_int_pos_1;
tmp_assign_source_39 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_10, tmp_add_expr_right_10);
CHECK_OBJECT(tmp_add_expr_left_10);
Py_DECREF(tmp_add_expr_left_10);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_assign_unpack_2__assign_source;
    tmp_assign_unpack_2__assign_source = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assign_unpack_2__assign_source);
tmp_assign_unpack_2__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
{
PyObject *tmp_assign_source_40;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_assign_source_40 = tmp_assign_unpack_2__assign_source;
{
    PyObject *old = var_initial;
    var_initial = tmp_assign_source_40;
    Py_INCREF(var_initial);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_assign_source_41 = tmp_assign_unpack_2__assign_source;
{
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_41;
    Py_INCREF(var_offset);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
Py_DECREF(tmp_assign_unpack_2__assign_source);
tmp_assign_unpack_2__assign_source = NULL;
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_expression_value_53;
PyObject *tmp_expression_value_54;
PyObject *tmp_subscript_value_22;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_54 = par_state;
tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_src);
if (tmp_expression_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_pos);
tmp_subscript_value_22 = var_pos;
tmp_assign_source_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_22);
CHECK_OBJECT(tmp_expression_value_53);
Py_DECREF(tmp_expression_value_53);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_next_char;
    var_next_char = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
tmp_cmp_expr_left_14 = EXC_TYPE(tstate);
tmp_cmp_expr_right_14 = PyExc_IndexError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
assert(!(tmp_res == -1));
tmp_condition_result_17 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = Py_None;
{
    PyObject *old = var_next_char;
    var_next_char = tmp_assign_source_43;
    Py_INCREF(var_next_char);
    Py_XDECREF(old);
}

}
goto branch_end_15;
branch_no_15:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 158;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame)) {
        frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooboooooooooooooooooo";
goto try_except_handler_8;
branch_end_15:;
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
{
nuitka_bool tmp_condition_result_18;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(var_next_char);
tmp_cmp_expr_left_15 = var_next_char;
tmp_cmp_expr_right_15 = mod_consts.const_str_space;
tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_iadd_expr_left_12;
PyObject *tmp_iadd_expr_right_12;
CHECK_OBJECT(var_pos);
tmp_iadd_expr_left_12 = var_pos;
tmp_iadd_expr_right_12 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_12, tmp_iadd_expr_right_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_44 = tmp_iadd_expr_left_12;
var_pos = tmp_assign_source_44;

}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_iadd_expr_left_13;
PyObject *tmp_iadd_expr_right_13;
CHECK_OBJECT(var_initial);
tmp_iadd_expr_left_13 = var_initial;
tmp_iadd_expr_right_13 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_13, tmp_iadd_expr_right_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_45 = tmp_iadd_expr_left_13;
var_initial = tmp_assign_source_45;

}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_iadd_expr_left_14;
PyObject *tmp_iadd_expr_right_14;
CHECK_OBJECT(var_offset);
tmp_iadd_expr_left_14 = var_offset;
tmp_iadd_expr_right_14 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_14, tmp_iadd_expr_right_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_46 = tmp_iadd_expr_left_14;
var_offset = tmp_assign_source_46;

}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = Py_False;
{
    PyObject *old = var_adjustTab;
    var_adjustTab = tmp_assign_source_47;
    Py_INCREF(var_adjustTab);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_48;
tmp_assign_source_48 = NUITKA_BOOL_TRUE;
var_spaceAfterMarker = tmp_assign_source_48;
}
goto branch_end_16;
branch_no_16:;
{
nuitka_bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
CHECK_OBJECT(var_next_char);
tmp_cmp_expr_left_16 = var_next_char;
tmp_cmp_expr_right_16 = mod_consts.const_str_chr_9;
tmp_condition_result_19 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
nuitka_bool tmp_assign_source_49;
tmp_assign_source_49 = NUITKA_BOOL_TRUE;
var_spaceAfterMarker = tmp_assign_source_49;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_add_expr_left_11;
PyObject *tmp_add_expr_right_11;
PyObject *tmp_expression_value_55;
PyObject *tmp_expression_value_56;
PyObject *tmp_subscript_value_23;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 175;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_56 = par_state;
tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_bsCount);
if (tmp_expression_value_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_55);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 175;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_23 = var_nextLine;
tmp_add_expr_left_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_23);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_add_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_offset);
tmp_add_expr_right_11 = var_offset;
tmp_mod_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
CHECK_OBJECT(tmp_add_expr_left_11);
Py_DECREF(tmp_add_expr_left_11);
if (tmp_mod_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_3 = mod_consts.const_int_pos_4;
tmp_cmp_expr_left_17 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_left_3);
Py_DECREF(tmp_mod_expr_left_3);
if (tmp_cmp_expr_left_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_17 = mod_consts.const_int_pos_3;
tmp_condition_result_20 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
CHECK_OBJECT(tmp_cmp_expr_left_17);
Py_DECREF(tmp_cmp_expr_left_17);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_iadd_expr_left_15;
PyObject *tmp_iadd_expr_right_15;
CHECK_OBJECT(var_pos);
tmp_iadd_expr_left_15 = var_pos;
tmp_iadd_expr_right_15 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_15, tmp_iadd_expr_right_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_50 = tmp_iadd_expr_left_15;
var_pos = tmp_assign_source_50;

}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_iadd_expr_left_16;
PyObject *tmp_iadd_expr_right_16;
CHECK_OBJECT(var_initial);
tmp_iadd_expr_left_16 = var_initial;
tmp_iadd_expr_right_16 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_16, tmp_iadd_expr_right_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_51 = tmp_iadd_expr_left_16;
var_initial = tmp_assign_source_51;

}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_iadd_expr_left_17;
PyObject *tmp_iadd_expr_right_17;
CHECK_OBJECT(var_offset);
tmp_iadd_expr_left_17 = var_offset;
tmp_iadd_expr_right_17 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_17, tmp_iadd_expr_right_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_52 = tmp_iadd_expr_left_17;
var_offset = tmp_assign_source_52;

}
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = Py_False;
{
    PyObject *old = var_adjustTab;
    var_adjustTab = tmp_assign_source_53;
    Py_INCREF(var_adjustTab);
    Py_XDECREF(old);
}

}
goto branch_end_18;
branch_no_18:;
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = Py_True;
{
    PyObject *old = var_adjustTab;
    var_adjustTab = tmp_assign_source_54;
    Py_INCREF(var_adjustTab);
    Py_XDECREF(old);
}

}
branch_end_18:;
goto branch_end_17;
branch_no_17:;
{
nuitka_bool tmp_assign_source_55;
tmp_assign_source_55 = NUITKA_BOOL_FALSE;
var_spaceAfterMarker = tmp_assign_source_55;
}
branch_end_17:;
branch_end_16:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_57;
PyObject *tmp_expression_value_58;
PyObject *tmp_subscript_value_24;
if (var_oldBMarks == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldBMarks);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_1 = var_oldBMarks;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_58 = par_state;
tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_57);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_24 = var_nextLine;
tmp_item_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_24);
CHECK_OBJECT(tmp_expression_value_57);
Py_DECREF(tmp_expression_value_57);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_expression_value_59;
PyObject *tmp_ass_subscript_5;
CHECK_OBJECT(var_pos);
tmp_ass_subvalue_5 = var_pos;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_59 = par_state;
tmp_ass_subscribed_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_bMarks);
if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_ass_subscribed_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_5 = var_nextLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
loop_start_3:;
{
bool tmp_condition_result_21;
PyObject *tmp_operand_value_4;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_18 = var_pos;
CHECK_OBJECT(var_max);
tmp_cmp_expr_right_18 = var_max;
tmp_operand_value_4 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_21 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
goto loop_end_3;
branch_no_19:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_expression_value_60;
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_25;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_61 = par_state;
tmp_expression_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_src);
if (tmp_expression_value_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_pos == NULL) {
Py_DECREF(tmp_expression_value_60);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_25 = var_pos;
tmp_assign_source_56 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_25);
CHECK_OBJECT(tmp_expression_value_60);
Py_DECREF(tmp_expression_value_60);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ch;
    var_ch = tmp_assign_source_56;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_22;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_8;
int tmp_truth_name_6;
tmp_called_value_2 = module_var_accessor_markdown_it$rules_block$blockquote$isStrSpace(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isStrSpace);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ch);
tmp_args_element_value_8 = var_ch;
frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = 197;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_8);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 197;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_22 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
nuitka_bool tmp_condition_result_23;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_19 = var_ch;
tmp_cmp_expr_right_19 = mod_consts.const_str_chr_9;
tmp_condition_result_23 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_iadd_expr_left_18;
PyObject *tmp_iadd_expr_right_18;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_add_expr_left_12;
PyObject *tmp_add_expr_right_12;
PyObject *tmp_add_expr_left_13;
PyObject *tmp_add_expr_right_13;
PyObject *tmp_expression_value_62;
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_26;
nuitka_bool tmp_condition_result_24;
int tmp_truth_name_7;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 199;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_18 = var_offset;
tmp_sub_expr_left_4 = mod_consts.const_int_pos_4;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 202;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_13 = var_offset;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 203;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_63 = par_state;
tmp_expression_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain_bsCount);
if (tmp_expression_value_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_62);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 203;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_26 = var_nextLine;
tmp_add_expr_right_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_26);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
if (tmp_add_expr_right_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
CHECK_OBJECT(tmp_add_expr_right_13);
Py_DECREF(tmp_add_expr_right_13);
if (tmp_add_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_adjustTab == NULL) {
Py_DECREF(tmp_add_expr_left_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_adjustTab);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 204;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_7 = CHECK_IF_TRUE(var_adjustTab);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_12);

exception_lineno = 204;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_24 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_add_expr_right_12 = const_int_pos_1;
goto condexpr_end_3;
condexpr_false_3:;
tmp_add_expr_right_12 = const_int_0;
condexpr_end_3:;
tmp_mod_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_12, tmp_add_expr_right_12);
CHECK_OBJECT(tmp_add_expr_left_12);
Py_DECREF(tmp_add_expr_left_12);
if (tmp_mod_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_4 = mod_consts.const_int_pos_4;
tmp_sub_expr_right_4 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_left_4);
Py_DECREF(tmp_mod_expr_left_4);
if (tmp_sub_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_18 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_right_4);
Py_DECREF(tmp_sub_expr_right_4);
if (tmp_iadd_expr_right_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_18, tmp_iadd_expr_right_18);
CHECK_OBJECT(tmp_iadd_expr_right_18);
Py_DECREF(tmp_iadd_expr_right_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_57 = tmp_iadd_expr_left_18;
var_offset = tmp_assign_source_57;

}
goto branch_end_21;
branch_no_21:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_iadd_expr_left_19;
PyObject *tmp_iadd_expr_right_19;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 209;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_19 = var_offset;
tmp_iadd_expr_right_19 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_19, tmp_iadd_expr_right_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_58 = tmp_iadd_expr_left_19;
var_offset = tmp_assign_source_58;

}
branch_end_21:;
goto branch_end_20;
branch_no_20:;
goto loop_end_3;
branch_end_20:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_iadd_expr_left_20;
PyObject *tmp_iadd_expr_right_20;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 213;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_20 = var_pos;
tmp_iadd_expr_right_20 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_20, tmp_iadd_expr_right_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_59 = tmp_iadd_expr_left_20;
var_pos = tmp_assign_source_59;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_3;
loop_end_3:;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 215;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_20 = var_pos;
CHECK_OBJECT(var_max);
tmp_cmp_expr_right_20 = var_max;
tmp_assign_source_60 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_lastLineEmpty;
    var_lastLineEmpty = tmp_assign_source_60;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_expression_value_64;
PyObject *tmp_expression_value_65;
PyObject *tmp_subscript_value_27;
if (var_oldBSCount == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldBSCount);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 217;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_2 = var_oldBSCount;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 217;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_65 = par_state;
tmp_expression_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain_bsCount);
if (tmp_expression_value_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_64);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 217;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_27 = var_nextLine;
tmp_item_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_27);
CHECK_OBJECT(tmp_expression_value_64);
Py_DECREF(tmp_expression_value_64);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_add_expr_left_14;
PyObject *tmp_add_expr_right_14;
PyObject *tmp_add_expr_left_15;
PyObject *tmp_add_expr_right_15;
PyObject *tmp_expression_value_66;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_28;
bool tmp_condition_result_25;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_expression_value_68;
PyObject *tmp_ass_subscript_6;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 219;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_67 = par_state;
tmp_expression_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_66);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 219;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_28 = var_nextLine;
tmp_add_expr_left_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_28);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_add_expr_left_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_15 = const_int_pos_1;
tmp_add_expr_left_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_15, tmp_add_expr_right_15);
CHECK_OBJECT(tmp_add_expr_left_15);
Py_DECREF(tmp_add_expr_left_15);
if (tmp_add_expr_left_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_spaceAfterMarker != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_25 = var_spaceAfterMarker == NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 != false) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
tmp_add_expr_right_14 = const_int_pos_1;
goto condexpr_end_4;
condexpr_false_4:;
tmp_add_expr_right_14 = const_int_0;
condexpr_end_4:;
tmp_ass_subvalue_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_14, tmp_add_expr_right_14);
CHECK_OBJECT(tmp_add_expr_left_14);
Py_DECREF(tmp_add_expr_left_14);
if (tmp_ass_subvalue_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 218;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_68 = par_state;
tmp_ass_subscribed_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts.const_str_plain_bsCount);
if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_6);

exception_lineno = 218;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_ass_subvalue_6);
Py_DECREF(tmp_ass_subscribed_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 218;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_6 = var_nextLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
CHECK_OBJECT(tmp_ass_subvalue_6);
Py_DECREF(tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
PyObject *tmp_expression_value_69;
PyObject *tmp_expression_value_70;
PyObject *tmp_subscript_value_29;
if (var_oldSCount == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldSCount);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 222;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_3 = var_oldSCount;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 222;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_70 = par_state;
tmp_expression_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_69);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 222;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_29 = var_nextLine;
tmp_item_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_29);
CHECK_OBJECT(tmp_expression_value_69);
Py_DECREF(tmp_expression_value_69);
if (tmp_item_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_sub_expr_left_5;
PyObject *tmp_sub_expr_right_5;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_expression_value_71;
PyObject *tmp_ass_subscript_7;
if (var_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 223;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_5 = var_offset;
CHECK_OBJECT(var_initial);
tmp_sub_expr_right_5 = var_initial;
tmp_ass_subvalue_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
if (tmp_ass_subvalue_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 223;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_71 = par_state;
tmp_ass_subscribed_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain_sCount);
if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_7);

exception_lineno = 223;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_ass_subvalue_7);
Py_DECREF(tmp_ass_subscribed_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 223;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_7 = var_nextLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
CHECK_OBJECT(tmp_ass_subvalue_7);
Py_DECREF(tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
PyObject *tmp_expression_value_72;
PyObject *tmp_expression_value_73;
PyObject *tmp_subscript_value_30;
if (var_oldTShift == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldTShift);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_4 = var_oldTShift;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_73 = par_state;
tmp_expression_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_72);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_30 = var_nextLine;
tmp_item_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_30);
CHECK_OBJECT(tmp_expression_value_72);
Py_DECREF(tmp_expression_value_72);
if (tmp_item_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_sub_expr_left_6;
PyObject *tmp_sub_expr_right_6;
PyObject *tmp_expression_value_74;
PyObject *tmp_expression_value_75;
PyObject *tmp_subscript_value_31;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_expression_value_76;
PyObject *tmp_ass_subscript_8;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_6 = var_pos;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_75 = par_state;
tmp_expression_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_74);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_31 = var_nextLine;
tmp_sub_expr_right_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_74, tmp_subscript_value_31);
CHECK_OBJECT(tmp_expression_value_74);
Py_DECREF(tmp_expression_value_74);
if (tmp_sub_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
CHECK_OBJECT(tmp_sub_expr_right_6);
Py_DECREF(tmp_sub_expr_right_6);
if (tmp_ass_subvalue_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_76 = par_state;
tmp_ass_subscribed_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain_tShift);
if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_8);

exception_lineno = 226;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_ass_subvalue_8);
Py_DECREF(tmp_ass_subscribed_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_8 = var_nextLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
CHECK_OBJECT(tmp_ass_subvalue_8);
Py_DECREF(tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_iadd_expr_left_21;
PyObject *tmp_iadd_expr_right_21;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_21 = var_nextLine;
tmp_iadd_expr_right_21 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_21, tmp_iadd_expr_right_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_61 = tmp_iadd_expr_left_21;
var_nextLine = tmp_assign_source_61;

}
goto loop_start_2;
branch_no_14:;
{
nuitka_bool tmp_condition_result_26;
int tmp_truth_name_8;
if (var_lastLineEmpty == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lastLineEmpty);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_8 = CHECK_IF_TRUE(var_lastLineEmpty);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_26 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
goto loop_end_2;
branch_no_22:;
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = Py_False;
{
    PyObject *old = var_terminate;
    var_terminate = tmp_assign_source_62;
    Py_INCREF(var_terminate);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_iter_arg_1;
if (var_terminatorRules == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_terminatorRules);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 238;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = var_terminatorRules;
tmp_assign_source_63 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_63;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_64;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_64 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_64 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooboooooooooooooooooo";
exception_lineno = 238;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_64;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_65;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_65 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_terminatorRule;
    var_terminatorRule = tmp_assign_source_65;
    Py_INCREF(var_terminatorRule);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_27;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
int tmp_truth_name_9;
CHECK_OBJECT(var_terminatorRule);
tmp_called_value_3 = var_terminatorRule;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 239;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_9 = par_state;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 239;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_10 = var_nextLine;
if (par_endLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_endLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 239;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_11 = par_endLine;
tmp_args_element_value_12 = Py_True;
frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = 239;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_5);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_5);

exception_lineno = 239;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_27 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = Py_True;
{
    PyObject *old = var_terminate;
    assert(old != NULL);
    var_terminate = tmp_assign_source_66;
    Py_INCREF(var_terminate);
    Py_DECREF(old);
}

}
goto loop_end_4;
branch_no_23:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_9;
}
goto loop_start_4;
loop_end_4:;
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
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
try_end_7:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_28;
CHECK_OBJECT(var_terminate);
tmp_condition_result_28 = CHECK_IF_TRUE(var_terminate) == 1;
if (tmp_condition_result_28 != false) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_2 = var_nextLine;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_2 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_lineMax, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_29;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
PyObject *tmp_expression_value_77;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 250;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_77 = par_state;
tmp_cmp_expr_left_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain_blkIndent);
if (tmp_cmp_expr_left_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_21 = const_int_0;
tmp_condition_result_29 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
CHECK_OBJECT(tmp_cmp_expr_left_21);
Py_DECREF(tmp_cmp_expr_left_21);
if (tmp_condition_result_29 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_list_arg_value_5;
PyObject *tmp_item_value_5;
PyObject *tmp_expression_value_78;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_32;
if (var_oldBMarks == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldBMarks);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 254;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_5 = var_oldBMarks;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 254;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_79 = par_state;
tmp_expression_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_78);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 254;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_32 = var_nextLine;
tmp_item_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_32);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_item_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_5, tmp_item_value_5);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_6;
PyObject *tmp_item_value_6;
PyObject *tmp_expression_value_80;
PyObject *tmp_expression_value_81;
PyObject *tmp_subscript_value_33;
if (var_oldBSCount == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldBSCount);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_6 = var_oldBSCount;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_81 = par_state;
tmp_expression_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain_bsCount);
if (tmp_expression_value_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_80);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_33 = var_nextLine;
tmp_item_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_80, tmp_subscript_value_33);
CHECK_OBJECT(tmp_expression_value_80);
Py_DECREF(tmp_expression_value_80);
if (tmp_item_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_6, tmp_item_value_6);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_7;
PyObject *tmp_item_value_7;
PyObject *tmp_expression_value_82;
PyObject *tmp_expression_value_83;
PyObject *tmp_subscript_value_34;
if (var_oldTShift == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldTShift);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 256;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_7 = var_oldTShift;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 256;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_83 = par_state;
tmp_expression_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_82);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 256;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_34 = var_nextLine;
tmp_item_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_34);
CHECK_OBJECT(tmp_expression_value_82);
Py_DECREF(tmp_expression_value_82);
if (tmp_item_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_7, tmp_item_value_7);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_8;
PyObject *tmp_item_value_8;
PyObject *tmp_expression_value_84;
PyObject *tmp_expression_value_85;
PyObject *tmp_subscript_value_35;
if (var_oldSCount == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldSCount);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 257;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_8 = var_oldSCount;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 257;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_85 = par_state;
tmp_expression_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_84);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 257;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_35 = var_nextLine;
tmp_item_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_84, tmp_subscript_value_35);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
if (tmp_item_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_8, tmp_item_value_8);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_expression_value_86;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_86 = par_state;
tmp_assign_source_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts.const_str_plain_sCount);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_subscript_1__target == NULL);
tmp_inplace_assign_subscript_1__target = tmp_assign_source_67;
}
// Tried code:
{
PyObject *tmp_assign_source_68;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_assign_source_68 = var_nextLine;
assert(tmp_inplace_assign_subscript_1__subscript == NULL);
Py_INCREF(tmp_assign_source_68);
tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_expression_value_87;
PyObject *tmp_subscript_value_36;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_87 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_36 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_69 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_87, tmp_subscript_value_36);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_10;
}
assert(tmp_inplace_assign_subscript_1__value == NULL);
tmp_inplace_assign_subscript_1__value = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
PyObject *tmp_expression_value_88;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_subscript_1__value;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_88 = par_state;
tmp_isub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts.const_str_plain_blkIndent);
if (tmp_isub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_70 = tmp_isub_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_70;

}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_9 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_9 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_ass_subscript_9 = tmp_inplace_assign_subscript_1__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_10;
}
}
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
branch_no_25:;
goto loop_end_2;
branch_no_24:;
{
PyObject *tmp_list_arg_value_9;
PyObject *tmp_item_value_9;
PyObject *tmp_expression_value_89;
PyObject *tmp_expression_value_90;
PyObject *tmp_subscript_value_37;
if (var_oldBMarks == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldBMarks);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 262;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_9 = var_oldBMarks;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 262;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_90 = par_state;
tmp_expression_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts.const_str_plain_bMarks);
if (tmp_expression_value_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_89);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 262;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_37 = var_nextLine;
tmp_item_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_37);
CHECK_OBJECT(tmp_expression_value_89);
Py_DECREF(tmp_expression_value_89);
if (tmp_item_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_9, tmp_item_value_9);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_10;
PyObject *tmp_item_value_10;
PyObject *tmp_expression_value_91;
PyObject *tmp_expression_value_92;
PyObject *tmp_subscript_value_38;
if (var_oldBSCount == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldBSCount);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_10 = var_oldBSCount;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_92 = par_state;
tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts.const_str_plain_bsCount);
if (tmp_expression_value_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_91);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_38 = var_nextLine;
tmp_item_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_91, tmp_subscript_value_38);
CHECK_OBJECT(tmp_expression_value_91);
Py_DECREF(tmp_expression_value_91);
if (tmp_item_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_10, tmp_item_value_10);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_11;
PyObject *tmp_item_value_11;
PyObject *tmp_expression_value_93;
PyObject *tmp_expression_value_94;
PyObject *tmp_subscript_value_39;
if (var_oldTShift == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldTShift);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 264;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_11 = var_oldTShift;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 264;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_94 = par_state;
tmp_expression_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts.const_str_plain_tShift);
if (tmp_expression_value_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_93);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 264;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_39 = var_nextLine;
tmp_item_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_93, tmp_subscript_value_39);
CHECK_OBJECT(tmp_expression_value_93);
Py_DECREF(tmp_expression_value_93);
if (tmp_item_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_11, tmp_item_value_11);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_12;
PyObject *tmp_item_value_12;
PyObject *tmp_expression_value_95;
PyObject *tmp_expression_value_96;
PyObject *tmp_subscript_value_40;
if (var_oldSCount == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldSCount);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_12 = var_oldSCount;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_96 = par_state;
tmp_expression_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts.const_str_plain_sCount);
if (tmp_expression_value_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_expression_value_95);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_40 = var_nextLine;
tmp_item_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_95, tmp_subscript_value_40);
CHECK_OBJECT(tmp_expression_value_95);
Py_DECREF(tmp_expression_value_95);
if (tmp_item_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_12, tmp_item_value_12);
assert(!(tmp_result == false));
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_expression_value_97;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = const_int_neg_1;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 269;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_97 = par_state;
tmp_ass_subscribed_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts.const_str_plain_sCount);
if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nextLine == NULL) {
Py_DECREF(tmp_ass_subscribed_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 269;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_10 = var_nextLine;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_iadd_expr_left_22;
PyObject *tmp_iadd_expr_right_22;
if (var_nextLine == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 271;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_22 = var_nextLine;
tmp_iadd_expr_right_22 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_22, tmp_iadd_expr_right_22);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_71 = tmp_iadd_expr_left_22;
var_nextLine = tmp_assign_source_71;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_2;
loop_end_2:;
{
PyObject *tmp_assign_source_72;
PyObject *tmp_expression_value_98;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 273;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_98 = par_state;
tmp_assign_source_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts.const_str_plain_blkIndent);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_oldIndent == NULL);
var_oldIndent = tmp_assign_source_72;
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = const_int_0;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 274;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_3 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_blkIndent, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_called_instance_4;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = par_state;
frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = 276;
tmp_assign_source_73 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_blockquote_open_str_plain_blockquote_int_pos_1_tuple, 0)
);

if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_73;
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = mod_consts.const_str_chr_62;
CHECK_OBJECT(var_token);
tmp_assattr_target_4 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_markup, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_list_element_5;
CHECK_OBJECT(par_startLine);
tmp_list_element_5 = par_startLine;
tmp_assign_source_74 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_assign_source_74, 0, tmp_list_element_5);
tmp_list_element_5 = const_int_0;
PyList_SET_ITEM0(tmp_assign_source_74, 1, tmp_list_element_5);
assert(tmp_assign_unpack_3__assign_source == NULL);
tmp_assign_unpack_3__assign_source = tmp_assign_source_74;
}
// Tried code:
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
tmp_assattr_value_5 = tmp_assign_unpack_3__assign_source;
CHECK_OBJECT(var_token);
tmp_assattr_target_5 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_map, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_11;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
Py_DECREF(tmp_assign_unpack_3__assign_source);
tmp_assign_unpack_3__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
{
PyObject *tmp_assign_source_75;
CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
tmp_assign_source_75 = tmp_assign_unpack_3__assign_source;
assert(var_lines == NULL);
Py_INCREF(tmp_assign_source_75);
var_lines = tmp_assign_source_75;
}
CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
Py_DECREF(tmp_assign_unpack_3__assign_source);
tmp_assign_unpack_3__assign_source = NULL;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_99;
PyObject *tmp_expression_value_100;
PyObject *tmp_expression_value_101;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_101 = par_state;
tmp_expression_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts.const_str_plain_md);
if (tmp_expression_value_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts.const_str_plain_block);
CHECK_OBJECT(tmp_expression_value_100);
Py_DECREF(tmp_expression_value_100);
if (tmp_expression_value_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain_tokenize);
CHECK_OBJECT(tmp_expression_value_99);
Py_DECREF(tmp_expression_value_99);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_13 = par_state;
CHECK_OBJECT(par_startLine);
tmp_args_element_value_14 = par_startLine;
if (var_nextLine == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nextLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_15 = var_nextLine;
frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = 280;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_called_instance_5;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_5 = par_state;
frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = 282;
tmp_assign_source_76 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_blockquote_close_str_plain_blockquote_int_neg_1_tuple, 0)
);

if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    assert(old != NULL);
    var_token = tmp_assign_source_76;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = mod_consts.const_str_chr_62;
CHECK_OBJECT(var_token);
tmp_assattr_target_6 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_markup, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(var_oldLineMax);
tmp_assattr_value_7 = var_oldLineMax;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 285;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_7 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_lineMax, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(var_oldParentType);
tmp_assattr_value_8 = var_oldParentType;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 286;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_8 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_parentType, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_expression_value_102;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
int tmp_ass_subscript_res_1;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 287;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_102 = par_state;
tmp_ass_subvalue_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts.const_str_plain_line);
if (tmp_ass_subvalue_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lines);
tmp_ass_subscribed_11 = var_lines;
tmp_ass_subscript_11 = const_int_pos_1;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, 1, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subvalue_11);
Py_DECREF(tmp_ass_subvalue_11);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_16;
tmp_called_value_5 = (PyObject *)&PyEnum_Type;
if (var_oldTShift == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldTShift);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 291;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_16 = var_oldTShift;
frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame.f_lineno = 291;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_16);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_77 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_77;
}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_78;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_78 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_78 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooboooooooooooooooooo";
exception_lineno = 291;
        goto try_except_handler_12;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_78;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_79;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
tmp_assign_source_79 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_79;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_80;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_80 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_80;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_81 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_81;
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



exception_lineno = 291;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_14;
}
}
goto try_end_10;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_13;
// End of try:
try_end_10:;
goto try_end_11;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_12;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_82;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_82 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_82;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_83;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_83 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_item;
    var_item = tmp_assign_source_83;
    Py_INCREF(var_item);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_expression_value_103;
PyObject *tmp_subscript_value_41;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_expression_value_104;
PyObject *tmp_ass_subscript_12;
PyObject *tmp_add_expr_left_16;
PyObject *tmp_add_expr_right_16;
if (var_oldBMarks == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldBMarks);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 292;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_expression_value_103 = var_oldBMarks;
CHECK_OBJECT(var_i);
tmp_subscript_value_41 = var_i;
tmp_ass_subvalue_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_103, tmp_subscript_value_41);
if (tmp_ass_subvalue_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 292;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_expression_value_104 = par_state;
tmp_ass_subscribed_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts.const_str_plain_bMarks);
if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_12);

exception_lineno = 292;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_i);
tmp_add_expr_left_16 = var_i;
if (par_startLine == NULL) {
Py_DECREF(tmp_ass_subvalue_12);
Py_DECREF(tmp_ass_subscribed_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 292;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_add_expr_right_16 = par_startLine;
tmp_ass_subscript_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
if (tmp_ass_subscript_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_12);
Py_DECREF(tmp_ass_subscribed_12);

exception_lineno = 292;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
CHECK_OBJECT(tmp_ass_subscript_12);
Py_DECREF(tmp_ass_subscript_12);
CHECK_OBJECT(tmp_ass_subvalue_12);
Py_DECREF(tmp_ass_subvalue_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_expression_value_105;
PyObject *tmp_ass_subscript_13;
PyObject *tmp_add_expr_left_17;
PyObject *tmp_add_expr_right_17;
CHECK_OBJECT(var_item);
tmp_ass_subvalue_13 = var_item;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 293;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_expression_value_105 = par_state;
tmp_ass_subscribed_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts.const_str_plain_tShift);
if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_i);
tmp_add_expr_left_17 = var_i;
if (par_startLine == NULL) {
Py_DECREF(tmp_ass_subscribed_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 293;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_add_expr_right_17 = par_startLine;
tmp_ass_subscript_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_17, tmp_add_expr_right_17);
if (tmp_ass_subscript_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_13);

exception_lineno = 293;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
CHECK_OBJECT(tmp_ass_subscribed_13);
Py_DECREF(tmp_ass_subscribed_13);
CHECK_OBJECT(tmp_ass_subscript_13);
Py_DECREF(tmp_ass_subscript_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
}
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_expression_value_106;
PyObject *tmp_subscript_value_42;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_expression_value_107;
PyObject *tmp_ass_subscript_14;
PyObject *tmp_add_expr_left_18;
PyObject *tmp_add_expr_right_18;
if (var_oldSCount == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldSCount);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_expression_value_106 = var_oldSCount;
CHECK_OBJECT(var_i);
tmp_subscript_value_42 = var_i;
tmp_ass_subvalue_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_106, tmp_subscript_value_42);
if (tmp_ass_subvalue_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_14);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_expression_value_107 = par_state;
tmp_ass_subscribed_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts.const_str_plain_sCount);
if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_14);

exception_lineno = 294;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_i);
tmp_add_expr_left_18 = var_i;
if (par_startLine == NULL) {
Py_DECREF(tmp_ass_subvalue_14);
Py_DECREF(tmp_ass_subscribed_14);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_add_expr_right_18 = par_startLine;
tmp_ass_subscript_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
if (tmp_ass_subscript_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_14);
Py_DECREF(tmp_ass_subscribed_14);

exception_lineno = 294;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
CHECK_OBJECT(tmp_ass_subscribed_14);
Py_DECREF(tmp_ass_subscribed_14);
CHECK_OBJECT(tmp_ass_subscript_14);
Py_DECREF(tmp_ass_subscript_14);
CHECK_OBJECT(tmp_ass_subvalue_14);
Py_DECREF(tmp_ass_subvalue_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
}
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_expression_value_108;
PyObject *tmp_subscript_value_43;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_expression_value_109;
PyObject *tmp_ass_subscript_15;
PyObject *tmp_add_expr_left_19;
PyObject *tmp_add_expr_right_19;
if (var_oldBSCount == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_oldBSCount);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_expression_value_108 = var_oldBSCount;
CHECK_OBJECT(var_i);
tmp_subscript_value_43 = var_i;
tmp_ass_subvalue_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_108, tmp_subscript_value_43);
if (tmp_ass_subvalue_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_15);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_expression_value_109 = par_state;
tmp_ass_subscribed_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts.const_str_plain_bsCount);
if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_15);

exception_lineno = 295;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_i);
tmp_add_expr_left_19 = var_i;
if (par_startLine == NULL) {
Py_DECREF(tmp_ass_subvalue_15);
Py_DECREF(tmp_ass_subscribed_15);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_startLine);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_add_expr_right_19 = par_startLine;
tmp_ass_subscript_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_19, tmp_add_expr_right_19);
if (tmp_ass_subscript_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_15);
Py_DECREF(tmp_ass_subscribed_15);

exception_lineno = 295;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
CHECK_OBJECT(tmp_ass_subscribed_15);
Py_DECREF(tmp_ass_subscribed_15);
CHECK_OBJECT(tmp_ass_subscript_15);
Py_DECREF(tmp_ass_subscript_15);
CHECK_OBJECT(tmp_ass_subvalue_15);
Py_DECREF(tmp_ass_subvalue_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto try_except_handler_12;
}
goto loop_start_5;
loop_end_5:;
goto try_end_12;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(var_oldIndent);
tmp_assattr_value_9 = var_oldIndent;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 297;
type_description_1 = "ooooooooooooboooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_9 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_blkIndent, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooooooooboooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote,
    type_description_1,
    par_state,
    par_startLine,
    par_endLine,
    par_silent,
    var_second_char,
    var_next_char,
    var_oldLineMax,
    var_pos,
    var_max,
    var_initial,
    var_offset,
    var_adjustTab,
    (int)var_spaceAfterMarker,
    var_oldBMarks,
    var_ch,
    var_oldBSCount,
    var_lastLineEmpty,
    var_oldSCount,
    var_oldTShift,
    var_terminatorRules,
    var_oldParentType,
    var_nextLine,
    var_isOutdented,
    var_evaluatesTrue,
    var_terminate,
    var_terminatorRule,
    var_oldIndent,
    var_token,
    var_lines,
    var_i,
    var_item
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote == cache_frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote);
    cache_frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_block$blockquote$$$function__1_blockquote);

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
Py_XDECREF(var_second_char);
var_second_char = NULL;
Py_XDECREF(var_next_char);
var_next_char = NULL;
CHECK_OBJECT(var_oldLineMax);
CHECK_OBJECT(var_oldLineMax);
Py_DECREF(var_oldLineMax);
var_oldLineMax = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_max);
var_max = NULL;
Py_XDECREF(var_initial);
var_initial = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_adjustTab);
var_adjustTab = NULL;
var_spaceAfterMarker = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_oldBMarks);
var_oldBMarks = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_oldBSCount);
var_oldBSCount = NULL;
Py_XDECREF(var_lastLineEmpty);
var_lastLineEmpty = NULL;
Py_XDECREF(var_oldSCount);
var_oldSCount = NULL;
Py_XDECREF(var_oldTShift);
var_oldTShift = NULL;
Py_XDECREF(var_terminatorRules);
var_terminatorRules = NULL;
Py_XDECREF(var_oldParentType);
var_oldParentType = NULL;
Py_XDECREF(var_nextLine);
var_nextLine = NULL;
Py_XDECREF(var_isOutdented);
var_isOutdented = NULL;
Py_XDECREF(var_evaluatesTrue);
var_evaluatesTrue = NULL;
Py_XDECREF(var_terminate);
var_terminate = NULL;
Py_XDECREF(var_terminatorRule);
var_terminatorRule = NULL;
Py_XDECREF(var_oldIndent);
var_oldIndent = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_item);
var_item = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_second_char);
var_second_char = NULL;
Py_XDECREF(var_next_char);
var_next_char = NULL;
Py_XDECREF(var_oldLineMax);
var_oldLineMax = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_max);
var_max = NULL;
Py_XDECREF(var_initial);
var_initial = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_adjustTab);
var_adjustTab = NULL;
var_spaceAfterMarker = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_oldBMarks);
var_oldBMarks = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_oldBSCount);
var_oldBSCount = NULL;
Py_XDECREF(var_lastLineEmpty);
var_lastLineEmpty = NULL;
Py_XDECREF(var_oldSCount);
var_oldSCount = NULL;
Py_XDECREF(var_oldTShift);
var_oldTShift = NULL;
Py_XDECREF(var_terminatorRules);
var_terminatorRules = NULL;
Py_XDECREF(var_oldParentType);
var_oldParentType = NULL;
Py_XDECREF(var_nextLine);
var_nextLine = NULL;
Py_XDECREF(var_isOutdented);
var_isOutdented = NULL;
Py_XDECREF(var_evaluatesTrue);
var_evaluatesTrue = NULL;
Py_XDECREF(var_terminate);
var_terminate = NULL;
Py_XDECREF(var_terminatorRule);
var_terminatorRule = NULL;
Py_XDECREF(var_oldIndent);
var_oldIndent = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_item);
var_item = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_startLine);
Py_DECREF(par_startLine);
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
CHECK_OBJECT(par_startLine);
Py_DECREF(par_startLine);
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



static PyObject *MAKE_FUNCTION_markdown_it$rules_block$blockquote$$$function__1_blockquote(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_block$blockquote$$$function__1_blockquote,
        mod_consts.const_str_plain_blockquote,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_473af2d1def7f2edd2d299d0bc82f019,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_block$blockquote,
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

static function_impl_code const function_table_markdown_it$rules_block$blockquote[] = {
impl_markdown_it$rules_block$blockquote$$$function__1_blockquote,
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

    return Nuitka_Function_GetFunctionState(function, function_table_markdown_it$rules_block$blockquote);
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
        module_markdown_it$rules_block$blockquote,
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
        function_table_markdown_it$rules_block$blockquote,
        sizeof(function_table_markdown_it$rules_block$blockquote) / sizeof(function_impl_code)
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
static char const *module_full_name = "markdown_it.rules_block.blockquote";
#endif

// Internal entry point for module code.
PyObject *module_code_markdown_it$rules_block$blockquote(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("markdown_it$rules_block$blockquote");

    // Store the module for future use.
    module_markdown_it$rules_block$blockquote = module;

    moduledict_markdown_it$rules_block$blockquote = MODULE_DICT(module_markdown_it$rules_block$blockquote);

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
        PRINT_STRING("markdown_it$rules_block$blockquote: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("markdown_it$rules_block$blockquote: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("markdown_it$rules_block$blockquote: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_block.blockquote" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmarkdown_it$rules_block$blockquote\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_markdown_it$rules_block$blockquote,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_block$blockquote,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_block$blockquote,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_block$blockquote,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_block$blockquote,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_markdown_it$rules_block$blockquote);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_markdown_it$rules_block$blockquote);
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

        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_block$blockquote;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_markdown_it$rules_block$blockquote = MAKE_MODULE_FRAME(code_objects_def276464c5b092524a4e231c7b6ae98, module_markdown_it$rules_block$blockquote);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_block$blockquote);
assert(Py_REFCNT(frame_frame_markdown_it$rules_block$blockquote) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_markdown_it$rules_block$blockquote$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_markdown_it$rules_block$blockquote$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_markdown_it$rules_block$blockquote;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_markdown_it$rules_block$blockquote->m_frame.f_lineno = 4;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499;
tmp_globals_arg_value_2 = (PyObject *)moduledict_markdown_it$rules_block$blockquote;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_isStrSpace_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_markdown_it$rules_block$blockquote->m_frame.f_lineno = 6;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_markdown_it$rules_block$blockquote,
        mod_consts.const_str_plain_isStrSpace,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_isStrSpace);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_isStrSpace, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_state_block;
tmp_globals_arg_value_3 = (PyObject *)moduledict_markdown_it$rules_block$blockquote;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_StateBlock_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_markdown_it$rules_block$blockquote->m_frame.f_lineno = 7;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_markdown_it$rules_block$blockquote,
        mod_consts.const_str_plain_StateBlock,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_StateBlock);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_StateBlock, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_markdown_it$rules_block$blockquote$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 9;

    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_block$blockquote->m_frame.f_lineno = 9;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_24f2f0fae48bf44baa81d3716423a360_tuple, 0)
);

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_LOGGER, tmp_assign_source_8);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_block$blockquote, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_block$blockquote->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_block$blockquote, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_markdown_it$rules_block$blockquote);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_9dcdb1c033492f563e0ef94c1d6683b2);

tmp_assign_source_9 = MAKE_FUNCTION_markdown_it$rules_block$blockquote$$$function__1_blockquote(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)mod_consts.const_str_plain_blockquote, tmp_assign_source_9);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("markdown_it$rules_block$blockquote", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_block.blockquote" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_markdown_it$rules_block$blockquote);
    return module_markdown_it$rules_block$blockquote;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_block$blockquote, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("markdown_it$rules_block$blockquote", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

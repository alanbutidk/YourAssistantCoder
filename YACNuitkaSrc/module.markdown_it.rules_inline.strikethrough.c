/* Generated code for Python module 'markdown_it$rules_inline$strikethrough'
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



/* The "module_markdown_it$rules_inline$strikethrough" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_markdown_it$rules_inline$strikethrough;
PyDictObject *moduledict_markdown_it$rules_inline$strikethrough;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_pos;
PyObject *const_str_plain_src;
PyObject *const_str_chr_126;
PyObject *const_str_plain_scanDelims;
PyObject *const_str_plain_length;
PyObject *const_int_pos_2;
PyObject *const_str_plain_push;
PyObject *const_tuple_str_plain_text_str_empty_int_0_tuple;
PyObject *const_str_plain_content;
PyObject *const_str_plain_i;
PyObject *const_str_plain_state;
PyObject *const_str_plain_ch;
PyObject *const_str_plain_delimiters;
PyObject *const_str_plain_append;
PyObject *const_str_plain_Delimiter;
PyObject *const_str_plain_tokens;
PyObject *const_str_plain_scanned;
PyObject *const_str_plain_can_open;
PyObject *const_str_plain_can_close;
PyObject *const_tuple_ae8f5ca67bd60e6b92c994f3625f8b41_tuple;
PyObject *const_str_digest_dab8e28213d02e31ea372c11337ed8e7;
PyObject *const_str_plain_marker;
PyObject *const_int_pos_126;
PyObject *const_str_plain_token;
PyObject *const_str_plain_s_open;
PyObject *const_str_plain_s;
PyObject *const_str_plain_tag;
PyObject *const_str_plain_nesting;
PyObject *const_str_digest_c71dc92ff6973e5f9480948ae9b052bd;
PyObject *const_str_plain_markup;
PyObject *const_str_plain_s_close;
PyObject *const_str_plain_text;
PyObject *const_str_plain_loneMarkers;
PyObject *const_str_plain_j;
PyObject *const_str_plain_tokens_meta;
PyObject *const_str_plain__postProcess;
PyObject *const_str_plain_curr;
PyObject *const_str_plain_curr_meta;
PyObject *const_str_digest_056eb76583ddf3ce8ac1fdf6f6504591;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_state_inline;
PyObject *const_tuple_str_plain_Delimiter_str_plain_StateInline_tuple;
PyObject *const_str_plain_StateInline;
PyObject *const_dict_4f80fc3560b4028bf862f0fb5923ab39;
PyObject *const_str_plain_tokenize;
PyObject *const_dict_3192b5c58b32eb825f13079cae49f470;
PyObject *const_dict_cfbb4f58f9571197e34ff5758d06bfce;
PyObject *const_str_plain_postProcess;
PyObject *const_str_digest_747bbf2e78909e4645079538ead3db72;
PyObject *const_str_digest_9cb180ec6475f2574dd9202ceb33c713;
PyObject *const_tuple_8f0e9b05de6f7ccc9ce61ae69946f2e0_tuple;
PyObject *const_tuple_8f5f74bc78e999f1d52a4f01a4538d28_tuple;
PyObject *const_tuple_f6f584bd0168608ee1d0f077dd0e106a_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[55];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("markdown_it.rules_inline.strikethrough"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_pos);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_src);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_chr_126);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_scanDelims);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_length);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_push);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_str_empty_int_0_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_i);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_ch);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_delimiters);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_Delimiter);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokens);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_scanned);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_can_open);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_can_close);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_ae8f5ca67bd60e6b92c994f3625f8b41_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_dab8e28213d02e31ea372c11337ed8e7);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_marker);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_int_pos_126);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_s_open);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_s);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_tag);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_nesting);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_c71dc92ff6973e5f9480948ae9b052bd);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_markup);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_s_close);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_loneMarkers);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_j);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokens_meta);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__postProcess);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_curr);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_curr_meta);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_056eb76583ddf3ce8ac1fdf6f6504591);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_state_inline);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Delimiter_str_plain_StateInline_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_StateInline);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_dict_4f80fc3560b4028bf862f0fb5923ab39);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_dict_3192b5c58b32eb825f13079cae49f470);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_cfbb4f58f9571197e34ff5758d06bfce);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_postProcess);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_747bbf2e78909e4645079538ead3db72);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_9cb180ec6475f2574dd9202ceb33c713);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_8f0e9b05de6f7ccc9ce61ae69946f2e0_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_8f5f74bc78e999f1d52a4f01a4538d28_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_f6f584bd0168608ee1d0f077dd0e106a_tuple);
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
void checkModuleConstants_markdown_it$rules_inline$strikethrough(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_pos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pos);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_src));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_chr_126));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_126);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_scanDelims));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scanDelims);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_length);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_push));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_push);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_str_empty_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_text_str_empty_int_0_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_i));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_i);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_ch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ch);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_delimiters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delimiters);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_Delimiter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Delimiter);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokens);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_scanned));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scanned);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_can_open));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_can_open);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_can_close));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_can_close);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_ae8f5ca67bd60e6b92c994f3625f8b41_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ae8f5ca67bd60e6b92c994f3625f8b41_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_dab8e28213d02e31ea372c11337ed8e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dab8e28213d02e31ea372c11337ed8e7);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_marker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_marker);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_int_pos_126));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_126);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_s_open));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_s_open);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_s));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_s);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_tag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tag);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_nesting));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nesting);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_c71dc92ff6973e5f9480948ae9b052bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c71dc92ff6973e5f9480948ae9b052bd);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_markup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_markup);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_s_close));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_s_close);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_loneMarkers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loneMarkers);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_j));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_j);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokens_meta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokens_meta);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__postProcess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__postProcess);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_curr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_curr);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_curr_meta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_curr_meta);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_056eb76583ddf3ce8ac1fdf6f6504591));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_056eb76583ddf3ce8ac1fdf6f6504591);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_state_inline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state_inline);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Delimiter_str_plain_StateInline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Delimiter_str_plain_StateInline_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_StateInline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StateInline);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_dict_4f80fc3560b4028bf862f0fb5923ab39));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4f80fc3560b4028bf862f0fb5923ab39);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokenize);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_dict_3192b5c58b32eb825f13079cae49f470));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3192b5c58b32eb825f13079cae49f470);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_cfbb4f58f9571197e34ff5758d06bfce));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cfbb4f58f9571197e34ff5758d06bfce);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_postProcess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_postProcess);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_747bbf2e78909e4645079538ead3db72));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_747bbf2e78909e4645079538ead3db72);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_9cb180ec6475f2574dd9202ceb33c713));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9cb180ec6475f2574dd9202ceb33c713);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_8f0e9b05de6f7ccc9ce61ae69946f2e0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8f0e9b05de6f7ccc9ce61ae69946f2e0_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_8f5f74bc78e999f1d52a4f01a4538d28_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8f5f74bc78e999f1d52a4f01a4538d28_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_f6f584bd0168608ee1d0f077dd0e106a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f6f584bd0168608ee1d0f077dd0e106a_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
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
static PyObject *module_var_accessor_markdown_it$rules_inline$strikethrough$Delimiter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_inline$strikethrough->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_inline$strikethrough->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)mod_consts.const_str_plain_Delimiter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_inline$strikethrough->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Delimiter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Delimiter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Delimiter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Delimiter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)mod_consts.const_str_plain_Delimiter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)mod_consts.const_str_plain_Delimiter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Delimiter);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_inline$strikethrough$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_inline$strikethrough->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_inline$strikethrough->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_inline$strikethrough->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_inline$strikethrough$_postProcess(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_inline$strikethrough->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_inline$strikethrough->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)mod_consts.const_str_plain__postProcess);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_inline$strikethrough->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__postProcess);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__postProcess, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__postProcess);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__postProcess, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)mod_consts.const_str_plain__postProcess);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)mod_consts.const_str_plain__postProcess);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__postProcess);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_59bc738eba4f63b9037da0a7709150f8;
static PyCodeObject *code_objects_fa9a7f5673235b3fa6530bbccd584502;
static PyCodeObject *code_objects_6e5524b218031012dfca9ffdcca0e651;
static PyCodeObject *code_objects_566d4370948a602d4fc2b9ec01a95485;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_747bbf2e78909e4645079538ead3db72); CHECK_OBJECT(module_filename_obj);
code_objects_59bc738eba4f63b9037da0a7709150f8 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_9cb180ec6475f2574dd9202ceb33c713, mod_consts.const_str_digest_9cb180ec6475f2574dd9202ceb33c713, NULL, NULL, 0, 0, 0);
code_objects_fa9a7f5673235b3fa6530bbccd584502 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__postProcess, mod_consts.const_str_plain__postProcess, mod_consts.const_tuple_8f0e9b05de6f7ccc9ce61ae69946f2e0_tuple, NULL, 2, 0, 0);
code_objects_6e5524b218031012dfca9ffdcca0e651 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_postProcess, mod_consts.const_str_plain_postProcess, mod_consts.const_tuple_8f5f74bc78e999f1d52a4f01a4538d28_tuple, NULL, 1, 0, 0);
code_objects_566d4370948a602d4fc2b9ec01a95485 = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_tokenize, mod_consts.const_str_plain_tokenize, mod_consts.const_tuple_f6f584bd0168608ee1d0f077dd0e106a_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_markdown_it$rules_inline$strikethrough$$$function__1_tokenize(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$rules_inline$strikethrough$$$function__2__postProcess(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$rules_inline$strikethrough$$$function__3_postProcess(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_markdown_it$rules_inline$strikethrough$$$function__1_tokenize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *par_silent = python_pars[1];
PyObject *var_start = NULL;
PyObject *var_ch = NULL;
PyObject *var_scanned = NULL;
PyObject *var_length = NULL;
PyObject *var_token = NULL;
PyObject *var_i = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize = MAKE_FUNCTION_FRAME(tstate, code_objects_566d4370948a602d4fc2b9ec01a95485, module_markdown_it$rules_inline$strikethrough, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize->m_type_description == NULL);
frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize = cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize);
assert(Py_REFCNT(frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_state);
tmp_expression_value_1 = par_state;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pos);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_start == NULL);
var_start = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_state);
tmp_expression_value_3 = par_state;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_src);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_start);
tmp_subscript_value_1 = var_start;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_ch == NULL);
var_ch = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_silent);
tmp_truth_name_1 = CHECK_IF_TRUE(par_silent);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;
type_description_1 = "oooooooo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_1 = var_ch;
tmp_cmp_expr_right_1 = mod_consts.const_str_chr_126;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_state);
tmp_expression_value_4 = par_state;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_scanDelims);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_expression_value_5 = par_state;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_pos);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 18;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = Py_True;
frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize->m_frame.f_lineno = 18;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_scanned == NULL);
var_scanned = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_scanned);
tmp_expression_value_6 = var_scanned;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_length);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_length == NULL);
var_length = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_length);
tmp_cmp_expr_left_2 = var_length;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_2;
tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
CHECK_OBJECT(var_length);
tmp_mod_expr_left_1 = var_length;
tmp_mod_expr_right_1 = mod_consts.const_int_pos_2;
tmp_condition_result_4 = BINARY_OPERATION_MOD_NBOOL_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oooooooo";
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
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_state);
tmp_called_instance_1 = par_state;
frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize->m_frame.f_lineno = 25;
tmp_assign_source_5 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_text_str_empty_int_0_tuple, 0)
);

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_5;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_ch);
tmp_assattr_value_1 = var_ch;
CHECK_OBJECT(var_token);
tmp_assattr_target_1 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_content, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
CHECK_OBJECT(var_length);
tmp_isub_expr_left_1 = var_length;
tmp_isub_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = tmp_isub_expr_left_1;
var_length = tmp_assign_source_6;

}
branch_no_4:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = const_int_0;
assert(var_i == NULL);
Py_INCREF(tmp_assign_source_7);
var_i = tmp_assign_source_7;
}
loop_start_1:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 30;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = var_i;
if (var_length == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 30;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_3 = var_length;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooooooo";
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
goto loop_end_1;
branch_no_5:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_2;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 31;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = par_state;
frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize->m_frame.f_lineno = 31;
tmp_assign_source_8 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_text_str_empty_int_0_tuple, 0)
);

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_assattr_target_2;
if (var_ch == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ch);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 32;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_1 = var_ch;
if (var_ch == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ch);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 32;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_right_1 = var_ch;
tmp_assattr_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_assattr_target_2 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_content, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_ord_arg_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_expression_value_11;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 33;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_state;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_delimiters);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_markdown_it$rules_inline$strikethrough$Delimiter(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Delimiter);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 34;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (var_ch == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ch);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 35;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_ord_arg_1 = var_ch;
tmp_kw_call_value_0_1 = BUILTIN_ORD(tmp_ord_arg_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 35;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = const_int_0;
if (par_state == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 37;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_state;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_tokens);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 37;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 37;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = 1;
tmp_kw_call_value_2_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
assert(!(tmp_kw_call_value_2_1 == NULL));
tmp_kw_call_value_3_1 = const_int_neg_1;
if (var_scanned == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scanned);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 39;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = var_scanned;
tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_can_open);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 39;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (var_scanned == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_4_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scanned);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 40;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = var_scanned;
tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_can_close);
if (tmp_kw_call_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_4_1);

exception_lineno = 40;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize->m_frame.f_lineno = 34;
{
    PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

    tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_ae8f5ca67bd60e6b92c994f3625f8b41_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
CHECK_OBJECT(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_5_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 34;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize->m_frame.f_lineno = 33;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_1;
nuitka_digit tmp_iadd_expr_right_1;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 44;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_i;
tmp_iadd_expr_right_1 = 2;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_9 = tmp_iadd_expr_left_1;
var_i = tmp_assign_source_9;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_12;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 46;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_state;
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_pos);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_2 = tmp_inplace_assign_1__value;
if (var_scanned == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scanned);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 46;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_13 = var_scanned;
tmp_iadd_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_length);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_11 = tmp_iadd_expr_left_2;
tmp_inplace_assign_1__value = tmp_assign_source_11;

}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_3 = tmp_inplace_assign_1__value;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 46;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_assattr_target_3 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_pos, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooo";
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
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize,
    type_description_1,
    par_state,
    par_silent,
    var_start,
    var_ch,
    var_scanned,
    var_length,
    var_token,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize == cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize);
    cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_inline$strikethrough$$$function__1_tokenize);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_start);
CHECK_OBJECT(var_start);
Py_DECREF(var_start);
var_start = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_scanned);
var_scanned = NULL;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_i);
var_i = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_scanned);
var_scanned = NULL;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_i);
var_i = NULL;
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
CHECK_OBJECT(par_silent);
Py_DECREF(par_silent);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_silent);
Py_DECREF(par_silent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$rules_inline$strikethrough$$$function__2__postProcess(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *par_delimiters = python_pars[1];
PyObject *var_loneMarkers = NULL;
PyObject *var_maximum = NULL;
PyObject *var_i = NULL;
PyObject *var_startDelim = NULL;
PyObject *var_endDelim = NULL;
PyObject *var_token = NULL;
PyObject *var_j = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_loneMarkers == NULL);
var_loneMarkers = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess = MAKE_FUNCTION_FRAME(tstate, code_objects_fa9a7f5673235b3fa6530bbccd584502, module_markdown_it$rules_inline$strikethrough, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess->m_type_description == NULL);
frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess = cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess);
assert(Py_REFCNT(frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_delimiters);
tmp_len_arg_1 = par_delimiters;
tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_maximum == NULL);
var_maximum = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_0;
assert(var_i == NULL);
Py_INCREF(tmp_assign_source_3);
var_i = tmp_assign_source_3;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = var_i;
CHECK_OBJECT(var_maximum);
tmp_cmp_expr_right_1 = var_maximum;
tmp_condition_result_1 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
tmp_condition_result_1 = !tmp_condition_result_1;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_delimiters);
tmp_expression_value_1 = par_delimiters;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_1 = var_i;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_startDelim;
    var_startDelim = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_startDelim);
tmp_expression_value_2 = var_startDelim;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_marker);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_126;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_5;
PyObject *tmp_iadd_expr_left_1;
nuitka_digit tmp_iadd_expr_right_1;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 60;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_i;
tmp_iadd_expr_right_1 = 1;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_5 = tmp_iadd_expr_left_1;
var_i = tmp_assign_source_5;

}
goto loop_start_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_startDelim);
tmp_expression_value_3 = var_startDelim;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_end);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_neg_1;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_iadd_expr_left_2;
nuitka_digit tmp_iadd_expr_right_2;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 64;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_i;
tmp_iadd_expr_right_2 = 1;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
assert(!(tmp_result == false));
tmp_assign_source_6 = tmp_iadd_expr_left_2;
var_i = tmp_assign_source_6;

}
goto loop_start_1;
branch_no_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_delimiters);
tmp_expression_value_4 = par_delimiters;
CHECK_OBJECT(var_startDelim);
tmp_expression_value_5 = var_startDelim;
tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_end);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_endDelim;
    var_endDelim = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_8;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 69;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = par_state;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_startDelim);
tmp_expression_value_8 = var_startDelim;
tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_token);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_6);

exception_lineno = 69;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = mod_consts.const_str_plain_s_open;
CHECK_OBJECT(var_token);
tmp_assattr_target_1 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain_type, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = mod_consts.const_str_plain_s;
CHECK_OBJECT(var_token);
tmp_assattr_target_2 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_tag, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = const_int_pos_1;
CHECK_OBJECT(var_token);
tmp_assattr_target_3 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_nesting, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = mod_consts.const_str_digest_c71dc92ff6973e5f9480948ae9b052bd;
CHECK_OBJECT(var_token);
tmp_assattr_target_4 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_markup, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = const_str_empty;
CHECK_OBJECT(var_token);
tmp_assattr_target_5 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_content, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_11;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 76;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_state;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_endDelim);
tmp_expression_value_11 = var_endDelim;
tmp_subscript_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_token);
if (tmp_subscript_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_9);

exception_lineno = 76;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    assert(old != NULL);
    var_token = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = mod_consts.const_str_plain_s_close;
CHECK_OBJECT(var_token);
tmp_assattr_target_6 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, const_str_plain_type, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = mod_consts.const_str_plain_s;
CHECK_OBJECT(var_token);
tmp_assattr_target_7 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_tag, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = const_int_neg_1;
CHECK_OBJECT(var_token);
tmp_assattr_target_8 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_nesting, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
tmp_assattr_value_9 = mod_consts.const_str_digest_c71dc92ff6973e5f9480948ae9b052bd;
CHECK_OBJECT(var_token);
tmp_assattr_target_9 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_markup, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
tmp_assattr_value_10 = const_str_empty;
CHECK_OBJECT(var_token);
tmp_assattr_target_10 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_content, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_5;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_6;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_19;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = par_state;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_endDelim);
tmp_expression_value_15 = var_endDelim;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_token);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_13);

exception_lineno = 84;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_subscript_value_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_subscript_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_13);

exception_lineno = 84;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_text;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooo";
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

exception_lineno = 85;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_18 = par_state;
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_endDelim);
tmp_expression_value_19 = var_endDelim;
tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_token);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_17);

exception_lineno = 85;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_subscript_value_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_subscript_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_17);

exception_lineno = 85;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_chr_126;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooo";
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_expression_value_20;
if (var_loneMarkers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loneMarkers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 87;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_1 = var_loneMarkers;
CHECK_OBJECT(var_endDelim);
tmp_expression_value_20 = var_endDelim;
tmp_sub_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_token);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_item_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_4:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_3;
nuitka_digit tmp_iadd_expr_right_3;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 89;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_3 = var_i;
tmp_iadd_expr_right_3 = 1;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
assert(!(tmp_result == false));
tmp_assign_source_10 = tmp_iadd_expr_left_3;
var_i = tmp_assign_source_10;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
loop_start_2:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
if (var_loneMarkers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loneMarkers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 97;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = var_loneMarkers;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooo";
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
goto loop_end_2;
branch_no_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_list_arg_value_2;
if (var_loneMarkers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loneMarkers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 98;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_2 = var_loneMarkers;
tmp_assign_source_11 = LIST_POP1(tstate, tmp_list_arg_value_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_i);
tmp_add_expr_left_1 = var_i;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_j;
    var_j = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
loop_start_3:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_21;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_7;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_6 = var_j;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_21 = par_state;
tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_tokens);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 101;
type_description_1 = "ooooooooo";
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
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_24 = par_state;
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (var_j == NULL) {
Py_DECREF(tmp_expression_value_23);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_7 = var_j;
tmp_expression_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = mod_consts.const_str_plain_s_close;
tmp_and_right_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_and_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_operand_value_2 = tmp_and_left_value_2;
and_end_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
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
goto loop_end_3;
branch_no_6:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_4 = var_j;
tmp_iadd_expr_right_4 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = tmp_iadd_expr_left_4;
var_j = tmp_assign_source_13;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_3;
loop_end_3:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_isub_expr_left_1 = var_j;
tmp_isub_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = tmp_isub_expr_left_1;
var_j = tmp_assign_source_14;

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_i);
tmp_cmp_expr_left_8 = var_i;
CHECK_OBJECT(var_j);
tmp_cmp_expr_right_8 = var_j;
tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_8;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 107;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_26 = par_state;
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_j);
tmp_subscript_value_8 = var_j;
tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_9;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_29;
PyObject *tmp_ass_subscript_1;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 108;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_28 = par_state;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_i);
tmp_subscript_value_9 = var_i;
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 108;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_29 = par_state;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_tokens);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 108;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_j);
tmp_ass_subscript_1 = var_j;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_30;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_token);
tmp_ass_subvalue_2 = var_token;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 109;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_30 = par_state;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_tokens);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_i);
tmp_ass_subscript_2 = var_i;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_2;
loop_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess,
    type_description_1,
    par_state,
    par_delimiters,
    var_loneMarkers,
    var_maximum,
    var_i,
    var_startDelim,
    var_endDelim,
    var_token,
    var_j
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess == cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess);
    cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_inline$strikethrough$$$function__2__postProcess);

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
Py_XDECREF(var_loneMarkers);
var_loneMarkers = NULL;
CHECK_OBJECT(var_maximum);
CHECK_OBJECT(var_maximum);
Py_DECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_startDelim);
var_startDelim = NULL;
Py_XDECREF(var_endDelim);
var_endDelim = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_j);
var_j = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_loneMarkers);
var_loneMarkers = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_startDelim);
var_startDelim = NULL;
Py_XDECREF(var_endDelim);
var_endDelim = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_j);
var_j = NULL;
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
CHECK_OBJECT(par_delimiters);
Py_DECREF(par_delimiters);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_delimiters);
Py_DECREF(par_delimiters);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$rules_inline$strikethrough$$$function__3_postProcess(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *var_tokens_meta = NULL;
PyObject *var_maximum = NULL;
PyObject *var_curr = NULL;
PyObject *var_curr_meta = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess = MAKE_FUNCTION_FRAME(tstate, code_objects_6e5524b218031012dfca9ffdcca0e651, module_markdown_it$rules_inline$strikethrough, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess->m_type_description == NULL);
frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess = cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess);
assert(Py_REFCNT(frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_state);
tmp_expression_value_1 = par_state;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_tokens_meta);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_tokens_meta == NULL);
var_tokens_meta = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_state);
tmp_expression_value_2 = par_state;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_tokens_meta);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_maximum == NULL);
var_maximum = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_markdown_it$rules_inline$strikethrough$_postProcess(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__postProcess);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_args_element_value_1 = par_state;
CHECK_OBJECT(par_state);
tmp_expression_value_3 = par_state;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_delimiters);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess->m_frame.f_lineno = 116;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_0;
assert(var_curr == NULL);
Py_INCREF(tmp_assign_source_3);
var_curr = tmp_assign_source_3;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_curr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_curr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 119;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = var_curr;
CHECK_OBJECT(var_maximum);
tmp_cmp_expr_right_1 = var_maximum;
tmp_condition_result_1 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
tmp_condition_result_1 = !tmp_condition_result_1;
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
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_tokens_meta);
tmp_expression_value_4 = var_tokens_meta;
if (var_curr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_curr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 121;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_subscript_value_1 = var_curr;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_curr_meta;
    var_curr_meta = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_6;
}
// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_IndexError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
    exception_lineno = 120;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess->m_frame)) {
        frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_3;
branch_no_2:;
goto try_end_2;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_try_except_1__unhandled_indicator;
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
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (var_curr_meta == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_curr_meta);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 125;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_curr_meta);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_cmp_expr_left_4 = mod_consts.const_str_plain_delimiters;
if (var_curr_meta == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_curr_meta);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 125;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_4 = var_curr_meta;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
tmp_called_value_2 = module_var_accessor_markdown_it$rules_inline$strikethrough$_postProcess(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__postProcess);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 126;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = par_state;
if (var_curr_meta == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_curr_meta);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 126;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = var_curr_meta;
tmp_subscript_value_2 = mod_consts.const_str_plain_delimiters;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess->m_frame.f_lineno = 126;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
branch_no_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iadd_expr_left_1;
nuitka_digit tmp_iadd_expr_right_1;
if (var_curr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_curr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 127;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_curr;
tmp_iadd_expr_right_1 = 1;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_7 = tmp_iadd_expr_left_1;
var_curr = tmp_assign_source_7;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess,
    type_description_1,
    par_state,
    var_tokens_meta,
    var_maximum,
    var_curr,
    var_curr_meta
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess == cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess);
    cache_frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_inline$strikethrough$$$function__3_postProcess);

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
CHECK_OBJECT(var_tokens_meta);
CHECK_OBJECT(var_tokens_meta);
Py_DECREF(var_tokens_meta);
var_tokens_meta = NULL;
CHECK_OBJECT(var_maximum);
CHECK_OBJECT(var_maximum);
Py_DECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_curr);
var_curr = NULL;
Py_XDECREF(var_curr_meta);
var_curr_meta = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tokens_meta);
var_tokens_meta = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_curr);
var_curr = NULL;
Py_XDECREF(var_curr_meta);
var_curr_meta = NULL;
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



static PyObject *MAKE_FUNCTION_markdown_it$rules_inline$strikethrough$$$function__1_tokenize(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_inline$strikethrough$$$function__1_tokenize,
        mod_consts.const_str_plain_tokenize,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_566d4370948a602d4fc2b9ec01a95485,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_inline$strikethrough,
        mod_consts.const_str_digest_dab8e28213d02e31ea372c11337ed8e7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_inline$strikethrough$$$function__2__postProcess(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_inline$strikethrough$$$function__2__postProcess,
        mod_consts.const_str_plain__postProcess,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fa9a7f5673235b3fa6530bbccd584502,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_inline$strikethrough,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_inline$strikethrough$$$function__3_postProcess(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_inline$strikethrough$$$function__3_postProcess,
        mod_consts.const_str_plain_postProcess,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6e5524b218031012dfca9ffdcca0e651,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_inline$strikethrough,
        mod_consts.const_str_digest_056eb76583ddf3ce8ac1fdf6f6504591,
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

static function_impl_code const function_table_markdown_it$rules_inline$strikethrough[] = {
impl_markdown_it$rules_inline$strikethrough$$$function__1_tokenize,
impl_markdown_it$rules_inline$strikethrough$$$function__2__postProcess,
impl_markdown_it$rules_inline$strikethrough$$$function__3_postProcess,
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

    return Nuitka_Function_GetFunctionState(function, function_table_markdown_it$rules_inline$strikethrough);
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
        module_markdown_it$rules_inline$strikethrough,
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
        function_table_markdown_it$rules_inline$strikethrough,
        sizeof(function_table_markdown_it$rules_inline$strikethrough) / sizeof(function_impl_code)
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
static char const *module_full_name = "markdown_it.rules_inline.strikethrough";
#endif

// Internal entry point for module code.
PyObject *module_code_markdown_it$rules_inline$strikethrough(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("markdown_it$rules_inline$strikethrough");

    // Store the module for future use.
    module_markdown_it$rules_inline$strikethrough = module;

    moduledict_markdown_it$rules_inline$strikethrough = MODULE_DICT(module_markdown_it$rules_inline$strikethrough);

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
        PRINT_STRING("markdown_it$rules_inline$strikethrough: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("markdown_it$rules_inline$strikethrough: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("markdown_it$rules_inline$strikethrough: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_inline.strikethrough" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmarkdown_it$rules_inline$strikethrough\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_markdown_it$rules_inline$strikethrough,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_inline$strikethrough,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_inline$strikethrough,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_inline$strikethrough,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_inline$strikethrough,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_markdown_it$rules_inline$strikethrough);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_markdown_it$rules_inline$strikethrough);
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

        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_inline$strikethrough;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_markdown_it$rules_inline$strikethrough = MAKE_MODULE_FRAME(code_objects_59bc738eba4f63b9037da0a7709150f8, module_markdown_it$rules_inline$strikethrough);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_inline$strikethrough);
assert(Py_REFCNT(frame_frame_markdown_it$rules_inline$strikethrough) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_markdown_it$rules_inline$strikethrough$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_markdown_it$rules_inline$strikethrough$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_state_inline;
tmp_globals_arg_value_1 = (PyObject *)moduledict_markdown_it$rules_inline$strikethrough;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Delimiter_str_plain_StateInline_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_markdown_it$rules_inline$strikethrough->m_frame.f_lineno = 4;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

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
        (PyObject *)moduledict_markdown_it$rules_inline$strikethrough,
        mod_consts.const_str_plain_Delimiter,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Delimiter);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)mod_consts.const_str_plain_Delimiter, tmp_assign_source_6);
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
        (PyObject *)moduledict_markdown_it$rules_inline$strikethrough,
        mod_consts.const_str_plain_StateInline,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_StateInline);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)mod_consts.const_str_plain_StateInline, tmp_assign_source_7);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_inline$strikethrough, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_inline$strikethrough->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_inline$strikethrough, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_markdown_it$rules_inline$strikethrough);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_4f80fc3560b4028bf862f0fb5923ab39);

tmp_assign_source_8 = MAKE_FUNCTION_markdown_it$rules_inline$strikethrough$$$function__1_tokenize(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_3192b5c58b32eb825f13079cae49f470);

tmp_assign_source_9 = MAKE_FUNCTION_markdown_it$rules_inline$strikethrough$$$function__2__postProcess(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)mod_consts.const_str_plain__postProcess, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_cfbb4f58f9571197e34ff5758d06bfce);

tmp_assign_source_10 = MAKE_FUNCTION_markdown_it$rules_inline$strikethrough$$$function__3_postProcess(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)mod_consts.const_str_plain_postProcess, tmp_assign_source_10);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("markdown_it$rules_inline$strikethrough", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_inline.strikethrough" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_markdown_it$rules_inline$strikethrough);
    return module_markdown_it$rules_inline$strikethrough;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$strikethrough, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("markdown_it$rules_inline$strikethrough", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

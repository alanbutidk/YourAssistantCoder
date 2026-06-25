/* Generated code for Python module 'textual$_wrap'
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



/* The "module_textual$_wrap" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$_wrap;
PyDictObject *moduledict_textual$_wrap;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_409e4a2f70e288fdd1716b150935a720;
PyObject *const_str_plain_re_chunk;
PyObject *const_str_plain_match;
PyObject *const_str_plain_text;
PyObject *const_str_plain_span;
PyObject *const_str_plain_group;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_chunks;
PyObject *const_str_plain_min;
PyObject *const_str_plain_get_tab_widths;
PyObject *const_str_plain_append;
PyObject *const_str_plain_cell_len;
PyObject *const_str_plain_extend;
PyObject *const_str_plain_loop_last;
PyObject *const_str_plain_cumulative_width;
PyObject *const_str_plain_record_widths;
PyObject *const_str_plain_cumulative_widths;
PyObject *const_str_plain__cell_len;
PyObject *const_str_plain_width;
PyObject *const_str_plain_cell_offset;
PyObject *const_str_plain_get_character_cell_size;
PyObject *const_list_list_empty_list;
PyObject *const_str_chr_9;
PyObject *const_str_plain_tab_section_index;
PyObject *const_str_plain__get_character_cell_size;
PyObject *const_str_plain_total_width;
PyObject *const_str_plain_append_new_line;
PyObject *const_str_plain_append_to_last_line;
PyObject *const_str_plain_start;
PyObject *const_str_digest_519df3a58c330a3663c70274a9537a90;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_re;
PyObject *const_str_plain_Iterable;
PyObject *const_str_digest_5b4d55d96b197250876c5eb0d13fffc3;
PyObject *const_tuple_str_plain_get_character_cell_size_tuple;
PyObject *const_str_digest_530c01c80aab9c9c2c004128391b54d7;
PyObject *const_tuple_str_plain_cell_len_tuple;
PyObject *const_str_digest_a6da3bd17113556c2b86c61d3621fb86;
PyObject *const_tuple_str_plain_loop_last_tuple;
PyObject *const_str_digest_f28a7585304c68d85d8524ee4e2770f4;
PyObject *const_tuple_str_plain_get_tab_widths_tuple;
PyObject *const_tuple_str_digest_e3ef4c6b84e3b1e7e9daa33763f01851_tuple;
PyObject *const_dict_83b3d8156cce3c541b56c407fc0106fa;
PyObject *const_tuple_true_none_tuple;
PyObject *const_dict_a2ce646678f19c688ea43ed8292f26f5;
PyObject *const_str_plain_compute_wrap_offsets;
PyObject *const_str_digest_b5edf6c74d9ddba8857b12106313b3ba;
PyObject *const_str_digest_9d6f2e3c9928e63ddf155d99a6dd950e;
PyObject *const_tuple_bb4159b1257b8af46c179c8e5969488f_tuple;
PyObject *const_tuple_f08665468292bf852bdc84928a1998cd_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[52];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual._wrap"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_409e4a2f70e288fdd1716b150935a720);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_re_chunk);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_span);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunks);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_tab_widths);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_cell_len);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_extend);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_loop_last);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_cumulative_width);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_record_widths);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_cumulative_widths);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__cell_len);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_cell_offset);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_character_cell_size);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_list_list_empty_list);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_chr_9);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_tab_section_index);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_character_cell_size);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_total_width);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_append_new_line);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_append_to_last_line);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_519df3a58c330a3663c70274a9537a90);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b4d55d96b197250876c5eb0d13fffc3);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_character_cell_size_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_530c01c80aab9c9c2c004128391b54d7);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cell_len_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6da3bd17113556c2b86c61d3621fb86);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_loop_last_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_f28a7585304c68d85d8524ee4e2770f4);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_tab_widths_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e3ef4c6b84e3b1e7e9daa33763f01851_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_dict_83b3d8156cce3c541b56c407fc0106fa);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_true_none_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_dict_a2ce646678f19c688ea43ed8292f26f5);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_compute_wrap_offsets);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_b5edf6c74d9ddba8857b12106313b3ba);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d6f2e3c9928e63ddf155d99a6dd950e);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_bb4159b1257b8af46c179c8e5969488f_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_f08665468292bf852bdc84928a1998cd_tuple);
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
void checkModuleConstants_textual$_wrap(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_409e4a2f70e288fdd1716b150935a720));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_409e4a2f70e288fdd1716b150935a720);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_re_chunk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re_chunk);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_span));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_span);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunks);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_tab_widths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_tab_widths);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_cell_len));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cell_len);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_extend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extend);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_loop_last));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loop_last);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_cumulative_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cumulative_width);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_record_widths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_record_widths);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_cumulative_widths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cumulative_widths);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__cell_len));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cell_len);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_width);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_cell_offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cell_offset);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_character_cell_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_character_cell_size);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_list_list_empty_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_list_empty_list);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_chr_9));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_9);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_tab_section_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tab_section_index);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_character_cell_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_character_cell_size);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_total_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_total_width);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_append_new_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append_new_line);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_append_to_last_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append_to_last_line);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_519df3a58c330a3663c70274a9537a90));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_519df3a58c330a3663c70274a9537a90);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b4d55d96b197250876c5eb0d13fffc3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b4d55d96b197250876c5eb0d13fffc3);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_character_cell_size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_character_cell_size_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_530c01c80aab9c9c2c004128391b54d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_530c01c80aab9c9c2c004128391b54d7);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cell_len_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cell_len_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6da3bd17113556c2b86c61d3621fb86));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6da3bd17113556c2b86c61d3621fb86);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_loop_last_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_loop_last_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_f28a7585304c68d85d8524ee4e2770f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f28a7585304c68d85d8524ee4e2770f4);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_tab_widths_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_tab_widths_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e3ef4c6b84e3b1e7e9daa33763f01851_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e3ef4c6b84e3b1e7e9daa33763f01851_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_dict_83b3d8156cce3c541b56c407fc0106fa));
CHECK_OBJECT_DEEP(mod_consts.const_dict_83b3d8156cce3c541b56c407fc0106fa);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_true_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_none_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_dict_a2ce646678f19c688ea43ed8292f26f5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a2ce646678f19c688ea43ed8292f26f5);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_compute_wrap_offsets));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compute_wrap_offsets);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_b5edf6c74d9ddba8857b12106313b3ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b5edf6c74d9ddba8857b12106313b3ba);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d6f2e3c9928e63ddf155d99a6dd950e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d6f2e3c9928e63ddf155d99a6dd950e);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_bb4159b1257b8af46c179c8e5969488f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bb4159b1257b8af46c179c8e5969488f_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_f08665468292bf852bdc84928a1998cd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f08665468292bf852bdc84928a1998cd_tuple);
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
static PyObject *module_var_accessor_textual$_wrap$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_wrap->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_wrap->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_wrap->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_wrap$cell_len(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_wrap->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_wrap->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_cell_len);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_wrap->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cell_len);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cell_len, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cell_len);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cell_len, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_cell_len);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_cell_len);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cell_len);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_wrap$chunks(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_wrap->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_wrap->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_chunks);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_wrap->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_chunks);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_chunks, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_chunks);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_chunks, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_chunks);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_chunks);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_chunks);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_wrap$get_character_cell_size(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_wrap->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_wrap->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_get_character_cell_size);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_wrap->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_character_cell_size);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_character_cell_size, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_character_cell_size);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_character_cell_size, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_get_character_cell_size);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_get_character_cell_size);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_character_cell_size);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_wrap$get_tab_widths(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_wrap->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_wrap->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_get_tab_widths);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_wrap->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_tab_widths);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_tab_widths, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_tab_widths);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_tab_widths, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_get_tab_widths);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_get_tab_widths);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_tab_widths);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_wrap$loop_last(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_wrap->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_wrap->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_loop_last);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_wrap->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_loop_last);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_loop_last, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_loop_last);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_loop_last, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_loop_last);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_loop_last);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_loop_last);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_wrap$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_wrap->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_wrap->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_wrap->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_wrap$re_chunk(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_wrap->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_wrap->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_re_chunk);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_wrap->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re_chunk);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re_chunk, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re_chunk);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re_chunk, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_re_chunk);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_re_chunk);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re_chunk);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_29a2e8b5c3135fd0730b72eb427e2ca1;
static PyCodeObject *code_objects_f7e33defc6d37eb46e89e54758ff5330;
static PyCodeObject *code_objects_0098b5f39e50c7313a4af08e085abdb8;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b5edf6c74d9ddba8857b12106313b3ba); CHECK_OBJECT(module_filename_obj);
code_objects_29a2e8b5c3135fd0730b72eb427e2ca1 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_9d6f2e3c9928e63ddf155d99a6dd950e, mod_consts.const_str_digest_9d6f2e3c9928e63ddf155d99a6dd950e, NULL, NULL, 0, 0, 0);
code_objects_f7e33defc6d37eb46e89e54758ff5330 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_chunks, mod_consts.const_str_plain_chunks, mod_consts.const_tuple_bb4159b1257b8af46c179c8e5969488f_tuple, NULL, 1, 0, 0);
code_objects_0098b5f39e50c7313a4af08e085abdb8 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_compute_wrap_offsets, mod_consts.const_str_plain_compute_wrap_offsets, mod_consts.const_tuple_f08665468292bf852bdc84928a1998cd_tuple, NULL, 5, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$_wrap$$$function__1_chunks$$$genobj__1_chunks(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_wrap$$$function__1_chunks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_wrap$$$function__2_compute_wrap_offsets(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$_wrap$$$function__1_chunks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_text = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_text;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_textual$_wrap$$$function__1_chunks$$$genobj__1_chunks(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_text);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
par_text = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct textual$_wrap$$$function__1_chunks$$$genobj__1_chunks_locals {
PyObject *var_end;
PyObject *var_chunk_match;
PyObject *var_start;
PyObject *var_chunk;
PyObject *tmp_assignment_expr_1__value;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *textual$_wrap$$$function__1_chunks$$$genobj__1_chunks_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_wrap$$$function__1_chunks$$$genobj__1_chunks_locals *generator_heap = (struct textual$_wrap$$$function__1_chunks$$$genobj__1_chunks_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_end = NULL;
generator_heap->var_chunk_match = NULL;
generator_heap->var_start = NULL;
generator_heap->var_chunk = NULL;
generator_heap->tmp_assignment_expr_1__value = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_int_0;
assert(generator_heap->var_end == NULL);
Py_INCREF(tmp_assign_source_1);
generator_heap->var_end = tmp_assign_source_1;
}
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f7e33defc6d37eb46e89e54758ff5330, module_textual$_wrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_textual$_wrap$re_chunk(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_re_chunk);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 26;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_match);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 26;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 26;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (generator_heap->var_end == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, const_str_plain_end);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 26;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = generator_heap->var_end;
generator->m_frame->m_frame.f_lineno = 26;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 26;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->tmp_assignment_expr_1__value;
    generator_heap->tmp_assignment_expr_1__value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
tmp_assign_source_3 = generator_heap->tmp_assignment_expr_1__value;
{
    PyObject *old = generator_heap->var_chunk_match;
    generator_heap->var_chunk_match = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_chunk_match);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
tmp_cmp_expr_left_1 = generator_heap->tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
Py_DECREF(generator_heap->tmp_assignment_expr_1__value);
generator_heap->tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_assignment_expr_1__value);
generator_heap->tmp_assignment_expr_1__value = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(generator_heap->var_chunk_match);
tmp_called_instance_1 = generator_heap->var_chunk_match;
generator->m_frame->m_frame.f_lineno = 27;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_span);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_3;
}
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "coooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_start;
    generator_heap->var_start = tmp_assign_source_7;
    Py_INCREF(generator_heap->var_start);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_end;
    generator_heap->var_end = tmp_assign_source_8;
    Py_INCREF(generator_heap->var_end);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(generator_heap->var_chunk_match);
tmp_called_instance_2 = generator_heap->var_chunk_match;
generator->m_frame->m_frame.f_lineno = 28;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 28;
generator_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_chunk;
    generator_heap->var_chunk = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_2;
PyObject *tmp_tuple_element_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_start);
tmp_tuple_element_1 = generator_heap->var_start;
tmp_expression_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_expression_value_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_end);
tmp_tuple_element_1 = generator_heap->var_end;
PyTuple_SET_ITEM0(tmp_expression_value_2, 1, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_chunk);
tmp_tuple_element_1 = generator_heap->var_chunk;
PyTuple_SET_ITEM0(tmp_expression_value_2, 2, tmp_tuple_element_1);
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 29;
generator_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 26;
generator_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;

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
    generator->m_closure[0],
    generator_heap->var_end,
    generator_heap->var_chunk_match,
    generator_heap->var_start,
    generator_heap->var_chunk
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
goto try_end_3;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_end);
generator_heap->var_end = NULL;
Py_XDECREF(generator_heap->var_chunk_match);
generator_heap->var_chunk_match = NULL;
Py_XDECREF(generator_heap->var_start);
generator_heap->var_start = NULL;
Py_XDECREF(generator_heap->var_chunk);
generator_heap->var_chunk = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_3:;
Py_XDECREF(generator_heap->var_end);
generator_heap->var_end = NULL;
CHECK_OBJECT(generator_heap->var_chunk_match);
CHECK_OBJECT(generator_heap->var_chunk_match);
Py_DECREF(generator_heap->var_chunk_match);
generator_heap->var_chunk_match = NULL;
Py_XDECREF(generator_heap->var_start);
generator_heap->var_start = NULL;
Py_XDECREF(generator_heap->var_chunk);
generator_heap->var_chunk = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$_wrap$$$function__1_chunks$$$genobj__1_chunks(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$_wrap$$$function__1_chunks$$$genobj__1_chunks_context,
        module_textual$_wrap,
        mod_consts.const_str_plain_chunks,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_f7e33defc6d37eb46e89e54758ff5330,
        closure,
        1,
#if 1
        sizeof(struct textual$_wrap$$$function__1_chunks$$$genobj__1_chunks_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$_wrap$$$function__2_compute_wrap_offsets(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_text = python_pars[0];
PyObject *par_width = python_pars[1];
PyObject *par_tab_size = python_pars[2];
PyObject *par_fold = python_pars[3];
PyObject *par_precomputed_tab_sections = python_pars[4];
PyObject *var_break_positions = NULL;
PyObject *var_cumulative_widths = NULL;
PyObject *var_lines = NULL;
PyObject *var_tab_sections = NULL;
PyObject *var_append = NULL;
PyObject *var_cell_offset = NULL;
PyObject *var__cell_len = NULL;
PyObject *var_tab_section_index = NULL;
PyObject *var_cumulative_width = NULL;
PyObject *var_record_widths = NULL;
PyObject *var_last = NULL;
PyObject *var_tab_section = NULL;
PyObject *var_tab_width = NULL;
PyObject *var_section_codepoint_length = NULL;
PyObject *var_widths = NULL;
PyObject *var_start = NULL;
PyObject *var_end = NULL;
PyObject *var_chunk = NULL;
PyObject *var_chunk_width = NULL;
PyObject *var_tab_width_before_start = NULL;
PyObject *var_tab_width_before_end = NULL;
PyObject *var_chunk_tab_width = NULL;
PyObject *var_remaining_space = NULL;
PyObject *var_chunk_fits = NULL;
PyObject *var__get_character_cell_size = NULL;
PyObject *var_append_new_line = NULL;
PyObject *var_append_to_last_line = NULL;
PyObject *var_total_width = NULL;
PyObject *var_character = NULL;
PyObject *var_cell_width = NULL;
PyObject *var_folded_word = NULL;
PyObject *var_line = NULL;
PyObject *var_line_tab_widths = NULL;
PyObject *outline_0_var_line = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_for_loop_4__for_iterator = NULL;
PyObject *tmp_for_loop_4__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__element_3 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
PyObject *tmp_tuple_unpack_4__element_1 = NULL;
PyObject *tmp_tuple_unpack_4__element_2 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets)) {
    Py_XDECREF(cache_frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets = MAKE_FUNCTION_FRAME(tstate, code_objects_0098b5f39e50c7313a4af08e085abdb8, module_textual$_wrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_type_description == NULL);
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets = cache_frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets);
assert(Py_REFCNT(frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_tab_size);
tmp_args_element_value_1 = par_tab_size;
CHECK_OBJECT(par_width);
tmp_args_element_value_2 = par_width;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 54;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_tab_size;
    assert(old != NULL);
    par_tab_size = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_precomputed_tab_sections);
tmp_truth_name_1 = CHECK_IF_TRUE(par_precomputed_tab_sections);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
CHECK_OBJECT(par_precomputed_tab_sections);
tmp_assign_source_2 = par_precomputed_tab_sections;
assert(var_tab_sections == NULL);
Py_INCREF(tmp_assign_source_2);
var_tab_sections = tmp_assign_source_2;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_textual$_wrap$get_tab_widths(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_tab_widths);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text);
tmp_args_element_value_3 = par_text;
CHECK_OBJECT(par_tab_size);
tmp_args_element_value_4 = par_tab_size;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 58;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_tab_sections == NULL);
var_tab_sections = tmp_assign_source_3;
}
branch_end_1:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_break_positions == NULL);
var_break_positions = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_break_positions);
tmp_expression_value_1 = var_break_positions;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_append);
assert(!(tmp_assign_source_5 == NULL));
assert(var_append == NULL);
var_append = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = const_int_0;
assert(var_cell_offset == NULL);
Py_INCREF(tmp_assign_source_6);
var_cell_offset = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = module_var_accessor_textual$_wrap$cell_len(tstate);
if (unlikely(tmp_assign_source_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_len);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__cell_len == NULL);
Py_INCREF(tmp_assign_source_7);
var__cell_len = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = const_int_0;
assert(var_tab_section_index == NULL);
Py_INCREF(tmp_assign_source_8);
var_tab_section_index = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = const_int_0;
assert(var_cumulative_width == NULL);
Py_INCREF(tmp_assign_source_9);
var_cumulative_width = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_cumulative_widths == NULL);
var_cumulative_widths = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_cumulative_widths);
tmp_expression_value_2 = var_cumulative_widths;
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_extend);
assert(!(tmp_assign_source_11 == NULL));
assert(var_record_widths == NULL);
var_record_widths = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
tmp_called_value_3 = module_var_accessor_textual$_wrap$loop_last(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loop_last);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_tab_sections);
tmp_args_element_value_5 = var_tab_sections;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 70;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_12;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 70;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
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



exception_lineno = 70;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_last;
    var_last = tmp_assign_source_17;
    Py_INCREF(var_last);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_iter_arg_3 = tmp_tuple_unpack_1__element_2;
tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
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



exception_lineno = 70;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
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



exception_lineno = 70;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
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



exception_lineno = 70;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_5;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_21 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_tab_section;
    var_tab_section = tmp_assign_source_21;
    Py_INCREF(var_tab_section);
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
    PyObject *old = var_tab_width;
    var_tab_width = tmp_assign_source_22;
    Py_INCREF(var_tab_width);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_23;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_int_arg_1;
PyObject *tmp_value_value_1;
CHECK_OBJECT(var_tab_section);
tmp_len_arg_1 = var_tab_section;
tmp_add_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_tab_width);
tmp_value_value_1 = var_tab_width;
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 72;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_int_arg_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_add_expr_right_1 = PyNumber_Int(tmp_int_arg_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 72;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_23 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_section_codepoint_length;
    var_section_codepoint_length = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_list_element_1;
if (var_cumulative_width == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cumulative_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 73;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_element_1 = var_cumulative_width;
tmp_mult_expr_left_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_mult_expr_left_1, 0, tmp_list_element_1);
CHECK_OBJECT(var_section_codepoint_length);
tmp_mult_expr_right_1 = var_section_codepoint_length;
tmp_assign_source_24 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_widths;
    var_widths = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_6;
if (var_record_widths == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_record_widths);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 74;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_4 = var_record_widths;
CHECK_OBJECT(var_widths);
tmp_args_element_value_6 = var_widths;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 74;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_cumulative_width == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cumulative_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 75;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_cumulative_width;
CHECK_OBJECT(var_tab_width);
tmp_iadd_expr_right_1 = var_tab_width;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_25 = tmp_iadd_expr_left_1;
var_cumulative_width = tmp_assign_source_25;

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_last);
tmp_truth_name_2 = CHECK_IF_TRUE(var_last);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_cumulative_widths == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cumulative_widths);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 77;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_cumulative_widths;
CHECK_OBJECT(var_cumulative_width);
tmp_item_value_1 = var_cumulative_width;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
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
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_7;
tmp_called_value_5 = module_var_accessor_textual$_wrap$chunks(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chunks);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text);
tmp_args_element_value_7 = par_text;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 79;
tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_26 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_26;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_27 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 79;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
tmp_assign_source_28 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_29 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 3);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_30 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 3);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_31 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 2, 3);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_3;
    tmp_tuple_unpack_3__element_3 = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_8;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_7;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_32 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_start;
    var_start = tmp_assign_source_32;
    Py_INCREF(var_start);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_33 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_end;
    var_end = tmp_assign_source_33;
    Py_INCREF(var_end);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_34;
CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
tmp_assign_source_34 = tmp_tuple_unpack_3__element_3;
{
    PyObject *old = var_chunk;
    var_chunk = tmp_assign_source_34;
    Py_INCREF(var_chunk);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;

{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_8;
if (var__cell_len == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__cell_len);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 80;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_called_value_6 = var__cell_len;
CHECK_OBJECT(var_chunk);
tmp_args_element_value_8 = var_chunk;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 80;
tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_8);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_chunk_width;
    var_chunk_width = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
if (var_cumulative_widths == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cumulative_widths);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 81;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_3 = var_cumulative_widths;
CHECK_OBJECT(var_start);
tmp_subscript_value_1 = var_start;
tmp_assign_source_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_tab_width_before_start;
    var_tab_width_before_start = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
if (var_cumulative_widths == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cumulative_widths);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 82;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_4 = var_cumulative_widths;
CHECK_OBJECT(var_end);
tmp_subscript_value_2 = var_end;
tmp_assign_source_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_tab_width_before_end;
    var_tab_width_before_end = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_tab_width_before_end);
tmp_sub_expr_left_1 = var_tab_width_before_end;
CHECK_OBJECT(var_tab_width_before_start);
tmp_sub_expr_right_1 = var_tab_width_before_start;
tmp_assign_source_38 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_chunk_tab_width;
    var_chunk_tab_width = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
CHECK_OBJECT(var_chunk_width);
tmp_iadd_expr_left_2 = var_chunk_width;
CHECK_OBJECT(var_chunk_tab_width);
tmp_iadd_expr_right_2 = var_chunk_tab_width;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_39 = tmp_iadd_expr_left_2;
var_chunk_width = tmp_assign_source_39;

}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
if (par_width == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_sub_expr_left_2 = par_width;
if (var_cell_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_sub_expr_right_2 = var_cell_offset;
tmp_assign_source_40 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_remaining_space;
    var_remaining_space = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_remaining_space);
tmp_cmp_expr_left_1 = var_remaining_space;
CHECK_OBJECT(var_chunk_width);
tmp_cmp_expr_right_1 = var_chunk_width;
tmp_assign_source_41 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_chunk_fits;
    var_chunk_fits = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_3;
CHECK_OBJECT(var_chunk_fits);
tmp_truth_name_3 = CHECK_IF_TRUE(var_chunk_fits);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
if (var_cell_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 90;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_iadd_expr_left_3 = var_cell_offset;
CHECK_OBJECT(var_chunk_width);
tmp_iadd_expr_right_3 = var_chunk_width;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_42 = tmp_iadd_expr_left_3;
var_cell_offset = tmp_assign_source_42;

}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_chunk_width);
tmp_cmp_expr_left_2 = var_chunk_width;
if (par_width == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_cmp_expr_right_2 = par_width;
tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
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
int tmp_truth_name_4;
CHECK_OBJECT(par_fold);
tmp_truth_name_4 = CHECK_IF_TRUE(par_fold);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = module_var_accessor_textual$_wrap$get_character_cell_size(tstate);
if (unlikely(tmp_assign_source_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_character_cell_size);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var__get_character_cell_size;
    var__get_character_cell_size = tmp_assign_source_43;
    Py_INCREF(var__get_character_cell_size);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = DEEP_COPY_LIST_GUIDED(tstate, mod_consts.const_list_list_empty_list, "l");
{
    PyObject *old = var_lines;
    var_lines = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_lines);
tmp_expression_value_5 = var_lines;
tmp_assign_source_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_append);
assert(!(tmp_assign_source_45 == NULL));
{
    PyObject *old = var_append_new_line;
    var_append_new_line = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_lines);
tmp_expression_value_7 = var_lines;
tmp_subscript_value_3 = const_int_neg_1;
tmp_expression_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, -1);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_append_to_last_line;
    var_append_to_last_line = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = const_int_0;
{
    PyObject *old = var_total_width;
    var_total_width = tmp_assign_source_47;
    Py_INCREF(var_total_width);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(var_chunk);
tmp_iter_arg_6 = var_chunk;
tmp_assign_source_48 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_48;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_49;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_49 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_49 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 103;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_50;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_50 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_character;
    var_character = tmp_assign_source_50;
    Py_INCREF(var_character);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_character);
tmp_cmp_expr_left_3 = var_character;
tmp_cmp_expr_right_3 = mod_consts.const_str_chr_9;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var_tab_sections);
tmp_expression_value_9 = var_tab_sections;
if (var_tab_section_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tab_section_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 106;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_subscript_value_4 = var_tab_section_index;
tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_subscript_value_5 = const_int_pos_1;
tmp_assign_source_51 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_5, 1);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_cell_width;
    var_cell_width = tmp_assign_source_51;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
if (var_tab_section_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tab_section_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 107;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_iadd_expr_left_4 = var_tab_section_index;
tmp_iadd_expr_right_4 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_52 = tmp_iadd_expr_left_4;
var_tab_section_index = tmp_assign_source_52;

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_9;
if (var__get_character_cell_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_character_cell_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 109;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_called_value_7 = var__get_character_cell_size;
CHECK_OBJECT(var_character);
tmp_args_element_value_9 = var_character;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 109;
tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_9);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_cell_width;
    var_cell_width = tmp_assign_source_53;
    Py_XDECREF(old);
}

}
branch_end_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
if (var_total_width == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_total_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 111;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_add_expr_left_2 = var_total_width;
CHECK_OBJECT(var_cell_width);
tmp_add_expr_right_2 = var_cell_width;
tmp_cmp_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
if (par_width == NULL) {
Py_DECREF(tmp_cmp_expr_left_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 111;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_cmp_expr_right_4 = par_width;
tmp_condition_result_7 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_list_element_2;
if (var_append_new_line == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_append_new_line);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 112;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_called_value_8 = var_append_new_line;
CHECK_OBJECT(var_character);
tmp_list_element_2 = var_character;
tmp_args_element_value_10 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_10, 0, tmp_list_element_2);
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 112;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(var_lines);
tmp_expression_value_11 = var_lines;
tmp_subscript_value_6 = const_int_neg_1;
tmp_expression_value_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_6, -1);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_append_to_last_line;
    var_append_to_last_line = tmp_assign_source_54;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_55;
CHECK_OBJECT(var_cell_width);
tmp_assign_source_55 = var_cell_width;
{
    PyObject *old = var_total_width;
    var_total_width = tmp_assign_source_55;
    Py_INCREF(var_total_width);
    Py_XDECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_11;
if (var_append_to_last_line == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_append_to_last_line);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 116;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_called_value_9 = var_append_to_last_line;
CHECK_OBJECT(var_character);
tmp_args_element_value_11 = var_character;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 116;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_11);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_iadd_expr_left_5;
PyObject *tmp_iadd_expr_right_5;
if (var_total_width == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_total_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 117;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_iadd_expr_left_5 = var_total_width;
CHECK_OBJECT(var_cell_width);
tmp_iadd_expr_right_5 = var_cell_width;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_56 = tmp_iadd_expr_left_5;
var_total_width = tmp_assign_source_56;

}
branch_end_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
goto loop_start_3;
loop_end_3:;
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
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

goto try_except_handler_7;
// End of try:
try_end_8:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_assign_source_57;
// Tried code:
{
PyObject *tmp_assign_source_58;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(var_lines);
tmp_iter_arg_7 = var_lines;
tmp_assign_source_58 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_59;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_60;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_4 = tmp_listcomp_1__$0;
tmp_assign_source_60 = ITERATOR_NEXT_ITERATOR(tmp_next_source_4);
if (tmp_assign_source_60 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 119;
        goto try_except_handler_12;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_60;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_61;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_61 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_line;
    outline_0_var_line = tmp_assign_source_61;
    Py_INCREF(outline_0_var_line);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_str_arg_value_1 = const_str_empty;
CHECK_OBJECT(outline_0_var_line);
tmp_iterable_value_1 = outline_0_var_line;
tmp_append_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
goto loop_start_4;
loop_end_4:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_57 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_57);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
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
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_XDECREF(outline_0_var_line);
outline_0_var_line = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_line);
outline_0_var_line = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 119;
goto try_except_handler_7;
outline_result_1:;
{
    PyObject *old = var_folded_word;
    var_folded_word = tmp_assign_source_57;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_iter_arg_8;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_12;
tmp_called_value_10 = module_var_accessor_textual$_wrap$loop_last(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loop_last);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_folded_word);
tmp_args_element_value_12 = var_folded_word;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 120;
tmp_iter_arg_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_12);
if (tmp_iter_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_62 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
CHECK_OBJECT(tmp_iter_arg_8);
Py_DECREF(tmp_iter_arg_8);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_for_loop_4__for_iterator;
    tmp_for_loop_4__for_iterator = tmp_assign_source_62;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_63;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
tmp_next_source_5 = tmp_for_loop_4__for_iterator;
tmp_assign_source_63 = ITERATOR_NEXT(tmp_next_source_5);
if (tmp_assign_source_63 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 120;
        goto try_except_handler_13;
    }
}

{
    PyObject *old = tmp_for_loop_4__iter_value;
    tmp_for_loop_4__iter_value = tmp_assign_source_63;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_64;
PyObject *tmp_iter_arg_9;
CHECK_OBJECT(tmp_for_loop_4__iter_value);
tmp_iter_arg_9 = tmp_for_loop_4__iter_value;
tmp_assign_source_64 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_tuple_unpack_4__source_iter;
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_64;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_65;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_65 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 0, 2);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_1;
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_65;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_66 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 1, 2);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_2;
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_66;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_14;
// End of try:
try_end_9:;
goto try_end_10;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_67;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_assign_source_67 = tmp_tuple_unpack_4__element_1;
{
    PyObject *old = var_last;
    var_last = tmp_assign_source_67;
    Py_INCREF(var_last);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_68;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_assign_source_68 = tmp_tuple_unpack_4__element_2;
{
    PyObject *old = var_line;
    var_line = tmp_assign_source_68;
    Py_INCREF(var_line);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_5;
if (var_start == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_start);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 121;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_truth_name_5 = CHECK_IF_TRUE(var_start);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_condition_result_8 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_13;
if (var_append == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_append);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 122;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_called_value_11 = var_append;
if (var_start == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_start);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 122;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_args_element_value_13 = var_start;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 122;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_13);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_8:;
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_6;
CHECK_OBJECT(var_last);
tmp_truth_name_6 = CHECK_IF_TRUE(var_last);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_condition_result_9 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_69;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_7;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_8;
if (var_cumulative_widths == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cumulative_widths);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 130;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_expression_value_12 = var_cumulative_widths;
if (var_start == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_start);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 130;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_add_expr_left_3 = var_start;
CHECK_OBJECT(var_line);
tmp_len_arg_2 = var_line;
tmp_add_expr_right_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_subscript_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_subscript_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_sub_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
if (var_cumulative_widths == NULL) {
Py_DECREF(tmp_sub_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cumulative_widths);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 131;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_expression_value_13 = var_cumulative_widths;
if (var_start == NULL) {
Py_DECREF(tmp_sub_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_start);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 131;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_subscript_value_8 = var_start;
tmp_sub_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_8);
if (tmp_sub_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_3);

exception_lineno = 131;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_assign_source_69 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
CHECK_OBJECT(tmp_sub_expr_right_3);
Py_DECREF(tmp_sub_expr_right_3);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = var_line_tab_widths;
    var_line_tab_widths = tmp_assign_source_69;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_14;
if (var__cell_len == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__cell_len);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 133;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_called_value_12 = var__cell_len;
CHECK_OBJECT(var_line);
tmp_args_element_value_14 = var_line;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 133;
tmp_add_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_14);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(var_line_tab_widths);
tmp_add_expr_right_4 = var_line_tab_widths;
tmp_assign_source_70 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = var_cell_offset;
    var_cell_offset = tmp_assign_source_70;
    Py_XDECREF(old);
}

}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_71;
PyObject *tmp_iadd_expr_left_6;
PyObject *tmp_iadd_expr_right_6;
PyObject *tmp_len_arg_3;
if (var_start == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_start);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_iadd_expr_left_6 = var_start;
CHECK_OBJECT(var_line);
tmp_len_arg_3 = var_line;
tmp_iadd_expr_right_6 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_iadd_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
CHECK_OBJECT(tmp_iadd_expr_right_6);
Py_DECREF(tmp_iadd_expr_right_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_assign_source_71 = tmp_iadd_expr_left_6;
var_start = tmp_assign_source_71;

}
branch_end_9:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
goto loop_start_5;
loop_end_5:;
goto try_end_11;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_7;
// End of try:
try_end_11:;
Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_7;
CHECK_OBJECT(var_start);
tmp_truth_name_7 = CHECK_IF_TRUE(var_start);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_10 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_15;
if (var_append == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_append);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 139;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_called_value_13 = var_append;
CHECK_OBJECT(var_start);
tmp_args_element_value_15 = var_start;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 139;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_15);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_10:;
{
PyObject *tmp_assign_source_72;
CHECK_OBJECT(var_chunk_width);
tmp_assign_source_72 = var_chunk_width;
{
    PyObject *old = var_cell_offset;
    var_cell_offset = tmp_assign_source_72;
    Py_INCREF(var_cell_offset);
    Py_XDECREF(old);
}

}
branch_end_5:;
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_8;
int tmp_truth_name_9;
if (var_cell_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_truth_name_8 = CHECK_IF_TRUE(var_cell_offset);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_and_left_value_1 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_start);
tmp_truth_name_9 = CHECK_IF_TRUE(var_start);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_and_right_value_1 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_11 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_11 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_16;
if (var_append == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_append);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 144;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_called_value_14 = var_append;
CHECK_OBJECT(var_start);
tmp_args_element_value_16 = var_start;
frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame.f_lineno = 144;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_16);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_assign_source_73;
CHECK_OBJECT(var_chunk_width);
tmp_assign_source_73 = var_chunk_width;
{
    PyObject *old = var_cell_offset;
    var_cell_offset = tmp_assign_source_73;
    Py_INCREF(var_cell_offset);
    Py_XDECREF(old);
}

}
branch_no_11:;
branch_end_4:;
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_2;
loop_end_2:;
goto try_end_12;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_12:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets,
    type_description_1,
    par_text,
    par_width,
    par_tab_size,
    par_fold,
    par_precomputed_tab_sections,
    var_break_positions,
    var_cumulative_widths,
    var_lines,
    var_tab_sections,
    var_append,
    var_cell_offset,
    var__cell_len,
    var_tab_section_index,
    var_cumulative_width,
    var_record_widths,
    var_last,
    var_tab_section,
    var_tab_width,
    var_section_codepoint_length,
    var_widths,
    var_start,
    var_end,
    var_chunk,
    var_chunk_width,
    var_tab_width_before_start,
    var_tab_width_before_end,
    var_chunk_tab_width,
    var_remaining_space,
    var_chunk_fits,
    var__get_character_cell_size,
    var_append_new_line,
    var_append_to_last_line,
    var_total_width,
    var_character,
    var_cell_width,
    var_folded_word,
    var_line,
    var_line_tab_widths
);


// Release cached frame if used for exception.
if (frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets == cache_frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets);
    cache_frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets = NULL;
}

assertFrameObject(frame_frame_textual$_wrap$$$function__2_compute_wrap_offsets);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
CHECK_OBJECT(var_break_positions);
tmp_return_value = var_break_positions;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_tab_size);
CHECK_OBJECT(par_tab_size);
Py_DECREF(par_tab_size);
par_tab_size = NULL;
CHECK_OBJECT(var_break_positions);
CHECK_OBJECT(var_break_positions);
Py_DECREF(var_break_positions);
var_break_positions = NULL;
Py_XDECREF(var_cumulative_widths);
var_cumulative_widths = NULL;
Py_XDECREF(var_lines);
var_lines = NULL;
CHECK_OBJECT(var_tab_sections);
CHECK_OBJECT(var_tab_sections);
Py_DECREF(var_tab_sections);
var_tab_sections = NULL;
Py_XDECREF(var_append);
var_append = NULL;
Py_XDECREF(var_cell_offset);
var_cell_offset = NULL;
Py_XDECREF(var__cell_len);
var__cell_len = NULL;
Py_XDECREF(var_tab_section_index);
var_tab_section_index = NULL;
Py_XDECREF(var_cumulative_width);
var_cumulative_width = NULL;
Py_XDECREF(var_record_widths);
var_record_widths = NULL;
Py_XDECREF(var_last);
var_last = NULL;
Py_XDECREF(var_tab_section);
var_tab_section = NULL;
Py_XDECREF(var_tab_width);
var_tab_width = NULL;
Py_XDECREF(var_section_codepoint_length);
var_section_codepoint_length = NULL;
Py_XDECREF(var_widths);
var_widths = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_end);
var_end = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
Py_XDECREF(var_chunk_width);
var_chunk_width = NULL;
Py_XDECREF(var_tab_width_before_start);
var_tab_width_before_start = NULL;
Py_XDECREF(var_tab_width_before_end);
var_tab_width_before_end = NULL;
Py_XDECREF(var_chunk_tab_width);
var_chunk_tab_width = NULL;
Py_XDECREF(var_remaining_space);
var_remaining_space = NULL;
Py_XDECREF(var_chunk_fits);
var_chunk_fits = NULL;
Py_XDECREF(var__get_character_cell_size);
var__get_character_cell_size = NULL;
Py_XDECREF(var_append_new_line);
var_append_new_line = NULL;
Py_XDECREF(var_append_to_last_line);
var_append_to_last_line = NULL;
Py_XDECREF(var_total_width);
var_total_width = NULL;
Py_XDECREF(var_character);
var_character = NULL;
Py_XDECREF(var_cell_width);
var_cell_width = NULL;
Py_XDECREF(var_folded_word);
var_folded_word = NULL;
Py_XDECREF(var_line);
var_line = NULL;
Py_XDECREF(var_line_tab_widths);
var_line_tab_widths = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_tab_size);
par_tab_size = NULL;
Py_XDECREF(var_break_positions);
var_break_positions = NULL;
Py_XDECREF(var_cumulative_widths);
var_cumulative_widths = NULL;
Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var_tab_sections);
var_tab_sections = NULL;
Py_XDECREF(var_append);
var_append = NULL;
Py_XDECREF(var_cell_offset);
var_cell_offset = NULL;
Py_XDECREF(var__cell_len);
var__cell_len = NULL;
Py_XDECREF(var_tab_section_index);
var_tab_section_index = NULL;
Py_XDECREF(var_cumulative_width);
var_cumulative_width = NULL;
Py_XDECREF(var_record_widths);
var_record_widths = NULL;
Py_XDECREF(var_last);
var_last = NULL;
Py_XDECREF(var_tab_section);
var_tab_section = NULL;
Py_XDECREF(var_tab_width);
var_tab_width = NULL;
Py_XDECREF(var_section_codepoint_length);
var_section_codepoint_length = NULL;
Py_XDECREF(var_widths);
var_widths = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_end);
var_end = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
Py_XDECREF(var_chunk_width);
var_chunk_width = NULL;
Py_XDECREF(var_tab_width_before_start);
var_tab_width_before_start = NULL;
Py_XDECREF(var_tab_width_before_end);
var_tab_width_before_end = NULL;
Py_XDECREF(var_chunk_tab_width);
var_chunk_tab_width = NULL;
Py_XDECREF(var_remaining_space);
var_remaining_space = NULL;
Py_XDECREF(var_chunk_fits);
var_chunk_fits = NULL;
Py_XDECREF(var__get_character_cell_size);
var__get_character_cell_size = NULL;
Py_XDECREF(var_append_new_line);
var_append_new_line = NULL;
Py_XDECREF(var_append_to_last_line);
var_append_to_last_line = NULL;
Py_XDECREF(var_total_width);
var_total_width = NULL;
Py_XDECREF(var_character);
var_character = NULL;
Py_XDECREF(var_cell_width);
var_cell_width = NULL;
Py_XDECREF(var_folded_word);
var_folded_word = NULL;
Py_XDECREF(var_line);
var_line = NULL;
Py_XDECREF(var_line_tab_widths);
var_line_tab_widths = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_fold);
Py_DECREF(par_fold);
CHECK_OBJECT(par_precomputed_tab_sections);
Py_DECREF(par_precomputed_tab_sections);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_fold);
Py_DECREF(par_fold);
CHECK_OBJECT(par_precomputed_tab_sections);
Py_DECREF(par_precomputed_tab_sections);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$_wrap$$$function__1_chunks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_wrap$$$function__1_chunks,
        mod_consts.const_str_plain_chunks,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f7e33defc6d37eb46e89e54758ff5330,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_wrap,
        mod_consts.const_str_digest_409e4a2f70e288fdd1716b150935a720,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_wrap$$$function__2_compute_wrap_offsets(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_wrap$$$function__2_compute_wrap_offsets,
        mod_consts.const_str_plain_compute_wrap_offsets,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0098b5f39e50c7313a4af08e085abdb8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_wrap,
        mod_consts.const_str_digest_519df3a58c330a3663c70274a9537a90,
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

static function_impl_code const function_table_textual$_wrap[] = {
impl_textual$_wrap$$$function__1_chunks,
impl_textual$_wrap$$$function__2_compute_wrap_offsets,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$_wrap);
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
        module_textual$_wrap,
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
        function_table_textual$_wrap,
        sizeof(function_table_textual$_wrap) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual._wrap";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$_wrap(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$_wrap");

    // Store the module for future use.
    module_textual$_wrap = module;

    moduledict_textual$_wrap = MODULE_DICT(module_textual$_wrap);

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
        PRINT_STRING("textual$_wrap: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$_wrap: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$_wrap: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._wrap" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$_wrap\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$_wrap,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$_wrap,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$_wrap,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_wrap,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_wrap,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$_wrap);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$_wrap);
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

        UPDATE_STRING_DICT1(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_textual$_wrap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$_wrap = MAKE_MODULE_FRAME(code_objects_29a2e8b5c3135fd0730b72eb427e2ca1, module_textual$_wrap);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_wrap);
assert(Py_REFCNT(frame_frame_textual$_wrap) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$_wrap$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$_wrap$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$_wrap;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$_wrap->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_5);
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
        (PyObject *)moduledict_textual$_wrap,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_5b4d55d96b197250876c5eb0d13fffc3;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$_wrap;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_get_character_cell_size_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$_wrap->m_frame.f_lineno = 6;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$_wrap,
        mod_consts.const_str_plain_get_character_cell_size,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_get_character_cell_size);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_get_character_cell_size, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_530c01c80aab9c9c2c004128391b54d7;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$_wrap;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_cell_len_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$_wrap->m_frame.f_lineno = 8;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$_wrap,
        mod_consts.const_str_plain_cell_len,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_cell_len);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_cell_len, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_a6da3bd17113556c2b86c61d3621fb86;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$_wrap;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_loop_last_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$_wrap->m_frame.f_lineno = 9;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$_wrap,
        mod_consts.const_str_plain_loop_last,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_loop_last);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_loop_last, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_f28a7585304c68d85d8524ee4e2770f4;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$_wrap;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_get_tab_widths_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$_wrap->m_frame.f_lineno = 10;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$_wrap,
        mod_consts.const_str_plain_get_tab_widths,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_get_tab_widths);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_get_tab_widths, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_textual$_wrap$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto frame_exception_exit_1;
}
frame_frame_textual$_wrap->m_frame.f_lineno = 12;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e3ef4c6b84e3b1e7e9daa33763f01851_tuple, 0)
);

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_re_chunk, tmp_assign_source_11);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_wrap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_wrap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_wrap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$_wrap);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_83b3d8156cce3c541b56c407fc0106fa);

tmp_assign_source_12 = MAKE_FUNCTION_textual$_wrap$$$function__1_chunks(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_chunks, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
tmp_defaults_1 = mod_consts.const_tuple_true_none_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_a2ce646678f19c688ea43ed8292f26f5);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_13 = MAKE_FUNCTION_textual$_wrap$$$function__2_compute_wrap_offsets(tstate, tmp_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$_wrap, (Nuitka_StringObject *)mod_consts.const_str_plain_compute_wrap_offsets, tmp_assign_source_13);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$_wrap", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._wrap" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$_wrap);
    return module_textual$_wrap;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_wrap, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$_wrap", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

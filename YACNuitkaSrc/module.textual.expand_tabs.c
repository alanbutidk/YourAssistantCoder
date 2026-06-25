/* Generated code for Python module 'textual$expand_tabs'
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



/* The "module_textual$expand_tabs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$expand_tabs;
PyDictObject *moduledict_textual$expand_tabs;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_append;
PyObject *const_str_plain__TABS_SPLITTER_RE;
PyObject *const_str_plain_findall;
PyObject *const_str_plain_endswith;
PyObject *const_tuple_str_chr_9_tuple;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_plain_cell_position;
PyObject *const_str_plain_cell_len;
PyObject *const_str_plain_tab_size;
PyObject *const_str_plain_add_part;
PyObject *const_str_plain_match;
PyObject *const_str_plain_expansion_width;
PyObject *const_str_digest_80117a4796cb21bef4efb9fef2b13ee2;
PyObject *const_str_plain_get_tab_widths;
PyObject *const_str_space;
PyObject *const_str_digest_8d0697ff4a97b6431dc1898c0c26e0e8;
PyObject *const_str_chr_9;
PyObject *const_str_plain_plain;
PyObject *const_tuple_str_chr_9_true_tuple;
PyObject *const_tuple_str_plain_include_separator_tuple;
PyObject *const_str_plain__text;
PyObject *const_str_plain_extend_style;
PyObject *const_str_plain_append_part;
PyObject *const_str_plain_Text;
PyObject *const_tuple_str_empty_str_empty_tuple;
PyObject *const_tuple_str_plain_end_tuple;
PyObject *const_str_plain_join;
PyObject *const_str_digest_8a0840933a5bb1f34908448db7763e8c;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_re;
PyObject *const_str_digest_5b4d55d96b197250876c5eb0d13fffc3;
PyObject *const_tuple_str_plain_cell_len_tuple;
PyObject *const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e;
PyObject *const_tuple_str_plain_Text_tuple;
PyObject *const_tuple_str_digest_79494d0baa785234b4283e8441f21b85_tuple;
PyObject *const_tuple_int_pos_4_tuple;
PyObject *const_dict_2626a351a9e569fb52ab0112c189e143;
PyObject *const_dict_bb9b00ef7f09f20035c86b4bfdc660ea;
PyObject *const_str_plain_expand_tabs_inline;
PyObject *const_dict_350851b7c1f62d2e82402b599dcb883b;
PyObject *const_str_plain_expand_text_tabs_from_widths;
PyObject *const_str_digest_7a11bb959779fce6b9c306dd409faf11;
PyObject *const_str_digest_f8626f50cce1ea2a0783b409677949b1;
PyObject *const_tuple_str_plain_line_str_plain_tab_size_str_plain_tab_widths_tuple;
PyObject *const_tuple_f7091b3cad65f80d494ad70cc49c3844_tuple;
PyObject *const_tuple_0c77933e1e823b6f8e339a191d680f35_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[48];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.expand_tabs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__TABS_SPLITTER_RE);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_findall);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_9_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_cell_position);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_cell_len);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_tab_size);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_part);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_expansion_width);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_80117a4796cb21bef4efb9fef2b13ee2);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_tab_widths);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d0697ff4a97b6431dc1898c0c26e0e8);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_chr_9);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_plain);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_9_true_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_include_separator_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__text);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_extend_style);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_append_part);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_Text);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_str_empty_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a0840933a5bb1f34908448db7763e8c);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b4d55d96b197250876c5eb0d13fffc3);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cell_len_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Text_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_79494d0baa785234b4283e8441f21b85_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_dict_2626a351a9e569fb52ab0112c189e143);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_dict_bb9b00ef7f09f20035c86b4bfdc660ea);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_expand_tabs_inline);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_dict_350851b7c1f62d2e82402b599dcb883b);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_expand_text_tabs_from_widths);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a11bb959779fce6b9c306dd409faf11);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_f8626f50cce1ea2a0783b409677949b1);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_line_str_plain_tab_size_str_plain_tab_widths_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_f7091b3cad65f80d494ad70cc49c3844_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_0c77933e1e823b6f8e339a191d680f35_tuple);
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
void checkModuleConstants_textual$expand_tabs(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__TABS_SPLITTER_RE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__TABS_SPLITTER_RE);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_findall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_findall);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_9_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_cell_position));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cell_position);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_cell_len));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cell_len);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_tab_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tab_size);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_part));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_part);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_expansion_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expansion_width);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_80117a4796cb21bef4efb9fef2b13ee2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80117a4796cb21bef4efb9fef2b13ee2);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_tab_widths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_tab_widths);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d0697ff4a97b6431dc1898c0c26e0e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8d0697ff4a97b6431dc1898c0c26e0e8);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_chr_9));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_9);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_plain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_plain);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_9_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_9_true_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_include_separator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_include_separator_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__text);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_extend_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extend_style);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_append_part));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append_part);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_Text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Text);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_str_empty_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_end_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a0840933a5bb1f34908448db7763e8c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a0840933a5bb1f34908448db7763e8c);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b4d55d96b197250876c5eb0d13fffc3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b4d55d96b197250876c5eb0d13fffc3);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cell_len_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cell_len_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Text_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_79494d0baa785234b4283e8441f21b85_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_79494d0baa785234b4283e8441f21b85_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_4_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_dict_2626a351a9e569fb52ab0112c189e143));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2626a351a9e569fb52ab0112c189e143);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_dict_bb9b00ef7f09f20035c86b4bfdc660ea));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bb9b00ef7f09f20035c86b4bfdc660ea);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_expand_tabs_inline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expand_tabs_inline);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_dict_350851b7c1f62d2e82402b599dcb883b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_350851b7c1f62d2e82402b599dcb883b);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_expand_text_tabs_from_widths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expand_text_tabs_from_widths);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a11bb959779fce6b9c306dd409faf11));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a11bb959779fce6b9c306dd409faf11);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_f8626f50cce1ea2a0783b409677949b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f8626f50cce1ea2a0783b409677949b1);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_line_str_plain_tab_size_str_plain_tab_widths_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_line_str_plain_tab_size_str_plain_tab_widths_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_f7091b3cad65f80d494ad70cc49c3844_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f7091b3cad65f80d494ad70cc49c3844_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_0c77933e1e823b6f8e339a191d680f35_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0c77933e1e823b6f8e339a191d680f35_tuple);
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
static PyObject *module_var_accessor_textual$expand_tabs$Text(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$expand_tabs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$expand_tabs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$expand_tabs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Text);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Text, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Text);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Text, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
    }

    return result;
}

static PyObject *module_var_accessor_textual$expand_tabs$_TABS_SPLITTER_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$expand_tabs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$expand_tabs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain__TABS_SPLITTER_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$expand_tabs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TABS_SPLITTER_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TABS_SPLITTER_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TABS_SPLITTER_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TABS_SPLITTER_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain__TABS_SPLITTER_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain__TABS_SPLITTER_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__TABS_SPLITTER_RE);
    }

    return result;
}

static PyObject *module_var_accessor_textual$expand_tabs$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$expand_tabs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$expand_tabs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$expand_tabs->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$expand_tabs$cell_len(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$expand_tabs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$expand_tabs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_cell_len);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$expand_tabs->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_cell_len);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_cell_len);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cell_len);
    }

    return result;
}

static PyObject *module_var_accessor_textual$expand_tabs$get_tab_widths(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$expand_tabs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$expand_tabs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_get_tab_widths);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$expand_tabs->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_get_tab_widths);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_get_tab_widths);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_tab_widths);
    }

    return result;
}

static PyObject *module_var_accessor_textual$expand_tabs$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$expand_tabs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$expand_tabs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$expand_tabs->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_010e04b393df1f896bd2bd5500d659da;
static PyCodeObject *code_objects_35d944da106d3f7be0709406ba2d3797;
static PyCodeObject *code_objects_8456cbe1d42c81ad0473f19647e8a91a;
static PyCodeObject *code_objects_dac4fd42f201693f968fdd03d87c2b55;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_7a11bb959779fce6b9c306dd409faf11); CHECK_OBJECT(module_filename_obj);
code_objects_010e04b393df1f896bd2bd5500d659da = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_f8626f50cce1ea2a0783b409677949b1, mod_consts.const_str_digest_f8626f50cce1ea2a0783b409677949b1, NULL, NULL, 0, 0, 0);
code_objects_35d944da106d3f7be0709406ba2d3797 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_expand_tabs_inline, mod_consts.const_str_plain_expand_tabs_inline, mod_consts.const_tuple_str_plain_line_str_plain_tab_size_str_plain_tab_widths_tuple, NULL, 2, 0, 0);
code_objects_8456cbe1d42c81ad0473f19647e8a91a = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_expand_text_tabs_from_widths, mod_consts.const_str_plain_expand_text_tabs_from_widths, mod_consts.const_tuple_f7091b3cad65f80d494ad70cc49c3844_tuple, NULL, 2, 0, 0);
code_objects_dac4fd42f201693f968fdd03d87c2b55 = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_tab_widths, mod_consts.const_str_plain_get_tab_widths, mod_consts.const_tuple_0c77933e1e823b6f8e339a191d680f35_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_textual$expand_tabs$$$function__1_get_tab_widths(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$expand_tabs$$$function__2_expand_tabs_inline(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$expand_tabs$$$function__1_get_tab_widths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_line = python_pars[0];
PyObject *par_tab_size = python_pars[1];
PyObject *var_parts = NULL;
PyObject *var_add_part = NULL;
PyObject *var_cell_position = NULL;
PyObject *var_matches = NULL;
PyObject *var_match = NULL;
PyObject *var_expansion_width = NULL;
PyObject *var_tab_remainder = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$expand_tabs$$$function__1_get_tab_widths;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_textual$expand_tabs$$$function__1_get_tab_widths = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_parts == NULL);
var_parts = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_parts);
tmp_expression_value_1 = var_parts;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_append);
assert(!(tmp_assign_source_2 == NULL));
assert(var_add_part == NULL);
var_add_part = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_0;
assert(var_cell_position == NULL);
Py_INCREF(tmp_assign_source_3);
var_cell_position = tmp_assign_source_3;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$expand_tabs$$$function__1_get_tab_widths)) {
    Py_XDECREF(cache_frame_frame_textual$expand_tabs$$$function__1_get_tab_widths);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$expand_tabs$$$function__1_get_tab_widths == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$expand_tabs$$$function__1_get_tab_widths = MAKE_FUNCTION_FRAME(tstate, code_objects_dac4fd42f201693f968fdd03d87c2b55, module_textual$expand_tabs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$expand_tabs$$$function__1_get_tab_widths->m_type_description == NULL);
frame_frame_textual$expand_tabs$$$function__1_get_tab_widths = cache_frame_frame_textual$expand_tabs$$$function__1_get_tab_widths;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$expand_tabs$$$function__1_get_tab_widths);
assert(Py_REFCNT(frame_frame_textual$expand_tabs$$$function__1_get_tab_widths) == 2);

// Framed code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_textual$expand_tabs$_TABS_SPLITTER_RE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TABS_SPLITTER_RE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_line);
tmp_args_element_value_1 = par_line;
frame_frame_textual$expand_tabs$$$function__1_get_tab_widths->m_frame.f_lineno = 30;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_findall, tmp_args_element_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_matches == NULL);
var_matches = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_matches);
tmp_iter_arg_1 = var_matches;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooooooo";
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
type_description_1 = "ooooooooo";
exception_lineno = 32;
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
    PyObject *old = var_match;
    var_match = tmp_assign_source_7;
    Py_INCREF(var_match);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = const_int_0;
{
    PyObject *old = var_expansion_width;
    var_expansion_width = tmp_assign_source_8;
    Py_INCREF(var_expansion_width);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_match);
tmp_expression_value_2 = var_match;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_endswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_textual$expand_tabs$$$function__1_get_tab_widths->m_frame.f_lineno = 34;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_9_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 34;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_match);
tmp_expression_value_3 = var_match;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_neg_1_none;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_match;
    assert(old != NULL);
    var_match = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
if (var_cell_position == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_position);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 37;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_cell_position;
tmp_called_value_2 = module_var_accessor_textual$expand_tabs$cell_len(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_len);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_match);
tmp_args_element_value_2 = var_match;
frame_frame_textual$expand_tabs$$$function__1_get_tab_widths->m_frame.f_lineno = 37;
tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = tmp_iadd_expr_left_1;
var_cell_position = tmp_assign_source_10;

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
CHECK_OBJECT(var_cell_position);
tmp_mod_expr_left_1 = var_cell_position;
if (par_tab_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tab_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 40;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_mod_expr_right_1 = par_tab_size;
tmp_assign_source_11 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_tab_remainder;
    var_tab_remainder = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
if (par_tab_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tab_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 41;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_1 = par_tab_size;
CHECK_OBJECT(var_tab_remainder);
tmp_sub_expr_right_1 = var_tab_remainder;
tmp_assign_source_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_expansion_width;
    assert(old != NULL);
    var_expansion_width = tmp_assign_source_12;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
CHECK_OBJECT(var_cell_position);
tmp_iadd_expr_left_2 = var_cell_position;
CHECK_OBJECT(var_expansion_width);
tmp_iadd_expr_right_2 = var_expansion_width;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_13 = tmp_iadd_expr_left_2;
var_cell_position = tmp_assign_source_13;

}
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_tuple_element_1;
if (var_add_part == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_add_part);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 44;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_3 = var_add_part;
if (var_match == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_match);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 44;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_tuple_element_1 = var_match;
tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_1);
if (var_expansion_width == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expansion_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 44;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = var_expansion_width;
PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_element_value_3);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_textual$expand_tabs$$$function__1_get_tab_widths->m_frame.f_lineno = 44;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooooooo";
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
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$expand_tabs$$$function__1_get_tab_widths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$expand_tabs$$$function__1_get_tab_widths->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$expand_tabs$$$function__1_get_tab_widths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$expand_tabs$$$function__1_get_tab_widths,
    type_description_1,
    par_line,
    par_tab_size,
    var_parts,
    var_add_part,
    var_cell_position,
    var_matches,
    var_match,
    var_expansion_width,
    var_tab_remainder
);


// Release cached frame if used for exception.
if (frame_frame_textual$expand_tabs$$$function__1_get_tab_widths == cache_frame_frame_textual$expand_tabs$$$function__1_get_tab_widths) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$expand_tabs$$$function__1_get_tab_widths);
    cache_frame_frame_textual$expand_tabs$$$function__1_get_tab_widths = NULL;
}

assertFrameObject(frame_frame_textual$expand_tabs$$$function__1_get_tab_widths);

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
CHECK_OBJECT(var_parts);
tmp_return_value = var_parts;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_parts);
CHECK_OBJECT(var_parts);
Py_DECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_add_part);
var_add_part = NULL;
Py_XDECREF(var_cell_position);
var_cell_position = NULL;
CHECK_OBJECT(var_matches);
CHECK_OBJECT(var_matches);
Py_DECREF(var_matches);
var_matches = NULL;
Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_expansion_width);
var_expansion_width = NULL;
Py_XDECREF(var_tab_remainder);
var_tab_remainder = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_parts);
CHECK_OBJECT(var_parts);
Py_DECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_add_part);
var_add_part = NULL;
Py_XDECREF(var_cell_position);
var_cell_position = NULL;
Py_XDECREF(var_matches);
var_matches = NULL;
Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_expansion_width);
var_expansion_width = NULL;
Py_XDECREF(var_tab_remainder);
var_tab_remainder = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_line);
Py_DECREF(par_line);
CHECK_OBJECT(par_tab_size);
Py_DECREF(par_tab_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_line);
Py_DECREF(par_line);
CHECK_OBJECT(par_tab_size);
Py_DECREF(par_tab_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$expand_tabs$$$function__2_expand_tabs_inline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_line = python_pars[0];
PyObject *par_tab_size = python_pars[1];
PyObject *var_tab_widths = NULL;
PyObject *outline_0_var_part = NULL;
PyObject *outline_0_var_expansion_width = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline)) {
    Py_XDECREF(cache_frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline = MAKE_FUNCTION_FRAME(tstate, code_objects_35d944da106d3f7be0709406ba2d3797, module_textual$expand_tabs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline->m_type_description == NULL);
frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline = cache_frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline);
assert(Py_REFCNT(frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_textual$expand_tabs$get_tab_widths(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_tab_widths);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_line);
tmp_args_element_value_1 = par_line;
CHECK_OBJECT(par_tab_size);
tmp_args_element_value_2 = par_tab_size;
frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline->m_frame.f_lineno = 58;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_tab_widths == NULL);
var_tab_widths = tmp_assign_source_1;
}
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_empty;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_tab_widths);
tmp_iter_arg_1 = var_tab_widths;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 60;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_part;
    outline_0_var_part = tmp_assign_source_8;
    Py_INCREF(outline_0_var_part);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_expansion_width;
    outline_0_var_expansion_width = tmp_assign_source_9;
    Py_INCREF(outline_0_var_expansion_width);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_part);
tmp_add_expr_left_1 = outline_0_var_part;
CHECK_OBJECT(outline_0_var_expansion_width);
tmp_mult_expr_left_1 = outline_0_var_expansion_width;
tmp_mult_expr_right_1 = mod_consts.const_str_space;
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_UNICODE(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_append_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_iterable_value_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_iterable_value_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
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
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_part);
outline_0_var_part = NULL;
Py_XDECREF(outline_0_var_expansion_width);
outline_0_var_expansion_width = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_part);
outline_0_var_part = NULL;
Py_XDECREF(outline_0_var_expansion_width);
outline_0_var_expansion_width = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 60;
goto frame_exception_exit_1;
outline_result_1:;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline,
    type_description_1,
    par_line,
    par_tab_size,
    var_tab_widths
);


// Release cached frame if used for exception.
if (frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline == cache_frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline);
    cache_frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline = NULL;
}

assertFrameObject(frame_frame_textual$expand_tabs$$$function__2_expand_tabs_inline);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_tab_widths);
CHECK_OBJECT(var_tab_widths);
Py_DECREF(var_tab_widths);
var_tab_widths = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tab_widths);
var_tab_widths = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_line);
Py_DECREF(par_line);
CHECK_OBJECT(par_tab_size);
Py_DECREF(par_tab_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_line);
Py_DECREF(par_line);
CHECK_OBJECT(par_tab_size);
Py_DECREF(par_tab_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_line = python_pars[0];
PyObject *par_tab_widths = python_pars[1];
PyObject *var_new_parts = NULL;
PyObject *var_parts = NULL;
PyObject *var_tab_widths_iter = NULL;
PyObject *var_append_part = NULL;
PyObject *var_part = NULL;
PyObject *var_spaces = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths)) {
    Py_XDECREF(cache_frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths = MAKE_FUNCTION_FRAME(tstate, code_objects_8456cbe1d42c81ad0473f19647e8a91a, module_textual$expand_tabs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths->m_type_description == NULL);
frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths = cache_frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths);
assert(Py_REFCNT(frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_chr_9;
CHECK_OBJECT(par_line);
tmp_expression_value_1 = par_line;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_plain);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooo";
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
CHECK_OBJECT(par_line);
tmp_return_value = par_line;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_line);
tmp_expression_value_2 = par_line;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths->m_frame.f_lineno = 82;
tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_chr_9_true_tuple, 0), mod_consts.const_tuple_str_plain_include_separator_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_parts == NULL);
var_parts = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_tab_widths);
tmp_iter_arg_1 = par_tab_widths;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_tab_widths_iter == NULL);
var_tab_widths_iter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_new_parts == NULL);
var_new_parts = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_new_parts);
tmp_expression_value_3 = var_new_parts;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_append);
assert(!(tmp_assign_source_4 == NULL));
assert(var_append_part == NULL);
var_append_part = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_parts);
tmp_iter_arg_2 = var_parts;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
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
type_description_1 = "oooooooo";
exception_lineno = 87;
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
    PyObject *old = var_part;
    var_part = tmp_assign_source_7;
    Py_INCREF(var_part);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_part);
tmp_expression_value_5 = var_part;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_plain);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_endswith);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths->m_frame.f_lineno = 88;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_chr_9_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 88;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_ass_subscript_1;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(var_part);
tmp_expression_value_8 = var_part;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__text);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = const_int_neg_1;
tmp_expression_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_1, -1);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_2 = mod_consts.const_slice_none_int_neg_1_none;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = mod_consts.const_str_space;
tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_part);
tmp_expression_value_9 = var_part;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__text);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 89;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_ass_subscript_1 = const_int_neg_1;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_value_value_1;
CHECK_OBJECT(var_tab_widths_iter);
tmp_value_value_1 = var_tab_widths_iter;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_assign_source_8 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_spaces;
    var_spaces = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_part);
tmp_expression_value_10 = var_part;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_extend_style);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_spaces);
tmp_sub_expr_left_1 = var_spaces;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_args_element_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 91;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths->m_frame.f_lineno = 91;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
if (var_append_part == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_append_part);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_called_value_4 = var_append_part;
CHECK_OBJECT(var_part);
tmp_args_element_value_2 = var_part;
frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths->m_frame.f_lineno = 92;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
tmp_called_value_6 = module_var_accessor_textual$expand_tabs$Text(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths->m_frame.f_lineno = 94;
tmp_expression_value_11 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_empty_str_empty_tuple, 0), mod_consts.const_tuple_str_plain_end_tuple);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_new_parts);
tmp_args_element_value_3 = var_new_parts;
frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths->m_frame.f_lineno = 94;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths,
    type_description_1,
    par_line,
    par_tab_widths,
    var_new_parts,
    var_parts,
    var_tab_widths_iter,
    var_append_part,
    var_part,
    var_spaces
);


// Release cached frame if used for exception.
if (frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths == cache_frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths);
    cache_frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths = NULL;
}

assertFrameObject(frame_frame_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_new_parts);
var_new_parts = NULL;
Py_XDECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_tab_widths_iter);
var_tab_widths_iter = NULL;
Py_XDECREF(var_append_part);
var_append_part = NULL;
Py_XDECREF(var_part);
var_part = NULL;
Py_XDECREF(var_spaces);
var_spaces = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_new_parts);
var_new_parts = NULL;
Py_XDECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_tab_widths_iter);
var_tab_widths_iter = NULL;
Py_XDECREF(var_append_part);
var_append_part = NULL;
Py_XDECREF(var_part);
var_part = NULL;
Py_XDECREF(var_spaces);
var_spaces = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_line);
Py_DECREF(par_line);
CHECK_OBJECT(par_tab_widths);
Py_DECREF(par_tab_widths);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_line);
Py_DECREF(par_line);
CHECK_OBJECT(par_tab_widths);
Py_DECREF(par_tab_widths);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$expand_tabs$$$function__1_get_tab_widths(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$expand_tabs$$$function__1_get_tab_widths,
        mod_consts.const_str_plain_get_tab_widths,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dac4fd42f201693f968fdd03d87c2b55,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$expand_tabs,
        mod_consts.const_str_digest_80117a4796cb21bef4efb9fef2b13ee2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$expand_tabs$$$function__2_expand_tabs_inline(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$expand_tabs$$$function__2_expand_tabs_inline,
        mod_consts.const_str_plain_expand_tabs_inline,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_35d944da106d3f7be0709406ba2d3797,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$expand_tabs,
        mod_consts.const_str_digest_8d0697ff4a97b6431dc1898c0c26e0e8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths,
        mod_consts.const_str_plain_expand_text_tabs_from_widths,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8456cbe1d42c81ad0473f19647e8a91a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$expand_tabs,
        mod_consts.const_str_digest_8a0840933a5bb1f34908448db7763e8c,
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

static function_impl_code const function_table_textual$expand_tabs[] = {
impl_textual$expand_tabs$$$function__1_get_tab_widths,
impl_textual$expand_tabs$$$function__2_expand_tabs_inline,
impl_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$expand_tabs);
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
        module_textual$expand_tabs,
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
        function_table_textual$expand_tabs,
        sizeof(function_table_textual$expand_tabs) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.expand_tabs";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$expand_tabs(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$expand_tabs");

    // Store the module for future use.
    module_textual$expand_tabs = module;

    moduledict_textual$expand_tabs = MODULE_DICT(module_textual$expand_tabs);

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
        PRINT_STRING("textual$expand_tabs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$expand_tabs: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$expand_tabs: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.expand_tabs" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$expand_tabs\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$expand_tabs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$expand_tabs,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$expand_tabs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$expand_tabs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$expand_tabs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$expand_tabs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$expand_tabs);
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

        UPDATE_STRING_DICT1(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_textual$expand_tabs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$expand_tabs = MAKE_MODULE_FRAME(code_objects_010e04b393df1f896bd2bd5500d659da, module_textual$expand_tabs);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$expand_tabs);
assert(Py_REFCNT(frame_frame_textual$expand_tabs) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$expand_tabs$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$expand_tabs$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$expand_tabs;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$expand_tabs->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_5b4d55d96b197250876c5eb0d13fffc3;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$expand_tabs;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_cell_len_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$expand_tabs->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$expand_tabs,
        mod_consts.const_str_plain_cell_len,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_cell_len);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_cell_len, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$expand_tabs;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Text_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$expand_tabs->m_frame.f_lineno = 6;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
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
        (PyObject *)moduledict_textual$expand_tabs,
        mod_consts.const_str_plain_Text,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Text);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_Text, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_textual$expand_tabs$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 8;

    goto frame_exception_exit_1;
}
frame_frame_textual$expand_tabs->m_frame.f_lineno = 8;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_79494d0baa785234b4283e8441f21b85_tuple, 0)
);

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain__TABS_SPLITTER_RE, tmp_assign_source_8);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$expand_tabs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$expand_tabs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$expand_tabs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$expand_tabs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_int_pos_4_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_2626a351a9e569fb52ab0112c189e143);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_9 = MAKE_FUNCTION_textual$expand_tabs$$$function__1_get_tab_widths(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_get_tab_widths, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
tmp_defaults_2 = mod_consts.const_tuple_int_pos_4_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_bb9b00ef7f09f20035c86b4bfdc660ea);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_10 = MAKE_FUNCTION_textual$expand_tabs$$$function__2_expand_tabs_inline(tstate, tmp_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_expand_tabs_inline, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_350851b7c1f62d2e82402b599dcb883b);

tmp_assign_source_11 = MAKE_FUNCTION_textual$expand_tabs$$$function__3_expand_text_tabs_from_widths(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_textual$expand_tabs, (Nuitka_StringObject *)mod_consts.const_str_plain_expand_text_tabs_from_widths, tmp_assign_source_11);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$expand_tabs", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.expand_tabs" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$expand_tabs);
    return module_textual$expand_tabs;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$expand_tabs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$expand_tabs", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

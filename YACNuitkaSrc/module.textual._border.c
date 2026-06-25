/* Generated code for Python module 'textual$_border'
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



/* The "module_textual$_border" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$_border;
PyDictObject *moduledict_textual$_border;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Segment;
PyObject *const_str_plain_BORDER_CHARS;
PyObject *const_str_plain_BORDER_LOCATIONS;
PyObject *const_str_plain_rich_style;
PyObject *const_str_plain_Style;
PyObject *const_str_plain_background;
PyObject *const_str_plain_foreground;
PyObject *const_dict_20f16b30e1951d468c3080dfc46b8748;
PyObject *const_str_digest_29958e62348aedc86b39982a9c199fe9;
PyObject *const_str_digest_531dcf196a8fa93ebfbe67cb85d7de7d;
PyObject *const_str_plain_has_left_corner;
PyObject *const_str_plain_has_right_corner;
PyObject *const_int_pos_2;
PyObject *const_str_plain_label;
PyObject *const_str_plain_cell_length;
PyObject *const_str_plain_width;
PyObject *const_str_plain_truncate;
PyObject *const_dict_dc8628d8cc9cff60201b7afd1b98abde;
PyObject *const_str_plain_pad_left;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_pad_right;
PyObject *const_str_plain_stylize_before;
PyObject *const_str_plain_BORDER_LABEL_LOCATIONS;
PyObject *const_str_plain_is_title;
PyObject *const_str_plain_BORDER_TITLE_FLIP;
PyObject *const_tuple_false_false_tuple;
PyObject *const_str_plain_inner_style;
PyObject *const_str_plain_style;
PyObject *const_str_plain_outer_style;
PyObject *const_int_pos_3;
PyObject *const_str_plain_without_color;
PyObject *const_tuple_str_plain_background_str_plain_foreground_tuple;
PyObject *const_str_plain_render_segments;
PyObject *const_str_plain_render_border_label;
PyObject *const_str_digest_6c57145809af9bda4a37658fef9e276f;
PyObject *const_str_plain_box_row;
PyObject *const_str_plain_left;
PyObject *const_str_plain_right;
PyObject *const_str_plain_label_segments;
PyObject *const_str_plain_max;
PyObject *const_str_plain_text;
PyObject *const_str_plain_label_alignment;
PyObject *const_str_plain_center;
PyObject *const_str_plain_render_row;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_b80f8d56d61b595877f64ceb8efd50f2;
PyObject *const_str_plain__edge_type_normalization_table;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_lru_cache;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Tuple;
PyObject *const_str_plain_cast;
PyObject *const_str_digest_6ade9fb5040f26ac50721029664cef54;
PyObject *const_tuple_str_plain_Segment_tuple;
PyObject *const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
PyObject *const_tuple_str_plain_Color_tuple;
PyObject *const_str_plain_Color;
PyObject *const_str_digest_3f43d1377a3aa44ae25c1e06b470b808;
PyObject *const_tuple_9e48742ea8b3ca7e3f612b18b2903f74_tuple;
PyObject *const_str_plain_AlignHorizontal;
PyObject *const_str_plain_EdgeStyle;
PyObject *const_str_plain_EdgeType;
PyObject *const_str_digest_bb07eb353e080f1046cea51976ebb87f;
PyObject *const_tuple_str_plain_Style_tuple;
PyObject *const_str_plain_INNER;
PyObject *const_str_plain_OUTER;
PyObject *const_dict_2965e3960879dfd19668758ad25c8ab1;
PyObject *const_str_digest_1c41c5de886b3811ffef166769a6062b;
PyObject *const_dict_32824a4ee28e086c8e6cdce2e6c3a51b;
PyObject *const_str_digest_73d0df7aea874a010105a04ad14d0fa3;
PyObject *const_dict_498f09f314e174b3ffd452e745e1e219;
PyObject *const_str_digest_c176330a977258eff618d7f4c385a602;
PyObject *const_str_plain_items;
PyObject *const_str_digest_8d3b008af9190f7b1d00478a4a149ef9;
PyObject *const_tuple_5f46ee29c2001ce843e65c335b27bea7_tuple;
PyObject *const_str_plain_INVISIBLE_EDGE_TYPES;
PyObject *const_str_plain_BorderValue;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain_BoxSegments;
PyObject *const_str_plain_Borders;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_reverse_tuple;
PyObject *const_str_plain_REVERSE_STYLE;
PyObject *const_tuple_int_pos_1024_tuple;
PyObject *const_tuple_str_plain_maxsize_tuple;
PyObject *const_dict_8c1454f591bcda00e9a73979c387d8c7;
PyObject *const_str_plain_get_box;
PyObject *const_dict_5e336003e974ffa282e44de919bdf1d0;
PyObject *const_tuple_str_plain_left_tuple;
PyObject *const_dict_081e4f2b5b7b8f8876d8a1b41a5df073;
PyObject *const_dict_e5110d8645a12b935c4901777138506f;
PyObject *const_str_digest_b59b1e8f40afd05976ce5078c5871eee;
PyObject *const_dict_276ab8c2edff7a17ae0c98265d370c2d;
PyObject *const_str_plain_normalize_border_value;
PyObject *const_str_digest_05a71516d84f12bd3ce40c1031ff1f6d;
PyObject *const_tuple_d5eff60c8eddf6a09022467872f9d063_tuple;
PyObject *const_str_digest_03ac9227905e3f6a0fa131bef807da5c;
PyObject *const_tuple_94f5c7d31c26483008311cd9e5a7ad96_tuple;
PyObject *const_tuple_str_plain_value_tuple;
PyObject *const_tuple_8213a24a5cdb6dd62091d5bd89607e14_tuple;
PyObject *const_tuple_526ba47099ef0accc77641088ea7e574_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[104];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual._border"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Segment);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_BORDER_CHARS);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_BORDER_LOCATIONS);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich_style);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Style);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_background);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_foreground);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_dict_20f16b30e1951d468c3080dfc46b8748);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_29958e62348aedc86b39982a9c199fe9);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_531dcf196a8fa93ebfbe67cb85d7de7d);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_left_corner);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_right_corner);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_label);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_cell_length);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_truncate);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_dict_dc8628d8cc9cff60201b7afd1b98abde);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_pad_left);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_pad_right);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_stylize_before);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_title);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_BORDER_TITLE_FLIP);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_inner_style);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_style);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_outer_style);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_without_color);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_background_str_plain_foreground_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_segments);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_border_label);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c57145809af9bda4a37658fef9e276f);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_box_row);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_left);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_right);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_label_segments);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_label_alignment);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_center);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_row);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_b80f8d56d61b595877f64ceb8efd50f2);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__edge_type_normalization_table);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Color_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_Color);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f43d1377a3aa44ae25c1e06b470b808);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_9e48742ea8b3ca7e3f612b18b2903f74_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_AlignHorizontal);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_EdgeStyle);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_EdgeType);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb07eb353e080f1046cea51976ebb87f);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_INNER);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_OUTER);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_dict_2965e3960879dfd19668758ad25c8ab1);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c41c5de886b3811ffef166769a6062b);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_dict_32824a4ee28e086c8e6cdce2e6c3a51b);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_73d0df7aea874a010105a04ad14d0fa3);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_498f09f314e174b3ffd452e745e1e219);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_c176330a977258eff618d7f4c385a602);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d3b008af9190f7b1d00478a4a149ef9);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_5f46ee29c2001ce843e65c335b27bea7_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_INVISIBLE_EDGE_TYPES);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_BorderValue);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_BoxSegments);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_Borders);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reverse_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_REVERSE_STYLE);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_dict_8c1454f591bcda00e9a73979c387d8c7);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_box);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_dict_5e336003e974ffa282e44de919bdf1d0);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_left_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_dict_081e4f2b5b7b8f8876d8a1b41a5df073);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_dict_e5110d8645a12b935c4901777138506f);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_b59b1e8f40afd05976ce5078c5871eee);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_276ab8c2edff7a17ae0c98265d370c2d);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_border_value);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_05a71516d84f12bd3ce40c1031ff1f6d);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_d5eff60c8eddf6a09022467872f9d063_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_03ac9227905e3f6a0fa131bef807da5c);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_94f5c7d31c26483008311cd9e5a7ad96_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_8213a24a5cdb6dd62091d5bd89607e14_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_526ba47099ef0accc77641088ea7e574_tuple);
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
void checkModuleConstants_textual$_border(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Segment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Segment);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_BORDER_CHARS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BORDER_CHARS);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_BORDER_LOCATIONS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BORDER_LOCATIONS);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich_style);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_Style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Style);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_background));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_background);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_foreground));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_foreground);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_dict_20f16b30e1951d468c3080dfc46b8748));
CHECK_OBJECT_DEEP(mod_consts.const_dict_20f16b30e1951d468c3080dfc46b8748);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_29958e62348aedc86b39982a9c199fe9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_29958e62348aedc86b39982a9c199fe9);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_531dcf196a8fa93ebfbe67cb85d7de7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_531dcf196a8fa93ebfbe67cb85d7de7d);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_left_corner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_left_corner);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_right_corner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_right_corner);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_label));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_label);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_cell_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cell_length);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_width);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_truncate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_truncate);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_dict_dc8628d8cc9cff60201b7afd1b98abde));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dc8628d8cc9cff60201b7afd1b98abde);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_pad_left));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pad_left);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_pad_right));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pad_right);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_stylize_before));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stylize_before);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_title));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_title);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_BORDER_TITLE_FLIP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BORDER_TITLE_FLIP);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_inner_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inner_style);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_style);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_outer_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_outer_style);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_without_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_without_color);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_background_str_plain_foreground_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_background_str_plain_foreground_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_segments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_segments);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_border_label));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_border_label);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c57145809af9bda4a37658fef9e276f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6c57145809af9bda4a37658fef9e276f);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_box_row));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_box_row);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_left));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_left);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_right));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_right);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_label_segments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_label_segments);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_label_alignment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_label_alignment);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_center));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_center);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_row));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_row);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_b80f8d56d61b595877f64ceb8efd50f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b80f8d56d61b595877f64ceb8efd50f2);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__edge_type_normalization_table));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__edge_type_normalization_table);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Segment_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Color_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_Color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Color);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f43d1377a3aa44ae25c1e06b470b808));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f43d1377a3aa44ae25c1e06b470b808);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_9e48742ea8b3ca7e3f612b18b2903f74_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9e48742ea8b3ca7e3f612b18b2903f74_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_AlignHorizontal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AlignHorizontal);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_EdgeStyle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EdgeStyle);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_EdgeType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EdgeType);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb07eb353e080f1046cea51976ebb87f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb07eb353e080f1046cea51976ebb87f);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Style_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_INNER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INNER);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_OUTER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OUTER);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_dict_2965e3960879dfd19668758ad25c8ab1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2965e3960879dfd19668758ad25c8ab1);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c41c5de886b3811ffef166769a6062b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c41c5de886b3811ffef166769a6062b);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_dict_32824a4ee28e086c8e6cdce2e6c3a51b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_32824a4ee28e086c8e6cdce2e6c3a51b);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_73d0df7aea874a010105a04ad14d0fa3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_73d0df7aea874a010105a04ad14d0fa3);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_498f09f314e174b3ffd452e745e1e219));
CHECK_OBJECT_DEEP(mod_consts.const_dict_498f09f314e174b3ffd452e745e1e219);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_c176330a977258eff618d7f4c385a602));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c176330a977258eff618d7f4c385a602);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d3b008af9190f7b1d00478a4a149ef9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8d3b008af9190f7b1d00478a4a149ef9);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_5f46ee29c2001ce843e65c335b27bea7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5f46ee29c2001ce843e65c335b27bea7_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_INVISIBLE_EDGE_TYPES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INVISIBLE_EDGE_TYPES);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_BorderValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BorderValue);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_BoxSegments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BoxSegments);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_Borders));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Borders);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reverse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_reverse_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_REVERSE_STYLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REVERSE_STYLE);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1024_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxsize_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_dict_8c1454f591bcda00e9a73979c387d8c7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8c1454f591bcda00e9a73979c387d8c7);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_box));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_box);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_dict_5e336003e974ffa282e44de919bdf1d0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5e336003e974ffa282e44de919bdf1d0);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_left_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_left_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_dict_081e4f2b5b7b8f8876d8a1b41a5df073));
CHECK_OBJECT_DEEP(mod_consts.const_dict_081e4f2b5b7b8f8876d8a1b41a5df073);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_dict_e5110d8645a12b935c4901777138506f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e5110d8645a12b935c4901777138506f);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_b59b1e8f40afd05976ce5078c5871eee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b59b1e8f40afd05976ce5078c5871eee);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_276ab8c2edff7a17ae0c98265d370c2d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_276ab8c2edff7a17ae0c98265d370c2d);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_border_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize_border_value);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_05a71516d84f12bd3ce40c1031ff1f6d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_05a71516d84f12bd3ce40c1031ff1f6d);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_d5eff60c8eddf6a09022467872f9d063_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d5eff60c8eddf6a09022467872f9d063_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_03ac9227905e3f6a0fa131bef807da5c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03ac9227905e3f6a0fa131bef807da5c);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_94f5c7d31c26483008311cd9e5a7ad96_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_94f5c7d31c26483008311cd9e5a7ad96_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_value_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_8213a24a5cdb6dd62091d5bd89607e14_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8213a24a5cdb6dd62091d5bd89607e14_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_526ba47099ef0accc77641088ea7e574_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_526ba47099ef0accc77641088ea7e574_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 15
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
static PyObject *module_var_accessor_textual$_border$BORDER_CHARS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_CHARS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BORDER_CHARS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BORDER_CHARS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BORDER_CHARS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BORDER_CHARS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_CHARS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_CHARS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_CHARS);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$BORDER_LABEL_LOCATIONS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$BORDER_LOCATIONS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_LOCATIONS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BORDER_LOCATIONS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BORDER_LOCATIONS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BORDER_LOCATIONS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BORDER_LOCATIONS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_LOCATIONS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_LOCATIONS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_LOCATIONS);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$BORDER_TITLE_FLIP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_TITLE_FLIP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BORDER_TITLE_FLIP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BORDER_TITLE_FLIP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BORDER_TITLE_FLIP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BORDER_TITLE_FLIP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_TITLE_FLIP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_TITLE_FLIP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_TITLE_FLIP);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$Color(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Color);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Color, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Color);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Color, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$EdgeStyle(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeStyle);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EdgeStyle);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EdgeStyle, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EdgeStyle);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EdgeStyle, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeStyle);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeStyle);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeStyle);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$EdgeType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EdgeType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EdgeType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EdgeType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EdgeType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeType);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$Segment(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Segment);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Segment, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Segment);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Segment, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$Style(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Style);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Style, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Style);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Style, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$Tuple(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$_edge_type_normalization_table(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain__edge_type_normalization_table);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__edge_type_normalization_table);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__edge_type_normalization_table, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__edge_type_normalization_table);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__edge_type_normalization_table, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain__edge_type_normalization_table);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain__edge_type_normalization_table);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__edge_type_normalization_table);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$cast(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_border$lru_cache(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_border->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_border->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_border->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1140eefb6c4ea9be58d7a234d5521f08;
static PyCodeObject *code_objects_0355e5d18af691797ef59766e5b18c6e;
static PyCodeObject *code_objects_b662b023c39bc3be02376274b7baa1cc;
static PyCodeObject *code_objects_1944b084fc2e5863e48de8c18f1d9ad7;
static PyCodeObject *code_objects_491039f661a69c11e4c36c2b22ba9235;
static PyCodeObject *code_objects_c6ae9fa33616e9493c262299c8c5ffd2;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_05a71516d84f12bd3ce40c1031ff1f6d); CHECK_OBJECT(module_filename_obj);
code_objects_1140eefb6c4ea9be58d7a234d5521f08 = MAKE_CODE_OBJECT(module_filename_obj, 437, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_b80f8d56d61b595877f64ceb8efd50f2, mod_consts.const_tuple_d5eff60c8eddf6a09022467872f9d063_tuple, NULL, 1, 0, 0);
code_objects_0355e5d18af691797ef59766e5b18c6e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_03ac9227905e3f6a0fa131bef807da5c, mod_consts.const_str_digest_03ac9227905e3f6a0fa131bef807da5c, NULL, NULL, 0, 0, 0);
code_objects_b662b023c39bc3be02376274b7baa1cc = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_box, mod_consts.const_str_plain_get_box, mod_consts.const_tuple_94f5c7d31c26483008311cd9e5a7ad96_tuple, NULL, 4, 0, 0);
code_objects_1944b084fc2e5863e48de8c18f1d9ad7 = MAKE_CODE_OBJECT(module_filename_obj, 478, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_normalize_border_value, mod_consts.const_str_plain_normalize_border_value, mod_consts.const_tuple_str_plain_value_tuple, NULL, 1, 0, 0);
code_objects_491039f661a69c11e4c36c2b22ba9235 = MAKE_CODE_OBJECT(module_filename_obj, 326, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render_border_label, mod_consts.const_str_plain_render_border_label, mod_consts.const_tuple_8213a24a5cdb6dd62091d5bd89607e14_tuple, NULL, 9, 0, 0);
code_objects_c6ae9fa33616e9493c262299c8c5ffd2 = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render_row, mod_consts.const_str_plain_render_row, mod_consts.const_tuple_526ba47099ef0accc77641088ea7e574_tuple, NULL, 6, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$_border$$$function__2_render_border_label$$$genobj__1_render_border_label(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_textual$_border$$$function__3_render_row$$$genobj__1_render_row(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_textual$_border$$$function__3_render_row$$$genobj__1_render_row$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_border$$$function__1_get_box(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_border$$$function__2_render_border_label(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_border$$$function__3_render_row(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_border$$$function__4_normalize_border_value(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$_border$$$function__1_get_box(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *par_inner_style = python_pars[1];
PyObject *par_outer_style = python_pars[2];
PyObject *par_style = python_pars[3];
PyObject *var__Segment = NULL;
PyObject *var_top1 = NULL;
PyObject *var_top2 = NULL;
PyObject *var_top3 = NULL;
PyObject *var_mid1 = NULL;
PyObject *var_mid2 = NULL;
PyObject *var_mid3 = NULL;
PyObject *var_bottom1 = NULL;
PyObject *var_bottom2 = NULL;
PyObject *var_bottom3 = NULL;
PyObject *var_ltop1 = NULL;
PyObject *var_ltop2 = NULL;
PyObject *var_ltop3 = NULL;
PyObject *var_lmid1 = NULL;
PyObject *var_lmid2 = NULL;
PyObject *var_lmid3 = NULL;
PyObject *var_lbottom1 = NULL;
PyObject *var_lbottom2 = NULL;
PyObject *var_lbottom3 = NULL;
PyObject *var_inner = NULL;
PyObject *var_outer = NULL;
PyObject *var_styles = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__element_3 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
PyObject *tmp_tuple_unpack_4__element_1 = NULL;
PyObject *tmp_tuple_unpack_4__element_2 = NULL;
PyObject *tmp_tuple_unpack_4__element_3 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
PyObject *tmp_tuple_unpack_5__element_1 = NULL;
PyObject *tmp_tuple_unpack_5__element_2 = NULL;
PyObject *tmp_tuple_unpack_5__element_3 = NULL;
PyObject *tmp_tuple_unpack_5__source_iter = NULL;
PyObject *tmp_tuple_unpack_6__element_1 = NULL;
PyObject *tmp_tuple_unpack_6__element_2 = NULL;
PyObject *tmp_tuple_unpack_6__element_3 = NULL;
PyObject *tmp_tuple_unpack_6__source_iter = NULL;
PyObject *tmp_tuple_unpack_7__element_1 = NULL;
PyObject *tmp_tuple_unpack_7__element_2 = NULL;
PyObject *tmp_tuple_unpack_7__element_3 = NULL;
PyObject *tmp_tuple_unpack_7__source_iter = NULL;
PyObject *tmp_tuple_unpack_8__element_1 = NULL;
PyObject *tmp_tuple_unpack_8__element_2 = NULL;
PyObject *tmp_tuple_unpack_8__element_3 = NULL;
PyObject *tmp_tuple_unpack_8__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_border$$$function__1_get_box;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_border$$$function__1_get_box = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_border$$$function__1_get_box)) {
    Py_XDECREF(cache_frame_frame_textual$_border$$$function__1_get_box);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_border$$$function__1_get_box == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_border$$$function__1_get_box = MAKE_FUNCTION_FRAME(tstate, code_objects_b662b023c39bc3be02376274b7baa1cc, module_textual$_border, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_border$$$function__1_get_box->m_type_description == NULL);
frame_frame_textual$_border$$$function__1_get_box = cache_frame_frame_textual$_border$$$function__1_get_box;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_border$$$function__1_get_box);
assert(Py_REFCNT(frame_frame_textual$_border$$$function__1_get_box) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__Segment == NULL);
Py_INCREF(tmp_assign_source_1);
var__Segment = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_textual$_border$BORDER_CHARS(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BORDER_CHARS);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_name);
tmp_subscript_value_1 = par_name;
tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
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
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_iter_arg_2 = tmp_tuple_unpack_1__element_1;
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 2, 3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_3 == NULL);
tmp_tuple_unpack_2__element_3 = tmp_assign_source_9;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
assert(var_top1 == NULL);
Py_INCREF(tmp_assign_source_10);
var_top1 = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
assert(var_top2 == NULL);
Py_INCREF(tmp_assign_source_11);
var_top2 = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_12 = tmp_tuple_unpack_2__element_3;
assert(var_top3 == NULL);
Py_INCREF(tmp_assign_source_12);
var_top3 = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_iter_arg_3 = tmp_tuple_unpack_1__element_2;
tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_3__source_iter == NULL);
tmp_tuple_unpack_3__source_iter = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_1 == NULL);
tmp_tuple_unpack_3__element_1 = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_2 == NULL);
tmp_tuple_unpack_3__element_2 = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 2, 3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_3 == NULL);
tmp_tuple_unpack_3__element_3 = tmp_assign_source_16;
}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
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

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_2;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_17 = tmp_tuple_unpack_3__element_1;
assert(var_mid1 == NULL);
Py_INCREF(tmp_assign_source_17);
var_mid1 = tmp_assign_source_17;
}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_18 = tmp_tuple_unpack_3__element_2;
assert(var_mid2 == NULL);
Py_INCREF(tmp_assign_source_18);
var_mid2 = tmp_assign_source_18;
}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
tmp_assign_source_19 = tmp_tuple_unpack_3__element_3;
assert(var_mid3 == NULL);
Py_INCREF(tmp_assign_source_19);
var_mid3 = tmp_assign_source_19;
}
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;

Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_iter_arg_4 = tmp_tuple_unpack_1__element_3;
tmp_assign_source_20 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(tmp_tuple_unpack_4__source_iter == NULL);
tmp_tuple_unpack_4__source_iter = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 0, 3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_tuple_unpack_4__element_1 == NULL);
tmp_tuple_unpack_4__element_1 = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_unpack_11;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 1, 3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_tuple_unpack_4__element_2 == NULL);
tmp_tuple_unpack_4__element_2 = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_unpack_12;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_23 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 2, 3);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_tuple_unpack_4__element_3 == NULL);
tmp_tuple_unpack_4__element_3 = tmp_assign_source_23;
}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooooooooooooooooooooooo";
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

CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_assign_source_24 = tmp_tuple_unpack_4__element_1;
assert(var_bottom1 == NULL);
Py_INCREF(tmp_assign_source_24);
var_bottom1 = tmp_assign_source_24;
}
Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_assign_source_25 = tmp_tuple_unpack_4__element_2;
assert(var_bottom2 == NULL);
Py_INCREF(tmp_assign_source_25);
var_bottom2 = tmp_assign_source_25;
}
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
tmp_assign_source_26 = tmp_tuple_unpack_4__element_3;
assert(var_bottom3 == NULL);
Py_INCREF(tmp_assign_source_26);
var_bottom3 = tmp_assign_source_26;
}
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;

Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iter_arg_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_expression_value_2 = module_var_accessor_textual$_border$BORDER_LOCATIONS(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BORDER_LOCATIONS);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 295;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(par_name);
tmp_subscript_value_2 = par_name;
tmp_iter_arg_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
assert(tmp_tuple_unpack_5__source_iter == NULL);
tmp_tuple_unpack_5__source_iter = tmp_assign_source_27;
}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_13;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_13 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 0, 3);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_5__element_1 == NULL);
tmp_tuple_unpack_5__element_1 = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_unpack_14;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_14 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_29 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 1, 3);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_5__element_2 == NULL);
tmp_tuple_unpack_5__element_2 = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_unpack_15;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_15 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_30 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_15, 2, 3);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_5__element_3 == NULL);
tmp_tuple_unpack_5__element_3 = tmp_assign_source_30;
}
{
PyObject *tmp_iterator_name_5;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
tmp_iter_arg_6 = tmp_tuple_unpack_5__element_1;
tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
assert(tmp_tuple_unpack_6__source_iter == NULL);
tmp_tuple_unpack_6__source_iter = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_unpack_16;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_16 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_32 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_16, 0, 3);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
assert(tmp_tuple_unpack_6__element_1 == NULL);
tmp_tuple_unpack_6__element_1 = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_unpack_17;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_17 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_33 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_17, 1, 3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
assert(tmp_tuple_unpack_6__element_2 == NULL);
tmp_tuple_unpack_6__element_2 = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_unpack_18;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_18 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_34 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_18, 2, 3);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
assert(tmp_tuple_unpack_6__element_3 == NULL);
tmp_tuple_unpack_6__element_3 = tmp_assign_source_34;
}
{
PyObject *tmp_iterator_name_6;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_6, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
}
goto try_end_10;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_12;
// End of try:
try_end_10:;
goto try_end_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_6__element_3);
tmp_tuple_unpack_6__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_10;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
{
PyObject *tmp_assign_source_35;
CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
tmp_assign_source_35 = tmp_tuple_unpack_6__element_1;
assert(var_ltop1 == NULL);
Py_INCREF(tmp_assign_source_35);
var_ltop1 = tmp_assign_source_35;
}
Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;

{
PyObject *tmp_assign_source_36;
CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
tmp_assign_source_36 = tmp_tuple_unpack_6__element_2;
assert(var_ltop2 == NULL);
Py_INCREF(tmp_assign_source_36);
var_ltop2 = tmp_assign_source_36;
}
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;

{
PyObject *tmp_assign_source_37;
CHECK_OBJECT(tmp_tuple_unpack_6__element_3);
tmp_assign_source_37 = tmp_tuple_unpack_6__element_3;
assert(var_ltop3 == NULL);
Py_INCREF(tmp_assign_source_37);
var_ltop3 = tmp_assign_source_37;
}
Py_XDECREF(tmp_tuple_unpack_6__element_3);
tmp_tuple_unpack_6__element_3 = NULL;

Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
tmp_iter_arg_7 = tmp_tuple_unpack_5__element_2;
tmp_assign_source_38 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
assert(tmp_tuple_unpack_7__source_iter == NULL);
tmp_tuple_unpack_7__source_iter = tmp_assign_source_38;
}
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_unpack_19;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_19 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_39 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_19, 0, 3);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
assert(tmp_tuple_unpack_7__element_1 == NULL);
tmp_tuple_unpack_7__element_1 = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_unpack_20;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_20 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_40 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_20, 1, 3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
assert(tmp_tuple_unpack_7__element_2 == NULL);
tmp_tuple_unpack_7__element_2 = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_unpack_21;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_21 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_41 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_21, 2, 3);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
assert(tmp_tuple_unpack_7__element_3 == NULL);
tmp_tuple_unpack_7__element_3 = tmp_assign_source_41;
}
{
PyObject *tmp_iterator_name_7;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_7, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
}
goto try_end_12;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
Py_DECREF(tmp_tuple_unpack_7__source_iter);
tmp_tuple_unpack_7__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_14;
// End of try:
try_end_12:;
goto try_end_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_7__element_1);
tmp_tuple_unpack_7__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_7__element_2);
tmp_tuple_unpack_7__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_7__element_3);
tmp_tuple_unpack_7__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_10;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
Py_DECREF(tmp_tuple_unpack_7__source_iter);
tmp_tuple_unpack_7__source_iter = NULL;
{
PyObject *tmp_assign_source_42;
CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
tmp_assign_source_42 = tmp_tuple_unpack_7__element_1;
assert(var_lmid1 == NULL);
Py_INCREF(tmp_assign_source_42);
var_lmid1 = tmp_assign_source_42;
}
Py_XDECREF(tmp_tuple_unpack_7__element_1);
tmp_tuple_unpack_7__element_1 = NULL;

{
PyObject *tmp_assign_source_43;
CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
tmp_assign_source_43 = tmp_tuple_unpack_7__element_2;
assert(var_lmid2 == NULL);
Py_INCREF(tmp_assign_source_43);
var_lmid2 = tmp_assign_source_43;
}
Py_XDECREF(tmp_tuple_unpack_7__element_2);
tmp_tuple_unpack_7__element_2 = NULL;

{
PyObject *tmp_assign_source_44;
CHECK_OBJECT(tmp_tuple_unpack_7__element_3);
tmp_assign_source_44 = tmp_tuple_unpack_7__element_3;
assert(var_lmid3 == NULL);
Py_INCREF(tmp_assign_source_44);
var_lmid3 = tmp_assign_source_44;
}
Py_XDECREF(tmp_tuple_unpack_7__element_3);
tmp_tuple_unpack_7__element_3 = NULL;

Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_iter_arg_8;
CHECK_OBJECT(tmp_tuple_unpack_5__element_3);
tmp_iter_arg_8 = tmp_tuple_unpack_5__element_3;
tmp_assign_source_45 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
assert(tmp_tuple_unpack_8__source_iter == NULL);
tmp_tuple_unpack_8__source_iter = tmp_assign_source_45;
}
// Tried code:
{
PyObject *tmp_assign_source_46;
PyObject *tmp_unpack_22;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_unpack_22 = tmp_tuple_unpack_8__source_iter;
tmp_assign_source_46 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_22, 0, 3);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
assert(tmp_tuple_unpack_8__element_1 == NULL);
tmp_tuple_unpack_8__element_1 = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_unpack_23;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_unpack_23 = tmp_tuple_unpack_8__source_iter;
tmp_assign_source_47 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_23, 1, 3);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
assert(tmp_tuple_unpack_8__element_2 == NULL);
tmp_tuple_unpack_8__element_2 = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_unpack_24;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_unpack_24 = tmp_tuple_unpack_8__source_iter;
tmp_assign_source_48 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_24, 2, 3);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
assert(tmp_tuple_unpack_8__element_3 == NULL);
tmp_tuple_unpack_8__element_3 = tmp_assign_source_48;
}
{
PyObject *tmp_iterator_name_8;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_8, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
}
goto try_end_14;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
Py_DECREF(tmp_tuple_unpack_8__source_iter);
tmp_tuple_unpack_8__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_16;
// End of try:
try_end_14:;
goto try_end_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_8__element_1);
tmp_tuple_unpack_8__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_8__element_2);
tmp_tuple_unpack_8__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_8__element_3);
tmp_tuple_unpack_8__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_10;
// End of try:
try_end_15:;
goto try_end_16;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_3);
tmp_tuple_unpack_5__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_16:;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
Py_DECREF(tmp_tuple_unpack_8__source_iter);
tmp_tuple_unpack_8__source_iter = NULL;
{
PyObject *tmp_assign_source_49;
CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
tmp_assign_source_49 = tmp_tuple_unpack_8__element_1;
assert(var_lbottom1 == NULL);
Py_INCREF(tmp_assign_source_49);
var_lbottom1 = tmp_assign_source_49;
}
Py_XDECREF(tmp_tuple_unpack_8__element_1);
tmp_tuple_unpack_8__element_1 = NULL;

{
PyObject *tmp_assign_source_50;
CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
tmp_assign_source_50 = tmp_tuple_unpack_8__element_2;
assert(var_lbottom2 == NULL);
Py_INCREF(tmp_assign_source_50);
var_lbottom2 = tmp_assign_source_50;
}
Py_XDECREF(tmp_tuple_unpack_8__element_2);
tmp_tuple_unpack_8__element_2 = NULL;

{
PyObject *tmp_assign_source_51;
CHECK_OBJECT(tmp_tuple_unpack_8__element_3);
tmp_assign_source_51 = tmp_tuple_unpack_8__element_3;
assert(var_lbottom3 == NULL);
Py_INCREF(tmp_assign_source_51);
var_lbottom3 = tmp_assign_source_51;
}
Py_XDECREF(tmp_tuple_unpack_8__element_3);
tmp_tuple_unpack_8__element_3 = NULL;

Py_XDECREF(tmp_tuple_unpack_5__element_3);
tmp_tuple_unpack_5__element_3 = NULL;

{
PyObject *tmp_assign_source_52;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_inner_style);
tmp_add_expr_left_1 = par_inner_style;
CHECK_OBJECT(par_style);
tmp_add_expr_right_1 = par_style;
tmp_assign_source_52 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_inner == NULL);
var_inner = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(par_outer_style);
tmp_add_expr_left_2 = par_outer_style;
CHECK_OBJECT(par_style);
tmp_add_expr_right_2 = par_style;
tmp_assign_source_53 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_outer == NULL);
var_outer = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_inner);
tmp_expression_value_3 = var_inner;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_rich_style);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_54 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_kwargs_value_2;
PyTuple_SET_ITEM(tmp_assign_source_54, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_outer);
tmp_expression_value_4 = var_outer;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_rich_style);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_54, 1, tmp_tuple_element_1);
tmp_called_value_1 = module_var_accessor_textual$_border$Style(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_outer);
tmp_expression_value_6 = var_outer;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_background);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_inner);
tmp_expression_value_7 = var_inner;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_foreground);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_args_value_1);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_20f16b30e1951d468c3080dfc46b8748);
frame_frame_textual$_border$$$function__1_get_box->m_frame.f_lineno = 303;
tmp_expression_value_5 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_rich_style);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_54, 2, tmp_tuple_element_1);
tmp_called_value_2 = module_var_accessor_textual$_border$Style(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_inner);
tmp_expression_value_9 = var_inner;
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_background);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_outer);
tmp_expression_value_10 = var_outer;
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_foreground);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_args_value_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_args_value_2);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_20f16b30e1951d468c3080dfc46b8748);
frame_frame_textual$_border$$$function__1_get_box->m_frame.f_lineno = 304;
tmp_expression_value_8 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_rich_style);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_54, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_54);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
assert(var_styles == NULL);
var_styles = tmp_assign_source_54;
}
{
PyObject *tmp_tuple_element_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var__Segment);
tmp_called_value_3 = var__Segment;
CHECK_OBJECT(var_top1);
tmp_args_element_value_1 = var_top1;
CHECK_OBJECT(var_styles);
tmp_expression_value_11 = var_styles;
CHECK_OBJECT(var_ltop1);
tmp_subscript_value_3 = var_ltop1;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_border$$$function__1_get_box->m_frame.f_lineno = 309;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_tuple_element_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_5;
PyTuple_SET_ITEM(tmp_tuple_element_4, 0, tmp_tuple_element_5);
CHECK_OBJECT(var__Segment);
tmp_called_value_4 = var__Segment;
CHECK_OBJECT(var_top2);
tmp_args_element_value_3 = var_top2;
CHECK_OBJECT(var_styles);
tmp_expression_value_12 = var_styles;
CHECK_OBJECT(var_ltop2);
tmp_subscript_value_4 = var_ltop2;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_4);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
frame_frame_textual$_border$$$function__1_get_box->m_frame.f_lineno = 310;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_tuple_element_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_5);
CHECK_OBJECT(var__Segment);
tmp_called_value_5 = var__Segment;
CHECK_OBJECT(var_top3);
tmp_args_element_value_5 = var_top3;
CHECK_OBJECT(var_styles);
tmp_expression_value_13 = var_styles;
CHECK_OBJECT(var_ltop3);
tmp_subscript_value_5 = var_ltop3;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_5);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
frame_frame_textual$_border$$$function__1_get_box->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_tuple_element_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_tuple_element_4, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_tuple_element_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_6;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_6;
PyObject *tmp_tuple_element_7;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_9;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_4);
CHECK_OBJECT(var__Segment);
tmp_called_value_6 = var__Segment;
CHECK_OBJECT(var_mid1);
tmp_args_element_value_7 = var_mid1;
CHECK_OBJECT(var_styles);
tmp_expression_value_14 = var_styles;
CHECK_OBJECT(var_lmid1);
tmp_subscript_value_6 = var_lmid1;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_6);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
frame_frame_textual$_border$$$function__1_get_box->m_frame.f_lineno = 314;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_tuple_element_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_8;
PyTuple_SET_ITEM(tmp_tuple_element_4, 0, tmp_tuple_element_6);
CHECK_OBJECT(var__Segment);
tmp_called_value_7 = var__Segment;
CHECK_OBJECT(var_mid2);
tmp_args_element_value_9 = var_mid2;
CHECK_OBJECT(var_styles);
tmp_expression_value_15 = var_styles;
CHECK_OBJECT(var_lmid2);
tmp_subscript_value_7 = var_lmid2;
tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_7);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_6;
}
frame_frame_textual$_border$$$function__1_get_box->m_frame.f_lineno = 315;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_tuple_element_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_6);
CHECK_OBJECT(var__Segment);
tmp_called_value_8 = var__Segment;
CHECK_OBJECT(var_mid3);
tmp_args_element_value_11 = var_mid3;
CHECK_OBJECT(var_styles);
tmp_expression_value_16 = var_styles;
CHECK_OBJECT(var_lmid3);
tmp_subscript_value_8 = var_lmid3;
tmp_args_element_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_8);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_6;
}
frame_frame_textual$_border$$$function__1_get_box->m_frame.f_lineno = 316;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_tuple_element_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_tuple_element_4, 2, tmp_tuple_element_6);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_tuple_element_4);
goto tuple_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_4);
CHECK_OBJECT(var__Segment);
tmp_called_value_9 = var__Segment;
CHECK_OBJECT(var_bottom1);
tmp_args_element_value_13 = var_bottom1;
CHECK_OBJECT(var_styles);
tmp_expression_value_17 = var_styles;
CHECK_OBJECT(var_lbottom1);
tmp_subscript_value_9 = var_lbottom1;
tmp_args_element_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_9);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
frame_frame_textual$_border$$$function__1_get_box->m_frame.f_lineno = 319;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_tuple_element_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_11;
PyTuple_SET_ITEM(tmp_tuple_element_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(var__Segment);
tmp_called_value_10 = var__Segment;
CHECK_OBJECT(var_bottom2);
tmp_args_element_value_15 = var_bottom2;
CHECK_OBJECT(var_styles);
tmp_expression_value_18 = var_styles;
CHECK_OBJECT(var_lbottom2);
tmp_subscript_value_10 = var_lbottom2;
tmp_args_element_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_10);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_7;
}
frame_frame_textual$_border$$$function__1_get_box->m_frame.f_lineno = 320;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_tuple_element_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_7);
CHECK_OBJECT(var__Segment);
tmp_called_value_11 = var__Segment;
CHECK_OBJECT(var_bottom3);
tmp_args_element_value_17 = var_bottom3;
CHECK_OBJECT(var_styles);
tmp_expression_value_19 = var_styles;
CHECK_OBJECT(var_lbottom3);
tmp_subscript_value_11 = var_lbottom3;
tmp_args_element_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_11);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_7;
}
frame_frame_textual$_border$$$function__1_get_box->m_frame.f_lineno = 321;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_tuple_element_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_tuple_element_4, 2, tmp_tuple_element_7);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_tuple_element_4);
goto tuple_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_border$$$function__1_get_box, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_border$$$function__1_get_box->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_border$$$function__1_get_box, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_border$$$function__1_get_box,
    type_description_1,
    par_name,
    par_inner_style,
    par_outer_style,
    par_style,
    var__Segment,
    var_top1,
    var_top2,
    var_top3,
    var_mid1,
    var_mid2,
    var_mid3,
    var_bottom1,
    var_bottom2,
    var_bottom3,
    var_ltop1,
    var_ltop2,
    var_ltop3,
    var_lmid1,
    var_lmid2,
    var_lmid3,
    var_lbottom1,
    var_lbottom2,
    var_lbottom3,
    var_inner,
    var_outer,
    var_styles
);


// Release cached frame if used for exception.
if (frame_frame_textual$_border$$$function__1_get_box == cache_frame_frame_textual$_border$$$function__1_get_box) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_border$$$function__1_get_box);
    cache_frame_frame_textual$_border$$$function__1_get_box = NULL;
}

assertFrameObject(frame_frame_textual$_border$$$function__1_get_box);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__Segment);
CHECK_OBJECT(var__Segment);
Py_DECREF(var__Segment);
var__Segment = NULL;
CHECK_OBJECT(var_top1);
CHECK_OBJECT(var_top1);
Py_DECREF(var_top1);
var_top1 = NULL;
CHECK_OBJECT(var_top2);
CHECK_OBJECT(var_top2);
Py_DECREF(var_top2);
var_top2 = NULL;
CHECK_OBJECT(var_top3);
CHECK_OBJECT(var_top3);
Py_DECREF(var_top3);
var_top3 = NULL;
CHECK_OBJECT(var_mid1);
CHECK_OBJECT(var_mid1);
Py_DECREF(var_mid1);
var_mid1 = NULL;
CHECK_OBJECT(var_mid2);
CHECK_OBJECT(var_mid2);
Py_DECREF(var_mid2);
var_mid2 = NULL;
CHECK_OBJECT(var_mid3);
CHECK_OBJECT(var_mid3);
Py_DECREF(var_mid3);
var_mid3 = NULL;
CHECK_OBJECT(var_bottom1);
CHECK_OBJECT(var_bottom1);
Py_DECREF(var_bottom1);
var_bottom1 = NULL;
CHECK_OBJECT(var_bottom2);
CHECK_OBJECT(var_bottom2);
Py_DECREF(var_bottom2);
var_bottom2 = NULL;
CHECK_OBJECT(var_bottom3);
CHECK_OBJECT(var_bottom3);
Py_DECREF(var_bottom3);
var_bottom3 = NULL;
CHECK_OBJECT(var_ltop1);
CHECK_OBJECT(var_ltop1);
Py_DECREF(var_ltop1);
var_ltop1 = NULL;
CHECK_OBJECT(var_ltop2);
CHECK_OBJECT(var_ltop2);
Py_DECREF(var_ltop2);
var_ltop2 = NULL;
CHECK_OBJECT(var_ltop3);
CHECK_OBJECT(var_ltop3);
Py_DECREF(var_ltop3);
var_ltop3 = NULL;
CHECK_OBJECT(var_lmid1);
CHECK_OBJECT(var_lmid1);
Py_DECREF(var_lmid1);
var_lmid1 = NULL;
CHECK_OBJECT(var_lmid2);
CHECK_OBJECT(var_lmid2);
Py_DECREF(var_lmid2);
var_lmid2 = NULL;
CHECK_OBJECT(var_lmid3);
CHECK_OBJECT(var_lmid3);
Py_DECREF(var_lmid3);
var_lmid3 = NULL;
CHECK_OBJECT(var_lbottom1);
CHECK_OBJECT(var_lbottom1);
Py_DECREF(var_lbottom1);
var_lbottom1 = NULL;
CHECK_OBJECT(var_lbottom2);
CHECK_OBJECT(var_lbottom2);
Py_DECREF(var_lbottom2);
var_lbottom2 = NULL;
CHECK_OBJECT(var_lbottom3);
CHECK_OBJECT(var_lbottom3);
Py_DECREF(var_lbottom3);
var_lbottom3 = NULL;
CHECK_OBJECT(var_inner);
CHECK_OBJECT(var_inner);
Py_DECREF(var_inner);
var_inner = NULL;
CHECK_OBJECT(var_outer);
CHECK_OBJECT(var_outer);
Py_DECREF(var_outer);
var_outer = NULL;
CHECK_OBJECT(var_styles);
CHECK_OBJECT(var_styles);
Py_DECREF(var_styles);
var_styles = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__Segment);
var__Segment = NULL;
Py_XDECREF(var_top1);
var_top1 = NULL;
Py_XDECREF(var_top2);
var_top2 = NULL;
Py_XDECREF(var_top3);
var_top3 = NULL;
Py_XDECREF(var_mid1);
var_mid1 = NULL;
Py_XDECREF(var_mid2);
var_mid2 = NULL;
Py_XDECREF(var_mid3);
var_mid3 = NULL;
Py_XDECREF(var_bottom1);
var_bottom1 = NULL;
Py_XDECREF(var_bottom2);
var_bottom2 = NULL;
Py_XDECREF(var_bottom3);
var_bottom3 = NULL;
Py_XDECREF(var_ltop1);
var_ltop1 = NULL;
Py_XDECREF(var_ltop2);
var_ltop2 = NULL;
Py_XDECREF(var_ltop3);
var_ltop3 = NULL;
Py_XDECREF(var_lmid1);
var_lmid1 = NULL;
Py_XDECREF(var_lmid2);
var_lmid2 = NULL;
Py_XDECREF(var_lmid3);
var_lmid3 = NULL;
Py_XDECREF(var_lbottom1);
var_lbottom1 = NULL;
Py_XDECREF(var_lbottom2);
var_lbottom2 = NULL;
Py_XDECREF(var_lbottom3);
var_lbottom3 = NULL;
Py_XDECREF(var_inner);
var_inner = NULL;
Py_XDECREF(var_outer);
var_outer = NULL;
Py_XDECREF(var_styles);
var_styles = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_inner_style);
Py_DECREF(par_inner_style);
CHECK_OBJECT(par_outer_style);
Py_DECREF(par_outer_style);
CHECK_OBJECT(par_style);
Py_DECREF(par_style);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_inner_style);
Py_DECREF(par_inner_style);
CHECK_OBJECT(par_outer_style);
Py_DECREF(par_outer_style);
CHECK_OBJECT(par_style);
Py_DECREF(par_style);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_border$$$function__2_render_border_label(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_label = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_is_title = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_width = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_inner_style = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_outer_style = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_style = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_has_left_corner = Nuitka_Cell_New1(python_pars[7]);
struct Nuitka_CellObject *par_has_right_corner = Nuitka_Cell_New1(python_pars[8]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[9];
tmp_closure_1[0] = par_has_left_corner;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_has_right_corner;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_inner_style;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_is_title;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_label;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_name;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_outer_style;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_style;
Py_INCREF(tmp_closure_1[7]);
tmp_closure_1[8] = par_width;
Py_INCREF(tmp_closure_1[8]);
tmp_return_value = MAKE_GENERATOR_textual$_border$$$function__2_render_border_label$$$genobj__1_render_border_label(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_label);
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
par_label = NULL;
CHECK_OBJECT(par_is_title);
CHECK_OBJECT(par_is_title);
Py_DECREF(par_is_title);
par_is_title = NULL;
CHECK_OBJECT(par_name);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
par_name = NULL;
CHECK_OBJECT(par_width);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
par_width = NULL;
CHECK_OBJECT(par_inner_style);
CHECK_OBJECT(par_inner_style);
Py_DECREF(par_inner_style);
par_inner_style = NULL;
CHECK_OBJECT(par_outer_style);
CHECK_OBJECT(par_outer_style);
Py_DECREF(par_outer_style);
par_outer_style = NULL;
CHECK_OBJECT(par_style);
CHECK_OBJECT(par_style);
Py_DECREF(par_style);
par_style = NULL;
CHECK_OBJECT(par_has_left_corner);
CHECK_OBJECT(par_has_left_corner);
Py_DECREF(par_has_left_corner);
par_has_left_corner = NULL;
CHECK_OBJECT(par_has_right_corner);
CHECK_OBJECT(par_has_right_corner);
Py_DECREF(par_has_right_corner);
par_has_right_corner = NULL;
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
struct textual$_border$$$function__2_render_border_label$$$genobj__1_render_border_label_locals {
PyObject *var_base_style;
PyObject *var_corners_needed;
PyObject *var_cells_reserved;
PyObject *var_text_label;
PyObject *var_label_style;
PyObject *var_label_style_location;
PyObject *var_flip_top;
PyObject *var_flip_bottom;
PyObject *var_inner;
PyObject *var_outer;
PyObject *var_segments;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_tuple_unpack_2__element_1;
PyObject *tmp_tuple_unpack_2__element_2;
PyObject *tmp_tuple_unpack_2__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
int tmp_res;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *textual$_border$$$function__2_render_border_label$$$genobj__1_render_border_label_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_border$$$function__2_render_border_label$$$genobj__1_render_border_label_locals *generator_heap = (struct textual$_border$$$function__2_render_border_label$$$genobj__1_render_border_label_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_base_style = NULL;
generator_heap->var_corners_needed = NULL;
generator_heap->var_cells_reserved = NULL;
generator_heap->var_text_label = NULL;
generator_heap->var_label_style = NULL;
generator_heap->var_label_style_location = NULL;
generator_heap->var_flip_top = NULL;
generator_heap->var_flip_bottom = NULL;
generator_heap->var_inner = NULL;
generator_heap->var_outer = NULL;
generator_heap->var_segments = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;
generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_491039f661a69c11e4c36c2b22ba9235, module_textual$_border, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_has_left_corner);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 364;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_has_right_corner);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 364;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 364;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_corners_needed == NULL);
generator_heap->var_corners_needed = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
tmp_mult_expr_left_1 = mod_consts.const_int_pos_2;
CHECK_OBJECT(generator_heap->var_corners_needed);
tmp_mult_expr_right_1 = generator_heap->var_corners_needed;
tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 365;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_cells_reserved == NULL);
generator_heap->var_cells_reserved = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_label);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 367;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_2;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[4]);
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 367;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_tuple_unpack_1__source_iter == NULL);
generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 367;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_tuple_unpack_1__element_1 == NULL);
generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 367;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_tuple_unpack_1__element_2 == NULL);
generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 367;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_1;
assert(generator_heap->var_text_label == NULL);
Py_INCREF(tmp_assign_source_6);
generator_heap->var_text_label = tmp_assign_source_6;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = generator_heap->tmp_tuple_unpack_1__element_2;
assert(generator_heap->var_label_style == NULL);
Py_INCREF(tmp_assign_source_7);
generator_heap->var_label_style = tmp_assign_source_7;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(generator_heap->var_text_label);
tmp_expression_value_1 = generator_heap->var_text_label;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_cell_length);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 369;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 369;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_width);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 369;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[8]);
CHECK_OBJECT(generator_heap->var_cells_reserved);
tmp_cmp_expr_right_1 = generator_heap->var_cells_reserved;
tmp_or_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 369;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
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
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(generator_heap->var_text_label);
tmp_expression_value_2 = generator_heap->var_text_label;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_truncate);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 372;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[8]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_width);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 372;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[8]);
CHECK_OBJECT(generator_heap->var_cells_reserved);
tmp_sub_expr_right_1 = generator_heap->var_cells_reserved;
tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_1);

generator_heap->exception_lineno = 372;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_dc8628d8cc9cff60201b7afd1b98abde);
generator->m_frame->m_frame.f_lineno = 372;
tmp_assign_source_8 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 372;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_text_label;
    assert(old != NULL);
    generator_heap->var_text_label = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_has_left_corner);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 373;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[0]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 373;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(generator_heap->var_text_label);
tmp_called_instance_1 = generator_heap->var_text_label;
generator->m_frame->m_frame.f_lineno = 374;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_pad_left,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 374;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_text_label;
    assert(old != NULL);
    generator_heap->var_text_label = tmp_assign_source_9;
    Py_DECREF(old);
}

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_has_right_corner);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 375;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[1]));
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 375;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(generator_heap->var_text_label);
tmp_called_instance_2 = generator_heap->var_text_label;
generator->m_frame->m_frame.f_lineno = 376;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_pad_right,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 376;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_text_label;
    assert(old != NULL);
    generator_heap->var_text_label = tmp_assign_source_10;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(generator_heap->var_text_label);
tmp_called_instance_3 = generator_heap->var_text_label;
CHECK_OBJECT(generator_heap->var_label_style);
tmp_args_element_value_1 = generator_heap->var_label_style;
generator->m_frame->m_frame.f_lineno = 377;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_stylize_before, tmp_args_element_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 377;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_text_label;
    assert(old != NULL);
    generator_heap->var_text_label = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_value_2;
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_3;
tmp_expression_value_4 = module_var_accessor_textual$_border$BORDER_LABEL_LOCATIONS(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_1 = Nuitka_Cell_GET(generator->m_closure[5]);
tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_expression_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_title);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_3 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[3]));
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_expression_value_3);

generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_subscript_value_2 = const_int_0;
goto condexpr_end_1;
condexpr_false_1:;
tmp_subscript_value_2 = const_int_pos_1;
condexpr_end_1:;
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 379;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_label_style_location == NULL);
generator_heap->var_label_style_location = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_5 = module_var_accessor_textual$_border$BORDER_TITLE_FLIP(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_BORDER_TITLE_FLIP);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 380;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 380;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 380;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[5]);
tmp_args_element_value_3 = mod_consts.const_tuple_false_false_tuple;
generator->m_frame->m_frame.f_lineno = 380;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 380;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 380;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_4;
}
assert(generator_heap->tmp_tuple_unpack_2__source_iter == NULL);
generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 380;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_tuple_unpack_2__element_1 == NULL);
generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 380;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_tuple_unpack_2__element_2 == NULL);
generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_2__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_2, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 380;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
tmp_assign_source_16 = generator_heap->tmp_tuple_unpack_2__element_1;
assert(generator_heap->var_flip_top == NULL);
Py_INCREF(tmp_assign_source_16);
generator_heap->var_flip_top = tmp_assign_source_16;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
tmp_assign_source_17 = generator_heap->tmp_tuple_unpack_2__element_2;
assert(generator_heap->var_flip_bottom == NULL);
Py_INCREF(tmp_assign_source_17);
generator_heap->var_flip_bottom = tmp_assign_source_17;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_18;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_inner_style);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 382;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_2 = Nuitka_Cell_GET(generator->m_closure[2]);
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_style);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 382;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_right_2 = Nuitka_Cell_GET(generator->m_closure[7]);
tmp_assign_source_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 382;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_inner == NULL);
generator_heap->var_inner = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_outer_style);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 383;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_3 = Nuitka_Cell_GET(generator->m_closure[6]);
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_style);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 383;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_right_3 = Nuitka_Cell_GET(generator->m_closure[7]);
tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 383;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_outer == NULL);
generator_heap->var_outer = tmp_assign_source_19;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(generator_heap->var_label_style_location);
tmp_cmp_expr_left_2 = generator_heap->var_label_style_location;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 386;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(generator_heap->var_inner);
tmp_assign_source_20 = generator_heap->var_inner;
assert(generator_heap->var_base_style == NULL);
Py_INCREF(tmp_assign_source_20);
generator_heap->var_base_style = tmp_assign_source_20;
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(generator_heap->var_label_style_location);
tmp_cmp_expr_left_3 = generator_heap->var_label_style_location;
tmp_cmp_expr_right_3 = const_int_pos_1;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 388;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(generator_heap->var_outer);
tmp_assign_source_21 = generator_heap->var_outer;
assert(generator_heap->var_base_style == NULL);
Py_INCREF(tmp_assign_source_21);
generator_heap->var_base_style = tmp_assign_source_21;
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(generator_heap->var_label_style_location);
tmp_cmp_expr_left_4 = generator_heap->var_label_style_location;
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_2;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 390;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_kwargs_value_2;
tmp_called_value_3 = module_var_accessor_textual$_border$Style(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 391;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_outer);
tmp_expression_value_6 = generator_heap->var_outer;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_background);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 391;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(generator_heap->var_inner);
tmp_expression_value_7 = generator_heap->var_inner;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_foreground);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 391;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_20f16b30e1951d468c3080dfc46b8748);
generator->m_frame->m_frame.f_lineno = 391;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 391;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_base_style == NULL);
generator_heap->var_base_style = tmp_assign_source_22;
}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(generator_heap->var_label_style_location);
tmp_cmp_expr_left_5 = generator_heap->var_label_style_location;
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_3;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 392;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_kwargs_value_3;
tmp_called_value_4 = module_var_accessor_textual$_border$Style(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 393;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_inner);
tmp_expression_value_8 = generator_heap->var_inner;
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_background);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 393;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_9;
PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(generator_heap->var_outer);
tmp_expression_value_9 = generator_heap->var_outer;
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_foreground);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 393;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_args_value_3, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_args_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts.const_dict_20f16b30e1951d468c3080dfc46b8748);
generator->m_frame->m_frame.f_lineno = 393;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
CHECK_OBJECT(tmp_kwargs_value_3);
Py_DECREF(tmp_kwargs_value_3);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 393;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_base_style == NULL);
generator_heap->var_base_style = tmp_assign_source_23;
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_raise_type_1;
generator->m_frame->m_frame.f_lineno = 395;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 395;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccccccccooooooooooo";
goto frame_exception_exit_1;
}
branch_end_7:;
branch_end_6:;
branch_end_5:;
branch_end_4:;
{
nuitka_bool tmp_condition_result_9;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_4;
int tmp_truth_name_5;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_6;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(generator_heap->var_flip_top);
tmp_truth_name_4 = CHECK_IF_TRUE(generator_heap->var_flip_top);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_title);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_5 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[3]));
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_value_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_left_value_2 = tmp_and_left_value_1;
and_end_1:;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(generator_heap->var_flip_bottom);
tmp_truth_name_6 = CHECK_IF_TRUE(generator_heap->var_flip_bottom);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_title);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(generator->m_closure[3]);
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_or_right_value_2 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_9 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_9 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(generator_heap->var_base_style);
tmp_expression_value_10 = generator_heap->var_base_style;
tmp_add_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_without_color);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_textual$_border$Style(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_add_expr_left_4);

generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_base_style);
tmp_expression_value_11 = generator_heap->var_base_style;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_foreground);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_add_expr_left_4);

generator_heap->exception_lineno = 399;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_base_style);
tmp_expression_value_12 = generator_heap->var_base_style;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_background);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_add_expr_left_4);
Py_DECREF(tmp_kw_call_value_0_1);

generator_heap->exception_lineno = 400;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 398;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_add_expr_right_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_background_str_plain_foreground_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_add_expr_left_4);

generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_base_style;
    assert(old != NULL);
    generator_heap->var_base_style = tmp_assign_source_24;
    Py_DECREF(old);
}

}
branch_no_8:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(generator_heap->var_text_label);
tmp_called_instance_4 = generator_heap->var_text_label;
CHECK_OBJECT(generator_heap->var_base_style);
tmp_args_element_value_4 = generator_heap->var_base_style;
generator->m_frame->m_frame.f_lineno = 403;
tmp_assign_source_25 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_render_segments, tmp_args_element_value_4);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 403;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_segments == NULL);
generator_heap->var_segments = tmp_assign_source_25;
}
{
PyObject *tmp_expression_value_13;
PyObject *tmp_yieldfrom_result_1;
CHECK_OBJECT(generator_heap->var_segments);
tmp_expression_value_13 = generator_heap->var_segments;
Py_INCREF(tmp_expression_value_13);
generator->m_yield_return_index = 1;
generator->m_yield_from = tmp_expression_value_13;
return NULL;

yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 404;
generator_heap->type_description_1 = "cccccccccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_yieldfrom_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_1);
Py_DECREF(tmp_yieldfrom_result_1);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(generator));
#endif
Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

goto try_return_handler_1;

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
    generator->m_closure[4],
    generator->m_closure[3],
    generator->m_closure[5],
    generator->m_closure[8],
    generator->m_closure[2],
    generator->m_closure[6],
    generator->m_closure[7],
    generator->m_closure[0],
    generator->m_closure[1],
    generator_heap->var_base_style,
    generator_heap->var_corners_needed,
    generator_heap->var_cells_reserved,
    generator_heap->var_text_label,
    generator_heap->var_label_style,
    generator_heap->var_label_style_location,
    generator_heap->var_flip_top,
    generator_heap->var_flip_bottom,
    generator_heap->var_inner,
    generator_heap->var_outer,
    generator_heap->var_segments
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
goto try_end_5;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(generator_heap->var_corners_needed);
CHECK_OBJECT(generator_heap->var_corners_needed);
Py_DECREF(generator_heap->var_corners_needed);
generator_heap->var_corners_needed = NULL;
CHECK_OBJECT(generator_heap->var_cells_reserved);
CHECK_OBJECT(generator_heap->var_cells_reserved);
Py_DECREF(generator_heap->var_cells_reserved);
generator_heap->var_cells_reserved = NULL;
CHECK_OBJECT(generator_heap->var_text_label);
CHECK_OBJECT(generator_heap->var_text_label);
Py_DECREF(generator_heap->var_text_label);
generator_heap->var_text_label = NULL;
CHECK_OBJECT(generator_heap->var_label_style);
CHECK_OBJECT(generator_heap->var_label_style);
Py_DECREF(generator_heap->var_label_style);
generator_heap->var_label_style = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_base_style);
generator_heap->var_base_style = NULL;
Py_XDECREF(generator_heap->var_corners_needed);
generator_heap->var_corners_needed = NULL;
Py_XDECREF(generator_heap->var_cells_reserved);
generator_heap->var_cells_reserved = NULL;
Py_XDECREF(generator_heap->var_text_label);
generator_heap->var_text_label = NULL;
Py_XDECREF(generator_heap->var_label_style);
generator_heap->var_label_style = NULL;
Py_XDECREF(generator_heap->var_label_style_location);
generator_heap->var_label_style_location = NULL;
Py_XDECREF(generator_heap->var_flip_top);
generator_heap->var_flip_top = NULL;
Py_XDECREF(generator_heap->var_flip_bottom);
generator_heap->var_flip_bottom = NULL;
Py_XDECREF(generator_heap->var_inner);
generator_heap->var_inner = NULL;
Py_XDECREF(generator_heap->var_outer);
generator_heap->var_outer = NULL;
Py_XDECREF(generator_heap->var_segments);
generator_heap->var_segments = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:
try_end_5:;
CHECK_OBJECT(generator_heap->var_base_style);
CHECK_OBJECT(generator_heap->var_base_style);
Py_DECREF(generator_heap->var_base_style);
generator_heap->var_base_style = NULL;
CHECK_OBJECT(generator_heap->var_corners_needed);
CHECK_OBJECT(generator_heap->var_corners_needed);
Py_DECREF(generator_heap->var_corners_needed);
generator_heap->var_corners_needed = NULL;
CHECK_OBJECT(generator_heap->var_cells_reserved);
CHECK_OBJECT(generator_heap->var_cells_reserved);
Py_DECREF(generator_heap->var_cells_reserved);
generator_heap->var_cells_reserved = NULL;
CHECK_OBJECT(generator_heap->var_text_label);
CHECK_OBJECT(generator_heap->var_text_label);
Py_DECREF(generator_heap->var_text_label);
generator_heap->var_text_label = NULL;
CHECK_OBJECT(generator_heap->var_label_style);
CHECK_OBJECT(generator_heap->var_label_style);
Py_DECREF(generator_heap->var_label_style);
generator_heap->var_label_style = NULL;
CHECK_OBJECT(generator_heap->var_label_style_location);
CHECK_OBJECT(generator_heap->var_label_style_location);
Py_DECREF(generator_heap->var_label_style_location);
generator_heap->var_label_style_location = NULL;
CHECK_OBJECT(generator_heap->var_flip_top);
CHECK_OBJECT(generator_heap->var_flip_top);
Py_DECREF(generator_heap->var_flip_top);
generator_heap->var_flip_top = NULL;
CHECK_OBJECT(generator_heap->var_flip_bottom);
CHECK_OBJECT(generator_heap->var_flip_bottom);
Py_DECREF(generator_heap->var_flip_bottom);
generator_heap->var_flip_bottom = NULL;
CHECK_OBJECT(generator_heap->var_inner);
CHECK_OBJECT(generator_heap->var_inner);
Py_DECREF(generator_heap->var_inner);
generator_heap->var_inner = NULL;
CHECK_OBJECT(generator_heap->var_outer);
CHECK_OBJECT(generator_heap->var_outer);
Py_DECREF(generator_heap->var_outer);
generator_heap->var_outer = NULL;
CHECK_OBJECT(generator_heap->var_segments);
CHECK_OBJECT(generator_heap->var_segments);
Py_DECREF(generator_heap->var_segments);
generator_heap->var_segments = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif


    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$_border$$$function__2_render_border_label$$$genobj__1_render_border_label(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$_border$$$function__2_render_border_label$$$genobj__1_render_border_label_context,
        module_textual$_border,
        mod_consts.const_str_plain_render_border_label,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_491039f661a69c11e4c36c2b22ba9235,
        closure,
        9,
#if 1
        sizeof(struct textual$_border$$$function__2_render_border_label$$$genobj__1_render_border_label_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$_border$$$function__3_render_row(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_box_row = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_width = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_left = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_right = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_label_segments = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_label_alignment = Nuitka_Cell_New1(python_pars[5]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[6];
tmp_closure_1[0] = par_box_row;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_label_alignment;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_label_segments;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_left;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_right;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_width;
Py_INCREF(tmp_closure_1[5]);
tmp_return_value = MAKE_GENERATOR_textual$_border$$$function__3_render_row$$$genobj__1_render_row(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_box_row);
CHECK_OBJECT(par_box_row);
Py_DECREF(par_box_row);
par_box_row = NULL;
CHECK_OBJECT(par_width);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
par_width = NULL;
CHECK_OBJECT(par_left);
CHECK_OBJECT(par_left);
Py_DECREF(par_left);
par_left = NULL;
CHECK_OBJECT(par_right);
CHECK_OBJECT(par_right);
Py_DECREF(par_right);
par_right = NULL;
CHECK_OBJECT(par_label_segments);
CHECK_OBJECT(par_label_segments);
Py_DECREF(par_label_segments);
par_label_segments = NULL;
CHECK_OBJECT(par_label_alignment);
CHECK_OBJECT(par_label_alignment);
Py_DECREF(par_label_alignment);
par_label_alignment = NULL;
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
struct textual$_border$$$function__3_render_row$$$genobj__1_render_row_locals {
PyObject *var_box1;
PyObject *var_box2;
PyObject *var_box3;
PyObject *var_corners_needed;
PyObject *var_label_segments_list;
PyObject *var_label_length;
PyObject *var_space_available;
PyObject *var_edge;
PyObject *var_length_on_left;
PyObject *var_length_on_right;
PyObject *tmp_genexpr_1__$0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__element_3;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *textual$_border$$$function__3_render_row$$$genobj__1_render_row_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_border$$$function__3_render_row$$$genobj__1_render_row_locals *generator_heap = (struct textual$_border$$$function__3_render_row$$$genobj__1_render_row_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 13: goto yield_return_13;
case 12: goto yield_return_12;
case 11: goto yield_return_11;
case 10: goto yield_return_10;
case 9: goto yield_return_9;
case 8: goto yield_return_8;
case 7: goto yield_return_7;
case 6: goto yield_return_6;
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_box1 = NULL;
generator_heap->var_box2 = NULL;
generator_heap->var_box3 = NULL;
generator_heap->var_corners_needed = NULL;
generator_heap->var_label_segments_list = NULL;
generator_heap->var_label_length = NULL;
generator_heap->var_space_available = NULL;
generator_heap->var_edge = NULL;
generator_heap->var_length_on_left = NULL;
generator_heap->var_length_on_right = NULL;
generator_heap->tmp_genexpr_1__$0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c6ae9fa33616e9493c262299c8c5ffd2, module_textual$_border, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_box_row);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 432;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto try_except_handler_2;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 432;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_tuple_unpack_1__source_iter == NULL);
generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 432;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_tuple_unpack_1__element_1 == NULL);
generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 432;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_tuple_unpack_1__element_2 == NULL);
generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 432;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_tuple_unpack_1__element_3 == NULL);
generator_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 3);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 432;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
assert(generator_heap->var_box1 == NULL);
Py_INCREF(tmp_assign_source_5);
generator_heap->var_box1 = tmp_assign_source_5;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
assert(generator_heap->var_box2 == NULL);
Py_INCREF(tmp_assign_source_6);
generator_heap->var_box2 = tmp_assign_source_6;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_7 = generator_heap->tmp_tuple_unpack_1__element_3;
assert(generator_heap->var_box3 == NULL);
Py_INCREF(tmp_assign_source_7);
generator_heap->var_box3 = tmp_assign_source_7;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_8;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_left);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 434;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_right);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 434;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[4]);
tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 434;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_corners_needed == NULL);
generator_heap->var_corners_needed = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_list_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_label_segments);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 435;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_1 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_assign_source_9 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 435;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_label_segments_list == NULL);
generator_heap->var_label_segments_list = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_sum_sequence_1;
PyObject *tmp_sum_start_1;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->var_label_segments_list);
tmp_iter_arg_2 = generator_heap->var_label_segments_list;
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_genexpr_1__$0 == NULL);
generator_heap->tmp_genexpr_1__$0 = tmp_assign_source_11;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(generator_heap->tmp_genexpr_1__$0);
tmp_sum_sequence_1 = MAKE_GENERATOR_textual$_border$$$function__3_render_row$$$genobj__1_render_row$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(generator_heap->tmp_genexpr_1__$0);
CHECK_OBJECT(generator_heap->tmp_genexpr_1__$0);
Py_DECREF(generator_heap->tmp_genexpr_1__$0);
generator_heap->tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_sum_start_1 = const_int_0;
tmp_assign_source_10 = BUILTIN_SUM2(tstate, tmp_sum_sequence_1, tmp_sum_start_1);
CHECK_OBJECT(tmp_sum_sequence_1);
Py_DECREF(tmp_sum_sequence_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_label_length == NULL);
generator_heap->var_label_length = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_1 = const_int_0;
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_width);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_2 = Nuitka_Cell_GET(generator->m_closure[5]);
CHECK_OBJECT(generator_heap->var_corners_needed);
tmp_sub_expr_right_2 = generator_heap->var_corners_needed;
tmp_sub_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_label_length);
tmp_sub_expr_right_1 = generator_heap->var_label_length;
tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 438;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_space_available == NULL);
generator_heap->var_space_available = tmp_assign_source_12;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_left);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[3]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "ccccccoooooooooo";
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
PyObject *tmp_expression_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_box1);
tmp_expression_value_1 = generator_heap->var_box1;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 441;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(generator_heap->var_space_available);
tmp_operand_value_1 = generator_heap->var_space_available;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 443;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_2;
PyObject *tmp_yieldfrom_result_1;
CHECK_OBJECT(generator_heap->var_label_segments_list);
tmp_expression_value_2 = generator_heap->var_label_segments_list;
Py_INCREF(tmp_expression_value_2);
generator->m_yield_return_index = 2;
generator->m_yield_from = tmp_expression_value_2;
return NULL;

yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 444;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yieldfrom_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_1);
Py_DECREF(tmp_yieldfrom_result_1);
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(generator_heap->var_label_length);
tmp_operand_value_2 = generator_heap->var_label_length;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 445;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_5;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
tmp_called_value_2 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 446;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_box2);
tmp_expression_value_4 = generator_heap->var_box2;
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_text);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 446;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_space_available);
tmp_mult_expr_right_1 = generator_heap->var_space_available;
tmp_args_element_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 446;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_box2);
tmp_expression_value_5 = generator_heap->var_box2;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_style);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_3);

generator_heap->exception_lineno = 446;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 446;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_expression_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 446;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_mult_expr_left_1, sizeof(PyObject *), &tmp_mult_expr_right_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 3;
return tmp_expression_value_3;
yield_return_3:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_mult_expr_left_1, sizeof(PyObject *), &tmp_mult_expr_right_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 446;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_label_alignment);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_left;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_label_alignment);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_right;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_4 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_7;
tmp_called_value_3 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 448;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_box2);
tmp_expression_value_6 = generator_heap->var_box2;
tmp_mult_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_text);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 448;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_space_available);
tmp_sub_expr_left_3 = generator_heap->var_space_available;
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_mult_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_mult_expr_left_2);

generator_heap->exception_lineno = 448;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 448;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_box2);
tmp_expression_value_7 = generator_heap->var_box2;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_style);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_5);

generator_heap->exception_lineno = 448;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 448;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 448;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_edge == NULL);
generator_heap->var_edge = tmp_assign_source_13;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_label_alignment);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 449;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_left;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 449;
generator_heap->type_description_1 = "ccccccoooooooooo";
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
PyObject *tmp_expression_value_8;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_10;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
tmp_called_value_4 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 450;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_box2);
tmp_expression_value_9 = generator_heap->var_box2;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_text);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 450;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_box2);
tmp_expression_value_10 = generator_heap->var_box2;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_style);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_7);

generator_heap->exception_lineno = 450;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 450;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_expression_value_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 450;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 4;
return tmp_expression_value_8;
yield_return_4:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 450;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_3);
Py_DECREF(tmp_yield_result_3);
}
{
PyObject *tmp_expression_value_11;
PyObject *tmp_yieldfrom_result_2;
CHECK_OBJECT(generator_heap->var_label_segments_list);
tmp_expression_value_11 = generator_heap->var_label_segments_list;
Py_INCREF(tmp_expression_value_11);
generator->m_yield_return_index = 5;
generator->m_yield_from = tmp_expression_value_11;
return NULL;

yield_return_5:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 451;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yieldfrom_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_2);
Py_DECREF(tmp_yieldfrom_result_2);
}
{
PyObject *tmp_expression_value_12;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_4;
CHECK_OBJECT(generator_heap->var_edge);
tmp_expression_value_12 = generator_heap->var_edge;
Py_INCREF(tmp_expression_value_12);
generator->m_yield_return_index = 6;
return tmp_expression_value_12;
yield_return_6:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 452;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_4 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_4);
Py_DECREF(tmp_yield_result_4);
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_expression_value_13;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_5;
CHECK_OBJECT(generator_heap->var_edge);
tmp_expression_value_13 = generator_heap->var_edge;
Py_INCREF(tmp_expression_value_13);
generator->m_yield_return_index = 7;
return tmp_expression_value_13;
yield_return_7:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 454;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_5 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_5);
Py_DECREF(tmp_yield_result_5);
}
{
PyObject *tmp_expression_value_14;
PyObject *tmp_yieldfrom_result_3;
CHECK_OBJECT(generator_heap->var_label_segments_list);
tmp_expression_value_14 = generator_heap->var_label_segments_list;
Py_INCREF(tmp_expression_value_14);
generator->m_yield_return_index = 8;
generator->m_yield_from = tmp_expression_value_14;
return NULL;

yield_return_8:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 455;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yieldfrom_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_3);
Py_DECREF(tmp_yieldfrom_result_3);
}
{
PyObject *tmp_expression_value_15;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_17;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_6;
tmp_called_value_5 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 456;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_box2);
tmp_expression_value_16 = generator_heap->var_box2;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_text);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 456;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_box2);
tmp_expression_value_17 = generator_heap->var_box2;
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_style);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_9);

generator_heap->exception_lineno = 456;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 456;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_expression_value_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 456;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 9;
return tmp_expression_value_15;
yield_return_9:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 456;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_6 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_6);
Py_DECREF(tmp_yield_result_6);
}
branch_end_5:;
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_label_alignment);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 457;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_center;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 457;
generator_heap->type_description_1 = "ccccccoooooooooo";
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
PyObject *tmp_assign_source_14;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
CHECK_OBJECT(generator_heap->var_space_available);
tmp_floordiv_expr_left_1 = generator_heap->var_space_available;
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_assign_source_14 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 458;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_length_on_left == NULL);
generator_heap->var_length_on_left = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
CHECK_OBJECT(generator_heap->var_space_available);
tmp_sub_expr_left_4 = generator_heap->var_space_available;
CHECK_OBJECT(generator_heap->var_length_on_left);
tmp_sub_expr_right_4 = generator_heap->var_length_on_left;
tmp_assign_source_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 459;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_length_on_right == NULL);
generator_heap->var_length_on_right = tmp_assign_source_15;
}
{
PyObject *tmp_expression_value_18;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_11;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_20;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_7;
tmp_called_value_6 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 460;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_box2);
tmp_expression_value_19 = generator_heap->var_box2;
tmp_mult_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_text);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 460;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_length_on_left);
tmp_mult_expr_right_3 = generator_heap->var_length_on_left;
tmp_args_element_value_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 460;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_box2);
tmp_expression_value_20 = generator_heap->var_box2;
tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_style);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_11);

generator_heap->exception_lineno = 460;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 460;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_expression_value_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 460;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), &tmp_mult_expr_left_3, sizeof(PyObject *), &tmp_mult_expr_right_3, sizeof(PyObject *), &tmp_expression_value_19, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_expression_value_20, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 10;
return tmp_expression_value_18;
yield_return_10:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), &tmp_mult_expr_left_3, sizeof(PyObject *), &tmp_mult_expr_right_3, sizeof(PyObject *), &tmp_expression_value_19, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_expression_value_20, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 460;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_7 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_7);
Py_DECREF(tmp_yield_result_7);
}
{
PyObject *tmp_expression_value_21;
PyObject *tmp_yieldfrom_result_4;
CHECK_OBJECT(generator_heap->var_label_segments_list);
tmp_expression_value_21 = generator_heap->var_label_segments_list;
Py_INCREF(tmp_expression_value_21);
generator->m_yield_return_index = 11;
generator->m_yield_from = tmp_expression_value_21;
return NULL;

yield_return_11:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 461;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yieldfrom_result_4 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_4);
Py_DECREF(tmp_yieldfrom_result_4);
}
{
PyObject *tmp_expression_value_22;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_13;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_24;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_8;
tmp_called_value_7 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 462;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_box2);
tmp_expression_value_23 = generator_heap->var_box2;
tmp_mult_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_text);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 462;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_length_on_right);
tmp_mult_expr_right_4 = generator_heap->var_length_on_right;
tmp_args_element_value_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 462;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_box2);
tmp_expression_value_24 = generator_heap->var_box2;
tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_style);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_13);

generator_heap->exception_lineno = 462;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 462;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_expression_value_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 462;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_7, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), &tmp_mult_expr_left_4, sizeof(PyObject *), &tmp_mult_expr_right_4, sizeof(PyObject *), &tmp_expression_value_23, sizeof(PyObject *), &tmp_args_element_value_14, sizeof(PyObject *), &tmp_expression_value_24, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 12;
return tmp_expression_value_22;
yield_return_12:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_7, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), &tmp_mult_expr_left_4, sizeof(PyObject *), &tmp_mult_expr_right_4, sizeof(PyObject *), &tmp_expression_value_23, sizeof(PyObject *), &tmp_args_element_value_14, sizeof(PyObject *), &tmp_expression_value_24, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 462;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_8 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_8);
Py_DECREF(tmp_yield_result_8);
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_raise_type_1;
generator->m_frame->m_frame.f_lineno = 464;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 464;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccccccoooooooooo";
goto frame_exception_exit_1;
}
branch_end_6:;
branch_end_4:;
branch_end_3:;
branch_end_2:;
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_2;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_right);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 466;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[4]));
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 466;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_expression_value_25;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_9;
CHECK_OBJECT(generator_heap->var_box3);
tmp_expression_value_25 = generator_heap->var_box3;
Py_INCREF(tmp_expression_value_25);
generator->m_yield_return_index = 13;
return tmp_expression_value_25;
yield_return_13:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 467;
generator_heap->type_description_1 = "ccccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_9 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_9);
Py_DECREF(tmp_yield_result_9);
}
branch_no_7:;

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
    generator->m_closure[5],
    generator->m_closure[3],
    generator->m_closure[4],
    generator->m_closure[2],
    generator->m_closure[1],
    generator_heap->var_box1,
    generator_heap->var_box2,
    generator_heap->var_box3,
    generator_heap->var_corners_needed,
    generator_heap->var_label_segments_list,
    generator_heap->var_label_length,
    generator_heap->var_space_available,
    generator_heap->var_edge,
    generator_heap->var_length_on_left,
    generator_heap->var_length_on_right
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
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_box1);
generator_heap->var_box1 = NULL;
Py_XDECREF(generator_heap->var_box2);
generator_heap->var_box2 = NULL;
Py_XDECREF(generator_heap->var_box3);
generator_heap->var_box3 = NULL;
Py_XDECREF(generator_heap->var_corners_needed);
generator_heap->var_corners_needed = NULL;
Py_XDECREF(generator_heap->var_label_segments_list);
generator_heap->var_label_segments_list = NULL;
Py_XDECREF(generator_heap->var_label_length);
generator_heap->var_label_length = NULL;
Py_XDECREF(generator_heap->var_space_available);
generator_heap->var_space_available = NULL;
Py_XDECREF(generator_heap->var_edge);
generator_heap->var_edge = NULL;
Py_XDECREF(generator_heap->var_length_on_left);
generator_heap->var_length_on_left = NULL;
Py_XDECREF(generator_heap->var_length_on_right);
generator_heap->var_length_on_right = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_3:;
CHECK_OBJECT(generator_heap->var_box1);
CHECK_OBJECT(generator_heap->var_box1);
Py_DECREF(generator_heap->var_box1);
generator_heap->var_box1 = NULL;
CHECK_OBJECT(generator_heap->var_box2);
CHECK_OBJECT(generator_heap->var_box2);
Py_DECREF(generator_heap->var_box2);
generator_heap->var_box2 = NULL;
CHECK_OBJECT(generator_heap->var_box3);
CHECK_OBJECT(generator_heap->var_box3);
Py_DECREF(generator_heap->var_box3);
generator_heap->var_box3 = NULL;
CHECK_OBJECT(generator_heap->var_corners_needed);
CHECK_OBJECT(generator_heap->var_corners_needed);
Py_DECREF(generator_heap->var_corners_needed);
generator_heap->var_corners_needed = NULL;
CHECK_OBJECT(generator_heap->var_label_segments_list);
CHECK_OBJECT(generator_heap->var_label_segments_list);
Py_DECREF(generator_heap->var_label_segments_list);
generator_heap->var_label_segments_list = NULL;
CHECK_OBJECT(generator_heap->var_label_length);
CHECK_OBJECT(generator_heap->var_label_length);
Py_DECREF(generator_heap->var_label_length);
generator_heap->var_label_length = NULL;
CHECK_OBJECT(generator_heap->var_space_available);
CHECK_OBJECT(generator_heap->var_space_available);
Py_DECREF(generator_heap->var_space_available);
generator_heap->var_space_available = NULL;
Py_XDECREF(generator_heap->var_edge);
generator_heap->var_edge = NULL;
Py_XDECREF(generator_heap->var_length_on_left);
generator_heap->var_length_on_left = NULL;
Py_XDECREF(generator_heap->var_length_on_right);
generator_heap->var_length_on_right = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$_border$$$function__3_render_row$$$genobj__1_render_row(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$_border$$$function__3_render_row$$$genobj__1_render_row_context,
        module_textual$_border,
        mod_consts.const_str_plain_render_row,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_c6ae9fa33616e9493c262299c8c5ffd2,
        closure,
        6,
#if 1
        sizeof(struct textual$_border$$$function__3_render_row$$$genobj__1_render_row_locals)
#else
        0
#endif
    );
}



#if 1
struct textual$_border$$$function__3_render_row$$$genobj__1_render_row$$$genexpr__1_genexpr_locals {
PyObject *var_segment;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *textual$_border$$$function__3_render_row$$$genobj__1_render_row$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_border$$$function__3_render_row$$$genobj__1_render_row$$$genexpr__1_genexpr_locals *generator_heap = (struct textual$_border$$$function__3_render_row$$$genobj__1_render_row$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_segment = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1140eefb6c4ea9be58d7a234d5521f08, module_textual$_border, sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 437;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_segment;
    generator_heap->var_segment = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_segment);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_segment);
tmp_expression_value_2 = generator_heap->var_segment;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_cell_length);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    NULL,
    generator_heap->var_segment
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_segment);
generator_heap->var_segment = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_segment);
generator_heap->var_segment = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$_border$$$function__3_render_row$$$genobj__1_render_row$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$_border$$$function__3_render_row$$$genobj__1_render_row$$$genexpr__1_genexpr_context,
        module_textual$_border,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_b80f8d56d61b595877f64ceb8efd50f2,
#endif
        code_objects_1140eefb6c4ea9be58d7a234d5521f08,
        closure,
        1,
#if 1
        sizeof(struct textual$_border$$$function__3_render_row$$$genobj__1_render_row$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$_border$$$function__4_normalize_border_value(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$_border$$$function__4_normalize_border_value;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_border$$$function__4_normalize_border_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_border$$$function__4_normalize_border_value)) {
    Py_XDECREF(cache_frame_frame_textual$_border$$$function__4_normalize_border_value);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_border$$$function__4_normalize_border_value == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_border$$$function__4_normalize_border_value = MAKE_FUNCTION_FRAME(tstate, code_objects_1944b084fc2e5863e48de8c18f1d9ad7, module_textual$_border, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_border$$$function__4_normalize_border_value->m_type_description == NULL);
frame_frame_textual$_border$$$function__4_normalize_border_value = cache_frame_frame_textual$_border$$$function__4_normalize_border_value;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_border$$$function__4_normalize_border_value);
assert(Py_REFCNT(frame_frame_textual$_border$$$function__4_normalize_border_value) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
tmp_expression_value_1 = module_var_accessor_textual$_border$_edge_type_normalization_table(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__edge_type_normalization_table);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 479;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_expression_value_2 = par_value;
tmp_subscript_value_1 = const_int_0;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 479;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_expression_value_3 = par_value;
tmp_subscript_value_2 = const_int_0;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 0);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 479;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$_border$$$function__4_normalize_border_value->m_frame.f_lineno = 479;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_value);
tmp_expression_value_4 = par_value;
tmp_subscript_value_3 = const_int_pos_1;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_3, 1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_border$$$function__4_normalize_border_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_border$$$function__4_normalize_border_value->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_border$$$function__4_normalize_border_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_border$$$function__4_normalize_border_value,
    type_description_1,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_textual$_border$$$function__4_normalize_border_value == cache_frame_frame_textual$_border$$$function__4_normalize_border_value) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_border$$$function__4_normalize_border_value);
    cache_frame_frame_textual$_border$$$function__4_normalize_border_value = NULL;
}

assertFrameObject(frame_frame_textual$_border$$$function__4_normalize_border_value);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$_border$$$function__1_get_box(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_border$$$function__1_get_box,
        mod_consts.const_str_plain_get_box,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b662b023c39bc3be02376274b7baa1cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_border,
        mod_consts.const_str_digest_29958e62348aedc86b39982a9c199fe9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_border$$$function__2_render_border_label(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_border$$$function__2_render_border_label,
        mod_consts.const_str_plain_render_border_label,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_491039f661a69c11e4c36c2b22ba9235,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_border,
        mod_consts.const_str_digest_531dcf196a8fa93ebfbe67cb85d7de7d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_border$$$function__3_render_row(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_border$$$function__3_render_row,
        mod_consts.const_str_plain_render_row,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c6ae9fa33616e9493c262299c8c5ffd2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_border,
        mod_consts.const_str_digest_6c57145809af9bda4a37658fef9e276f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_border$$$function__4_normalize_border_value(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_border$$$function__4_normalize_border_value,
        mod_consts.const_str_plain_normalize_border_value,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1944b084fc2e5863e48de8c18f1d9ad7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_border,
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

static function_impl_code const function_table_textual$_border[] = {
impl_textual$_border$$$function__1_get_box,
impl_textual$_border$$$function__2_render_border_label,
impl_textual$_border$$$function__3_render_row,
impl_textual$_border$$$function__4_normalize_border_value,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$_border);
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
        module_textual$_border,
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
        function_table_textual$_border,
        sizeof(function_table_textual$_border) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual._border";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$_border(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$_border");

    // Store the module for future use.
    module_textual$_border = module;

    moduledict_textual$_border = MODULE_DICT(module_textual$_border);

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
        PRINT_STRING("textual$_border: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$_border: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$_border: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._border" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$_border\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$_border,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$_border,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$_border,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_border,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_border,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$_border);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$_border);
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

        UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var_edge_type = NULL;
PyObject *outline_0_var_locations = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_border;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$_border = MAKE_MODULE_FRAME(code_objects_0355e5d18af691797ef59766e5b18c6e, module_textual$_border);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_border);
assert(Py_REFCNT(frame_frame_textual$_border) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$_border$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$_border$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$_border,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_lru_cache);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_import_from_1__module = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
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
        (PyObject *)moduledict_textual$_border,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_9);
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
        (PyObject *)moduledict_textual$_border,
        mod_consts.const_str_plain_Tuple,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Tuple);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$_border,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_11);
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
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$_border;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Segment_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$_border->m_frame.f_lineno = 6;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$_border,
        mod_consts.const_str_plain_Segment,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Segment);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$_border;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Color_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$_border->m_frame.f_lineno = 8;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$_border,
        mod_consts.const_str_plain_Color,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Color);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Color, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_3f43d1377a3aa44ae25c1e06b470b808;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$_border;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_9e48742ea8b3ca7e3f612b18b2903f74_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$_border->m_frame.f_lineno = 9;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$_border,
        mod_consts.const_str_plain_AlignHorizontal,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_AlignHorizontal);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_AlignHorizontal, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$_border,
        mod_consts.const_str_plain_EdgeStyle,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_EdgeStyle);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeStyle, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$_border,
        mod_consts.const_str_plain_EdgeType,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_EdgeType);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeType, tmp_assign_source_17);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_bb07eb353e080f1046cea51976ebb87f;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$_border;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Style_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$_border->m_frame.f_lineno = 10;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$_border,
        mod_consts.const_str_plain_Style,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Style);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Style, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_INNER, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_OUTER, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = DICT_COPY(tstate, mod_consts.const_dict_2965e3960879dfd19668758ad25c8ab1);
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_CHARS, tmp_assign_source_21);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_1c41c5de886b3811ffef166769a6062b;
tmp_ass_subscribed_1 = module_var_accessor_textual$_border$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_BORDER_CHARS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = DICT_COPY(tstate, mod_consts.const_dict_32824a4ee28e086c8e6cdce2e6c3a51b);
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_LOCATIONS, tmp_assign_source_22);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_73d0df7aea874a010105a04ad14d0fa3;
tmp_ass_subscribed_2 = module_var_accessor_textual$_border$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_BORDER_LOCATIONS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = DICT_COPY(tstate, mod_consts.const_dict_498f09f314e174b3ffd452e745e1e219);
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_TITLE_FLIP, tmp_assign_source_23);
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_c176330a977258eff618d7f4c385a602;
tmp_ass_subscribed_3 = module_var_accessor_textual$_border$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_BORDER_TITLE_FLIP;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_24;
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_textual$_border$BORDER_LOCATIONS(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BORDER_LOCATIONS);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_3;
}
frame_frame_textual$_border->m_frame.f_lineno = 248;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_3;
}
tmp_assign_source_25 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_3;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_26;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_27 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 246;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_28 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_29 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto try_except_handler_6;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_30 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto try_except_handler_6;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_31;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_31 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_edge_type;
    outline_0_var_edge_type = tmp_assign_source_31;
    Py_INCREF(outline_0_var_edge_type);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_32 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_locations;
    outline_0_var_locations = tmp_assign_source_32;
    Py_INCREF(outline_0_var_locations);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_value_2;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_edge_type);
tmp_dictset38_key_1 = outline_0_var_edge_type;
CHECK_OBJECT(outline_0_var_locations);
tmp_expression_value_3 = outline_0_var_locations;
tmp_subscript_value_1 = const_int_0;
tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto try_except_handler_4;
}
tmp_subscript_value_2 = const_int_pos_1;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto try_except_handler_4;
}
tmp_dictset38_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_subscript_value_4;
PyTuple_SET_ITEM(tmp_dictset38_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(outline_0_var_locations);
tmp_expression_value_5 = outline_0_var_locations;
tmp_subscript_value_3 = mod_consts.const_int_pos_2;
tmp_expression_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 2);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto tuple_build_exception_1;
}
tmp_subscript_value_4 = const_int_pos_1;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_4, 1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dictset38_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_dictset38_value_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_assign_source_24 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_edge_type);
outline_0_var_edge_type = NULL;
Py_XDECREF(outline_0_var_locations);
outline_0_var_locations = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_edge_type);
outline_0_var_edge_type = NULL;
Py_XDECREF(outline_0_var_locations);
outline_0_var_locations = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 246;
goto frame_exception_exit_1;
outline_result_1:;
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS, tmp_assign_source_24);
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_8d3b008af9190f7b1d00478a4a149ef9;
tmp_ass_subscribed_4 = module_var_accessor_textual$_border$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_BORDER_LABEL_LOCATIONS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_textual$_border$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;

    goto frame_exception_exit_1;
}
frame_frame_textual$_border->m_frame.f_lineno = 251;
tmp_assign_source_33 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_5f46ee29c2001ce843e65c335b27bea7_tuple);

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_INVISIBLE_EDGE_TYPES, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_5;
PyObject *tmp_tuple_element_2;
tmp_expression_value_6 = module_var_accessor_textual$_border$Tuple(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = module_var_accessor_textual$_border$EdgeType(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EdgeType);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;

    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$_border$Color(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Color);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BorderValue, tmp_assign_source_34);
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_5 = module_var_accessor_textual$_border$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_BorderValue;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_6;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_7;
PyObject *tmp_tuple_element_4;
tmp_expression_value_7 = module_var_accessor_textual$_border$Tuple(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;

    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_textual$_border$Tuple(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;

    goto frame_exception_exit_1;
}
tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_subscript_value_7, 2, tmp_tuple_element_4);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_subscript_value_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;

    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_8;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_9;
PyObject *tmp_tuple_element_6;
PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_3);
tmp_expression_value_9 = module_var_accessor_textual$_border$Tuple(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;

    goto tuple_build_exception_4;
}
tmp_tuple_element_5 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;

    goto tuple_build_exception_4;
}
tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_subscript_value_8, 2, tmp_tuple_element_5);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_subscript_value_8);
goto tuple_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_3);
tmp_expression_value_10 = module_var_accessor_textual$_border$Tuple(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;

    goto tuple_build_exception_4;
}
tmp_tuple_element_6 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;

    goto tuple_build_exception_4;
}
tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_textual$_border$Segment(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM0(tmp_subscript_value_9, 2, tmp_tuple_element_6);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_subscript_value_9);
goto tuple_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_9);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_6, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_subscript_value_6);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_BoxSegments, tmp_assign_source_35);
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_6 = module_var_accessor_textual$_border$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_BoxSegments;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_10;
PyObject *tmp_tuple_element_7;
tmp_expression_value_11 = module_var_accessor_textual$_border$Tuple(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;

    goto frame_exception_exit_1;
}
tmp_tuple_element_7 = module_var_accessor_textual$_border$EdgeStyle(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EdgeStyle);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;

    goto frame_exception_exit_1;
}
tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = module_var_accessor_textual$_border$EdgeStyle(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EdgeStyle);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = module_var_accessor_textual$_border$EdgeStyle(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EdgeStyle);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM0(tmp_subscript_value_10, 2, tmp_tuple_element_7);
tmp_tuple_element_7 = module_var_accessor_textual$_border$EdgeStyle(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EdgeStyle);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM0(tmp_subscript_value_10, 3, tmp_tuple_element_7);
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_subscript_value_10);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_assign_source_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_Borders, tmp_assign_source_36);
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_7 = module_var_accessor_textual$_border$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_Borders;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_textual$_border$Style(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;

    goto frame_exception_exit_1;
}
frame_frame_textual$_border->m_frame.f_lineno = 263;
tmp_assign_source_37 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_reverse_tuple);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_REVERSE_STYLE, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_5 = module_var_accessor_textual$_border$lru_cache(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;

    goto frame_exception_exit_1;
}
frame_frame_textual$_border->m_frame.f_lineno = 266;
tmp_called_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1024_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_8c1454f591bcda00e9a73979c387d8c7);

tmp_args_element_value_1 = MAKE_FUNCTION_textual$_border$$$function__1_get_box(tstate, tmp_annotations_1);

frame_frame_textual$_border->m_frame.f_lineno = 266;
tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_get_box, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_5e336003e974ffa282e44de919bdf1d0);

tmp_assign_source_39 = MAKE_FUNCTION_textual$_border$$$function__2_render_border_label(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_render_border_label, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_3;
tmp_defaults_1 = mod_consts.const_tuple_str_plain_left_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_081e4f2b5b7b8f8876d8a1b41a5df073);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_40 = MAKE_FUNCTION_textual$_border$$$function__3_render_row(tstate, tmp_defaults_1, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_render_row, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = DICT_COPY(tstate, mod_consts.const_dict_e5110d8645a12b935c4901777138506f);
UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain__edge_type_normalization_table, tmp_assign_source_41);
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_digest_b59b1e8f40afd05976ce5078c5871eee;
tmp_ass_subscribed_8 = module_var_accessor_textual$_border$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 470;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain__edge_type_normalization_table;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_border, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_border->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_border, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$_border);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_276ab8c2edff7a17ae0c98265d370c2d);

tmp_assign_source_42 = MAKE_FUNCTION_textual$_border$$$function__4_normalize_border_value(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_textual$_border, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_border_value, tmp_assign_source_42);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$_border", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._border" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$_border);
    return module_textual$_border;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_border, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$_border", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

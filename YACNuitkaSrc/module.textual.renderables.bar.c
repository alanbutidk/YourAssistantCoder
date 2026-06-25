/* Generated code for Python module 'textual$renderables$bar'
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



/* The "module_textual$renderables$bar" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$renderables$bar;
PyDictObject *moduledict_textual$renderables$bar;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_highlight_range;
PyObject *const_str_plain_highlight_style;
PyObject *const_str_plain_background_style;
PyObject *const_str_plain_clickable_ranges;
PyObject *const_str_plain_width;
PyObject *const_str_plain_gradient;
PyObject *const_str_plain_console;
PyObject *const_str_plain_get_style;
PyObject *const_str_plain_self;
PyObject *const_str_plain_options;
PyObject *const_str_plain_max_width;
PyObject *const_str_plain_max;
PyObject *const_str_plain_min;
PyObject *const_str_plain_Text;
PyObject *const_tuple_str_empty_str_empty_tuple;
PyObject *const_tuple_str_plain_end_tuple;
PyObject *const_str_plain_append;
PyObject *const_str_plain_BAR;
PyObject *const_tuple_str_plain_style_str_plain_end_tuple;
PyObject *const_str_plain_round;
PyObject *const_int_pos_2;
PyObject *const_str_plain_color;
PyObject *const_str_plain_is_default;
PyObject *const_str_space;
PyObject *const_str_plain_HALF_BAR_LEFT;
PyObject *const_str_plain_HALF_BAR_RIGHT;
PyObject *const_float_0_5;
PyObject *const_str_plain__apply_gradient;
PyObject *const_str_plain_items;
PyObject *const_str_plain_output_bar;
PyObject *const_str_plain_apply_meta;
PyObject *const_str_digest_c668a0a27d6e96979f44172672f9bd45;
PyObject *const_str_digest_98cb4a4212308289b5002e511e2b4036;
PyObject *const_str_digest_7057978b46a84d6c39ede7f4dd2dc91c;
PyObject *const_str_plain___rich_console__;
PyObject *const_str_digest_4362b1af97346e3b7b01f23f8dc36215;
PyObject *const_str_plain_Style;
PyObject *const_str_plain_from_color;
PyObject *const_str_plain_get_rich_color;
PyObject *const_str_plain_stylize;
PyObject *const_str_plain_get_color;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_rich_color;
PyObject *const_str_plain_text_length;
PyObject *const_str_plain_text;
PyObject *const_str_digest_5256278872643287db140491aed05468;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e;
PyObject *const_tuple_52bf26be4588d7229c975a99e142ebdf_tuple;
PyObject *const_str_plain_Console;
PyObject *const_str_plain_ConsoleOptions;
PyObject *const_str_plain_RenderResult;
PyObject *const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
PyObject *const_tuple_str_plain_Style_str_plain_StyleType_tuple;
PyObject *const_str_plain_StyleType;
PyObject *const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e;
PyObject *const_tuple_str_plain_Text_tuple;
PyObject *const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
PyObject *const_tuple_str_plain_Gradient_tuple;
PyObject *const_str_plain_Gradient;
PyObject *const_str_digest_725e94941b46255b6a2fcb563abc7c5d;
PyObject *const_str_digest_948603540d4c79f4f77df5191c6517ad;
PyObject *const_str_plain_Bar;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_10;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_chr_9594;
PyObject *const_str_plain_str;
PyObject *const_str_chr_9473;
PyObject *const_str_chr_9592;
PyObject *const_tuple_ba83c7c8246a5e35dc29e802143b0b4e_tuple;
PyObject *const_dict_5a98de0248827c03f9b412145c2a7fd4;
PyObject *const_str_digest_626b078d9af27ae7b49b33be99160722;
PyObject *const_dict_d2849d973cef618ef2f9b30f24b4da2f;
PyObject *const_tuple_782386fff429a52203ba53db9ebaf860_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_dict_b05fc01b1d1aaf43fce57d5de713b9ab;
PyObject *const_str_digest_dcff7c232c6765f50600121d48554757;
PyObject *const_str_digest_3b50d29f990031cc49bb9ba61fce1757;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_37a9a21b9d4277e5b5a6c69b8f7783f7_tuple;
PyObject *const_tuple_d723ec1d87a91650ff924688466c7093_tuple;
PyObject *const_tuple_b71af1ea8679048c34df15dc85a71e12_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[85];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.renderables.bar"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_highlight_range);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_highlight_style);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_background_style);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_clickable_ranges);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_gradient);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_console);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_style);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_width);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_Text);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_str_empty_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_BAR);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_style_str_plain_end_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_round);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_color);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_default);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_HALF_BAR_LEFT);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_HALF_BAR_RIGHT);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_float_0_5);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__apply_gradient);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_output_bar);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply_meta);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_c668a0a27d6e96979f44172672f9bd45);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_98cb4a4212308289b5002e511e2b4036);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_7057978b46a84d6c39ede7f4dd2dc91c);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain___rich_console__);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_4362b1af97346e3b7b01f23f8dc36215);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_Style);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_color);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_rich_color);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_stylize);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_color);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich_color);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_text_length);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_5256278872643287db140491aed05468);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_52bf26be4588d7229c975a99e142ebdf_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_Console);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConsoleOptions);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_RenderResult);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_str_plain_StyleType_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_StyleType);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Text_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Gradient_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_Gradient);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_725e94941b46255b6a2fcb563abc7c5d);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_948603540d4c79f4f77df5191c6517ad);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_Bar);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_chr_9594);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_chr_9473);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_chr_9592);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_ba83c7c8246a5e35dc29e802143b0b4e_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_5a98de0248827c03f9b412145c2a7fd4);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_626b078d9af27ae7b49b33be99160722);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_d2849d973cef618ef2f9b30f24b4da2f);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_782386fff429a52203ba53db9ebaf860_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_dict_b05fc01b1d1aaf43fce57d5de713b9ab);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcff7c232c6765f50600121d48554757);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b50d29f990031cc49bb9ba61fce1757);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_37a9a21b9d4277e5b5a6c69b8f7783f7_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_d723ec1d87a91650ff924688466c7093_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_b71af1ea8679048c34df15dc85a71e12_tuple);
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
void checkModuleConstants_textual$renderables$bar(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_highlight_range));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_highlight_range);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_highlight_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_highlight_style);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_background_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_background_style);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_clickable_ranges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clickable_ranges);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_width);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_gradient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gradient);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_console));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_console);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_style);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_options);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_width);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_Text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Text);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_str_empty_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_end_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_BAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BAR);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_style_str_plain_end_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_style_str_plain_end_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_round));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_round);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_color);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_default);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_HALF_BAR_LEFT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HALF_BAR_LEFT);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_HALF_BAR_RIGHT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HALF_BAR_RIGHT);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_float_0_5));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_5);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__apply_gradient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__apply_gradient);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_output_bar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_output_bar);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply_meta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apply_meta);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_c668a0a27d6e96979f44172672f9bd45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c668a0a27d6e96979f44172672f9bd45);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_98cb4a4212308289b5002e511e2b4036));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98cb4a4212308289b5002e511e2b4036);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_7057978b46a84d6c39ede7f4dd2dc91c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7057978b46a84d6c39ede7f4dd2dc91c);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain___rich_console__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rich_console__);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_4362b1af97346e3b7b01f23f8dc36215));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4362b1af97346e3b7b01f23f8dc36215);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_Style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Style);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_color);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_rich_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_rich_color);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_stylize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stylize);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_color);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich_color);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_text_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text_length);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_5256278872643287db140491aed05468));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5256278872643287db140491aed05468);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_52bf26be4588d7229c975a99e142ebdf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_52bf26be4588d7229c975a99e142ebdf_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_Console));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Console);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConsoleOptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConsoleOptions);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_RenderResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RenderResult);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_str_plain_StyleType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Style_str_plain_StyleType_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_StyleType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StyleType);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Text_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Gradient_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Gradient_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_Gradient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Gradient);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_725e94941b46255b6a2fcb563abc7c5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_725e94941b46255b6a2fcb563abc7c5d);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_948603540d4c79f4f77df5191c6517ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_948603540d4c79f4f77df5191c6517ad);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_Bar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Bar);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_pos_10));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_10);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_chr_9594));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_9594);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_chr_9473));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_9473);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_chr_9592));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_9592);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_ba83c7c8246a5e35dc29e802143b0b4e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ba83c7c8246a5e35dc29e802143b0b4e_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_5a98de0248827c03f9b412145c2a7fd4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5a98de0248827c03f9b412145c2a7fd4);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_626b078d9af27ae7b49b33be99160722));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_626b078d9af27ae7b49b33be99160722);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_d2849d973cef618ef2f9b30f24b4da2f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d2849d973cef618ef2f9b30f24b4da2f);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_782386fff429a52203ba53db9ebaf860_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_782386fff429a52203ba53db9ebaf860_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_dict_b05fc01b1d1aaf43fce57d5de713b9ab));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b05fc01b1d1aaf43fce57d5de713b9ab);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcff7c232c6765f50600121d48554757));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcff7c232c6765f50600121d48554757);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b50d29f990031cc49bb9ba61fce1757));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b50d29f990031cc49bb9ba61fce1757);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_37a9a21b9d4277e5b5a6c69b8f7783f7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_37a9a21b9d4277e5b5a6c69b8f7783f7_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_d723ec1d87a91650ff924688466c7093_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d723ec1d87a91650ff924688466c7093_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_b71af1ea8679048c34df15dc85a71e12_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b71af1ea8679048c34df15dc85a71e12_tuple);
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
static PyObject *module_var_accessor_textual$renderables$bar$Style(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$bar->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$bar->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$bar->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }

    return result;
}

static PyObject *module_var_accessor_textual$renderables$bar$Text(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$bar->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$bar->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$bar->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
    }

    return result;
}

static PyObject *module_var_accessor_textual$renderables$bar$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$bar->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$bar->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$bar->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$renderables$bar$_apply_gradient(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$bar->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$bar->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain__apply_gradient);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$bar->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__apply_gradient);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__apply_gradient, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__apply_gradient);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__apply_gradient, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain__apply_gradient);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain__apply_gradient);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__apply_gradient);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_01eb433f9a02c269fc75b4360e848c12;
static PyCodeObject *code_objects_ab77d4ecd65115dadf2d9d25893406ce;
static PyCodeObject *code_objects_7c4644f5519480019738b12a04da1c99;
static PyCodeObject *code_objects_42525a150919b730246ad2705d0eafe8;
static PyCodeObject *code_objects_902cdd329d537dd3da3cf5c970a20d17;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_dcff7c232c6765f50600121d48554757); CHECK_OBJECT(module_filename_obj);
code_objects_01eb433f9a02c269fc75b4360e848c12 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_3b50d29f990031cc49bb9ba61fce1757, mod_consts.const_str_digest_3b50d29f990031cc49bb9ba61fce1757, NULL, NULL, 0, 0, 0);
code_objects_ab77d4ecd65115dadf2d9d25893406ce = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Bar, mod_consts.const_str_plain_Bar, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7c4644f5519480019738b12a04da1c99 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_626b078d9af27ae7b49b33be99160722, mod_consts.const_tuple_37a9a21b9d4277e5b5a6c69b8f7783f7_tuple, NULL, 7, 0, 0);
code_objects_42525a150919b730246ad2705d0eafe8 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rich_console__, mod_consts.const_str_digest_4362b1af97346e3b7b01f23f8dc36215, mod_consts.const_tuple_d723ec1d87a91650ff924688466c7093_tuple, NULL, 3, 0, 0);
code_objects_902cdd329d537dd3da3cf5c970a20d17 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__apply_gradient, mod_consts.const_str_plain__apply_gradient, mod_consts.const_tuple_b71af1ea8679048c34df15dc85a71e12_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$renderables$bar$$$function__2___rich_console__$$$genobj__1___rich_console__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$renderables$bar$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$renderables$bar$$$function__2___rich_console__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$renderables$bar$$$function__3__apply_gradient(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$renderables$bar$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_highlight_range = python_pars[1];
PyObject *par_highlight_style = python_pars[2];
PyObject *par_background_style = python_pars[3];
PyObject *par_clickable_ranges = python_pars[4];
PyObject *par_width = python_pars[5];
PyObject *par_gradient = python_pars[6];
struct Nuitka_FrameObject *frame_frame_textual$renderables$bar$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$renderables$bar$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$renderables$bar$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$renderables$bar$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$renderables$bar$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$renderables$bar$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7c4644f5519480019738b12a04da1c99, module_textual$renderables$bar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$renderables$bar$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$renderables$bar$$$function__1___init__ = cache_frame_frame_textual$renderables$bar$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$renderables$bar$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$renderables$bar$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_highlight_range);
tmp_assattr_value_1 = par_highlight_range;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_highlight_range, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_highlight_style);
tmp_assattr_value_2 = par_highlight_style;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_highlight_style, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_background_style);
tmp_assattr_value_3 = par_background_style;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_background_style, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_clickable_ranges);
tmp_or_left_value_1 = par_clickable_ranges;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_assattr_value_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assattr_value_4 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_clickable_ranges, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_width);
tmp_assattr_value_5 = par_width;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_width, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_gradient);
tmp_assattr_value_6 = par_gradient;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_gradient, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$renderables$bar$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$renderables$bar$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$renderables$bar$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$renderables$bar$$$function__1___init__,
    type_description_1,
    par_self,
    par_highlight_range,
    par_highlight_style,
    par_background_style,
    par_clickable_ranges,
    par_width,
    par_gradient
);


// Release cached frame if used for exception.
if (frame_frame_textual$renderables$bar$$$function__1___init__ == cache_frame_frame_textual$renderables$bar$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$renderables$bar$$$function__1___init__);
    cache_frame_frame_textual$renderables$bar$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$renderables$bar$$$function__1___init__);

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
CHECK_OBJECT(par_highlight_range);
Py_DECREF(par_highlight_range);
CHECK_OBJECT(par_highlight_style);
Py_DECREF(par_highlight_style);
CHECK_OBJECT(par_background_style);
Py_DECREF(par_background_style);
CHECK_OBJECT(par_clickable_ranges);
Py_DECREF(par_clickable_ranges);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_gradient);
Py_DECREF(par_gradient);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_highlight_range);
Py_DECREF(par_highlight_range);
CHECK_OBJECT(par_highlight_style);
Py_DECREF(par_highlight_style);
CHECK_OBJECT(par_background_style);
Py_DECREF(par_background_style);
CHECK_OBJECT(par_clickable_ranges);
Py_DECREF(par_clickable_ranges);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_gradient);
Py_DECREF(par_gradient);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$renderables$bar$$$function__2___rich_console__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_console = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_options = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_console;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_options;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_GENERATOR_textual$renderables$bar$$$function__2___rich_console__$$$genobj__1___rich_console__(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_console);
CHECK_OBJECT(par_console);
Py_DECREF(par_console);
par_console = NULL;
CHECK_OBJECT(par_options);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
par_options = NULL;
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
struct textual$renderables$bar$$$function__2___rich_console__$$$genobj__1___rich_console___locals {
PyObject *var_highlight_style;
PyObject *var_background_style;
PyObject *var_width;
PyObject *var_start;
PyObject *var_end;
PyObject *var_output_bar;
PyObject *var_half_start;
PyObject *var_half_end;
PyObject *var_draw_background;
PyObject *var_BACKGROUND_BAR;
PyObject *var_BACKGROUND_HALF_BAR_LEFT;
PyObject *var_BACKGROUND_HALF_BAR_RIGHT;
PyObject *var_highlight_bar;
PyObject *var_bar_width;
PyObject *var_range_name;
PyObject *tmp_comparison_chain_1__comparison_result;
PyObject *tmp_comparison_chain_1__operand_2;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_tuple_unpack_2__element_1;
PyObject *tmp_tuple_unpack_2__element_2;
PyObject *tmp_tuple_unpack_2__source_iter;
PyObject *tmp_tuple_unpack_3__element_1;
PyObject *tmp_tuple_unpack_3__element_2;
PyObject *tmp_tuple_unpack_3__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
};
#endif

static PyObject *textual$renderables$bar$$$function__2___rich_console__$$$genobj__1___rich_console___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$renderables$bar$$$function__2___rich_console__$$$genobj__1___rich_console___locals *generator_heap = (struct textual$renderables$bar$$$function__2___rich_console__$$$genobj__1___rich_console___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_highlight_style = NULL;
generator_heap->var_background_style = NULL;
generator_heap->var_width = NULL;
generator_heap->var_start = NULL;
generator_heap->var_end = NULL;
generator_heap->var_output_bar = NULL;
generator_heap->var_half_start = NULL;
generator_heap->var_half_end = NULL;
generator_heap->var_draw_background = NULL;
generator_heap->var_BACKGROUND_BAR = NULL;
generator_heap->var_BACKGROUND_HALF_BAR_LEFT = NULL;
generator_heap->var_BACKGROUND_HALF_BAR_RIGHT = NULL;
generator_heap->var_highlight_bar = NULL;
generator_heap->var_bar_width = NULL;
generator_heap->var_range_name = NULL;
generator_heap->tmp_comparison_chain_1__comparison_result = NULL;
generator_heap->tmp_comparison_chain_1__operand_2 = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
generator_heap->tmp_tuple_unpack_3__element_2 = NULL;
generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_42525a150919b730246ad2705d0eafe8, module_textual$renderables$bar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_console);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 44;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_get_style);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 44;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 44;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_highlight_style);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_1);

generator_heap->exception_lineno = 44;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 44;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 44;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_highlight_style == NULL);
generator_heap->var_highlight_style = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_console);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_get_style);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_background_style);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_2);

generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 45;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_background_style == NULL);
generator_heap->var_background_style = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_width);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_or_left_value_1);

generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_max_width);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_3 = tmp_or_left_value_1;
or_end_1:;
assert(generator_heap->var_width == NULL);
generator_heap->var_width = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_7;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_highlight_range);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_tuple_unpack_1__source_iter == NULL);
generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
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



generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_tuple_unpack_1__element_1 == NULL);
generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_tuple_unpack_1__element_2 == NULL);
generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "cccooooooooooooooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = generator_heap->tmp_tuple_unpack_1__element_1;
assert(generator_heap->var_start == NULL);
Py_INCREF(tmp_assign_source_7);
generator_heap->var_start = tmp_assign_source_7;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = generator_heap->tmp_tuple_unpack_1__element_2;
assert(generator_heap->var_end == NULL);
Py_INCREF(tmp_assign_source_8);
generator_heap->var_end = tmp_assign_source_8;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(generator_heap->var_start);
tmp_args_element_value_3 = generator_heap->var_start;
tmp_args_element_value_4 = const_int_0;
generator->m_frame->m_frame.f_lineno = 50;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_start;
    assert(old != NULL);
    generator_heap->var_start = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_4 != NULL);
CHECK_OBJECT(generator_heap->var_end);
tmp_args_element_value_5 = generator_heap->var_end;
CHECK_OBJECT(generator_heap->var_width);
tmp_args_element_value_6 = generator_heap->var_width;
generator->m_frame->m_frame.f_lineno = 51;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_end;
    assert(old != NULL);
    generator_heap->var_end = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_textual$renderables$bar$Text(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 53;
tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_empty_str_empty_tuple, 0), mod_consts.const_tuple_str_plain_end_tuple);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_output_bar == NULL);
generator_heap->var_output_bar = tmp_assign_source_11;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(generator_heap->var_end);
tmp_assign_source_12 = generator_heap->var_end;
assert(generator_heap->tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_12);
generator_heap->tmp_comparison_chain_1__operand_2 = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(generator_heap->var_start);
tmp_cmp_expr_left_1 = generator_heap->var_start;
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = generator_heap->tmp_comparison_chain_1__operand_2;
tmp_assign_source_13 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_4;
}
assert(generator_heap->tmp_comparison_chain_1__comparison_result == NULL);
generator_heap->tmp_comparison_chain_1__comparison_result = tmp_assign_source_13;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = generator_heap->tmp_comparison_chain_1__comparison_result;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
tmp_outline_return_value_1 = generator_heap->tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_4;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = generator_heap->tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = const_int_0;
tmp_outline_return_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_outline_return_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_4;
}
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
Py_DECREF(generator_heap->tmp_comparison_chain_1__operand_2);
generator_heap->tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
Py_DECREF(generator_heap->tmp_comparison_chain_1__comparison_result);
generator_heap->tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
Py_DECREF(generator_heap->tmp_comparison_chain_1__operand_2);
generator_heap->tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(generator_heap->tmp_comparison_chain_1__comparison_result);
generator_heap->tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_outline_return_value_1);

generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(generator_heap->var_end);
tmp_cmp_expr_left_3 = generator_heap->var_end;
tmp_cmp_expr_right_3 = const_int_0;
tmp_or_left_value_3 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(generator_heap->var_start);
tmp_cmp_expr_left_4 = generator_heap->var_start;
CHECK_OBJECT(generator_heap->var_end);
tmp_cmp_expr_right_4 = generator_heap->var_end;
tmp_or_right_value_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_or_right_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_condition_result_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_1 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_7;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(generator_heap->var_output_bar);
tmp_expression_value_8 = generator_heap->var_output_bar;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_append);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_textual$renderables$bar$Text(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_6);

generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_BAR);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_6);

generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_width);
tmp_mult_expr_right_1 = generator_heap->var_width;
tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_6);

generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_background_style);
tmp_kw_call_dict_value_0_1 = generator_heap->var_background_style;
tmp_kw_call_dict_value_1_1 = const_str_empty;
generator->m_frame->m_frame.f_lineno = 56;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_style_str_plain_end_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_6);

generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 56;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_10;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_output_bar);
tmp_expression_value_10 = generator_heap->var_output_bar;
Py_INCREF(tmp_expression_value_10);
generator->m_yield_return_index = 1;
return tmp_expression_value_10;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_8;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_8 != NULL);
CHECK_OBJECT(generator_heap->var_start);
tmp_mult_expr_left_2 = generator_heap->var_start;
tmp_mult_expr_right_2 = mod_consts.const_int_pos_2;
tmp_args_element_value_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 61;
tmp_truediv_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_assign_source_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_start;
    assert(old != NULL);
    generator_heap->var_start = tmp_assign_source_14;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_9;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
tmp_called_value_9 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_9 != NULL);
CHECK_OBJECT(generator_heap->var_end);
tmp_mult_expr_left_3 = generator_heap->var_end;
tmp_mult_expr_right_3 = mod_consts.const_int_pos_2;
tmp_args_element_value_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 62;
tmp_truediv_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_2 = mod_consts.const_int_pos_2;
tmp_assign_source_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_end;
    assert(old != NULL);
    generator_heap->var_end = tmp_assign_source_15;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_int_arg_1;
CHECK_OBJECT(generator_heap->var_start);
tmp_sub_expr_left_1 = generator_heap->var_start;
CHECK_OBJECT(generator_heap->var_start);
tmp_int_arg_1 = generator_heap->var_start;
tmp_sub_expr_right_1 = PyNumber_Int(tmp_int_arg_1);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = const_int_0;
tmp_assign_source_16 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_half_start == NULL);
generator_heap->var_half_start = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_int_arg_2;
CHECK_OBJECT(generator_heap->var_end);
tmp_sub_expr_left_2 = generator_heap->var_end;
CHECK_OBJECT(generator_heap->var_end);
tmp_int_arg_2 = generator_heap->var_end;
tmp_sub_expr_right_2 = PyNumber_Int(tmp_int_arg_2);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = const_int_0;
tmp_assign_source_17 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_half_end == NULL);
generator_heap->var_half_end = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(generator_heap->var_background_style);
tmp_expression_value_11 = generator_heap->var_background_style;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_color);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = Py_None;
tmp_or_left_value_4 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(generator_heap->var_background_style);
tmp_expression_value_13 = generator_heap->var_background_style;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_color);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_is_default);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_4 = (generator_heap->tmp_res == 0) ? Py_True : Py_False;
tmp_assign_source_18 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_assign_source_18 = tmp_or_left_value_4;
or_end_4:;
assert(generator_heap->var_draw_background == NULL);
Py_INCREF(tmp_assign_source_18);
generator_heap->var_draw_background = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(generator_heap->var_draw_background);
tmp_truth_name_2 = CHECK_IF_TRUE(generator_heap->var_draw_background);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_BAR);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_19 = mod_consts.const_str_space;
Py_INCREF(tmp_assign_source_19);
condexpr_end_1:;
assert(generator_heap->var_BACKGROUND_BAR == NULL);
generator_heap->var_BACKGROUND_BAR = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_3;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(generator_heap->var_draw_background);
tmp_truth_name_3 = CHECK_IF_TRUE(generator_heap->var_draw_background);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_HALF_BAR_LEFT);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_20 = mod_consts.const_str_space;
Py_INCREF(tmp_assign_source_20);
condexpr_end_2:;
assert(generator_heap->var_BACKGROUND_HALF_BAR_LEFT == NULL);
generator_heap->var_BACKGROUND_HALF_BAR_LEFT = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(generator_heap->var_draw_background);
tmp_cmp_expr_left_8 = generator_heap->var_draw_background;
tmp_cmp_expr_right_8 = const_int_0;
tmp_condition_result_5 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 73;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 73;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_HALF_BAR_RIGHT);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 73;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_21 = mod_consts.const_str_space;
Py_INCREF(tmp_assign_source_21);
condexpr_end_3:;
assert(generator_heap->var_BACKGROUND_HALF_BAR_RIGHT == NULL);
generator_heap->var_BACKGROUND_HALF_BAR_RIGHT = tmp_assign_source_21;
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_int_arg_3;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
CHECK_OBJECT(generator_heap->var_output_bar);
tmp_expression_value_17 = generator_heap->var_output_bar;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_append);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 76;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = module_var_accessor_textual$renderables$bar$Text(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_10);

generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_BACKGROUND_BAR);
tmp_mult_expr_left_4 = generator_heap->var_BACKGROUND_BAR;
CHECK_OBJECT(generator_heap->var_start);
tmp_sub_expr_left_3 = generator_heap->var_start;
tmp_sub_expr_right_3 = mod_consts.const_float_0_5;
tmp_int_arg_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_int_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_10);

generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_4 = PyNumber_Int(tmp_int_arg_3);
CHECK_OBJECT(tmp_int_arg_3);
Py_DECREF(tmp_int_arg_3);
if (tmp_mult_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_10);

generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_10);

generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_background_style);
tmp_kw_call_dict_value_0_2 = generator_heap->var_background_style;
tmp_kw_call_dict_value_1_2 = const_str_empty;
generator->m_frame->m_frame.f_lineno = 77;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts.const_tuple_str_plain_style_str_plain_end_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_10);

generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 76;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 76;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_operand_value_3;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(generator_heap->var_half_start);
tmp_operand_value_3 = generator_heap->var_half_start;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(generator_heap->var_start);
tmp_cmp_expr_left_9 = generator_heap->var_start;
tmp_cmp_expr_right_9 = const_int_0;
tmp_and_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_18;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_13;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_3;
CHECK_OBJECT(generator_heap->var_output_bar);
tmp_expression_value_18 = generator_heap->var_output_bar;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_append);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 80;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = module_var_accessor_textual$renderables$bar$Text(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_12);

generator_heap->exception_lineno = 81;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_BACKGROUND_HALF_BAR_RIGHT);
tmp_kw_call_arg_value_0_3 = generator_heap->var_BACKGROUND_HALF_BAR_RIGHT;
CHECK_OBJECT(generator_heap->var_background_style);
tmp_kw_call_dict_value_0_3 = generator_heap->var_background_style;
tmp_kw_call_dict_value_1_3 = const_str_empty;
generator->m_frame->m_frame.f_lineno = 81;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
    tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_13, args, kw_values, mod_consts.const_tuple_str_plain_style_str_plain_end_tuple);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_12);

generator_heap->exception_lineno = 81;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 80;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 80;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_14;
tmp_called_value_14 = module_var_accessor_textual$renderables$bar$Text(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 84;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 84;
tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_empty_str_empty_tuple, 0), mod_consts.const_tuple_str_plain_end_tuple);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 84;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_highlight_bar == NULL);
generator_heap->var_highlight_bar = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_int_arg_4;
PyObject *tmp_int_arg_5;
CHECK_OBJECT(generator_heap->var_end);
tmp_int_arg_4 = generator_heap->var_end;
tmp_sub_expr_left_4 = PyNumber_Int(tmp_int_arg_4);
if (tmp_sub_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 86;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_start);
tmp_int_arg_5 = generator_heap->var_start;
tmp_sub_expr_right_4 = PyNumber_Int(tmp_int_arg_5);
if (tmp_sub_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_sub_expr_left_4);

generator_heap->exception_lineno = 86;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_23 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_left_4);
Py_DECREF(tmp_sub_expr_left_4);
CHECK_OBJECT(tmp_sub_expr_right_4);
Py_DECREF(tmp_sub_expr_right_4);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 86;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_bar_width == NULL);
generator_heap->var_bar_width = tmp_assign_source_23;
}
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_4;
CHECK_OBJECT(generator_heap->var_half_start);
tmp_truth_name_4 = CHECK_IF_TRUE(generator_heap->var_half_start);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_16;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_20;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
PyObject *tmp_expression_value_21;
PyObject *tmp_sub_expr_left_5;
PyObject *tmp_sub_expr_right_5;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_kw_call_dict_value_1_4;
CHECK_OBJECT(generator_heap->var_highlight_bar);
tmp_expression_value_19 = generator_heap->var_highlight_bar;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_append);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_16 = module_var_accessor_textual$renderables$bar$Text(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_15);

generator_heap->exception_lineno = 89;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_15);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_20 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_HALF_BAR_LEFT);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_15);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_15);
Py_DECREF(tmp_add_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_21 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_mult_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_BAR);
if (tmp_mult_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_15);
Py_DECREF(tmp_add_expr_left_1);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_bar_width);
tmp_sub_expr_left_5 = generator_heap->var_bar_width;
tmp_sub_expr_right_5 = const_int_pos_1;
tmp_mult_expr_right_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
if (tmp_mult_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_15);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_mult_expr_left_5);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
CHECK_OBJECT(tmp_mult_expr_left_5);
Py_DECREF(tmp_mult_expr_left_5);
CHECK_OBJECT(tmp_mult_expr_right_5);
Py_DECREF(tmp_mult_expr_right_5);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_15);
Py_DECREF(tmp_add_expr_left_1);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_kw_call_arg_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_15);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_highlight_style);
tmp_kw_call_dict_value_0_4 = generator_heap->var_highlight_style;
tmp_kw_call_dict_value_1_4 = const_str_empty;
generator->m_frame->m_frame.f_lineno = 89;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4};
    tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_16, args, kw_values, mod_consts.const_tuple_str_plain_style_str_plain_end_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_4);
Py_DECREF(tmp_kw_call_arg_value_0_4);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_15);

generator_heap->exception_lineno = 89;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 88;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_value_18;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_mult_expr_left_6;
PyObject *tmp_mult_expr_right_6;
PyObject *tmp_expression_value_23;
PyObject *tmp_kw_call_dict_value_0_5;
PyObject *tmp_kw_call_dict_value_1_5;
CHECK_OBJECT(generator_heap->var_highlight_bar);
tmp_expression_value_22 = generator_heap->var_highlight_bar;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_append);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 96;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_18 = module_var_accessor_textual$renderables$bar$Text(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_17);

generator_heap->exception_lineno = 97;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_17);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 97;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_23 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_mult_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_BAR);
if (tmp_mult_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_17);

generator_heap->exception_lineno = 97;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_bar_width);
tmp_mult_expr_right_6 = generator_heap->var_bar_width;
tmp_kw_call_arg_value_0_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
CHECK_OBJECT(tmp_mult_expr_left_6);
Py_DECREF(tmp_mult_expr_left_6);
if (tmp_kw_call_arg_value_0_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_17);

generator_heap->exception_lineno = 97;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_highlight_style);
tmp_kw_call_dict_value_0_5 = generator_heap->var_highlight_style;
tmp_kw_call_dict_value_1_5 = const_str_empty;
generator->m_frame->m_frame.f_lineno = 97;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5};
    tmp_args_element_value_13 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_18, args, kw_values, mod_consts.const_tuple_str_plain_style_str_plain_end_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_5);
Py_DECREF(tmp_kw_call_arg_value_0_5);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_17);

generator_heap->exception_lineno = 97;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 96;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 96;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_end_4:;
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_5;
CHECK_OBJECT(generator_heap->var_half_end);
tmp_truth_name_5 = CHECK_IF_TRUE(generator_heap->var_half_end);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 99;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_20;
PyObject *tmp_kw_call_arg_value_0_6;
PyObject *tmp_expression_value_25;
PyObject *tmp_kw_call_dict_value_0_6;
PyObject *tmp_kw_call_dict_value_1_6;
CHECK_OBJECT(generator_heap->var_highlight_bar);
tmp_expression_value_24 = generator_heap->var_highlight_bar;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_append);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 100;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_20 = module_var_accessor_textual$renderables$bar$Text(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_19);

generator_heap->exception_lineno = 101;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_19);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 101;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_25 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_kw_call_arg_value_0_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_HALF_BAR_RIGHT);
if (tmp_kw_call_arg_value_0_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_19);

generator_heap->exception_lineno = 101;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_highlight_style);
tmp_kw_call_dict_value_0_6 = generator_heap->var_highlight_style;
tmp_kw_call_dict_value_1_6 = const_str_empty;
generator->m_frame->m_frame.f_lineno = 101;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_6};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_6, tmp_kw_call_dict_value_1_6};
    tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_20, args, kw_values, mod_consts.const_tuple_str_plain_style_str_plain_end_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_6);
Py_DECREF(tmp_kw_call_arg_value_0_6);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_19);

generator_heap->exception_lineno = 101;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 100;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 100;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_5:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_26;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 104;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_26 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_gradient);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 104;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_condition_result_9 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_21;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_17;
tmp_called_value_21 = module_var_accessor_textual$renderables$bar$_apply_gradient(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__apply_gradient);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_highlight_bar);
tmp_args_element_value_15 = generator_heap->var_highlight_bar;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_27 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_gradient);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_width);
tmp_args_element_value_17 = generator_heap->var_width;
generator->m_frame->m_frame.f_lineno = 105;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_21, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 105;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_6:;
{
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_18;
CHECK_OBJECT(generator_heap->var_output_bar);
tmp_expression_value_28 = generator_heap->var_output_bar;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_append);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_highlight_bar);
tmp_args_element_value_18 = generator_heap->var_highlight_bar;
generator->m_frame->m_frame.f_lineno = 106;
tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
nuitka_bool tmp_condition_result_10;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_sub_expr_left_6;
PyObject *tmp_sub_expr_right_6;
CHECK_OBJECT(generator_heap->var_half_end);
tmp_operand_value_4 = generator_heap->var_half_end;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 109;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(generator_heap->var_end);
tmp_sub_expr_left_6 = generator_heap->var_end;
CHECK_OBJECT(generator_heap->var_width);
tmp_sub_expr_right_6 = generator_heap->var_width;
tmp_cmp_expr_left_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 109;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_11 = const_int_0;
tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 109;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_10 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_29;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_value_24;
PyObject *tmp_kw_call_arg_value_0_7;
PyObject *tmp_kw_call_dict_value_0_7;
PyObject *tmp_kw_call_dict_value_1_7;
CHECK_OBJECT(generator_heap->var_output_bar);
tmp_expression_value_29 = generator_heap->var_output_bar;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_append);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_24 = module_var_accessor_textual$renderables$bar$Text(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_23);

generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_BACKGROUND_HALF_BAR_LEFT);
tmp_kw_call_arg_value_0_7 = generator_heap->var_BACKGROUND_HALF_BAR_LEFT;
CHECK_OBJECT(generator_heap->var_background_style);
tmp_kw_call_dict_value_0_7 = generator_heap->var_background_style;
tmp_kw_call_dict_value_1_7 = const_str_empty;
generator->m_frame->m_frame.f_lineno = 111;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_7};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_7, tmp_kw_call_dict_value_1_7};
    tmp_args_element_value_19 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_24, args, kw_values, mod_consts.const_tuple_str_plain_style_str_plain_end_tuple);
}

if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_23);

generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 110;
tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_no_7:;
{
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_30;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_20;
PyObject *tmp_called_value_26;
PyObject *tmp_kw_call_arg_value_0_8;
PyObject *tmp_mult_expr_left_7;
PyObject *tmp_mult_expr_right_7;
PyObject *tmp_sub_expr_left_7;
PyObject *tmp_sub_expr_right_7;
PyObject *tmp_sub_expr_left_8;
PyObject *tmp_sub_expr_right_8;
PyObject *tmp_int_arg_6;
PyObject *tmp_int_arg_7;
PyObject *tmp_kw_call_dict_value_0_8;
PyObject *tmp_kw_call_dict_value_1_8;
CHECK_OBJECT(generator_heap->var_output_bar);
tmp_expression_value_30 = generator_heap->var_output_bar;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_append);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 113;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_26 = module_var_accessor_textual$renderables$bar$Text(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_25);

generator_heap->exception_lineno = 114;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_BACKGROUND_BAR);
tmp_mult_expr_left_7 = generator_heap->var_BACKGROUND_BAR;
CHECK_OBJECT(generator_heap->var_width);
tmp_int_arg_6 = generator_heap->var_width;
tmp_sub_expr_left_8 = PyNumber_Int(tmp_int_arg_6);
if (tmp_sub_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_25);

generator_heap->exception_lineno = 115;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_end);
tmp_int_arg_7 = generator_heap->var_end;
tmp_sub_expr_right_8 = PyNumber_Int(tmp_int_arg_7);
if (tmp_sub_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_25);
Py_DECREF(tmp_sub_expr_left_8);

generator_heap->exception_lineno = 115;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
CHECK_OBJECT(tmp_sub_expr_left_8);
Py_DECREF(tmp_sub_expr_left_8);
CHECK_OBJECT(tmp_sub_expr_right_8);
Py_DECREF(tmp_sub_expr_right_8);
if (tmp_sub_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_25);

generator_heap->exception_lineno = 115;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_7 = const_int_pos_1;
tmp_mult_expr_right_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
CHECK_OBJECT(tmp_sub_expr_left_7);
Py_DECREF(tmp_sub_expr_left_7);
if (tmp_mult_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_25);

generator_heap->exception_lineno = 115;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
CHECK_OBJECT(tmp_mult_expr_right_7);
Py_DECREF(tmp_mult_expr_right_7);
if (tmp_kw_call_arg_value_0_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_25);

generator_heap->exception_lineno = 115;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_background_style);
tmp_kw_call_dict_value_0_8 = generator_heap->var_background_style;
tmp_kw_call_dict_value_1_8 = const_str_empty;
generator->m_frame->m_frame.f_lineno = 114;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_8};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_8, tmp_kw_call_dict_value_1_8};
    tmp_args_element_value_20 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_26, args, kw_values, mod_consts.const_tuple_str_plain_style_str_plain_end_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_8);
Py_DECREF(tmp_kw_call_arg_value_0_8);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_25);

generator_heap->exception_lineno = 114;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 113;
tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 113;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_32 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_clickable_ranges);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 122;
tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_27);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_24 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_24;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_25;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_25 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccooooooooooooooo";
generator_heap->exception_lineno = 122;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_iter_arg_3 = generator_heap->tmp_for_loop_1__iter_value;
tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
    generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_27 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
    generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
    generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_2__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_2, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_3:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
tmp_assign_source_29 = generator_heap->tmp_tuple_unpack_2__element_1;
{
    PyObject *old = generator_heap->var_range_name;
    generator_heap->var_range_name = tmp_assign_source_29;
    Py_INCREF(generator_heap->var_range_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
tmp_iter_arg_4 = generator_heap->tmp_tuple_unpack_2__element_2;
tmp_assign_source_30 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_3__source_iter;
    generator_heap->tmp_tuple_unpack_3__source_iter = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_unpack_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = generator_heap->tmp_tuple_unpack_3__source_iter;
tmp_assign_source_31 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_3__element_1;
    generator_heap->tmp_tuple_unpack_3__element_1 = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_unpack_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = generator_heap->tmp_tuple_unpack_3__source_iter;
tmp_assign_source_32 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_3__element_2;
    generator_heap->tmp_tuple_unpack_3__element_2 = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = generator_heap->tmp_tuple_unpack_3__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_3, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_9:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto try_except_handler_8;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_2);
generator_heap->tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto try_except_handler_6;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto try_except_handler_5;
// End of try:
try_end_6:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_1);
tmp_assign_source_33 = generator_heap->tmp_tuple_unpack_3__element_1;
{
    PyObject *old = generator_heap->var_start;
    generator_heap->var_start = tmp_assign_source_33;
    Py_INCREF(generator_heap->var_start);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
generator_heap->tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_34;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_2);
tmp_assign_source_34 = generator_heap->tmp_tuple_unpack_3__element_2;
{
    PyObject *old = generator_heap->var_end;
    generator_heap->var_end = tmp_assign_source_34;
    Py_INCREF(generator_heap->var_end);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_2);
generator_heap->tmp_tuple_unpack_3__element_2 = NULL;

Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_33;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_21;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
if (generator_heap->var_output_bar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_output_bar);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_33 = generator_heap->var_output_bar;
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_apply_meta);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_5;
}
tmp_dict_key_1 = mod_consts.const_str_digest_c668a0a27d6e96979f44172672f9bd45;
tmp_tuple_element_1 = mod_consts.const_str_digest_98cb4a4212308289b5002e511e2b4036;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_range_name);
tmp_format_value_1 = generator_heap->var_range_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 124;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_7057978b46a84d6c39ede7f4dd2dc91c;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_28);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_dict_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_dict_value_1 == NULL));
tmp_args_element_value_21 = _PyDict_NewPresized( 1 );
generator_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_21, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(generator_heap->tmp_res != 0));
CHECK_OBJECT(generator_heap->var_start);
tmp_args_element_value_22 = generator_heap->var_start;
CHECK_OBJECT(generator_heap->var_end);
tmp_args_element_value_23 = generator_heap->var_end;
generator->m_frame->m_frame.f_lineno = 123;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_28, call_args);
}

CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_7;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_8;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_expression_value_34;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (generator_heap->var_output_bar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_output_bar);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 127;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_34 = generator_heap->var_output_bar;
Py_INCREF(tmp_expression_value_34);
generator->m_yield_return_index = 2;
return tmp_expression_value_34;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 127;
generator_heap->type_description_1 = "cccooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
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
    generator->m_closure[2],
    generator->m_closure[0],
    generator->m_closure[1],
    generator_heap->var_highlight_style,
    generator_heap->var_background_style,
    generator_heap->var_width,
    generator_heap->var_start,
    generator_heap->var_end,
    generator_heap->var_output_bar,
    generator_heap->var_half_start,
    generator_heap->var_half_end,
    generator_heap->var_draw_background,
    generator_heap->var_BACKGROUND_BAR,
    generator_heap->var_BACKGROUND_HALF_BAR_LEFT,
    generator_heap->var_BACKGROUND_HALF_BAR_RIGHT,
    generator_heap->var_highlight_bar,
    generator_heap->var_bar_width,
    generator_heap->var_range_name
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
goto try_end_8;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(generator_heap->var_highlight_style);
CHECK_OBJECT(generator_heap->var_highlight_style);
Py_DECREF(generator_heap->var_highlight_style);
generator_heap->var_highlight_style = NULL;
CHECK_OBJECT(generator_heap->var_background_style);
CHECK_OBJECT(generator_heap->var_background_style);
Py_DECREF(generator_heap->var_background_style);
generator_heap->var_background_style = NULL;
CHECK_OBJECT(generator_heap->var_width);
CHECK_OBJECT(generator_heap->var_width);
Py_DECREF(generator_heap->var_width);
generator_heap->var_width = NULL;
CHECK_OBJECT(generator_heap->var_start);
CHECK_OBJECT(generator_heap->var_start);
Py_DECREF(generator_heap->var_start);
generator_heap->var_start = NULL;
CHECK_OBJECT(generator_heap->var_end);
CHECK_OBJECT(generator_heap->var_end);
Py_DECREF(generator_heap->var_end);
generator_heap->var_end = NULL;
CHECK_OBJECT(generator_heap->var_output_bar);
CHECK_OBJECT(generator_heap->var_output_bar);
Py_DECREF(generator_heap->var_output_bar);
generator_heap->var_output_bar = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_9 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_highlight_style);
generator_heap->var_highlight_style = NULL;
Py_XDECREF(generator_heap->var_background_style);
generator_heap->var_background_style = NULL;
Py_XDECREF(generator_heap->var_width);
generator_heap->var_width = NULL;
Py_XDECREF(generator_heap->var_start);
generator_heap->var_start = NULL;
Py_XDECREF(generator_heap->var_end);
generator_heap->var_end = NULL;
Py_XDECREF(generator_heap->var_output_bar);
generator_heap->var_output_bar = NULL;
Py_XDECREF(generator_heap->var_half_start);
generator_heap->var_half_start = NULL;
Py_XDECREF(generator_heap->var_half_end);
generator_heap->var_half_end = NULL;
Py_XDECREF(generator_heap->var_draw_background);
generator_heap->var_draw_background = NULL;
Py_XDECREF(generator_heap->var_BACKGROUND_BAR);
generator_heap->var_BACKGROUND_BAR = NULL;
Py_XDECREF(generator_heap->var_BACKGROUND_HALF_BAR_LEFT);
generator_heap->var_BACKGROUND_HALF_BAR_LEFT = NULL;
Py_XDECREF(generator_heap->var_BACKGROUND_HALF_BAR_RIGHT);
generator_heap->var_BACKGROUND_HALF_BAR_RIGHT = NULL;
Py_XDECREF(generator_heap->var_highlight_bar);
generator_heap->var_highlight_bar = NULL;
Py_XDECREF(generator_heap->var_bar_width);
generator_heap->var_bar_width = NULL;
Py_XDECREF(generator_heap->var_range_name);
generator_heap->var_range_name = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_9;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:
try_end_8:;
CHECK_OBJECT(generator_heap->var_highlight_style);
CHECK_OBJECT(generator_heap->var_highlight_style);
Py_DECREF(generator_heap->var_highlight_style);
generator_heap->var_highlight_style = NULL;
CHECK_OBJECT(generator_heap->var_background_style);
CHECK_OBJECT(generator_heap->var_background_style);
Py_DECREF(generator_heap->var_background_style);
generator_heap->var_background_style = NULL;
CHECK_OBJECT(generator_heap->var_width);
CHECK_OBJECT(generator_heap->var_width);
Py_DECREF(generator_heap->var_width);
generator_heap->var_width = NULL;
Py_XDECREF(generator_heap->var_start);
generator_heap->var_start = NULL;
Py_XDECREF(generator_heap->var_end);
generator_heap->var_end = NULL;
Py_XDECREF(generator_heap->var_output_bar);
generator_heap->var_output_bar = NULL;
CHECK_OBJECT(generator_heap->var_half_start);
CHECK_OBJECT(generator_heap->var_half_start);
Py_DECREF(generator_heap->var_half_start);
generator_heap->var_half_start = NULL;
CHECK_OBJECT(generator_heap->var_half_end);
CHECK_OBJECT(generator_heap->var_half_end);
Py_DECREF(generator_heap->var_half_end);
generator_heap->var_half_end = NULL;
CHECK_OBJECT(generator_heap->var_draw_background);
CHECK_OBJECT(generator_heap->var_draw_background);
Py_DECREF(generator_heap->var_draw_background);
generator_heap->var_draw_background = NULL;
CHECK_OBJECT(generator_heap->var_BACKGROUND_BAR);
CHECK_OBJECT(generator_heap->var_BACKGROUND_BAR);
Py_DECREF(generator_heap->var_BACKGROUND_BAR);
generator_heap->var_BACKGROUND_BAR = NULL;
CHECK_OBJECT(generator_heap->var_BACKGROUND_HALF_BAR_LEFT);
CHECK_OBJECT(generator_heap->var_BACKGROUND_HALF_BAR_LEFT);
Py_DECREF(generator_heap->var_BACKGROUND_HALF_BAR_LEFT);
generator_heap->var_BACKGROUND_HALF_BAR_LEFT = NULL;
CHECK_OBJECT(generator_heap->var_BACKGROUND_HALF_BAR_RIGHT);
CHECK_OBJECT(generator_heap->var_BACKGROUND_HALF_BAR_RIGHT);
Py_DECREF(generator_heap->var_BACKGROUND_HALF_BAR_RIGHT);
generator_heap->var_BACKGROUND_HALF_BAR_RIGHT = NULL;
CHECK_OBJECT(generator_heap->var_highlight_bar);
CHECK_OBJECT(generator_heap->var_highlight_bar);
Py_DECREF(generator_heap->var_highlight_bar);
generator_heap->var_highlight_bar = NULL;
CHECK_OBJECT(generator_heap->var_bar_width);
CHECK_OBJECT(generator_heap->var_bar_width);
Py_DECREF(generator_heap->var_bar_width);
generator_heap->var_bar_width = NULL;
Py_XDECREF(generator_heap->var_range_name);
generator_heap->var_range_name = NULL;


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

static PyObject *MAKE_GENERATOR_textual$renderables$bar$$$function__2___rich_console__$$$genobj__1___rich_console__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$renderables$bar$$$function__2___rich_console__$$$genobj__1___rich_console___context,
        module_textual$renderables$bar,
        mod_consts.const_str_plain___rich_console__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_4362b1af97346e3b7b01f23f8dc36215,
#endif
        code_objects_42525a150919b730246ad2705d0eafe8,
        closure,
        3,
#if 1
        sizeof(struct textual$renderables$bar$$$function__2___rich_console__$$$genobj__1___rich_console___locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$renderables$bar$$$function__3__apply_gradient(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_text = python_pars[0];
PyObject *par_gradient = python_pars[1];
PyObject *par_width = python_pars[2];
PyObject *var_from_color = NULL;
PyObject *var_get_rich_color = NULL;
PyObject *var_max_width = NULL;
PyObject *var_text_length = NULL;
PyObject *var_offset = NULL;
PyObject *var_bar_offset = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$renderables$bar$$$function__3__apply_gradient;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_textual$renderables$bar$$$function__3__apply_gradient = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$renderables$bar$$$function__3__apply_gradient)) {
    Py_XDECREF(cache_frame_frame_textual$renderables$bar$$$function__3__apply_gradient);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$renderables$bar$$$function__3__apply_gradient == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$renderables$bar$$$function__3__apply_gradient = MAKE_FUNCTION_FRAME(tstate, code_objects_902cdd329d537dd3da3cf5c970a20d17, module_textual$renderables$bar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$renderables$bar$$$function__3__apply_gradient->m_type_description == NULL);
frame_frame_textual$renderables$bar$$$function__3__apply_gradient = cache_frame_frame_textual$renderables$bar$$$function__3__apply_gradient;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$renderables$bar$$$function__3__apply_gradient);
assert(Py_REFCNT(frame_frame_textual$renderables$bar$$$function__3__apply_gradient) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_width);
tmp_operand_value_1 = par_width;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_width);
tmp_cmp_expr_left_1 = par_width;
tmp_cmp_expr_right_1 = const_int_0;
tmp_operand_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooooo";
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
frame_frame_textual$renderables$bar$$$function__3__apply_gradient->m_frame.f_lineno = 140;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 140;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_textual$renderables$bar$Style(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_color);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_from_color == NULL);
var_from_color = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_gradient);
tmp_expression_value_2 = par_gradient;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_get_rich_color);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_get_rich_color == NULL);
var_get_rich_color = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(par_width);
tmp_sub_expr_left_1 = par_width;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_max_width == NULL);
var_max_width = tmp_assign_source_3;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(var_max_width);
tmp_operand_value_3 = var_max_width;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_text);
tmp_expression_value_3 = par_text;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_stylize);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_from_color);
tmp_called_value_2 = var_from_color;
CHECK_OBJECT(par_gradient);
tmp_called_instance_1 = par_gradient;
frame_frame_textual$renderables$bar$$$function__3__apply_gradient->m_frame.f_lineno = 146;
tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_get_color,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 146;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_rich_color);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 146;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$renderables$bar$$$function__3__apply_gradient->m_frame.f_lineno = 146;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 146;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$renderables$bar$$$function__3__apply_gradient->m_frame.f_lineno = 146;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_text);
tmp_len_arg_1 = par_text;
tmp_assign_source_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_text_length == NULL);
var_text_length = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(var_text_length);
tmp_xrange_low_1 = var_text_length;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
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
tmp_assign_source_6 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 149;
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
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_7;
    Py_INCREF(var_offset);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
if (var_text_length == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 150;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_2 = var_text_length;
CHECK_OBJECT(var_offset);
tmp_sub_expr_right_2 = var_offset;
tmp_assign_source_8 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_bar_offset;
    var_bar_offset = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
if (par_text == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 151;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = par_text;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_stylize);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
if (var_from_color == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_from_color);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 152;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_4 = var_from_color;
if (var_get_rich_color == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_rich_color);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 152;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_5 = var_get_rich_color;
CHECK_OBJECT(var_bar_offset);
tmp_truediv_expr_left_1 = var_bar_offset;
if (var_max_width == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_max_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 152;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_truediv_expr_right_1 = var_max_width;
tmp_args_element_value_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 152;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_textual$renderables$bar$$$function__3__apply_gradient->m_frame.f_lineno = 152;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 152;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_textual$renderables$bar$$$function__3__apply_gradient->m_frame.f_lineno = 152;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 152;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_offset);
tmp_args_element_value_6 = var_offset;
CHECK_OBJECT(var_offset);
tmp_add_expr_left_1 = var_offset;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 154;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_textual$renderables$bar$$$function__3__apply_gradient->m_frame.f_lineno = 151;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
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
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$renderables$bar$$$function__3__apply_gradient, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$renderables$bar$$$function__3__apply_gradient->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$renderables$bar$$$function__3__apply_gradient, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$renderables$bar$$$function__3__apply_gradient,
    type_description_1,
    par_text,
    par_gradient,
    par_width,
    var_from_color,
    var_get_rich_color,
    var_max_width,
    var_text_length,
    var_offset,
    var_bar_offset
);


// Release cached frame if used for exception.
if (frame_frame_textual$renderables$bar$$$function__3__apply_gradient == cache_frame_frame_textual$renderables$bar$$$function__3__apply_gradient) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$renderables$bar$$$function__3__apply_gradient);
    cache_frame_frame_textual$renderables$bar$$$function__3__apply_gradient = NULL;
}

assertFrameObject(frame_frame_textual$renderables$bar$$$function__3__apply_gradient);

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
Py_XDECREF(var_from_color);
var_from_color = NULL;
Py_XDECREF(var_get_rich_color);
var_get_rich_color = NULL;
Py_XDECREF(var_max_width);
var_max_width = NULL;
Py_XDECREF(var_text_length);
var_text_length = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_bar_offset);
var_bar_offset = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_from_color);
var_from_color = NULL;
Py_XDECREF(var_get_rich_color);
var_get_rich_color = NULL;
Py_XDECREF(var_max_width);
var_max_width = NULL;
Py_XDECREF(var_text_length);
var_text_length = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_bar_offset);
var_bar_offset = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_gradient);
Py_DECREF(par_gradient);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_gradient);
Py_DECREF(par_gradient);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$renderables$bar$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$renderables$bar$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_626b078d9af27ae7b49b33be99160722,
#endif
        code_objects_7c4644f5519480019738b12a04da1c99,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$renderables$bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$renderables$bar$$$function__2___rich_console__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$renderables$bar$$$function__2___rich_console__,
        mod_consts.const_str_plain___rich_console__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4362b1af97346e3b7b01f23f8dc36215,
#endif
        code_objects_42525a150919b730246ad2705d0eafe8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$renderables$bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$renderables$bar$$$function__3__apply_gradient(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$renderables$bar$$$function__3__apply_gradient,
        mod_consts.const_str_plain__apply_gradient,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_902cdd329d537dd3da3cf5c970a20d17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$renderables$bar,
        mod_consts.const_str_digest_5256278872643287db140491aed05468,
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

static function_impl_code const function_table_textual$renderables$bar[] = {
impl_textual$renderables$bar$$$function__1___init__,
impl_textual$renderables$bar$$$function__2___rich_console__,
impl_textual$renderables$bar$$$function__3__apply_gradient,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$renderables$bar);
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
        module_textual$renderables$bar,
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
        function_table_textual$renderables$bar,
        sizeof(function_table_textual$renderables$bar) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.renderables.bar";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$renderables$bar(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$renderables$bar");

    // Store the module for future use.
    module_textual$renderables$bar = module;

    moduledict_textual$renderables$bar = MODULE_DICT(module_textual$renderables$bar);

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
        PRINT_STRING("textual$renderables$bar: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$renderables$bar: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$renderables$bar: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.renderables.bar" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$renderables$bar\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$renderables$bar,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$renderables$bar,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$renderables$bar,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$renderables$bar,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$renderables$bar,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$renderables$bar);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$renderables$bar);
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

        UPDATE_STRING_DICT1(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$renderables$bar;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_textual$renderables$bar$$$class__1_Bar_10 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$renderables$bar$$$class__1_Bar_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$renderables$bar = MAKE_MODULE_FRAME(code_objects_01eb433f9a02c269fc75b4360e848c12, module_textual$renderables$bar);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$renderables$bar);
assert(Py_REFCNT(frame_frame_textual$renderables$bar) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$renderables$bar$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$renderables$bar$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$renderables$bar;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_52bf26be4588d7229c975a99e142ebdf_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$renderables$bar->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
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
        (PyObject *)moduledict_textual$renderables$bar,
        mod_consts.const_str_plain_Console,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Console);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_Console, tmp_assign_source_6);
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
        (PyObject *)moduledict_textual$renderables$bar,
        mod_consts.const_str_plain_ConsoleOptions,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ConsoleOptions);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_ConsoleOptions, tmp_assign_source_7);
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
        (PyObject *)moduledict_textual$renderables$bar,
        mod_consts.const_str_plain_RenderResult,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_RenderResult);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_RenderResult, tmp_assign_source_8);
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
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$renderables$bar;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Style_str_plain_StyleType_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$renderables$bar->m_frame.f_lineno = 4;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$renderables$bar,
        mod_consts.const_str_plain_Style,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Style);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_Style, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$renderables$bar,
        mod_consts.const_str_plain_StyleType,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_StyleType);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_StyleType, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$renderables$bar;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Text_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$renderables$bar->m_frame.f_lineno = 5;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$renderables$bar,
        mod_consts.const_str_plain_Text,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Text);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_Text, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$renderables$bar;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Gradient_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$renderables$bar->m_frame.f_lineno = 7;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$renderables$bar,
        mod_consts.const_str_plain_Gradient,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Gradient);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_Gradient, tmp_assign_source_13);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$renderables$bar$$$class__1_Bar_10 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_725e94941b46255b6a2fcb563abc7c5d;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$bar$$$class__1_Bar_10, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_948603540d4c79f4f77df5191c6517ad;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$bar$$$class__1_Bar_10, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Bar;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$bar$$$class__1_Bar_10, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_10;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$bar$$$class__1_Bar_10, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_textual$renderables$bar$$$class__1_Bar_10, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_chr_9594;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$bar$$$class__1_Bar_10, mod_consts.const_str_plain_HALF_BAR_LEFT, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_textual$renderables$bar$$$class__1_Bar_2 = MAKE_CLASS_FRAME(tstate, code_objects_ab77d4ecd65115dadf2d9d25893406ce, module_textual$renderables$bar, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$renderables$bar$$$class__1_Bar_2);
assert(Py_REFCNT(frame_frame_textual$renderables$bar$$$class__1_Bar_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_1 = DICT_GET_ITEM0(tstate, locals_textual$renderables$bar$$$class__1_Bar_10, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 21;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_HALF_BAR_LEFT;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = mod_consts.const_str_chr_9473;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$bar$$$class__1_Bar_10, mod_consts.const_str_plain_BAR, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_2 = DICT_GET_ITEM0(tstate, locals_textual$renderables$bar$$$class__1_Bar_10, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 22;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_BAR;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = mod_consts.const_str_chr_9592;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$bar$$$class__1_Bar_10, mod_consts.const_str_plain_HALF_BAR_RIGHT, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_3 = DICT_GET_ITEM0(tstate, locals_textual$renderables$bar$$$class__1_Bar_10, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_HALF_BAR_RIGHT;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$renderables$bar$$$class__1_Bar_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$renderables$bar$$$class__1_Bar_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$renderables$bar$$$class__1_Bar_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$renderables$bar$$$class__1_Bar_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$renderables$bar$$$class__1_Bar_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_ba83c7c8246a5e35dc29e802143b0b4e_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_5a98de0248827c03f9b412145c2a7fd4);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_textual$renderables$bar$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_textual$renderables$bar$$$class__1_Bar_10, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_d2849d973cef618ef2f9b30f24b4da2f);

tmp_dictset_value = MAKE_FUNCTION_textual$renderables$bar$$$function__2___rich_console__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_textual$renderables$bar$$$class__1_Bar_10, mod_consts.const_str_plain___rich_console__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_782386fff429a52203ba53db9ebaf860_tuple;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$bar$$$class__1_Bar_10, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_Bar;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_textual$renderables$bar$$$class__1_Bar_10;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$renderables$bar->m_frame.f_lineno = 10;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_17;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_16 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_16);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_textual$renderables$bar$$$class__1_Bar_10);
locals_textual$renderables$bar$$$class__1_Bar_10 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$renderables$bar$$$class__1_Bar_10);
locals_textual$renderables$bar$$$class__1_Bar_10 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 10;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain_Bar, tmp_assign_source_16);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$renderables$bar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$renderables$bar->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$renderables$bar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$renderables$bar);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_b05fc01b1d1aaf43fce57d5de713b9ab);

tmp_assign_source_18 = MAKE_FUNCTION_textual$renderables$bar$$$function__3__apply_gradient(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_textual$renderables$bar, (Nuitka_StringObject *)mod_consts.const_str_plain__apply_gradient, tmp_assign_source_18);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$renderables$bar", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.renderables.bar" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$renderables$bar);
    return module_textual$renderables$bar;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$bar, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$renderables$bar", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

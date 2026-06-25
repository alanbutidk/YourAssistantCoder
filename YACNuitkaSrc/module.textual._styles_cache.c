/* Generated code for Python module 'textual$_styles_cache'
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



/* The "module_textual$_styles_cache" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$_styles_cache;
PyDictObject *moduledict_textual$_styles_cache;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__cache;
PyObject *const_str_plain__dirty_lines;
PyObject *const_str_plain__width;
PyObject *const_str_plain__simple_strip;
PyObject *const_str_plain_self;
PyObject *const_str_plain_dirty;
PyObject *const_str_plain_width;
PyObject *const_str_plain___rich_repr__;
PyObject *const_str_digest_8b569b9ed02b35558a3ea393855bef90;
PyObject *const_str_plain_update;
PyObject *const_str_plain_line_range;
PyObject *const_str_plain_clear;
PyObject *const_str_digest_b15bc3e87f6992ed638dfe86b91a9c26;
PyObject *const_str_digest_31ecf960b3f0085146af18c4e8a258b9;
PyObject *const_str_digest_656c094f6a44236d4409589c0f60bd5c;
PyObject *const_str_plain__border_title;
PyObject *const_str_plain__border_subtitle;
PyObject *const_str_plain_background_colors;
PyObject *const_str_plain_styles;
PyObject *const_str_plain_app;
PyObject *const_str_plain_render;
PyObject *const_str_plain_region;
PyObject *const_str_plain_size;
PyObject *const_str_plain_render_line;
PyObject *const_str_plain_get_line_filters;
PyObject *const_str_plain__get_title_style_information;
PyObject *const_str_plain__get_subtitle_style_information;
PyObject *const_str_plain_content_region;
PyObject *const_str_plain_padding;
PyObject *const_str_plain_opacity;
PyObject *const_str_plain_ansi_theme;
PyObject *const_str_plain_native_ansi_color;
PyObject *const_tuple_f27f2030ea68ba9e081782aae3641d6c_tuple;
PyObject *const_str_plain_auto_links;
PyObject *const_str_plain_hover_style;
PyObject *const_str_plain__link_id;
PyObject *const_str_plain__meta;
PyObject *const_str_digest_c668a0a27d6e96979f44172672f9bd45;
PyObject *const_str_plain_meta;
PyObject *const_str_plain_link_style_hover;
PyObject *const_str_plain_style_links;
PyObject *const_str_plain_link_id;
PyObject *const_str_digest_6249f6c6b1e6628ece02a9fb540e225f;
PyObject *const_str_plain_append;
PyObject *const_str_plain___contains__;
PyObject *const_str_plain_is_dirty;
PyObject *const_str_plain_content_size;
PyObject *const_str_plain_base_background;
PyObject *const_str_plain_background;
PyObject *const_str_plain_render_content_line;
PyObject *const_str_plain_border_title;
PyObject *const_str_plain_border_subtitle;
PyObject *const_str_plain_native_ansi;
PyObject *const_str_plain_filters;
PyObject *const_str_plain_strip;
PyObject *const_str_plain_apply_filter;
PyObject *const_str_plain_DEBUG;
PyObject *const_str_plain_control;
PyObject *const_str_plain_text;
PyObject *const_str_plain_log;
PyObject *const_str_plain_warning;
PyObject *const_str_digest_27a1686a0b2c8992e4a8c3730b61c057;
PyObject *const_str_plain_add_strip;
PyObject *const_str_plain_difference_update;
PyObject *const_str_plain_column_span;
PyObject *const_str_plain_crop;
PyObject *const_str_plain_x1;
PyObject *const_str_plain_x2;
PyObject *const_str_plain_strips;
PyObject *const_str_digest_faab65a7c6d81b493fab24adbd1f3f21;
PyObject *const_str_plain_Style;
PyObject *const_tuple_str_plain_background_tuple;
PyObject *const_str_digest_0e774b25b570b813c375334101cf9656;
PyObject *const_str_plain_gutter;
PyObject *const_str_plain_border;
PyObject *const_str_plain_outline;
PyObject *const_str_plain_RichStyle;
PyObject *const_str_plain_from_color;
PyObject *const_str_plain_get_inner_outer;
PyObject *const_dict_95beaea57d07474a4e3d604025cbe687;
PyObject *const_str_digest_ce5c86633ecfaf488f31a9eaceaa418a;
PyObject *const_str_plain_line_post;
PyObject *const_str_digest_da5bd68fb25fe4736558b142ba8ad530;
PyObject *const_str_digest_9f7f57a7c83d13801ee77ac9071120bf;
PyObject *const_str_plain_post;
PyObject *const_str_digest_d2e72f2c696d274d18c286ec44da05ee;
PyObject *const_str_plain_multiply_alpha;
PyObject *const_tuple_str_plain_foreground_tuple;
PyObject *const_str_plain_a;
PyObject *const_str_plain_TRANSPARENT;
PyObject *const_str_plain_render_border_label;
PyObject *const_int_pos_2;
PyObject *const_str_plain_get_box;
PyObject *const_str_plain_border_title_align;
PyObject *const_str_plain_border_subtitle_align;
PyObject *const_str_plain_render_row;
PyObject *const_str_plain_top;
PyObject *const_str_plain_bottom;
PyObject *const_str_plain_rich_style;
PyObject *const_str_plain_make_blank;
PyObject *const_str_plain_adjust_cell_length;
PyObject *const_str_plain_Strip;
PyObject *const_str_plain_blank;
PyObject *const_str_plain_text_opacity;
PyObject *const_str_plain_TextOpacity;
PyObject *const_str_plain_process_segments;
PyObject *const_str_plain_line_pad;
PyObject *const_str_plain_line_trim;
PyObject *const_str_digest_a7c97a32bac9b026e4fc9d678bdec103;
PyObject *const_str_plain_has_rule;
PyObject *const_tuple_str_plain_hatch_tuple;
PyObject *const_str_plain_hatch;
PyObject *const_str_plain_none;
PyObject *const_str_space;
PyObject *const_str_plain_rich_color;
PyObject *const_str_plain_apply_hatch;
PyObject *const_str_plain_active_app;
PyObject *const_str_plain_DEFAULT_TERMINAL_THEME;
PyObject *const_str_plain_tint;
PyObject *const_str_plain_Tint;
PyObject *const_str_plain__apply_opacity;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_lru_cache;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Sequence;
PyObject *const_str_digest_0266ac3c468cbbaf99b230132943e04e;
PyObject *const_str_plain_rich;
PyObject *const_str_digest_6ade9fb5040f26ac50721029664cef54;
PyObject *const_tuple_str_plain_Segment_tuple;
PyObject *const_str_plain_Segment;
PyObject *const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
PyObject *const_tuple_str_plain_Style_tuple;
PyObject *const_str_digest_6bc791a702fe5b987b1341713efdae95;
PyObject *const_tuple_str_plain_TerminalTheme_tuple;
PyObject *const_str_plain_TerminalTheme;
PyObject *const_str_plain_textual;
PyObject *const_tuple_str_plain_log_tuple;
PyObject *const_str_digest_1cdd5855134e079d01ba9fb92ab5d138;
PyObject *const_tuple_str_plain_DEFAULT_TERMINAL_THEME_tuple;
PyObject *const_str_digest_4e0b568455ee3fb882ea7ac876847eca;
PyObject *const_tuple_92c442ba6a0709c0e1cb58493a087a2b_tuple;
PyObject *const_str_digest_e220f34e12dcf8546d521c209fe637ec;
PyObject *const_tuple_str_plain_active_app_tuple;
PyObject *const_str_digest_aae76b217d7bd36560c630adc947d154;
PyObject *const_tuple_str_plain__apply_opacity_tuple;
PyObject *const_str_digest_52f9c3d5d66d6c6c676fc33a28f09315;
PyObject *const_tuple_5904e24242b287433ab0e06d821511ef_tuple;
PyObject *const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
PyObject *const_tuple_str_plain_TRANSPARENT_str_plain_Color_tuple;
PyObject *const_str_plain_Color;
PyObject *const_str_digest_82c5f11adf7571555094c86b22e21a5a;
PyObject *const_tuple_str_plain_DEBUG_tuple;
PyObject *const_str_digest_ee92707a8e73d51481db58a75e3dd4cb;
PyObject *const_tuple_str_plain_Content_tuple;
PyObject *const_str_plain_Content;
PyObject *const_str_digest_401890d7b50ad6ac5c9efdfbf3c55cc1;
PyObject *const_tuple_str_plain_LineFilter_tuple;
PyObject *const_str_plain_LineFilter;
PyObject *const_str_digest_8b449230fefb53e14684626fc331fc25;
PyObject *const_tuple_str_plain_Region_str_plain_Size_str_plain_Spacing_tuple;
PyObject *const_str_plain_Region;
PyObject *const_str_plain_Size;
PyObject *const_str_plain_Spacing;
PyObject *const_str_digest_74a881b172fc2bdcd0fc440413d4f4dc;
PyObject *const_tuple_str_plain_TextOpacity_tuple;
PyObject *const_str_digest_061ce1e16f806c4a05639ac7db8a9c7d;
PyObject *const_tuple_str_plain_Tint_tuple;
PyObject *const_str_digest_ffbdc977fd7566d9981a709ea52c386e;
PyObject *const_tuple_str_plain_Strip_tuple;
PyObject *const_str_digest_bb07eb353e080f1046cea51976ebb87f;
PyObject *const_str_plain_RenderLineCallback;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain_auto;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_angular_tuple;
PyObject *const_str_digest_22807285b18688b94f19a53e653f720d;
PyObject *const_str_digest_538fa62b4c91127d76636006a9b92d36;
PyObject *const_str_plain_StylesCache;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_37;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_2875329554abf2c87f2b3dadcd0225c5;
PyObject *const_dict_a367242e045973b662a9e05f7c4b4498;
PyObject *const_dict_ca492a53f5c781aab87ac0f48113c92d;
PyObject *const_str_plain_set_dirty;
PyObject *const_str_digest_d9d4dcf9b61ab272611efb732e52142c;
PyObject *const_dict_f93db501ea534de7fdafa0b0a384ded3;
PyObject *const_str_digest_106a0eabde66d934b6bafc5d770d5fa8;
PyObject *const_str_digest_2c3ca625ab972c4726e36976e2906b40;
PyObject *const_dict_c91f0f0bc6b87737af41dd3f18ff4c0c;
PyObject *const_str_plain_render_widget;
PyObject *const_str_digest_e17f6d1d2c8e12e092d4d2ed7c66cac2;
PyObject *const_dict_0cd90c513d3becea2969b8eb264eebb1;
PyObject *const_str_digest_f7b23307e1e2d99aff8684e6074e3d74;
PyObject *const_tuple_int_pos_1024_tuple;
PyObject *const_dict_afc2b216995ae52f339a62d70fe13930;
PyObject *const_str_digest_a952b27f19a55818a7268c034d1eaacf;
PyObject *const_dict_191bd8bb3d70f2f405a3f32aed680959;
PyObject *const_str_digest_a13d704d2413f56cedbb58b8676a7412;
PyObject *const_tuple_fb847c9e7bb3b85c21848c033094bd4b_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_a4682143ae8e3494480fed64022c1f2d;
PyObject *const_str_digest_23e50de2b18f52c28a1146415fbc1ce8;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_base_background_str_plain_background_tuple;
PyObject *const_tuple_str_plain_self_str_plain_y_tuple;
PyObject *const_tuple_23103a1fb920bf68d929a409fc522a74_tuple;
PyObject *const_tuple_str_plain_background_str_plain_from_color_str_plain_styles_tuple;
PyObject *const_tuple_43dcec01b670c5632b19756e9b8e831f_tuple;
PyObject *const_tuple_28808f9e3aa266830e6ea6f2fbdb14d1_tuple;
PyObject *const_tuple_abb951737563e3b3b5250d5caa318793_tuple;
PyObject *const_tuple_ad42a11831a7d639c832a167f889fa6f_tuple;
PyObject *const_tuple_54028d2e8f2298271480d70c4db4c4d3_tuple;
PyObject *const_tuple_str_plain_self_str_plain_regions_str_plain_region_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[220];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual._styles_cache"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__cache);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__dirty_lines);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__width);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__simple_strip);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_dirty);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain___rich_repr__);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b569b9ed02b35558a3ea393855bef90);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_line_range);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_b15bc3e87f6992ed638dfe86b91a9c26);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_31ecf960b3f0085146af18c4e8a258b9);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_656c094f6a44236d4409589c0f60bd5c);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__border_title);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__border_subtitle);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_background_colors);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_styles);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_render);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_region);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_line);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_line_filters);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_title_style_information);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_subtitle_style_information);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_content_region);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_padding);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_opacity);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_theme);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_native_ansi_color);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_f27f2030ea68ba9e081782aae3641d6c_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto_links);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_hover_style);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__link_id);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__meta);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_c668a0a27d6e96979f44172672f9bd45);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_meta);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_link_style_hover);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_style_links);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_link_id);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_6249f6c6b1e6628ece02a9fb540e225f);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain___contains__);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_dirty);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_content_size);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_base_background);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_background);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_content_line);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_border_title);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_border_subtitle);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_native_ansi);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_filters);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply_filter);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEBUG);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_control);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_warning);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_27a1686a0b2c8992e4a8c3730b61c057);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_strip);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_difference_update);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_column_span);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_crop);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_x1);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_x2);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_strips);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_faab65a7c6d81b493fab24adbd1f3f21);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_Style);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_background_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e774b25b570b813c375334101cf9656);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_gutter);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_border);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_outline);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_RichStyle);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_color);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_inner_outer);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_dict_95beaea57d07474a4e3d604025cbe687);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce5c86633ecfaf488f31a9eaceaa418a);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_line_post);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_da5bd68fb25fe4736558b142ba8ad530);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f7f57a7c83d13801ee77ac9071120bf);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_post);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2e72f2c696d274d18c286ec44da05ee);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiply_alpha);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_foreground_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_a);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSPARENT);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_border_label);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_box);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_border_title_align);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_border_subtitle_align);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_row);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_top);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_bottom);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich_style);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_blank);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_adjust_cell_length);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_Strip);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_blank);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_text_opacity);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextOpacity);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_segments);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_line_pad);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_line_trim);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7c97a32bac9b026e4fc9d678bdec103);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_rule);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hatch_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_hatch);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_none);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich_color);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply_hatch);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_active_app);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_tint);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tint);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain__apply_opacity);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_Segment);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_6bc791a702fe5b987b1341713efdae95);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TerminalTheme_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_TerminalTheme);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_textual);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_log_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cdd5855134e079d01ba9fb92ab5d138);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DEFAULT_TERMINAL_THEME_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e0b568455ee3fb882ea7ac876847eca);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_92c442ba6a0709c0e1cb58493a087a2b_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_e220f34e12dcf8546d521c209fe637ec);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_active_app_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_aae76b217d7bd36560c630adc947d154);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__apply_opacity_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_52f9c3d5d66d6c6c676fc33a28f09315);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_5904e24242b287433ab0e06d821511ef_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TRANSPARENT_str_plain_Color_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_Color);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_82c5f11adf7571555094c86b22e21a5a);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DEBUG_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee92707a8e73d51481db58a75e3dd4cb);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Content_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_Content);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_401890d7b50ad6ac5c9efdfbf3c55cc1);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LineFilter_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_LineFilter);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Region_str_plain_Size_str_plain_Spacing_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_Region);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_Size);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_Spacing);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_74a881b172fc2bdcd0fc440413d4f4dc);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextOpacity_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_061ce1e16f806c4a05639ac7db8a9c7d);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Tint_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffbdc977fd7566d9981a709ea52c386e);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Strip_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb07eb353e080f1046cea51976ebb87f);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_RenderLineCallback);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_angular_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_22807285b18688b94f19a53e653f720d);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_538fa62b4c91127d76636006a9b92d36);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_StylesCache);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_int_pos_37);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_2875329554abf2c87f2b3dadcd0225c5);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_ca492a53f5c781aab87ac0f48113c92d);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_dirty);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9d4dcf9b61ab272611efb732e52142c);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_dict_f93db501ea534de7fdafa0b0a384ded3);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_106a0eabde66d934b6bafc5d770d5fa8);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c3ca625ab972c4726e36976e2906b40);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_dict_c91f0f0bc6b87737af41dd3f18ff4c0c);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_widget);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_e17f6d1d2c8e12e092d4d2ed7c66cac2);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_dict_0cd90c513d3becea2969b8eb264eebb1);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7b23307e1e2d99aff8684e6074e3d74);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_dict_afc2b216995ae52f339a62d70fe13930);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_a952b27f19a55818a7268c034d1eaacf);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_dict_191bd8bb3d70f2f405a3f32aed680959);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_a13d704d2413f56cedbb58b8676a7412);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_fb847c9e7bb3b85c21848c033094bd4b_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4682143ae8e3494480fed64022c1f2d);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_23e50de2b18f52c28a1146415fbc1ce8);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_base_background_str_plain_background_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_y_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_23103a1fb920bf68d929a409fc522a74_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_background_str_plain_from_color_str_plain_styles_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_43dcec01b670c5632b19756e9b8e831f_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_28808f9e3aa266830e6ea6f2fbdb14d1_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_abb951737563e3b3b5250d5caa318793_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_ad42a11831a7d639c832a167f889fa6f_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_54028d2e8f2298271480d70c4db4c4d3_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_regions_str_plain_region_tuple);
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
void checkModuleConstants_textual$_styles_cache(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cache);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__dirty_lines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dirty_lines);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__width);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__simple_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__simple_strip);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_dirty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dirty);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_width);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain___rich_repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rich_repr__);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b569b9ed02b35558a3ea393855bef90));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b569b9ed02b35558a3ea393855bef90);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_line_range));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_line_range);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_b15bc3e87f6992ed638dfe86b91a9c26));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b15bc3e87f6992ed638dfe86b91a9c26);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_31ecf960b3f0085146af18c4e8a258b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31ecf960b3f0085146af18c4e8a258b9);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_656c094f6a44236d4409589c0f60bd5c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_656c094f6a44236d4409589c0f60bd5c);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__border_title));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__border_title);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__border_subtitle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__border_subtitle);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_background_colors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_background_colors);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_styles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_styles);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_render));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_region));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_region);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_line);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_line_filters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_line_filters);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_title_style_information));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_title_style_information);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_subtitle_style_information));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_subtitle_style_information);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_content_region));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content_region);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_padding));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_padding);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_opacity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_opacity);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_theme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_theme);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_native_ansi_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_native_ansi_color);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_f27f2030ea68ba9e081782aae3641d6c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f27f2030ea68ba9e081782aae3641d6c_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto_links));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto_links);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_hover_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hover_style);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__link_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__link_id);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__meta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__meta);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_c668a0a27d6e96979f44172672f9bd45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c668a0a27d6e96979f44172672f9bd45);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_meta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_meta);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_link_style_hover));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_link_style_hover);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_style_links));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_style_links);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_link_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_link_id);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_6249f6c6b1e6628ece02a9fb540e225f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6249f6c6b1e6628ece02a9fb540e225f);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain___contains__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___contains__);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_dirty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_dirty);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_content_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content_size);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_base_background));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base_background);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_background));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_background);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_content_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_content_line);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_border_title));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_border_title);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_border_subtitle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_border_subtitle);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_native_ansi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_native_ansi);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_filters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filters);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply_filter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apply_filter);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEBUG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEBUG);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_control));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_control);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warning);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_27a1686a0b2c8992e4a8c3730b61c057));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27a1686a0b2c8992e4a8c3730b61c057);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_strip);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_difference_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_difference_update);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_column_span));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_column_span);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_crop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_crop);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_x1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x1);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_x2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x2);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_strips));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strips);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_faab65a7c6d81b493fab24adbd1f3f21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_faab65a7c6d81b493fab24adbd1f3f21);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_Style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Style);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_background_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_background_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e774b25b570b813c375334101cf9656));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e774b25b570b813c375334101cf9656);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_gutter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gutter);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_border));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_border);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_outline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_outline);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_RichStyle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RichStyle);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_color);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_inner_outer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_inner_outer);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_dict_95beaea57d07474a4e3d604025cbe687));
CHECK_OBJECT_DEEP(mod_consts.const_dict_95beaea57d07474a4e3d604025cbe687);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce5c86633ecfaf488f31a9eaceaa418a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce5c86633ecfaf488f31a9eaceaa418a);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_line_post));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_line_post);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_da5bd68fb25fe4736558b142ba8ad530));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da5bd68fb25fe4736558b142ba8ad530);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f7f57a7c83d13801ee77ac9071120bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f7f57a7c83d13801ee77ac9071120bf);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_post));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2e72f2c696d274d18c286ec44da05ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d2e72f2c696d274d18c286ec44da05ee);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiply_alpha));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiply_alpha);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_foreground_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_foreground_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_a));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_a);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSPARENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TRANSPARENT);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_border_label));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_border_label);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_box));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_box);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_border_title_align));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_border_title_align);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_border_subtitle_align));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_border_subtitle_align);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_row));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_row);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_top));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_top);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_bottom));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bottom);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich_style);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_blank));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_blank);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_adjust_cell_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_adjust_cell_length);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_Strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Strip);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_blank));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blank);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_text_opacity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text_opacity);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextOpacity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextOpacity);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_segments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_segments);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_line_pad));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_line_pad);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_line_trim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_line_trim);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7c97a32bac9b026e4fc9d678bdec103));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7c97a32bac9b026e4fc9d678bdec103);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_rule));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_rule);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hatch_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_hatch_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_hatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hatch);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_none));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_none);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich_color);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply_hatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apply_hatch);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_active_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_active_app);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_tint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tint);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tint);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain__apply_opacity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__apply_opacity);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Segment_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_Segment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Segment);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Style_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_6bc791a702fe5b987b1341713efdae95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6bc791a702fe5b987b1341713efdae95);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TerminalTheme_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TerminalTheme_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_TerminalTheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TerminalTheme);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_textual));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_textual);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_log_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_log_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cdd5855134e079d01ba9fb92ab5d138));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cdd5855134e079d01ba9fb92ab5d138);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DEFAULT_TERMINAL_THEME_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DEFAULT_TERMINAL_THEME_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e0b568455ee3fb882ea7ac876847eca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e0b568455ee3fb882ea7ac876847eca);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_92c442ba6a0709c0e1cb58493a087a2b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_92c442ba6a0709c0e1cb58493a087a2b_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_e220f34e12dcf8546d521c209fe637ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e220f34e12dcf8546d521c209fe637ec);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_active_app_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_active_app_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_aae76b217d7bd36560c630adc947d154));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aae76b217d7bd36560c630adc947d154);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__apply_opacity_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__apply_opacity_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_52f9c3d5d66d6c6c676fc33a28f09315));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52f9c3d5d66d6c6c676fc33a28f09315);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_5904e24242b287433ab0e06d821511ef_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5904e24242b287433ab0e06d821511ef_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TRANSPARENT_str_plain_Color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TRANSPARENT_str_plain_Color_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_Color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Color);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_82c5f11adf7571555094c86b22e21a5a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_82c5f11adf7571555094c86b22e21a5a);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DEBUG_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DEBUG_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee92707a8e73d51481db58a75e3dd4cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee92707a8e73d51481db58a75e3dd4cb);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Content_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Content_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_Content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Content);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_401890d7b50ad6ac5c9efdfbf3c55cc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_401890d7b50ad6ac5c9efdfbf3c55cc1);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LineFilter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_LineFilter_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_LineFilter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LineFilter);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Region_str_plain_Size_str_plain_Spacing_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Region_str_plain_Size_str_plain_Spacing_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_Region));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Region);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_Size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Size);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_Spacing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Spacing);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_74a881b172fc2bdcd0fc440413d4f4dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74a881b172fc2bdcd0fc440413d4f4dc);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TextOpacity_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TextOpacity_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_061ce1e16f806c4a05639ac7db8a9c7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_061ce1e16f806c4a05639ac7db8a9c7d);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Tint_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Tint_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffbdc977fd7566d9981a709ea52c386e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ffbdc977fd7566d9981a709ea52c386e);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Strip_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Strip_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb07eb353e080f1046cea51976ebb87f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb07eb353e080f1046cea51976ebb87f);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_RenderLineCallback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RenderLineCallback);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_angular_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_angular_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_22807285b18688b94f19a53e653f720d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22807285b18688b94f19a53e653f720d);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_538fa62b4c91127d76636006a9b92d36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_538fa62b4c91127d76636006a9b92d36);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_StylesCache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StylesCache);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_int_pos_37));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_37);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_2875329554abf2c87f2b3dadcd0225c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2875329554abf2c87f2b3dadcd0225c5);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_ca492a53f5c781aab87ac0f48113c92d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ca492a53f5c781aab87ac0f48113c92d);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_dirty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_dirty);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9d4dcf9b61ab272611efb732e52142c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d9d4dcf9b61ab272611efb732e52142c);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_dict_f93db501ea534de7fdafa0b0a384ded3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f93db501ea534de7fdafa0b0a384ded3);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_106a0eabde66d934b6bafc5d770d5fa8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_106a0eabde66d934b6bafc5d770d5fa8);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c3ca625ab972c4726e36976e2906b40));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c3ca625ab972c4726e36976e2906b40);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_dict_c91f0f0bc6b87737af41dd3f18ff4c0c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c91f0f0bc6b87737af41dd3f18ff4c0c);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_widget));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_widget);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_e17f6d1d2c8e12e092d4d2ed7c66cac2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e17f6d1d2c8e12e092d4d2ed7c66cac2);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_dict_0cd90c513d3becea2969b8eb264eebb1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0cd90c513d3becea2969b8eb264eebb1);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7b23307e1e2d99aff8684e6074e3d74));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7b23307e1e2d99aff8684e6074e3d74);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1024_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_dict_afc2b216995ae52f339a62d70fe13930));
CHECK_OBJECT_DEEP(mod_consts.const_dict_afc2b216995ae52f339a62d70fe13930);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_a952b27f19a55818a7268c034d1eaacf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a952b27f19a55818a7268c034d1eaacf);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_dict_191bd8bb3d70f2f405a3f32aed680959));
CHECK_OBJECT_DEEP(mod_consts.const_dict_191bd8bb3d70f2f405a3f32aed680959);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_a13d704d2413f56cedbb58b8676a7412));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a13d704d2413f56cedbb58b8676a7412);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_fb847c9e7bb3b85c21848c033094bd4b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fb847c9e7bb3b85c21848c033094bd4b_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4682143ae8e3494480fed64022c1f2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4682143ae8e3494480fed64022c1f2d);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_23e50de2b18f52c28a1146415fbc1ce8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_23e50de2b18f52c28a1146415fbc1ce8);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_base_background_str_plain_background_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_base_background_str_plain_background_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_y_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_y_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_23103a1fb920bf68d929a409fc522a74_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_23103a1fb920bf68d929a409fc522a74_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_background_str_plain_from_color_str_plain_styles_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_background_str_plain_from_color_str_plain_styles_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_43dcec01b670c5632b19756e9b8e831f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_43dcec01b670c5632b19756e9b8e831f_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_28808f9e3aa266830e6ea6f2fbdb14d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_28808f9e3aa266830e6ea6f2fbdb14d1_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_abb951737563e3b3b5250d5caa318793_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_abb951737563e3b3b5250d5caa318793_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_ad42a11831a7d639c832a167f889fa6f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ad42a11831a7d639c832a167f889fa6f_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_54028d2e8f2298271480d70c4db4c4d3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_54028d2e8f2298271480d70c4db4c4d3_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_regions_str_plain_region_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_regions_str_plain_region_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 23
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
static PyObject *module_var_accessor_textual$_styles_cache$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Callable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Callable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Callable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Callable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$DEBUG(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_DEBUG);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEBUG);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEBUG, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEBUG);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEBUG, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_DEBUG);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_DEBUG);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEBUG);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$DEFAULT_TERMINAL_THEME(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$RichStyle(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_RichStyle);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RichStyle);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RichStyle, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RichStyle);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RichStyle, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_RichStyle);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_RichStyle);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RichStyle);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$Strip(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Strip);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Strip, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Strip);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Strip, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$Style(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$TRANSPARENT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSPARENT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TRANSPARENT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TRANSPARENT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TRANSPARENT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TRANSPARENT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSPARENT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSPARENT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSPARENT);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$TextOpacity(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_TextOpacity);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TextOpacity);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TextOpacity, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TextOpacity);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TextOpacity, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_TextOpacity);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_TextOpacity);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TextOpacity);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$Tint(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Tint);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tint);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tint, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tint);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tint, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Tint);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Tint);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Tint);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$_apply_opacity(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain__apply_opacity);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__apply_opacity);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__apply_opacity, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__apply_opacity);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__apply_opacity, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain__apply_opacity);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain__apply_opacity);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__apply_opacity);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$active_app(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_active_app);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_active_app);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_active_app, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_active_app);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_active_app, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_active_app);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_active_app);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_active_app);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$apply_hatch(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_apply_hatch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_apply_hatch);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_apply_hatch, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_apply_hatch);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_apply_hatch, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_apply_hatch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_apply_hatch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_apply_hatch);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$get_box(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_get_box);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_box);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_box, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_box);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_box, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_get_box);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_get_box);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_box);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$line_pad(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_line_pad);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_line_pad);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_line_pad, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_line_pad);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_line_pad, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_line_pad);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_line_pad);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_line_pad);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$line_trim(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_line_trim);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_line_trim);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_line_trim, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_line_trim);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_line_trim, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_line_trim);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_line_trim);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_line_trim);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$lru_cache(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$make_blank(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_make_blank);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_make_blank);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_make_blank, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_make_blank);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_make_blank, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_make_blank);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_make_blank);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_make_blank);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$render_border_label(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_render_border_label);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_render_border_label);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_render_border_label, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_render_border_label);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_render_border_label, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_render_border_label);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_render_border_label);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_render_border_label);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$render_row(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_render_row);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_render_row);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_render_row, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_render_row);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_render_row, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_render_row);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_render_row);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_render_row);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_styles_cache$rich(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_styles_cache->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_styles_cache->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_styles_cache->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rich);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rich, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rich);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rich, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_68608dca278659b485010df6b6b4ae87;
static PyCodeObject *code_objects_e6e0975f172324bc5486291294bfa26e;
static PyCodeObject *code_objects_c4b6c6ee4f3d6d2d5a01b58fc74a6d3a;
static PyCodeObject *code_objects_63e633d79c54cc00cff637e75d97e4be;
static PyCodeObject *code_objects_0c29e162dd35c30afa76753034a129a1;
static PyCodeObject *code_objects_10f2f63d8745bf944acfde49c5cea7c7;
static PyCodeObject *code_objects_273ab901c260e296a4704e0495cbb295;
static PyCodeObject *code_objects_8d18eee0891f416fcc4f63d89785f31c;
static PyCodeObject *code_objects_c3236fe118fcb40d8af70b3d41c841e8;
static PyCodeObject *code_objects_97a0347e28ad0510e145fd26a3bd85cd;
static PyCodeObject *code_objects_fb110344d42693e7bf33514b2ff19ff2;
static PyCodeObject *code_objects_17bed9361acde58a500e58c0bd6bed12;
static PyCodeObject *code_objects_e797a98e3fcfa9dac912cec82ce4ddb5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a4682143ae8e3494480fed64022c1f2d); CHECK_OBJECT(module_filename_obj);
code_objects_68608dca278659b485010df6b6b4ae87 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_23e50de2b18f52c28a1146415fbc1ce8, mod_consts.const_str_digest_23e50de2b18f52c28a1146415fbc1ce8, NULL, NULL, 0, 0, 0);
code_objects_e6e0975f172324bc5486291294bfa26e = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_StylesCache, mod_consts.const_str_plain_StylesCache, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c4b6c6ee4f3d6d2d5a01b58fc74a6d3a = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_2875329554abf2c87f2b3dadcd0225c5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_63e633d79c54cc00cff637e75d97e4be = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rich_repr__, mod_consts.const_str_digest_8b569b9ed02b35558a3ea393855bef90, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0c29e162dd35c30afa76753034a129a1 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_clear, mod_consts.const_str_digest_2c3ca625ab972c4726e36976e2906b40, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_10f2f63d8745bf944acfde49c5cea7c7 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_inner_outer, mod_consts.const_str_digest_a952b27f19a55818a7268c034d1eaacf, mod_consts.const_tuple_str_plain_cls_str_plain_base_background_str_plain_background_tuple, NULL, 3, 0, 0);
code_objects_273ab901c260e296a4704e0495cbb295 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_dirty, mod_consts.const_str_digest_106a0eabde66d934b6bafc5d770d5fa8, mod_consts.const_tuple_str_plain_self_str_plain_y_tuple, NULL, 2, 0, 0);
code_objects_8d18eee0891f416fcc4f63d89785f31c = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_line_post, mod_consts.const_str_digest_da5bd68fb25fe4736558b142ba8ad530, mod_consts.const_tuple_23103a1fb920bf68d929a409fc522a74_tuple, mod_consts.const_tuple_str_plain_background_str_plain_from_color_str_plain_styles_tuple, 1, 0, 0);
code_objects_c3236fe118fcb40d8af70b3d41c841e8 = MAKE_CODE_OBJECT(module_filename_obj, 339, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_post, mod_consts.const_str_digest_d2e72f2c696d274d18c286ec44da05ee, mod_consts.const_tuple_43dcec01b670c5632b19756e9b8e831f_tuple, mod_consts.const_tuple_28808f9e3aa266830e6ea6f2fbdb14d1_tuple, 1, 0, 0);
code_objects_97a0347e28ad0510e145fd26a3bd85cd = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render, mod_consts.const_str_digest_f7b23307e1e2d99aff8684e6074e3d74, mod_consts.const_tuple_abb951737563e3b3b5250d5caa318793_tuple, NULL, 15, 0, 0);
code_objects_fb110344d42693e7bf33514b2ff19ff2 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render_line, mod_consts.const_str_digest_a13d704d2413f56cedbb58b8676a7412, mod_consts.const_tuple_ad42a11831a7d639c832a167f889fa6f_tuple, NULL, 14, 0, 0);
code_objects_17bed9361acde58a500e58c0bd6bed12 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render_widget, mod_consts.const_str_digest_e17f6d1d2c8e12e092d4d2ed7c66cac2, mod_consts.const_tuple_54028d2e8f2298271480d70c4db4c4d3_tuple, NULL, 3, 0, 0);
code_objects_e797a98e3fcfa9dac912cec82ce4ddb5 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_dirty, mod_consts.const_str_digest_d9d4dcf9b61ab272611efb732e52142c, mod_consts.const_tuple_str_plain_self_str_plain_regions_str_plain_region_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$_styles_cache$$$function__2___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__2___rich_repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__3_set_dirty(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__4_is_dirty(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__5_clear(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__6_render_widget(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__7_render(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__8_get_inner_outer(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__9_render_line(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__9_render_line$$$function__2_post(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_textual$_styles_cache$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$_styles_cache$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_styles_cache$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_styles_cache$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$_styles_cache$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_styles_cache$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_styles_cache$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c4b6c6ee4f3d6d2d5a01b58fc74a6d3a, module_textual$_styles_cache, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_styles_cache$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$_styles_cache$$$function__1___init__ = cache_frame_frame_textual$_styles_cache$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_styles_cache$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$_styles_cache$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__cache, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = PySet_New(NULL);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__dirty_lines, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = const_int_pos_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__width, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__simple_strip, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_styles_cache$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_styles_cache$$$function__1___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$_styles_cache$$$function__1___init__ == cache_frame_frame_textual$_styles_cache$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_styles_cache$$$function__1___init__);
    cache_frame_frame_textual$_styles_cache$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$_styles_cache$$$function__1___init__);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_styles_cache$$$function__2___rich_repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_textual$_styles_cache$$$function__2___rich_repr__$$$genobj__1___rich_repr__(tstate, tmp_closure_1);

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
struct textual$_styles_cache$$$function__2___rich_repr__$$$genobj__1___rich_repr___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *textual$_styles_cache$$$function__2___rich_repr__$$$genobj__1___rich_repr___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_styles_cache$$$function__2___rich_repr__$$$genobj__1___rich_repr___locals *generator_heap = (struct textual$_styles_cache$$$function__2___rich_repr__$$$genobj__1___rich_repr___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_63e633d79c54cc00cff637e75d97e4be, module_textual$_styles_cache, sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 70;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__dirty_lines);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 70;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 70;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_2;
PyObject *tmp_tuple_element_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_tuple_element_1 = mod_consts.const_str_plain_dirty;
tmp_expression_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM0(tmp_expression_value_2, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__dirty_lines);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_expression_value_2, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
{
PyObject *tmp_expression_value_4;
PyObject *tmp_tuple_element_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
tmp_tuple_element_2 = mod_consts.const_str_plain_width;
tmp_expression_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM0(tmp_expression_value_4, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_2;
}

tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__width);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_expression_value_4, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_expression_value_4, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_4;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}

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
    generator->m_closure[0]
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
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$_styles_cache$$$function__2___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$_styles_cache$$$function__2___rich_repr__$$$genobj__1___rich_repr___context,
        module_textual$_styles_cache,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_8b569b9ed02b35558a3ea393855bef90,
#endif
        code_objects_63e633d79c54cc00cff637e75d97e4be,
        closure,
        1,
#if 1
        sizeof(struct textual$_styles_cache$$$function__2___rich_repr__$$$genobj__1___rich_repr___locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$_styles_cache$$$function__3_set_dirty(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_regions = python_pars[1];
PyObject *var_region = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_styles_cache$$$function__3_set_dirty;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_styles_cache$$$function__3_set_dirty = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_styles_cache$$$function__3_set_dirty)) {
    Py_XDECREF(cache_frame_frame_textual$_styles_cache$$$function__3_set_dirty);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_styles_cache$$$function__3_set_dirty == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_styles_cache$$$function__3_set_dirty = MAKE_FUNCTION_FRAME(tstate, code_objects_e797a98e3fcfa9dac912cec82ce4ddb5, module_textual$_styles_cache, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_styles_cache$$$function__3_set_dirty->m_type_description == NULL);
frame_frame_textual$_styles_cache$$$function__3_set_dirty = cache_frame_frame_textual$_styles_cache$$$function__3_set_dirty;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_styles_cache$$$function__3_set_dirty);
assert(Py_REFCNT(frame_frame_textual$_styles_cache$$$function__3_set_dirty) == 2);

// Framed code:
{
bool tmp_condition_result_1;
CHECK_OBJECT(par_regions);
tmp_condition_result_1 = CHECK_IF_TRUE(par_regions) == 1;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_regions);
tmp_iter_arg_1 = par_regions;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooo";
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
tmp_assign_source_2 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 77;
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
    PyObject *old = var_region;
    var_region = tmp_assign_source_3;
    Py_INCREF(var_region);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 78;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__dirty_lines);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_region);
tmp_expression_value_3 = var_region;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_line_range);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 78;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_textual$_styles_cache$$$function__3_set_dirty->m_frame.f_lineno = 78;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooo";
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
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_clear);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__3_set_dirty->m_frame.f_lineno = 80;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache$$$function__3_set_dirty, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_styles_cache$$$function__3_set_dirty->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache$$$function__3_set_dirty, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_styles_cache$$$function__3_set_dirty,
    type_description_1,
    par_self,
    par_regions,
    var_region
);


// Release cached frame if used for exception.
if (frame_frame_textual$_styles_cache$$$function__3_set_dirty == cache_frame_frame_textual$_styles_cache$$$function__3_set_dirty) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_styles_cache$$$function__3_set_dirty);
    cache_frame_frame_textual$_styles_cache$$$function__3_set_dirty = NULL;
}

assertFrameObject(frame_frame_textual$_styles_cache$$$function__3_set_dirty);

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
Py_XDECREF(var_region);
var_region = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_region);
var_region = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_regions);
Py_DECREF(par_regions);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_regions);
Py_DECREF(par_regions);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_styles_cache$$$function__4_is_dirty(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_y = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$_styles_cache$$$function__4_is_dirty;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_styles_cache$$$function__4_is_dirty = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_styles_cache$$$function__4_is_dirty)) {
    Py_XDECREF(cache_frame_frame_textual$_styles_cache$$$function__4_is_dirty);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_styles_cache$$$function__4_is_dirty == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_styles_cache$$$function__4_is_dirty = MAKE_FUNCTION_FRAME(tstate, code_objects_273ab901c260e296a4704e0495cbb295, module_textual$_styles_cache, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_styles_cache$$$function__4_is_dirty->m_type_description == NULL);
frame_frame_textual$_styles_cache$$$function__4_is_dirty = cache_frame_frame_textual$_styles_cache$$$function__4_is_dirty;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_styles_cache$$$function__4_is_dirty);
assert(Py_REFCNT(frame_frame_textual$_styles_cache$$$function__4_is_dirty) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_1 = par_y;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__dirty_lines);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache$$$function__4_is_dirty, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_styles_cache$$$function__4_is_dirty->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache$$$function__4_is_dirty, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_styles_cache$$$function__4_is_dirty,
    type_description_1,
    par_self,
    par_y
);


// Release cached frame if used for exception.
if (frame_frame_textual$_styles_cache$$$function__4_is_dirty == cache_frame_frame_textual$_styles_cache$$$function__4_is_dirty) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_styles_cache$$$function__4_is_dirty);
    cache_frame_frame_textual$_styles_cache$$$function__4_is_dirty = NULL;
}

assertFrameObject(frame_frame_textual$_styles_cache$$$function__4_is_dirty);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_styles_cache$$$function__5_clear(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$_styles_cache$$$function__5_clear;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_styles_cache$$$function__5_clear = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_styles_cache$$$function__5_clear)) {
    Py_XDECREF(cache_frame_frame_textual$_styles_cache$$$function__5_clear);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_styles_cache$$$function__5_clear == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_styles_cache$$$function__5_clear = MAKE_FUNCTION_FRAME(tstate, code_objects_0c29e162dd35c30afa76753034a129a1, module_textual$_styles_cache, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_styles_cache$$$function__5_clear->m_type_description == NULL);
frame_frame_textual$_styles_cache$$$function__5_clear = cache_frame_frame_textual$_styles_cache$$$function__5_clear;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_styles_cache$$$function__5_clear);
assert(Py_REFCNT(frame_frame_textual$_styles_cache$$$function__5_clear) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__cache);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_clear);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__5_clear->m_frame.f_lineno = 96;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__dirty_lines);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_clear);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__5_clear->m_frame.f_lineno = 97;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache$$$function__5_clear, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_styles_cache$$$function__5_clear->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache$$$function__5_clear, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_styles_cache$$$function__5_clear,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$_styles_cache$$$function__5_clear == cache_frame_frame_textual$_styles_cache$$$function__5_clear) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_styles_cache$$$function__5_clear);
    cache_frame_frame_textual$_styles_cache$$$function__5_clear = NULL;
}

assertFrameObject(frame_frame_textual$_styles_cache$$$function__5_clear);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_styles_cache$$$function__6_render_widget(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_widget = python_pars[1];
PyObject *par_crop = python_pars[2];
PyObject *var_border_title = NULL;
PyObject *var_border_subtitle = NULL;
PyObject *var_base_background = NULL;
PyObject *var_background = NULL;
PyObject *var_styles = NULL;
PyObject *var_app = NULL;
PyObject *var_strips = NULL;
PyObject *var_hover_style = NULL;
PyObject *var_link_style_hover = NULL;
PyObject *outline_0_var_strip = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_styles_cache$$$function__6_render_widget;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_styles_cache$$$function__6_render_widget = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_styles_cache$$$function__6_render_widget)) {
    Py_XDECREF(cache_frame_frame_textual$_styles_cache$$$function__6_render_widget);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_styles_cache$$$function__6_render_widget == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_styles_cache$$$function__6_render_widget = MAKE_FUNCTION_FRAME(tstate, code_objects_17bed9361acde58a500e58c0bd6bed12, module_textual$_styles_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_styles_cache$$$function__6_render_widget->m_type_description == NULL);
frame_frame_textual$_styles_cache$$$function__6_render_widget = cache_frame_frame_textual$_styles_cache$$$function__6_render_widget;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_styles_cache$$$function__6_render_widget);
assert(Py_REFCNT(frame_frame_textual$_styles_cache$$$function__6_render_widget) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_widget);
tmp_expression_value_1 = par_widget;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__border_title);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_border_title == NULL);
var_border_title = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_widget);
tmp_expression_value_2 = par_widget;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__border_subtitle);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_border_subtitle == NULL);
var_border_subtitle = tmp_assign_source_2;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__simple_strip, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_widget);
tmp_expression_value_3 = par_widget;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_background_colors);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oooooooooooo";
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
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
assert(var_base_background == NULL);
Py_INCREF(tmp_assign_source_6);
var_base_background = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_background == NULL);
Py_INCREF(tmp_assign_source_7);
var_background = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_widget);
tmp_expression_value_4 = par_widget;
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_styles);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_styles == NULL);
var_styles = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_widget);
tmp_expression_value_5 = par_widget;
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_app);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_app == NULL);
var_app = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_arg_value_5_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_kw_call_arg_value_6_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kw_call_arg_value_7_1;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_tuple_arg_2;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_render);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_styles);
tmp_kw_call_arg_value_0_1 = var_styles;
CHECK_OBJECT(par_widget);
tmp_expression_value_8 = par_widget;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_region);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 118;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_size);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 118;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_base_background);
tmp_kw_call_arg_value_2_1 = var_base_background;
CHECK_OBJECT(var_background);
tmp_kw_call_arg_value_3_1 = var_background;
CHECK_OBJECT(par_widget);
tmp_expression_value_9 = par_widget;
tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_render_line);
if (tmp_kw_call_arg_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 121;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_widget);
tmp_called_instance_1 = par_widget;
frame_frame_textual$_styles_cache$$$function__6_render_widget->m_frame.f_lineno = 122;
tmp_kw_call_arg_value_5_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_line_filters);
if (tmp_kw_call_arg_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);

exception_lineno = 122;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_border_title);
tmp_cmp_expr_left_1 = var_border_title;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_kw_call_arg_value_6_1 = Py_None;
Py_INCREF(tmp_kw_call_arg_value_6_1);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_border_title);
tmp_tuple_element_2 = var_border_title;
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_widget);
tmp_called_instance_2 = par_widget;
CHECK_OBJECT(var_base_background);
tmp_args_element_value_1 = var_base_background;
frame_frame_textual$_styles_cache$$$function__6_render_widget->m_frame.f_lineno = 128;
tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__get_title_style_information, tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_arg_1 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_tuple_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);

exception_lineno = 126;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_6_1 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_kw_call_arg_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);

exception_lineno = 126;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
CHECK_OBJECT(var_border_subtitle);
tmp_cmp_expr_left_2 = var_border_subtitle;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_kw_call_arg_value_7_1 = Py_None;
Py_INCREF(tmp_kw_call_arg_value_7_1);
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(var_border_subtitle);
tmp_tuple_element_4 = var_border_subtitle;
tmp_tuple_element_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_4);
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_widget);
tmp_called_instance_3 = par_widget;
CHECK_OBJECT(var_base_background);
tmp_args_element_value_2 = var_base_background;
frame_frame_textual$_styles_cache$$$function__6_render_widget->m_frame.f_lineno = 136;
tmp_tuple_element_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain__get_subtitle_style_information, tmp_args_element_value_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_direct_call_arg1_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_tuple_arg_2 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_tuple_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);

exception_lineno = 134;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_7_1 = PySequence_Tuple(tmp_tuple_arg_2);
CHECK_OBJECT(tmp_tuple_arg_2);
Py_DECREF(tmp_tuple_arg_2);
if (tmp_kw_call_arg_value_7_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);

exception_lineno = 134;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_2:;
CHECK_OBJECT(par_widget);
tmp_expression_value_11 = par_widget;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_content_region);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_kw_call_arg_value_7_1);

exception_lineno = 139;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_size);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_kw_call_arg_value_7_1);

exception_lineno = 139;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_styles);
tmp_expression_value_12 = var_styles;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_padding);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_kw_call_arg_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 140;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_crop);
tmp_kw_call_dict_value_2_1 = par_crop;
CHECK_OBJECT(par_widget);
tmp_expression_value_13 = par_widget;
tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_opacity);
if (tmp_kw_call_dict_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_kw_call_arg_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 142;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_app);
tmp_expression_value_14 = var_app;
tmp_kw_call_dict_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_ansi_theme);
if (tmp_kw_call_dict_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_kw_call_arg_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);

exception_lineno = 143;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_app);
tmp_expression_value_15 = var_app;
tmp_kw_call_dict_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_native_ansi_color);
if (tmp_kw_call_dict_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_kw_call_arg_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);

exception_lineno = 144;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__6_render_widget->m_frame.f_lineno = 116;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1};
    PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS8_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_f27f2030ea68ba9e081782aae3641d6c_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
CHECK_OBJECT(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
CHECK_OBJECT(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
CHECK_OBJECT(tmp_kw_call_arg_value_7_1);
Py_DECREF(tmp_kw_call_arg_value_7_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
CHECK_OBJECT(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
CHECK_OBJECT(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_strips == NULL);
var_strips = tmp_assign_source_10;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_widget);
tmp_expression_value_16 = par_widget;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_auto_links);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 147;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_widget);
tmp_expression_value_17 = par_widget;
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_hover_style);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_hover_style == NULL);
var_hover_style = tmp_assign_source_11;
}
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_19;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(var_hover_style);
tmp_expression_value_18 = var_hover_style;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__link_id);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 150;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_hover_style);
tmp_expression_value_19 = var_hover_style;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__meta);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 151;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_cmp_expr_left_3 = mod_consts.const_str_digest_c668a0a27d6e96979f44172672f9bd45;
CHECK_OBJECT(var_hover_style);
tmp_expression_value_20 = var_hover_style;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_meta);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(par_widget);
tmp_expression_value_21 = par_widget;
tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_link_style_hover);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_link_style_hover == NULL);
var_link_style_hover = tmp_assign_source_12;
}
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_4;
CHECK_OBJECT(var_link_style_hover);
tmp_truth_name_4 = CHECK_IF_TRUE(var_link_style_hover);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_13;
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_strips);
tmp_iter_arg_2 = var_strips;
tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_15;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
exception_lineno = 156;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_17 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_strip;
    outline_0_var_strip = tmp_assign_source_17;
    Py_INCREF(outline_0_var_strip);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_strip);
tmp_expression_value_22 = outline_0_var_strip;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_style_links);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
if (var_hover_style == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hover_style);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 157;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_23 = var_hover_style;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_link_id);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 157;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
if (var_link_style_hover == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_link_style_hover);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 157;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_4 = var_link_style_hover;
frame_frame_textual$_styles_cache$$$function__6_render_widget->m_frame.f_lineno = 157;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_13 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_13);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
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
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_0_var_strip);
outline_0_var_strip = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_strip);
outline_0_var_strip = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 156;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = var_strips;
    assert(old != NULL);
    var_strips = tmp_assign_source_13;
    Py_DECREF(old);
}

}
branch_no_3:;
branch_no_2:;
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache$$$function__6_render_widget, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_styles_cache$$$function__6_render_widget->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache$$$function__6_render_widget, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_styles_cache$$$function__6_render_widget,
    type_description_1,
    par_self,
    par_widget,
    par_crop,
    var_border_title,
    var_border_subtitle,
    var_base_background,
    var_background,
    var_styles,
    var_app,
    var_strips,
    var_hover_style,
    var_link_style_hover
);


// Release cached frame if used for exception.
if (frame_frame_textual$_styles_cache$$$function__6_render_widget == cache_frame_frame_textual$_styles_cache$$$function__6_render_widget) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_styles_cache$$$function__6_render_widget);
    cache_frame_frame_textual$_styles_cache$$$function__6_render_widget = NULL;
}

assertFrameObject(frame_frame_textual$_styles_cache$$$function__6_render_widget);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_strips);
tmp_return_value = var_strips;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_border_title);
CHECK_OBJECT(var_border_title);
Py_DECREF(var_border_title);
var_border_title = NULL;
CHECK_OBJECT(var_border_subtitle);
CHECK_OBJECT(var_border_subtitle);
Py_DECREF(var_border_subtitle);
var_border_subtitle = NULL;
CHECK_OBJECT(var_base_background);
CHECK_OBJECT(var_base_background);
Py_DECREF(var_base_background);
var_base_background = NULL;
CHECK_OBJECT(var_background);
CHECK_OBJECT(var_background);
Py_DECREF(var_background);
var_background = NULL;
CHECK_OBJECT(var_styles);
CHECK_OBJECT(var_styles);
Py_DECREF(var_styles);
var_styles = NULL;
CHECK_OBJECT(var_app);
CHECK_OBJECT(var_app);
Py_DECREF(var_app);
var_app = NULL;
CHECK_OBJECT(var_strips);
CHECK_OBJECT(var_strips);
Py_DECREF(var_strips);
var_strips = NULL;
Py_XDECREF(var_hover_style);
var_hover_style = NULL;
Py_XDECREF(var_link_style_hover);
var_link_style_hover = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_border_title);
var_border_title = NULL;
Py_XDECREF(var_border_subtitle);
var_border_subtitle = NULL;
Py_XDECREF(var_base_background);
var_base_background = NULL;
Py_XDECREF(var_background);
var_background = NULL;
Py_XDECREF(var_styles);
var_styles = NULL;
Py_XDECREF(var_app);
var_app = NULL;
Py_XDECREF(var_strips);
var_strips = NULL;
Py_XDECREF(var_hover_style);
var_hover_style = NULL;
Py_XDECREF(var_link_style_hover);
var_link_style_hover = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_widget);
Py_DECREF(par_widget);
CHECK_OBJECT(par_crop);
Py_DECREF(par_crop);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_widget);
Py_DECREF(par_widget);
CHECK_OBJECT(par_crop);
Py_DECREF(par_crop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_styles_cache$$$function__7_render(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_styles = python_pars[1];
PyObject *par_size = python_pars[2];
PyObject *par_base_background = python_pars[3];
PyObject *par_background = python_pars[4];
PyObject *par_render_content_line = python_pars[5];
PyObject *par_filters = python_pars[6];
PyObject *par_border_title = python_pars[7];
PyObject *par_border_subtitle = python_pars[8];
PyObject *par_content_size = python_pars[9];
PyObject *par_padding = python_pars[10];
PyObject *par_crop = python_pars[11];
PyObject *par_opacity = python_pars[12];
PyObject *par_ansi_theme = python_pars[13];
PyObject *par_native_ansi = python_pars[14];
PyObject *var_strips = NULL;
PyObject *var_width = NULL;
PyObject *var__height = NULL;
PyObject *var_add_strip = NULL;
PyObject *var_is_dirty = NULL;
PyObject *var_render_line = NULL;
PyObject *var_y = NULL;
PyObject *var_strip = NULL;
PyObject *var_filter = NULL;
PyObject *var_x1 = NULL;
PyObject *var_x2 = NULL;
PyObject *outline_0_var_segment = NULL;
PyObject *outline_1_var_strip = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_styles_cache$$$function__7_render;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_styles_cache$$$function__7_render = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_content_size);
tmp_cmp_expr_left_1 = par_content_size;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_size);
tmp_assign_source_1 = par_size;
{
    PyObject *old = par_content_size;
    assert(old != NULL);
    par_content_size = tmp_assign_source_1;
    Py_INCREF(par_content_size);
    Py_DECREF(old);
}

}
branch_no_1:;
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_styles_cache$$$function__7_render)) {
    Py_XDECREF(cache_frame_frame_textual$_styles_cache$$$function__7_render);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_styles_cache$$$function__7_render == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_styles_cache$$$function__7_render = MAKE_FUNCTION_FRAME(tstate, code_objects_97a0347e28ad0510e145fd26a3bd85cd, module_textual$_styles_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_styles_cache$$$function__7_render->m_type_description == NULL);
frame_frame_textual$_styles_cache$$$function__7_render = cache_frame_frame_textual$_styles_cache$$$function__7_render;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_styles_cache$$$function__7_render);
assert(Py_REFCNT(frame_frame_textual$_styles_cache$$$function__7_render) == 2);

// Framed code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_padding);
tmp_cmp_expr_left_2 = par_padding;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_styles);
tmp_expression_value_1 = par_styles;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_padding);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_padding;
    assert(old != NULL);
    par_padding = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_crop);
tmp_cmp_expr_left_3 = par_crop;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_size);
tmp_expression_value_2 = par_size;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_region);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_crop;
    assert(old != NULL);
    par_crop = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_3:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_size);
tmp_iter_arg_1 = par_size;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
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



exception_lineno = 209;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
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
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
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
assert(var_width == NULL);
Py_INCREF(tmp_assign_source_7);
var_width = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
assert(var__height == NULL);
Py_INCREF(tmp_assign_source_8);
var__height = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_width);
tmp_cmp_expr_left_4 = var_width;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__width);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooooooooooooooooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_clear);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__7_render->m_frame.f_lineno = 211;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_width);
tmp_assattr_value_1 = var_width;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__width, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_strips == NULL);
var_strips = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_strips);
tmp_expression_value_5 = var_strips;
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_append);
assert(!(tmp_assign_source_10 == NULL));
assert(var_add_strip == NULL);
var_add_strip = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__dirty_lines);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain___contains__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_is_dirty == NULL);
var_is_dirty = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_render_line);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_render_line == NULL);
var_render_line = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_crop);
tmp_expression_value_9 = par_crop;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_line_range);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_13;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooo";
exception_lineno = 219;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_15 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_y;
    var_y = tmp_assign_source_15;
    Py_INCREF(var_y);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_10;
if (var_is_dirty == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_dirty);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 220;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_2 = var_is_dirty;
CHECK_OBJECT(var_y);
tmp_args_element_value_1 = var_y;
frame_frame_textual$_styles_cache$$$function__7_render->m_frame.f_lineno = 220;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 220;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_y);
tmp_cmp_expr_left_5 = var_y;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 220;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_10 = par_self;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__cache);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
if (var_render_line == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_render_line);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 221;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_3 = var_render_line;
if (par_styles == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_styles);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 222;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_2 = par_styles;
CHECK_OBJECT(var_y);
tmp_args_element_value_3 = var_y;
if (par_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 224;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_4 = par_size;
if (par_content_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_content_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_5 = par_content_size;
if (par_padding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_6 = par_padding;
if (par_base_background == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_background);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_7 = par_base_background;
if (par_background == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_background);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_8 = par_background;
if (par_render_content_line == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_render_content_line);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 229;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_9 = par_render_content_line;
if (par_border_title == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_border_title);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 230;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_10 = par_border_title;
if (par_border_subtitle == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_border_subtitle);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_11 = par_border_subtitle;
if (par_opacity == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_opacity);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_12 = par_opacity;
if (par_ansi_theme == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ansi_theme);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 233;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_13 = par_ansi_theme;
if (par_native_ansi == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_native_ansi);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 234;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_14 = par_native_ansi;
frame_frame_textual$_styles_cache$$$function__7_render->m_frame.f_lineno = 221;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS13(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_strip;
    var_strip = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_strip);
tmp_ass_subvalue_1 = var_strip;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 236;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_11 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__cache);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_y);
tmp_ass_subscript_1 = var_y;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 238;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_13 = par_self;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__cache);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_y);
tmp_subscript_value_1 = var_y;
tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_strip;
    var_strip = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
branch_end_5:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_3;
if (par_filters == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filters);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 240;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_iter_arg_3 = par_filters;
tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_19 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooo";
exception_lineno = 240;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_20 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_filter;
    var_filter = tmp_assign_source_20;
    Py_INCREF(var_filter);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
if (var_strip == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 241;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_14 = var_strip;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_apply_filter);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_filter);
tmp_args_element_value_15 = var_filter;
if (par_background == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_background);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 241;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_16 = par_background;
frame_frame_textual$_styles_cache$$$function__7_render->m_frame.f_lineno = 241;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_strip;
    var_strip = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_2;
tmp_mvar_value_1 = module_var_accessor_textual$_styles_cache$DEBUG(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEBUG);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_any_arg_1;
PyObject *tmp_capi_result_1;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iter_arg_4;
if (var_strip == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_iter_arg_4 = var_strip;
tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_23;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_3 = tmp_listcomp_1__$0;
tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_24 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooo";
exception_lineno = 244;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_25 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_segment;
    outline_0_var_segment = tmp_assign_source_25;
    Py_INCREF(outline_0_var_segment);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_segment);
tmp_expression_value_15 = outline_0_var_segment;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_control);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
CHECK_OBJECT(outline_0_var_segment);
tmp_expression_value_16 = outline_0_var_segment;
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_text);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_operand_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_operand_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_append_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_any_arg_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_any_arg_1);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
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
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(outline_0_var_segment);
outline_0_var_segment = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_segment);
outline_0_var_segment = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 244;
goto try_except_handler_4;
outline_result_1:;
tmp_capi_result_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_17;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_17 = module_var_accessor_textual$_styles_cache$log(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_warning);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_27a1686a0b2c8992e4a8c3730b61c057;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (var_strip == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 245;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_operand_value_2 = var_strip;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_17 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_17 == NULL));
frame_frame_textual$_styles_cache$$$function__7_render->m_frame.f_lineno = 245;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_7:;
branch_no_6:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_18;
if (var_add_strip == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_add_strip);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 247;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_6 = var_add_strip;
if (var_strip == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 247;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_18 = var_strip;
frame_frame_textual$_styles_cache$$$function__7_render->m_frame.f_lineno = 247;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_18);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

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
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_20;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_19 = par_self;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__dirty_lines);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_difference_update);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_crop);
tmp_expression_value_20 = par_crop;
tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_line_range);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 249;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__7_render->m_frame.f_lineno = 249;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_21;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(par_crop);
tmp_expression_value_21 = par_crop;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_column_span);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = const_int_0;
tmp_cmp_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_6, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_width);
tmp_tuple_element_2 = var_width;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_6, 1, tmp_tuple_element_2);
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_5;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(par_crop);
tmp_expression_value_22 = par_crop;
tmp_iter_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_column_span);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_26;
}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_27 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_28;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_29 = tmp_tuple_unpack_2__element_1;
assert(var_x1 == NULL);
Py_INCREF(tmp_assign_source_29);
var_x1 = tmp_assign_source_29;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_30 = tmp_tuple_unpack_2__element_2;
assert(var_x2 == NULL);
Py_INCREF(tmp_assign_source_30);
var_x2 = tmp_assign_source_30;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_31;
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(var_strips);
tmp_iter_arg_6 = var_strips;
tmp_assign_source_32 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_33;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_34;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_4 = tmp_listcomp_2__$0;
tmp_assign_source_34 = ITERATOR_NEXT_ITERATOR(tmp_next_source_4);
if (tmp_assign_source_34 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooo";
exception_lineno = 253;
        goto try_except_handler_11;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_35 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_strip;
    outline_1_var_strip = tmp_assign_source_35;
    Py_INCREF(outline_1_var_strip);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
CHECK_OBJECT(outline_1_var_strip);
tmp_expression_value_23 = outline_1_var_strip;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_crop);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
if (var_x1 == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_args_element_value_20 = var_x1;
if (var_x2 == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_args_element_value_21 = var_x2;
frame_frame_textual$_styles_cache$$$function__7_render->m_frame.f_lineno = 253;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
goto loop_start_4;
loop_end_4:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_assign_source_31 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_XDECREF(outline_1_var_strip);
outline_1_var_strip = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_strip);
outline_1_var_strip = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 253;
goto frame_exception_exit_1;
outline_result_2:;
{
    PyObject *old = var_strips;
    assert(old != NULL);
    var_strips = tmp_assign_source_31;
    Py_DECREF(old);
}

}
branch_no_8:;
if (var_strips == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strips);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_strips;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache$$$function__7_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_styles_cache$$$function__7_render->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache$$$function__7_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_styles_cache$$$function__7_render,
    type_description_1,
    par_self,
    par_styles,
    par_size,
    par_base_background,
    par_background,
    par_render_content_line,
    par_filters,
    par_border_title,
    par_border_subtitle,
    par_content_size,
    par_padding,
    par_crop,
    par_opacity,
    par_ansi_theme,
    par_native_ansi,
    var_strips,
    var_width,
    var__height,
    var_add_strip,
    var_is_dirty,
    var_render_line,
    var_y,
    var_strip,
    var_filter,
    var_x1,
    var_x2
);


// Release cached frame if used for exception.
if (frame_frame_textual$_styles_cache$$$function__7_render == cache_frame_frame_textual$_styles_cache$$$function__7_render) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_styles_cache$$$function__7_render);
    cache_frame_frame_textual$_styles_cache$$$function__7_render = NULL;
}

assertFrameObject(frame_frame_textual$_styles_cache$$$function__7_render);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_content_size);
par_content_size = NULL;
Py_XDECREF(par_padding);
par_padding = NULL;
CHECK_OBJECT(par_crop);
CHECK_OBJECT(par_crop);
Py_DECREF(par_crop);
par_crop = NULL;
Py_XDECREF(var_strips);
var_strips = NULL;
CHECK_OBJECT(var_width);
CHECK_OBJECT(var_width);
Py_DECREF(var_width);
var_width = NULL;
CHECK_OBJECT(var__height);
CHECK_OBJECT(var__height);
Py_DECREF(var__height);
var__height = NULL;
Py_XDECREF(var_add_strip);
var_add_strip = NULL;
Py_XDECREF(var_is_dirty);
var_is_dirty = NULL;
Py_XDECREF(var_render_line);
var_render_line = NULL;
Py_XDECREF(var_y);
var_y = NULL;
Py_XDECREF(var_strip);
var_strip = NULL;
Py_XDECREF(var_filter);
var_filter = NULL;
Py_XDECREF(var_x1);
var_x1 = NULL;
Py_XDECREF(var_x2);
var_x2 = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_content_size);
par_content_size = NULL;
Py_XDECREF(par_padding);
par_padding = NULL;
Py_XDECREF(par_crop);
par_crop = NULL;
Py_XDECREF(var_strips);
var_strips = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var__height);
var__height = NULL;
Py_XDECREF(var_add_strip);
var_add_strip = NULL;
Py_XDECREF(var_is_dirty);
var_is_dirty = NULL;
Py_XDECREF(var_render_line);
var_render_line = NULL;
Py_XDECREF(var_y);
var_y = NULL;
Py_XDECREF(var_strip);
var_strip = NULL;
Py_XDECREF(var_filter);
var_filter = NULL;
Py_XDECREF(var_x1);
var_x1 = NULL;
Py_XDECREF(var_x2);
var_x2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_styles);
Py_DECREF(par_styles);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
CHECK_OBJECT(par_base_background);
Py_DECREF(par_base_background);
CHECK_OBJECT(par_background);
Py_DECREF(par_background);
CHECK_OBJECT(par_render_content_line);
Py_DECREF(par_render_content_line);
CHECK_OBJECT(par_filters);
Py_DECREF(par_filters);
CHECK_OBJECT(par_border_title);
Py_DECREF(par_border_title);
CHECK_OBJECT(par_border_subtitle);
Py_DECREF(par_border_subtitle);
CHECK_OBJECT(par_opacity);
Py_DECREF(par_opacity);
CHECK_OBJECT(par_ansi_theme);
Py_DECREF(par_ansi_theme);
CHECK_OBJECT(par_native_ansi);
Py_DECREF(par_native_ansi);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_styles);
Py_DECREF(par_styles);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
CHECK_OBJECT(par_base_background);
Py_DECREF(par_base_background);
CHECK_OBJECT(par_background);
Py_DECREF(par_background);
CHECK_OBJECT(par_render_content_line);
Py_DECREF(par_render_content_line);
CHECK_OBJECT(par_filters);
Py_DECREF(par_filters);
CHECK_OBJECT(par_border_title);
Py_DECREF(par_border_title);
CHECK_OBJECT(par_border_subtitle);
Py_DECREF(par_border_subtitle);
CHECK_OBJECT(par_opacity);
Py_DECREF(par_opacity);
CHECK_OBJECT(par_ansi_theme);
Py_DECREF(par_ansi_theme);
CHECK_OBJECT(par_native_ansi);
Py_DECREF(par_native_ansi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_styles_cache$$$function__8_get_inner_outer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_base_background = python_pars[1];
PyObject *par_background = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$_styles_cache$$$function__8_get_inner_outer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_styles_cache$$$function__8_get_inner_outer = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_styles_cache$$$function__8_get_inner_outer)) {
    Py_XDECREF(cache_frame_frame_textual$_styles_cache$$$function__8_get_inner_outer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_styles_cache$$$function__8_get_inner_outer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_styles_cache$$$function__8_get_inner_outer = MAKE_FUNCTION_FRAME(tstate, code_objects_10f2f63d8745bf944acfde49c5cea7c7, module_textual$_styles_cache, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_styles_cache$$$function__8_get_inner_outer->m_type_description == NULL);
frame_frame_textual$_styles_cache$$$function__8_get_inner_outer = cache_frame_frame_textual$_styles_cache$$$function__8_get_inner_outer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_styles_cache$$$function__8_get_inner_outer);
assert(Py_REFCNT(frame_frame_textual$_styles_cache$$$function__8_get_inner_outer) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_called_value_1 = module_var_accessor_textual$_styles_cache$Style(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_base_background);
tmp_add_expr_left_1 = par_base_background;
CHECK_OBJECT(par_background);
tmp_add_expr_right_1 = par_background;
tmp_kw_call_value_0_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__8_get_inner_outer->m_frame.f_lineno = 263;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_tuple_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_background_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_2;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
tmp_called_value_2 = module_var_accessor_textual$_styles_cache$Style(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(par_base_background);
tmp_kw_call_value_0_2 = par_base_background;
frame_frame_textual$_styles_cache$$$function__8_get_inner_outer->m_frame.f_lineno = 264;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_tuple_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_background_tuple);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache$$$function__8_get_inner_outer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_styles_cache$$$function__8_get_inner_outer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache$$$function__8_get_inner_outer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_styles_cache$$$function__8_get_inner_outer,
    type_description_1,
    par_cls,
    par_base_background,
    par_background
);


// Release cached frame if used for exception.
if (frame_frame_textual$_styles_cache$$$function__8_get_inner_outer == cache_frame_frame_textual$_styles_cache$$$function__8_get_inner_outer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_styles_cache$$$function__8_get_inner_outer);
    cache_frame_frame_textual$_styles_cache$$$function__8_get_inner_outer = NULL;
}

assertFrameObject(frame_frame_textual$_styles_cache$$$function__8_get_inner_outer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_base_background);
Py_DECREF(par_base_background);
CHECK_OBJECT(par_background);
Py_DECREF(par_background);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_base_background);
Py_DECREF(par_base_background);
CHECK_OBJECT(par_background);
Py_DECREF(par_background);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_styles_cache$$$function__9_render_line(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_CellObject *par_styles = Nuitka_Cell_New1(python_pars[1]);
PyObject *par_y = python_pars[2];
PyObject *par_size = python_pars[3];
PyObject *par_content_size = python_pars[4];
PyObject *par_padding = python_pars[5];
struct Nuitka_CellObject *par_base_background = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_background = Nuitka_Cell_New1(python_pars[7]);
PyObject *par_render_content_line = python_pars[8];
PyObject *par_border_title = python_pars[9];
PyObject *par_border_subtitle = python_pars[10];
struct Nuitka_CellObject *par_opacity = Nuitka_Cell_New1(python_pars[11]);
PyObject *par_ansi_theme = python_pars[12];
PyObject *par_native_ansi = python_pars[13];
nuitka_bool var_cache_simple_strip = NUITKA_BOOL_UNASSIGNED;
PyObject *var_line = NULL;
PyObject *var_gutter = NULL;
PyObject *var_width = NULL;
PyObject *var_height = NULL;
PyObject *var_content_width = NULL;
PyObject *var_content_height = NULL;
PyObject *var_pad_top = NULL;
PyObject *var_pad_right = NULL;
PyObject *var_pad_bottom = NULL;
PyObject *var_pad_left = NULL;
PyObject *var_border_top = NULL;
PyObject *var_border_top_color = NULL;
PyObject *var_border_right = NULL;
PyObject *var_border_right_color = NULL;
PyObject *var_border_bottom = NULL;
PyObject *var_border_bottom_color = NULL;
PyObject *var_border_left = NULL;
PyObject *var_border_left_color = NULL;
PyObject *var_outline_top = NULL;
PyObject *var_outline_top_color = NULL;
PyObject *var_outline_right = NULL;
PyObject *var_outline_right_color = NULL;
PyObject *var_outline_bottom = NULL;
PyObject *var_outline_bottom_color = NULL;
PyObject *var_outline_left = NULL;
PyObject *var_outline_left_color = NULL;
struct Nuitka_CellObject *var_from_color = Nuitka_Cell_NewEmpty();
PyObject *var_inner = NULL;
PyObject *var_outer = NULL;
PyObject *var_line_post = NULL;
PyObject *var_post = NULL;
PyObject *var_is_top = NULL;
PyObject *var_border_color = NULL;
PyObject *var_border_color_as_style = NULL;
PyObject *var_border_edge_type = NULL;
PyObject *var_has_left = NULL;
PyObject *var_has_right = NULL;
PyObject *var_border_label = NULL;
PyObject *var_render_label = NULL;
PyObject *var_label = NULL;
PyObject *var_label_color = NULL;
PyObject *var_label_background = NULL;
PyObject *var_style = NULL;
PyObject *var_base_label_background = NULL;
PyObject *var_label_segments = NULL;
PyObject *var_box_segments = NULL;
PyObject *var_label_alignment = NULL;
PyObject *var_background_rich_style = NULL;
PyObject *var_left_style = NULL;
PyObject *var_left = NULL;
PyObject *var_right_style = NULL;
PyObject *var_right = NULL;
PyObject *var_content_y = NULL;
PyObject *var_text_opacity = NULL;
PyObject *var_outline_color = NULL;
PyObject *var_strip = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_tuple_unpack_10__element_1 = NULL;
PyObject *tmp_tuple_unpack_10__element_2 = NULL;
PyObject *tmp_tuple_unpack_10__source_iter = NULL;
PyObject *tmp_tuple_unpack_11__element_1 = NULL;
PyObject *tmp_tuple_unpack_11__element_2 = NULL;
PyObject *tmp_tuple_unpack_11__source_iter = NULL;
PyObject *tmp_tuple_unpack_12__element_1 = NULL;
PyObject *tmp_tuple_unpack_12__element_2 = NULL;
PyObject *tmp_tuple_unpack_12__source_iter = NULL;
PyObject *tmp_tuple_unpack_13__element_1 = NULL;
PyObject *tmp_tuple_unpack_13__element_2 = NULL;
PyObject *tmp_tuple_unpack_13__source_iter = NULL;
PyObject *tmp_tuple_unpack_14__element_1 = NULL;
PyObject *tmp_tuple_unpack_14__element_2 = NULL;
PyObject *tmp_tuple_unpack_14__source_iter = NULL;
PyObject *tmp_tuple_unpack_15__element_1 = NULL;
PyObject *tmp_tuple_unpack_15__element_2 = NULL;
PyObject *tmp_tuple_unpack_15__element_3 = NULL;
PyObject *tmp_tuple_unpack_15__element_4 = NULL;
PyObject *tmp_tuple_unpack_15__source_iter = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__element_3 = NULL;
PyObject *tmp_tuple_unpack_3__element_4 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
PyObject *tmp_tuple_unpack_4__element_1 = NULL;
PyObject *tmp_tuple_unpack_4__element_2 = NULL;
PyObject *tmp_tuple_unpack_4__element_3 = NULL;
PyObject *tmp_tuple_unpack_4__element_4 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
PyObject *tmp_tuple_unpack_5__element_1 = NULL;
PyObject *tmp_tuple_unpack_5__element_2 = NULL;
PyObject *tmp_tuple_unpack_5__source_iter = NULL;
PyObject *tmp_tuple_unpack_6__element_1 = NULL;
PyObject *tmp_tuple_unpack_6__element_2 = NULL;
PyObject *tmp_tuple_unpack_6__source_iter = NULL;
PyObject *tmp_tuple_unpack_7__element_1 = NULL;
PyObject *tmp_tuple_unpack_7__element_2 = NULL;
PyObject *tmp_tuple_unpack_7__source_iter = NULL;
PyObject *tmp_tuple_unpack_8__element_1 = NULL;
PyObject *tmp_tuple_unpack_8__element_2 = NULL;
PyObject *tmp_tuple_unpack_8__source_iter = NULL;
PyObject *tmp_tuple_unpack_9__element_1 = NULL;
PyObject *tmp_tuple_unpack_9__element_2 = NULL;
PyObject *tmp_tuple_unpack_9__element_3 = NULL;
PyObject *tmp_tuple_unpack_9__element_4 = NULL;
PyObject *tmp_tuple_unpack_9__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_styles_cache$$$function__9_render_line;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_styles_cache$$$function__9_render_line = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_styles_cache$$$function__9_render_line)) {
    Py_XDECREF(cache_frame_frame_textual$_styles_cache$$$function__9_render_line);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_styles_cache$$$function__9_render_line == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_styles_cache$$$function__9_render_line = MAKE_FUNCTION_FRAME(tstate, code_objects_fb110344d42693e7bf33514b2ff19ff2, module_textual$_styles_cache, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_styles_cache$$$function__9_render_line->m_type_description == NULL);
frame_frame_textual$_styles_cache$$$function__9_render_line = cache_frame_frame_textual$_styles_cache$$$function__9_render_line;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_styles_cache$$$function__9_render_line);
assert(Py_REFCNT(frame_frame_textual$_styles_cache$$$function__9_render_line) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_styles));
tmp_expression_value_1 = Nuitka_Cell_GET(par_styles);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_gutter);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_gutter == NULL);
var_gutter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_size);
tmp_iter_arg_1 = par_size;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
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
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
assert(var_width == NULL);
Py_INCREF(tmp_assign_source_5);
var_width = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_height == NULL);
Py_INCREF(tmp_assign_source_6);
var_height = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_content_size);
tmp_iter_arg_2 = par_content_size;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
assert(var_content_width == NULL);
Py_INCREF(tmp_assign_source_10);
var_content_width = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
assert(var_content_height == NULL);
Py_INCREF(tmp_assign_source_11);
var_content_height = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(par_padding);
tmp_iter_arg_3 = par_padding;
tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_3__source_iter == NULL);
tmp_tuple_unpack_3__source_iter = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_1 == NULL);
tmp_tuple_unpack_3__element_1 = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_2 == NULL);
tmp_tuple_unpack_3__element_2 = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 2, 4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_3 == NULL);
tmp_tuple_unpack_3__element_3 = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 3, 4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_4 == NULL);
tmp_tuple_unpack_3__element_4 = tmp_assign_source_16;
}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_4);
tmp_tuple_unpack_3__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_17 = tmp_tuple_unpack_3__element_1;
assert(var_pad_top == NULL);
Py_INCREF(tmp_assign_source_17);
var_pad_top = tmp_assign_source_17;
}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_18 = tmp_tuple_unpack_3__element_2;
assert(var_pad_right == NULL);
Py_INCREF(tmp_assign_source_18);
var_pad_right = tmp_assign_source_18;
}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
tmp_assign_source_19 = tmp_tuple_unpack_3__element_3;
assert(var_pad_bottom == NULL);
Py_INCREF(tmp_assign_source_19);
var_pad_bottom = tmp_assign_source_19;
}
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;

{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_3__element_4);
tmp_assign_source_20 = tmp_tuple_unpack_3__element_4;
assert(var_pad_left == NULL);
Py_INCREF(tmp_assign_source_20);
var_pad_left = tmp_assign_source_20;
}
Py_XDECREF(tmp_tuple_unpack_3__element_4);
tmp_tuple_unpack_3__element_4 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iter_arg_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(Nuitka_Cell_GET(par_styles));
tmp_expression_value_2 = Nuitka_Cell_GET(par_styles);
tmp_iter_arg_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_border);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(tmp_tuple_unpack_4__source_iter == NULL);
tmp_tuple_unpack_4__source_iter = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_tuple_unpack_4__element_1 == NULL);
tmp_tuple_unpack_4__element_1 = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_23 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 4);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_tuple_unpack_4__element_2 == NULL);
tmp_tuple_unpack_4__element_2 = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_11;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 2, 4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_tuple_unpack_4__element_3 == NULL);
tmp_tuple_unpack_4__element_3 = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_unpack_12;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 3, 4);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_tuple_unpack_4__element_4 == NULL);
tmp_tuple_unpack_4__element_4 = tmp_assign_source_25;
}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_iter_arg_5 = tmp_tuple_unpack_4__element_1;
tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
assert(tmp_tuple_unpack_5__source_iter == NULL);
tmp_tuple_unpack_5__source_iter = tmp_assign_source_26;
}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_unpack_13;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_13 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_27 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 0, 2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_5__element_1 == NULL);
tmp_tuple_unpack_5__element_1 = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_14;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_14 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 1, 2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_5__element_2 == NULL);
tmp_tuple_unpack_5__element_2 = tmp_assign_source_28;
}
{
PyObject *tmp_iterator_name_5;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
}
goto try_end_8;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_10;
// End of try:
try_end_8:;
goto try_end_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_8;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
tmp_assign_source_29 = tmp_tuple_unpack_5__element_1;
assert(var_border_top == NULL);
Py_INCREF(tmp_assign_source_29);
var_border_top = tmp_assign_source_29;
}
Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;

{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
tmp_assign_source_30 = tmp_tuple_unpack_5__element_2;
assert(var_border_top_color == NULL);
Py_INCREF(tmp_assign_source_30);
var_border_top_color = tmp_assign_source_30;
}
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_iter_arg_6 = tmp_tuple_unpack_4__element_2;
tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
assert(tmp_tuple_unpack_6__source_iter == NULL);
tmp_tuple_unpack_6__source_iter = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_unpack_15;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_15 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_32 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_15, 0, 2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
assert(tmp_tuple_unpack_6__element_1 == NULL);
tmp_tuple_unpack_6__element_1 = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_unpack_16;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_16 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_33 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_16, 1, 2);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
assert(tmp_tuple_unpack_6__element_2 == NULL);
tmp_tuple_unpack_6__element_2 = tmp_assign_source_33;
}
{
PyObject *tmp_iterator_name_6;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_6, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
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
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_8;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
{
PyObject *tmp_assign_source_34;
CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
tmp_assign_source_34 = tmp_tuple_unpack_6__element_1;
assert(var_border_right == NULL);
Py_INCREF(tmp_assign_source_34);
var_border_right = tmp_assign_source_34;
}
Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;

{
PyObject *tmp_assign_source_35;
CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
tmp_assign_source_35 = tmp_tuple_unpack_6__element_2;
assert(var_border_right_color == NULL);
Py_INCREF(tmp_assign_source_35);
var_border_right_color = tmp_assign_source_35;
}
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;

Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
tmp_iter_arg_7 = tmp_tuple_unpack_4__element_3;
tmp_assign_source_36 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
assert(tmp_tuple_unpack_7__source_iter == NULL);
tmp_tuple_unpack_7__source_iter = tmp_assign_source_36;
}
// Tried code:
{
PyObject *tmp_assign_source_37;
PyObject *tmp_unpack_17;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_17 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_37 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_17, 0, 2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
assert(tmp_tuple_unpack_7__element_1 == NULL);
tmp_tuple_unpack_7__element_1 = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_unpack_18;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_18 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_38 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_18, 1, 2);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
assert(tmp_tuple_unpack_7__element_2 == NULL);
tmp_tuple_unpack_7__element_2 = tmp_assign_source_38;
}
{
PyObject *tmp_iterator_name_7;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_7, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
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
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_8;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
Py_DECREF(tmp_tuple_unpack_7__source_iter);
tmp_tuple_unpack_7__source_iter = NULL;
{
PyObject *tmp_assign_source_39;
CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
tmp_assign_source_39 = tmp_tuple_unpack_7__element_1;
assert(var_border_bottom == NULL);
Py_INCREF(tmp_assign_source_39);
var_border_bottom = tmp_assign_source_39;
}
Py_XDECREF(tmp_tuple_unpack_7__element_1);
tmp_tuple_unpack_7__element_1 = NULL;

{
PyObject *tmp_assign_source_40;
CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
tmp_assign_source_40 = tmp_tuple_unpack_7__element_2;
assert(var_border_bottom_color == NULL);
Py_INCREF(tmp_assign_source_40);
var_border_bottom_color = tmp_assign_source_40;
}
Py_XDECREF(tmp_tuple_unpack_7__element_2);
tmp_tuple_unpack_7__element_2 = NULL;

Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_iter_arg_8;
CHECK_OBJECT(tmp_tuple_unpack_4__element_4);
tmp_iter_arg_8 = tmp_tuple_unpack_4__element_4;
tmp_assign_source_41 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
assert(tmp_tuple_unpack_8__source_iter == NULL);
tmp_tuple_unpack_8__source_iter = tmp_assign_source_41;
}
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_unpack_19;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_unpack_19 = tmp_tuple_unpack_8__source_iter;
tmp_assign_source_42 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_19, 0, 2);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
assert(tmp_tuple_unpack_8__element_1 == NULL);
tmp_tuple_unpack_8__element_1 = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_unpack_20;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_unpack_20 = tmp_tuple_unpack_8__source_iter;
tmp_assign_source_43 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_20, 1, 2);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
assert(tmp_tuple_unpack_8__element_2 == NULL);
tmp_tuple_unpack_8__element_2 = tmp_assign_source_43;
}
{
PyObject *tmp_iterator_name_8;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_8, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
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
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_8;
// End of try:
try_end_15:;
goto try_end_16;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_4);
tmp_tuple_unpack_4__element_4 = NULL;
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
PyObject *tmp_assign_source_44;
CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
tmp_assign_source_44 = tmp_tuple_unpack_8__element_1;
assert(var_border_left == NULL);
Py_INCREF(tmp_assign_source_44);
var_border_left = tmp_assign_source_44;
}
Py_XDECREF(tmp_tuple_unpack_8__element_1);
tmp_tuple_unpack_8__element_1 = NULL;

{
PyObject *tmp_assign_source_45;
CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
tmp_assign_source_45 = tmp_tuple_unpack_8__element_2;
assert(var_border_left_color == NULL);
Py_INCREF(tmp_assign_source_45);
var_border_left_color = tmp_assign_source_45;
}
Py_XDECREF(tmp_tuple_unpack_8__element_2);
tmp_tuple_unpack_8__element_2 = NULL;

Py_XDECREF(tmp_tuple_unpack_4__element_4);
tmp_tuple_unpack_4__element_4 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_46;
PyObject *tmp_iter_arg_9;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_styles));
tmp_expression_value_3 = Nuitka_Cell_GET(par_styles);
tmp_iter_arg_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_outline);
if (tmp_iter_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
tmp_assign_source_46 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
CHECK_OBJECT(tmp_iter_arg_9);
Py_DECREF(tmp_iter_arg_9);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
assert(tmp_tuple_unpack_9__source_iter == NULL);
tmp_tuple_unpack_9__source_iter = tmp_assign_source_46;
}
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_unpack_21;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_unpack_21 = tmp_tuple_unpack_9__source_iter;
tmp_assign_source_47 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_21, 0, 4);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
assert(tmp_tuple_unpack_9__element_1 == NULL);
tmp_tuple_unpack_9__element_1 = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_unpack_22;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_unpack_22 = tmp_tuple_unpack_9__source_iter;
tmp_assign_source_48 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_22, 1, 4);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
assert(tmp_tuple_unpack_9__element_2 == NULL);
tmp_tuple_unpack_9__element_2 = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_unpack_23;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_unpack_23 = tmp_tuple_unpack_9__source_iter;
tmp_assign_source_49 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_23, 2, 4);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
assert(tmp_tuple_unpack_9__element_3 == NULL);
tmp_tuple_unpack_9__element_3 = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_unpack_24;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_unpack_24 = tmp_tuple_unpack_9__source_iter;
tmp_assign_source_50 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_24, 3, 4);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
assert(tmp_tuple_unpack_9__element_4 == NULL);
tmp_tuple_unpack_9__element_4 = tmp_assign_source_50;
}
{
PyObject *tmp_iterator_name_9;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_iterator_name_9 = tmp_tuple_unpack_9__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_9, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
}
goto try_end_17;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
Py_DECREF(tmp_tuple_unpack_9__source_iter);
tmp_tuple_unpack_9__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_18;
// End of try:
try_end_17:;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
Py_DECREF(tmp_tuple_unpack_9__source_iter);
tmp_tuple_unpack_9__source_iter = NULL;
// Tried code:
{
PyObject *tmp_assign_source_51;
PyObject *tmp_iter_arg_10;
CHECK_OBJECT(tmp_tuple_unpack_9__element_1);
tmp_iter_arg_10 = tmp_tuple_unpack_9__element_1;
tmp_assign_source_51 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_20;
}
assert(tmp_tuple_unpack_10__source_iter == NULL);
tmp_tuple_unpack_10__source_iter = tmp_assign_source_51;
}
// Tried code:
{
PyObject *tmp_assign_source_52;
PyObject *tmp_unpack_25;
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
tmp_unpack_25 = tmp_tuple_unpack_10__source_iter;
tmp_assign_source_52 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_25, 0, 2);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
assert(tmp_tuple_unpack_10__element_1 == NULL);
tmp_tuple_unpack_10__element_1 = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_unpack_26;
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
tmp_unpack_26 = tmp_tuple_unpack_10__source_iter;
tmp_assign_source_53 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_26, 1, 2);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
assert(tmp_tuple_unpack_10__element_2 == NULL);
tmp_tuple_unpack_10__element_2 = tmp_assign_source_53;
}
{
PyObject *tmp_iterator_name_10;
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
tmp_iterator_name_10 = tmp_tuple_unpack_10__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_10, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
}
goto try_end_18;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
Py_DECREF(tmp_tuple_unpack_10__source_iter);
tmp_tuple_unpack_10__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_20;
// End of try:
try_end_18:;
goto try_end_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_10__element_1);
tmp_tuple_unpack_10__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_10__element_2);
tmp_tuple_unpack_10__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_18;
// End of try:
try_end_19:;
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
Py_DECREF(tmp_tuple_unpack_10__source_iter);
tmp_tuple_unpack_10__source_iter = NULL;
{
PyObject *tmp_assign_source_54;
CHECK_OBJECT(tmp_tuple_unpack_10__element_1);
tmp_assign_source_54 = tmp_tuple_unpack_10__element_1;
assert(var_outline_top == NULL);
Py_INCREF(tmp_assign_source_54);
var_outline_top = tmp_assign_source_54;
}
Py_XDECREF(tmp_tuple_unpack_10__element_1);
tmp_tuple_unpack_10__element_1 = NULL;

{
PyObject *tmp_assign_source_55;
CHECK_OBJECT(tmp_tuple_unpack_10__element_2);
tmp_assign_source_55 = tmp_tuple_unpack_10__element_2;
assert(var_outline_top_color == NULL);
Py_INCREF(tmp_assign_source_55);
var_outline_top_color = tmp_assign_source_55;
}
Py_XDECREF(tmp_tuple_unpack_10__element_2);
tmp_tuple_unpack_10__element_2 = NULL;

Py_XDECREF(tmp_tuple_unpack_9__element_1);
tmp_tuple_unpack_9__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_56;
PyObject *tmp_iter_arg_11;
CHECK_OBJECT(tmp_tuple_unpack_9__element_2);
tmp_iter_arg_11 = tmp_tuple_unpack_9__element_2;
tmp_assign_source_56 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
assert(tmp_tuple_unpack_11__source_iter == NULL);
tmp_tuple_unpack_11__source_iter = tmp_assign_source_56;
}
// Tried code:
{
PyObject *tmp_assign_source_57;
PyObject *tmp_unpack_27;
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
tmp_unpack_27 = tmp_tuple_unpack_11__source_iter;
tmp_assign_source_57 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_27, 0, 2);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_23;
}
assert(tmp_tuple_unpack_11__element_1 == NULL);
tmp_tuple_unpack_11__element_1 = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_unpack_28;
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
tmp_unpack_28 = tmp_tuple_unpack_11__source_iter;
tmp_assign_source_58 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_28, 1, 2);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_23;
}
assert(tmp_tuple_unpack_11__element_2 == NULL);
tmp_tuple_unpack_11__element_2 = tmp_assign_source_58;
}
{
PyObject *tmp_iterator_name_11;
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
tmp_iterator_name_11 = tmp_tuple_unpack_11__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_11, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_23;
}
}
goto try_end_20;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
Py_DECREF(tmp_tuple_unpack_11__source_iter);
tmp_tuple_unpack_11__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto try_except_handler_22;
// End of try:
try_end_20:;
goto try_end_21;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_11__element_1);
tmp_tuple_unpack_11__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_11__element_2);
tmp_tuple_unpack_11__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_18;
// End of try:
try_end_21:;
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
Py_DECREF(tmp_tuple_unpack_11__source_iter);
tmp_tuple_unpack_11__source_iter = NULL;
{
PyObject *tmp_assign_source_59;
CHECK_OBJECT(tmp_tuple_unpack_11__element_1);
tmp_assign_source_59 = tmp_tuple_unpack_11__element_1;
assert(var_outline_right == NULL);
Py_INCREF(tmp_assign_source_59);
var_outline_right = tmp_assign_source_59;
}
Py_XDECREF(tmp_tuple_unpack_11__element_1);
tmp_tuple_unpack_11__element_1 = NULL;

{
PyObject *tmp_assign_source_60;
CHECK_OBJECT(tmp_tuple_unpack_11__element_2);
tmp_assign_source_60 = tmp_tuple_unpack_11__element_2;
assert(var_outline_right_color == NULL);
Py_INCREF(tmp_assign_source_60);
var_outline_right_color = tmp_assign_source_60;
}
Py_XDECREF(tmp_tuple_unpack_11__element_2);
tmp_tuple_unpack_11__element_2 = NULL;

Py_XDECREF(tmp_tuple_unpack_9__element_2);
tmp_tuple_unpack_9__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_61;
PyObject *tmp_iter_arg_12;
CHECK_OBJECT(tmp_tuple_unpack_9__element_3);
tmp_iter_arg_12 = tmp_tuple_unpack_9__element_3;
tmp_assign_source_61 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}
assert(tmp_tuple_unpack_12__source_iter == NULL);
tmp_tuple_unpack_12__source_iter = tmp_assign_source_61;
}
// Tried code:
{
PyObject *tmp_assign_source_62;
PyObject *tmp_unpack_29;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
tmp_unpack_29 = tmp_tuple_unpack_12__source_iter;
tmp_assign_source_62 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_29, 0, 2);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
assert(tmp_tuple_unpack_12__element_1 == NULL);
tmp_tuple_unpack_12__element_1 = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_unpack_30;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
tmp_unpack_30 = tmp_tuple_unpack_12__source_iter;
tmp_assign_source_63 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_30, 1, 2);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
assert(tmp_tuple_unpack_12__element_2 == NULL);
tmp_tuple_unpack_12__element_2 = tmp_assign_source_63;
}
{
PyObject *tmp_iterator_name_12;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
tmp_iterator_name_12 = tmp_tuple_unpack_12__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_12, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
}
goto try_end_22;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
Py_DECREF(tmp_tuple_unpack_12__source_iter);
tmp_tuple_unpack_12__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto try_except_handler_24;
// End of try:
try_end_22:;
goto try_end_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_12__element_1);
tmp_tuple_unpack_12__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_12__element_2);
tmp_tuple_unpack_12__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto try_except_handler_18;
// End of try:
try_end_23:;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
Py_DECREF(tmp_tuple_unpack_12__source_iter);
tmp_tuple_unpack_12__source_iter = NULL;
{
PyObject *tmp_assign_source_64;
CHECK_OBJECT(tmp_tuple_unpack_12__element_1);
tmp_assign_source_64 = tmp_tuple_unpack_12__element_1;
assert(var_outline_bottom == NULL);
Py_INCREF(tmp_assign_source_64);
var_outline_bottom = tmp_assign_source_64;
}
Py_XDECREF(tmp_tuple_unpack_12__element_1);
tmp_tuple_unpack_12__element_1 = NULL;

{
PyObject *tmp_assign_source_65;
CHECK_OBJECT(tmp_tuple_unpack_12__element_2);
tmp_assign_source_65 = tmp_tuple_unpack_12__element_2;
assert(var_outline_bottom_color == NULL);
Py_INCREF(tmp_assign_source_65);
var_outline_bottom_color = tmp_assign_source_65;
}
Py_XDECREF(tmp_tuple_unpack_12__element_2);
tmp_tuple_unpack_12__element_2 = NULL;

Py_XDECREF(tmp_tuple_unpack_9__element_3);
tmp_tuple_unpack_9__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_66;
PyObject *tmp_iter_arg_13;
CHECK_OBJECT(tmp_tuple_unpack_9__element_4);
tmp_iter_arg_13 = tmp_tuple_unpack_9__element_4;
tmp_assign_source_66 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
}
assert(tmp_tuple_unpack_13__source_iter == NULL);
tmp_tuple_unpack_13__source_iter = tmp_assign_source_66;
}
// Tried code:
{
PyObject *tmp_assign_source_67;
PyObject *tmp_unpack_31;
CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
tmp_unpack_31 = tmp_tuple_unpack_13__source_iter;
tmp_assign_source_67 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_31, 0, 2);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
assert(tmp_tuple_unpack_13__element_1 == NULL);
tmp_tuple_unpack_13__element_1 = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_unpack_32;
CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
tmp_unpack_32 = tmp_tuple_unpack_13__source_iter;
tmp_assign_source_68 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_32, 1, 2);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
assert(tmp_tuple_unpack_13__element_2 == NULL);
tmp_tuple_unpack_13__element_2 = tmp_assign_source_68;
}
{
PyObject *tmp_iterator_name_13;
CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
tmp_iterator_name_13 = tmp_tuple_unpack_13__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_13, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
}
goto try_end_24;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
Py_DECREF(tmp_tuple_unpack_13__source_iter);
tmp_tuple_unpack_13__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_26;
// End of try:
try_end_24:;
goto try_end_25;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_13__element_1);
tmp_tuple_unpack_13__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_13__element_2);
tmp_tuple_unpack_13__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto try_except_handler_18;
// End of try:
try_end_25:;
goto try_end_26;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_9__element_1);
tmp_tuple_unpack_9__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_9__element_2);
tmp_tuple_unpack_9__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_9__element_3);
tmp_tuple_unpack_9__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_9__element_4);
tmp_tuple_unpack_9__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto frame_exception_exit_1;
// End of try:
try_end_26:;
CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
Py_DECREF(tmp_tuple_unpack_13__source_iter);
tmp_tuple_unpack_13__source_iter = NULL;
{
PyObject *tmp_assign_source_69;
CHECK_OBJECT(tmp_tuple_unpack_13__element_1);
tmp_assign_source_69 = tmp_tuple_unpack_13__element_1;
assert(var_outline_left == NULL);
Py_INCREF(tmp_assign_source_69);
var_outline_left = tmp_assign_source_69;
}
Py_XDECREF(tmp_tuple_unpack_13__element_1);
tmp_tuple_unpack_13__element_1 = NULL;

{
PyObject *tmp_assign_source_70;
CHECK_OBJECT(tmp_tuple_unpack_13__element_2);
tmp_assign_source_70 = tmp_tuple_unpack_13__element_2;
assert(var_outline_left_color == NULL);
Py_INCREF(tmp_assign_source_70);
var_outline_left_color = tmp_assign_source_70;
}
Py_XDECREF(tmp_tuple_unpack_13__element_2);
tmp_tuple_unpack_13__element_2 = NULL;

Py_XDECREF(tmp_tuple_unpack_9__element_4);
tmp_tuple_unpack_9__element_4 = NULL;

{
PyObject *tmp_assign_source_71;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = module_var_accessor_textual$_styles_cache$RichStyle(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RichStyle);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_from_color);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_from_color) == NULL);
Nuitka_Cell_SET(var_from_color, tmp_assign_source_71);

}
// Tried code:
{
PyObject *tmp_assign_source_72;
PyObject *tmp_iter_arg_14;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(Nuitka_Cell_GET(par_base_background));
tmp_args_element_value_1 = Nuitka_Cell_GET(par_base_background);
CHECK_OBJECT(Nuitka_Cell_GET(par_background));
tmp_args_element_value_2 = Nuitka_Cell_GET(par_background);
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 326;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_14 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_get_inner_outer,
        call_args
    );
}

if (tmp_iter_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
tmp_assign_source_72 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_14);
CHECK_OBJECT(tmp_iter_arg_14);
Py_DECREF(tmp_iter_arg_14);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
assert(tmp_tuple_unpack_14__source_iter == NULL);
tmp_tuple_unpack_14__source_iter = tmp_assign_source_72;
}
// Tried code:
{
PyObject *tmp_assign_source_73;
PyObject *tmp_unpack_33;
CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
tmp_unpack_33 = tmp_tuple_unpack_14__source_iter;
tmp_assign_source_73 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_33, 0, 2);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 326;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
assert(tmp_tuple_unpack_14__element_1 == NULL);
tmp_tuple_unpack_14__element_1 = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_unpack_34;
CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
tmp_unpack_34 = tmp_tuple_unpack_14__source_iter;
tmp_assign_source_74 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_34, 1, 2);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 326;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
assert(tmp_tuple_unpack_14__element_2 == NULL);
tmp_tuple_unpack_14__element_2 = tmp_assign_source_74;
}
{
PyObject *tmp_iterator_name_14;
CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
tmp_iterator_name_14 = tmp_tuple_unpack_14__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_14, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 326;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
}
goto try_end_27;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
Py_DECREF(tmp_tuple_unpack_14__source_iter);
tmp_tuple_unpack_14__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto try_except_handler_28;
// End of try:
try_end_27:;
goto try_end_28;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_14__element_1);
tmp_tuple_unpack_14__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_14__element_2);
tmp_tuple_unpack_14__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto frame_exception_exit_1;
// End of try:
try_end_28:;
CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
Py_DECREF(tmp_tuple_unpack_14__source_iter);
tmp_tuple_unpack_14__source_iter = NULL;
{
PyObject *tmp_assign_source_75;
CHECK_OBJECT(tmp_tuple_unpack_14__element_1);
tmp_assign_source_75 = tmp_tuple_unpack_14__element_1;
assert(var_inner == NULL);
Py_INCREF(tmp_assign_source_75);
var_inner = tmp_assign_source_75;
}
Py_XDECREF(tmp_tuple_unpack_14__element_1);
tmp_tuple_unpack_14__element_1 = NULL;

{
PyObject *tmp_assign_source_76;
CHECK_OBJECT(tmp_tuple_unpack_14__element_2);
tmp_assign_source_76 = tmp_tuple_unpack_14__element_2;
assert(var_outer == NULL);
Py_INCREF(tmp_assign_source_76);
var_outer = tmp_assign_source_76;
}
Py_XDECREF(tmp_tuple_unpack_14__element_2);
tmp_tuple_unpack_14__element_2 = NULL;

{
PyObject *tmp_assign_source_77;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_95beaea57d07474a4e3d604025cbe687);
tmp_closure_1[0] = par_background;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_from_color;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_styles;
Py_INCREF(tmp_closure_1[2]);
tmp_assign_source_77 = MAKE_FUNCTION_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_line_post == NULL);
var_line_post = tmp_assign_source_77;
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_2[4];
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_95beaea57d07474a4e3d604025cbe687);
tmp_closure_2[0] = par_background;
Py_INCREF(tmp_closure_2[0]);
tmp_closure_2[1] = par_base_background;
Py_INCREF(tmp_closure_2[1]);
tmp_closure_2[2] = par_opacity;
Py_INCREF(tmp_closure_2[2]);
tmp_closure_2[3] = par_styles;
Py_INCREF(tmp_closure_2[3]);
tmp_assign_source_78 = MAKE_FUNCTION_textual$_styles_cache$$$function__9_render_line$$$function__2_post(tstate, tmp_annotations_2, tmp_closure_2);

assert(var_post == NULL);
var_post = tmp_assign_source_78;
}
{
nuitka_bool tmp_assign_source_79;
tmp_assign_source_79 = NUITKA_BOOL_FALSE;
var_cache_simple_strip = tmp_assign_source_79;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_border_top);
tmp_truth_name_1 = CHECK_IF_TRUE(var_border_top);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_1 = par_y;
tmp_cmp_expr_right_1 = const_int_0;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_left_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_border_bottom);
tmp_truth_name_2 = CHECK_IF_TRUE(var_border_bottom);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_2 = par_y;
CHECK_OBJECT(var_height);
tmp_sub_expr_left_1 = var_height;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_cmp_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_or_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
{
PyObject *tmp_assign_source_80;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_3 = par_y;
tmp_cmp_expr_right_3 = const_int_0;
tmp_assign_source_80 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_is_top == NULL);
var_is_top = tmp_assign_source_80;
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_2;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_base_background));
tmp_add_expr_left_1 = Nuitka_Cell_GET(par_base_background);
CHECK_OBJECT(var_is_top);
tmp_truth_name_3 = CHECK_IF_TRUE(var_is_top);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_border_top_color);
tmp_called_instance_2 = var_border_top_color;
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_border_bottom_color);
tmp_called_instance_2 = var_border_bottom_color;
condexpr_end_1:;
CHECK_OBJECT(Nuitka_Cell_GET(par_opacity));
tmp_args_element_value_3 = Nuitka_Cell_GET(par_opacity);
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 367;
tmp_add_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_multiply_alpha, tmp_args_element_value_3);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_81 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_border_color == NULL);
var_border_color = tmp_assign_source_81;
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_1 = module_var_accessor_textual$_styles_cache$Style(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_border_color);
tmp_kw_call_value_0_1 = var_border_color;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 370;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_82 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_foreground_tuple);
}

if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_border_color_as_style == NULL);
var_border_color_as_style = tmp_assign_source_82;
}
{
PyObject *tmp_assign_source_83;
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_4;
CHECK_OBJECT(var_is_top);
tmp_truth_name_4 = CHECK_IF_TRUE(var_is_top);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(var_border_top);
tmp_assign_source_83 = var_border_top;
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(var_border_bottom);
tmp_assign_source_83 = var_border_bottom;
condexpr_end_2:;
assert(var_border_edge_type == NULL);
Py_INCREF(tmp_assign_source_83);
var_border_edge_type = tmp_assign_source_83;
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_border_left);
tmp_cmp_expr_left_4 = var_border_left;
tmp_cmp_expr_right_4 = const_str_empty;
tmp_assign_source_84 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_has_left == NULL);
var_has_left = tmp_assign_source_84;
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_border_right);
tmp_cmp_expr_left_5 = var_border_right;
tmp_cmp_expr_right_5 = const_str_empty;
tmp_assign_source_85 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_has_right == NULL);
var_has_right = tmp_assign_source_85;
}
{
PyObject *tmp_assign_source_86;
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_5;
CHECK_OBJECT(var_is_top);
tmp_truth_name_5 = CHECK_IF_TRUE(var_is_top);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(par_border_title);
tmp_assign_source_86 = par_border_title;
goto condexpr_end_3;
condexpr_false_3:;
CHECK_OBJECT(par_border_subtitle);
tmp_assign_source_86 = par_border_subtitle;
condexpr_end_3:;
assert(var_border_label == NULL);
Py_INCREF(tmp_assign_source_86);
var_border_label = tmp_assign_source_86;
}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_border_label);
tmp_cmp_expr_left_6 = var_border_label;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_87;
tmp_assign_source_87 = Py_None;
assert(var_render_label == NULL);
Py_INCREF(tmp_assign_source_87);
var_render_label = tmp_assign_source_87;
}
goto branch_end_2;
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_88;
PyObject *tmp_iter_arg_15;
CHECK_OBJECT(var_border_label);
tmp_iter_arg_15 = var_border_label;
tmp_assign_source_88 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_15);
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_30;
}
assert(tmp_tuple_unpack_15__source_iter == NULL);
tmp_tuple_unpack_15__source_iter = tmp_assign_source_88;
}
// Tried code:
{
PyObject *tmp_assign_source_89;
PyObject *tmp_unpack_35;
CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
tmp_unpack_35 = tmp_tuple_unpack_15__source_iter;
tmp_assign_source_89 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_35, 0, 4);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
assert(tmp_tuple_unpack_15__element_1 == NULL);
tmp_tuple_unpack_15__element_1 = tmp_assign_source_89;
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_unpack_36;
CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
tmp_unpack_36 = tmp_tuple_unpack_15__source_iter;
tmp_assign_source_90 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_36, 1, 4);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
assert(tmp_tuple_unpack_15__element_2 == NULL);
tmp_tuple_unpack_15__element_2 = tmp_assign_source_90;
}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_unpack_37;
CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
tmp_unpack_37 = tmp_tuple_unpack_15__source_iter;
tmp_assign_source_91 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_37, 2, 4);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
assert(tmp_tuple_unpack_15__element_3 == NULL);
tmp_tuple_unpack_15__element_3 = tmp_assign_source_91;
}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_unpack_38;
CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
tmp_unpack_38 = tmp_tuple_unpack_15__source_iter;
tmp_assign_source_92 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_38, 3, 4);
if (tmp_assign_source_92 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
assert(tmp_tuple_unpack_15__element_4 == NULL);
tmp_tuple_unpack_15__element_4 = tmp_assign_source_92;
}
{
PyObject *tmp_iterator_name_15;
CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
tmp_iterator_name_15 = tmp_tuple_unpack_15__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_15, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
}
goto try_end_29;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
Py_DECREF(tmp_tuple_unpack_15__source_iter);
tmp_tuple_unpack_15__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto try_except_handler_30;
// End of try:
try_end_29:;
goto try_end_30;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_15__element_1);
tmp_tuple_unpack_15__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_15__element_2);
tmp_tuple_unpack_15__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_15__element_3);
tmp_tuple_unpack_15__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_15__element_4);
tmp_tuple_unpack_15__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto frame_exception_exit_1;
// End of try:
try_end_30:;
CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_15__source_iter);
Py_DECREF(tmp_tuple_unpack_15__source_iter);
tmp_tuple_unpack_15__source_iter = NULL;
{
PyObject *tmp_assign_source_93;
CHECK_OBJECT(tmp_tuple_unpack_15__element_1);
tmp_assign_source_93 = tmp_tuple_unpack_15__element_1;
assert(var_label == NULL);
Py_INCREF(tmp_assign_source_93);
var_label = tmp_assign_source_93;
}
Py_XDECREF(tmp_tuple_unpack_15__element_1);
tmp_tuple_unpack_15__element_1 = NULL;

{
PyObject *tmp_assign_source_94;
CHECK_OBJECT(tmp_tuple_unpack_15__element_2);
tmp_assign_source_94 = tmp_tuple_unpack_15__element_2;
assert(var_label_color == NULL);
Py_INCREF(tmp_assign_source_94);
var_label_color = tmp_assign_source_94;
}
Py_XDECREF(tmp_tuple_unpack_15__element_2);
tmp_tuple_unpack_15__element_2 = NULL;

{
PyObject *tmp_assign_source_95;
CHECK_OBJECT(tmp_tuple_unpack_15__element_3);
tmp_assign_source_95 = tmp_tuple_unpack_15__element_3;
assert(var_label_background == NULL);
Py_INCREF(tmp_assign_source_95);
var_label_background = tmp_assign_source_95;
}
Py_XDECREF(tmp_tuple_unpack_15__element_3);
tmp_tuple_unpack_15__element_3 = NULL;

{
PyObject *tmp_assign_source_96;
CHECK_OBJECT(tmp_tuple_unpack_15__element_4);
tmp_assign_source_96 = tmp_tuple_unpack_15__element_4;
assert(var_style == NULL);
Py_INCREF(tmp_assign_source_96);
var_style = tmp_assign_source_96;
}
Py_XDECREF(tmp_tuple_unpack_15__element_4);
tmp_tuple_unpack_15__element_4 = NULL;

{
PyObject *tmp_assign_source_97;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(Nuitka_Cell_GET(par_base_background));
tmp_add_expr_left_2 = Nuitka_Cell_GET(par_base_background);
CHECK_OBJECT(Nuitka_Cell_GET(par_background));
tmp_add_expr_right_2 = Nuitka_Cell_GET(par_background);
tmp_assign_source_97 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_base_label_background == NULL);
var_base_label_background = tmp_assign_source_97;
}
{
PyObject *tmp_assign_source_98;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
nuitka_bool tmp_condition_result_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_6;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_args_element_value_5;
nuitka_bool tmp_condition_result_7;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_7;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
CHECK_OBJECT(var_style);
tmp_iadd_expr_left_1 = var_style;
tmp_called_value_2 = module_var_accessor_textual$_styles_cache$Style(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_label_background);
tmp_expression_value_5 = var_label_background;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_a);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 383;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(var_base_label_background);
tmp_add_expr_left_3 = var_base_label_background;
CHECK_OBJECT(var_label_background);
tmp_add_expr_right_3 = var_label_background;
tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_args_element_value_4 = module_var_accessor_textual$_styles_cache$TRANSPARENT(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRANSPARENT);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 384;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_args_element_value_4);
condexpr_end_4:;
CHECK_OBJECT(var_label_color);
tmp_expression_value_6 = var_label_color;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_a);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 388;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 388;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(var_base_label_background);
tmp_add_expr_left_4 = var_base_label_background;
CHECK_OBJECT(var_label_color);
tmp_add_expr_right_4 = var_label_color;
tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 387;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_args_element_value_5 = module_var_accessor_textual$_styles_cache$TRANSPARENT(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRANSPARENT);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 389;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_args_element_value_5);
condexpr_end_5:;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 380;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_98 = tmp_iadd_expr_left_1;
var_style = tmp_assign_source_98;

}
{
PyObject *tmp_assign_source_99;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_label);
tmp_tuple_element_1 = var_label;
tmp_assign_source_99 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_99, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_style);
tmp_tuple_element_1 = var_style;
PyTuple_SET_ITEM0(tmp_assign_source_99, 1, tmp_tuple_element_1);
assert(var_render_label == NULL);
var_render_label = tmp_assign_source_99;
}
branch_end_2:;
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_8;
CHECK_OBJECT(var_render_label);
tmp_truth_name_8 = CHECK_IF_TRUE(var_render_label);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_100;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_3 = module_var_accessor_textual$_styles_cache$render_border_label(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_render_border_label);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 396;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_render_label);
tmp_args_element_value_6 = var_render_label;
CHECK_OBJECT(var_is_top);
tmp_args_element_value_7 = var_is_top;
CHECK_OBJECT(var_border_edge_type);
tmp_args_element_value_8 = var_border_edge_type;
CHECK_OBJECT(var_width);
tmp_sub_expr_left_2 = var_width;
tmp_sub_expr_right_2 = mod_consts.const_int_pos_2;
tmp_args_element_value_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_inner);
tmp_args_element_value_10 = var_inner;
CHECK_OBJECT(var_outer);
tmp_args_element_value_11 = var_outer;
CHECK_OBJECT(var_border_color_as_style);
tmp_args_element_value_12 = var_border_color_as_style;
CHECK_OBJECT(var_has_left);
tmp_args_element_value_13 = var_has_left;
CHECK_OBJECT(var_has_right);
tmp_args_element_value_14 = var_has_right;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 396;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assign_source_100 = CALL_FUNCTION_WITH_ARGS9(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_label_segments == NULL);
var_label_segments = tmp_assign_source_100;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_101;
tmp_assign_source_101 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_label_segments == NULL);
var_label_segments = tmp_assign_source_101;
}
branch_end_3:;
{
PyObject *tmp_assign_source_102;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
tmp_called_value_4 = module_var_accessor_textual$_styles_cache$get_box(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_box);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 409;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_border_edge_type);
tmp_args_element_value_15 = var_border_edge_type;
CHECK_OBJECT(var_inner);
tmp_args_element_value_16 = var_inner;
CHECK_OBJECT(var_outer);
tmp_args_element_value_17 = var_outer;
CHECK_OBJECT(var_border_color_as_style);
tmp_args_element_value_18 = var_border_color_as_style;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 409;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_assign_source_102 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_box_segments == NULL);
var_box_segments = tmp_assign_source_102;
}
{
PyObject *tmp_assign_source_103;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_9;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_is_top);
tmp_truth_name_9 = CHECK_IF_TRUE(var_is_top);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(Nuitka_Cell_GET(par_styles));
tmp_expression_value_7 = Nuitka_Cell_GET(par_styles);
tmp_assign_source_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_border_title_align);
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_6;
condexpr_false_6:;
CHECK_OBJECT(Nuitka_Cell_GET(par_styles));
tmp_expression_value_8 = Nuitka_Cell_GET(par_styles);
tmp_assign_source_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_border_subtitle_align);
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_6:;
assert(var_label_alignment == NULL);
var_label_alignment = tmp_assign_source_103;
}
{
PyObject *tmp_assign_source_104;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_1;
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_10;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
tmp_called_value_5 = module_var_accessor_textual$_styles_cache$render_row(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_render_row);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 418;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_box_segments);
tmp_expression_value_9 = var_box_segments;
CHECK_OBJECT(var_is_top);
tmp_truth_name_10 = CHECK_IF_TRUE(var_is_top);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
tmp_subscript_value_1 = const_int_0;
goto condexpr_end_7;
condexpr_false_7:;
tmp_subscript_value_1 = mod_consts.const_int_pos_2;
condexpr_end_7:;
tmp_args_element_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_1);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_width);
tmp_args_element_value_20 = var_width;
CHECK_OBJECT(var_has_left);
tmp_args_element_value_21 = var_has_left;
CHECK_OBJECT(var_has_right);
tmp_args_element_value_22 = var_has_right;
CHECK_OBJECT(var_label_segments);
tmp_args_element_value_23 = var_label_segments;
CHECK_OBJECT(var_label_alignment);
tmp_args_element_value_24 = var_label_alignment;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 418;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_assign_source_104 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_line == NULL);
var_line = tmp_assign_source_104;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_11;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
int tmp_truth_name_11;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_10;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
int tmp_truth_name_12;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_pad_top);
tmp_truth_name_11 = CHECK_IF_TRUE(var_pad_top);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_7 = par_y;
CHECK_OBJECT(var_gutter);
tmp_expression_value_10 = var_gutter;
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_top);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_or_left_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_pad_bottom);
tmp_truth_name_12 = CHECK_IF_TRUE(var_pad_bottom);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_4 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_8 = par_y;
CHECK_OBJECT(var_height);
tmp_sub_expr_left_3 = var_height;
CHECK_OBJECT(var_gutter);
tmp_expression_value_11 = var_gutter;
tmp_sub_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_bottom);
if (tmp_sub_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_right_3);
Py_DECREF(tmp_sub_expr_right_3);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_4 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_or_right_value_2 = tmp_and_left_value_4;
and_end_4:;
tmp_condition_result_11 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_11 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__simple_strip);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_12 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__simple_strip);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_assign_source_105;
tmp_assign_source_105 = NUITKA_BOOL_TRUE;
var_cache_simple_strip = tmp_assign_source_105;
}
{
PyObject *tmp_assign_source_106;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_inner);
tmp_expression_value_14 = var_inner;
tmp_assign_source_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_rich_style);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_background_rich_style == NULL);
var_background_rich_style = tmp_assign_source_106;
}
{
PyObject *tmp_assign_source_107;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_25;
tmp_called_value_6 = module_var_accessor_textual$_styles_cache$Style(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 434;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_base_background));
tmp_add_expr_left_5 = Nuitka_Cell_GET(par_base_background);
CHECK_OBJECT(var_border_left_color);
tmp_called_instance_3 = var_border_left_color;
CHECK_OBJECT(Nuitka_Cell_GET(par_opacity));
tmp_args_element_value_25 = Nuitka_Cell_GET(par_opacity);
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 435;
tmp_add_expr_right_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_multiply_alpha, tmp_args_element_value_25);
if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 434;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_assign_source_107 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_foreground_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_style == NULL);
var_left_style = tmp_assign_source_107;
}
{
PyObject *tmp_assign_source_108;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_subscript_value_2;
PyObject *tmp_subscript_value_3;
tmp_called_value_7 = module_var_accessor_textual$_styles_cache$get_box(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_box);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 437;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_border_left);
tmp_args_element_value_26 = var_border_left;
CHECK_OBJECT(var_inner);
tmp_args_element_value_27 = var_inner;
CHECK_OBJECT(var_outer);
tmp_args_element_value_28 = var_outer;
CHECK_OBJECT(var_left_style);
tmp_args_element_value_29 = var_left_style;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 437;
{
    PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
    tmp_expression_value_16 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_7, call_args);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_pos_1;
tmp_expression_value_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_2, 1);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_0;
tmp_assign_source_108 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_3, 0);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left == NULL);
var_left = tmp_assign_source_108;
}
{
PyObject *tmp_assign_source_109;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_30;
tmp_called_value_8 = module_var_accessor_textual$_styles_cache$Style(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_base_background));
tmp_add_expr_left_6 = Nuitka_Cell_GET(par_base_background);
CHECK_OBJECT(var_border_right_color);
tmp_called_instance_4 = var_border_right_color;
CHECK_OBJECT(Nuitka_Cell_GET(par_opacity));
tmp_args_element_value_30 = Nuitka_Cell_GET(par_opacity);
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 439;
tmp_add_expr_right_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_multiply_alpha, tmp_args_element_value_30);
if (tmp_add_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_right_6);
Py_DECREF(tmp_add_expr_right_6);
if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 438;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

    tmp_assign_source_109 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_str_plain_foreground_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_style == NULL);
var_right_style = tmp_assign_source_109;
}
{
PyObject *tmp_assign_source_110;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
PyObject *tmp_subscript_value_4;
PyObject *tmp_subscript_value_5;
tmp_called_value_9 = module_var_accessor_textual$_styles_cache$get_box(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_box);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 441;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_border_right);
tmp_args_element_value_31 = var_border_right;
CHECK_OBJECT(var_inner);
tmp_args_element_value_32 = var_inner;
CHECK_OBJECT(var_outer);
tmp_args_element_value_33 = var_outer;
CHECK_OBJECT(var_right_style);
tmp_args_element_value_34 = var_right_style;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 441;
{
    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
    tmp_expression_value_18 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_9, call_args);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = const_int_pos_1;
tmp_expression_value_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_4, 1);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = mod_consts.const_int_pos_2;
tmp_assign_source_110 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_5, 2);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right == NULL);
var_right = tmp_assign_source_110;
}
{
nuitka_bool tmp_condition_result_13;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
int tmp_truth_name_13;
int tmp_truth_name_14;
CHECK_OBJECT(var_border_left);
tmp_truth_name_13 = CHECK_IF_TRUE(var_border_left);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_5 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(var_border_right);
tmp_truth_name_14 = CHECK_IF_TRUE(var_border_right);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_5 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_13 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_13 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_111;
PyObject *tmp_list_element_1;
CHECK_OBJECT(var_left);
tmp_list_element_1 = var_left;
tmp_assign_source_111 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_35;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_args_element_value_36;
PyList_SET_ITEM0(tmp_assign_source_111, 0, tmp_list_element_1);
tmp_called_value_10 = module_var_accessor_textual$_styles_cache$make_blank(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_blank);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 443;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto list_build_exception_1;
}
CHECK_OBJECT(var_width);
tmp_sub_expr_left_4 = var_width;
tmp_sub_expr_right_4 = mod_consts.const_int_pos_2;
tmp_args_element_value_35 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
if (tmp_args_element_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto list_build_exception_1;
}
CHECK_OBJECT(var_background_rich_style);
tmp_args_element_value_36 = var_background_rich_style;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 443;
{
    PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_35);
Py_DECREF(tmp_args_element_value_35);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_111, 1, tmp_list_element_1);
CHECK_OBJECT(var_right);
tmp_list_element_1 = var_right;
PyList_SET_ITEM0(tmp_assign_source_111, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_111);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
assert(var_line == NULL);
var_line = tmp_assign_source_111;
}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_14;
int tmp_truth_name_15;
CHECK_OBJECT(var_border_left);
tmp_truth_name_15 = CHECK_IF_TRUE(var_border_left);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_112;
PyObject *tmp_list_element_2;
CHECK_OBJECT(var_left);
tmp_list_element_2 = var_left;
tmp_assign_source_112 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_37;
PyObject *tmp_sub_expr_left_5;
PyObject *tmp_sub_expr_right_5;
PyObject *tmp_args_element_value_38;
PyList_SET_ITEM0(tmp_assign_source_112, 0, tmp_list_element_2);
tmp_called_value_11 = module_var_accessor_textual$_styles_cache$make_blank(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_blank);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto list_build_exception_2;
}
CHECK_OBJECT(var_width);
tmp_sub_expr_left_5 = var_width;
tmp_sub_expr_right_5 = const_int_pos_1;
tmp_args_element_value_37 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
if (tmp_args_element_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto list_build_exception_2;
}
CHECK_OBJECT(var_background_rich_style);
tmp_args_element_value_38 = var_background_rich_style;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 445;
{
    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_37);
Py_DECREF(tmp_args_element_value_37);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_assign_source_112, 1, tmp_list_element_2);
}
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_assign_source_112);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_2:;
assert(var_line == NULL);
var_line = tmp_assign_source_112;
}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_15;
int tmp_truth_name_16;
CHECK_OBJECT(var_border_right);
tmp_truth_name_16 = CHECK_IF_TRUE(var_border_right);
if (tmp_truth_name_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_15 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_113;
PyObject *tmp_list_element_3;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_39;
PyObject *tmp_sub_expr_left_6;
PyObject *tmp_sub_expr_right_6;
PyObject *tmp_args_element_value_40;
tmp_called_value_12 = module_var_accessor_textual$_styles_cache$make_blank(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_blank);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 447;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_width);
tmp_sub_expr_left_6 = var_width;
tmp_sub_expr_right_6 = const_int_pos_1;
tmp_args_element_value_39 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
if (tmp_args_element_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_background_rich_style);
tmp_args_element_value_40 = var_background_rich_style;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 447;
{
    PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
    tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_113 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM(tmp_assign_source_113, 0, tmp_list_element_3);
CHECK_OBJECT(var_right);
tmp_list_element_3 = var_right;
PyList_SET_ITEM0(tmp_assign_source_113, 1, tmp_list_element_3);
assert(var_line == NULL);
var_line = tmp_assign_source_113;
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_114;
PyObject *tmp_list_element_4;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_41;
PyObject *tmp_args_element_value_42;
tmp_called_value_13 = module_var_accessor_textual$_styles_cache$make_blank(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_blank);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 449;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_width);
tmp_args_element_value_41 = var_width;
CHECK_OBJECT(var_background_rich_style);
tmp_args_element_value_42 = var_background_rich_style;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 449;
{
    PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
    tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

if (tmp_list_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_114 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_114, 0, tmp_list_element_4);
assert(var_line == NULL);
var_line = tmp_assign_source_114;
}
branch_end_8:;
branch_end_7:;
branch_end_6:;
{
PyObject *tmp_assign_source_115;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_43;
CHECK_OBJECT(var_line_post);
tmp_called_value_14 = var_line_post;
CHECK_OBJECT(var_line);
tmp_args_element_value_43 = var_line;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 450;
tmp_assign_source_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_43);
if (tmp_assign_source_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_115;
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_116;
PyObject *tmp_sub_expr_left_7;
PyObject *tmp_sub_expr_right_7;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(par_y);
tmp_sub_expr_left_7 = par_y;
CHECK_OBJECT(var_gutter);
tmp_expression_value_19 = var_gutter;
tmp_sub_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_top);
if (tmp_sub_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_116 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
CHECK_OBJECT(tmp_sub_expr_right_7);
Py_DECREF(tmp_sub_expr_right_7);
if (tmp_assign_source_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_content_y == NULL);
var_content_y = tmp_assign_source_116;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_content_y);
tmp_cmp_expr_left_10 = var_content_y;
CHECK_OBJECT(var_content_height);
tmp_cmp_expr_right_10 = var_content_height;
tmp_condition_result_16 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_117;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_44;
PyObject *tmp_sub_expr_left_8;
PyObject *tmp_sub_expr_right_8;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(par_render_content_line);
tmp_called_value_15 = par_render_content_line;
CHECK_OBJECT(par_y);
tmp_sub_expr_left_8 = par_y;
CHECK_OBJECT(var_gutter);
tmp_expression_value_20 = var_gutter;
tmp_sub_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_top);
if (tmp_sub_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_44 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
CHECK_OBJECT(tmp_sub_expr_right_8);
Py_DECREF(tmp_sub_expr_right_8);
if (tmp_args_element_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 455;
tmp_assign_source_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_44);
CHECK_OBJECT(tmp_args_element_value_44);
Py_DECREF(tmp_args_element_value_44);
if (tmp_assign_source_117 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_line == NULL);
var_line = tmp_assign_source_117;
}
{
PyObject *tmp_assign_source_118;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_45;
PyObject *tmp_args_element_value_46;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(var_line);
tmp_expression_value_21 = var_line;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_adjust_cell_length);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_content_width);
tmp_args_element_value_45 = var_content_width;
CHECK_OBJECT(var_inner);
tmp_expression_value_22 = var_inner;
tmp_args_element_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_rich_style);
if (tmp_args_element_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 456;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 456;
{
    PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
    tmp_assign_source_118 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_46);
Py_DECREF(tmp_args_element_value_46);
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_118;
    Py_DECREF(old);
}

}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_119;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_47;
PyObject *tmp_args_element_value_48;
PyObject *tmp_expression_value_24;
tmp_expression_value_23 = module_var_accessor_textual$_styles_cache$Strip(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Strip);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_blank);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_content_width);
tmp_args_element_value_47 = var_content_width;
CHECK_OBJECT(var_inner);
tmp_expression_value_24 = var_inner;
tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_rich_style);
if (tmp_args_element_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 458;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 458;
{
    PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
    tmp_assign_source_119 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_48);
Py_DECREF(tmp_args_element_value_48);
if (tmp_assign_source_119 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_line == NULL);
var_line = tmp_assign_source_119;
}
branch_end_9:;
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
// Tried code:
{
PyObject *tmp_assign_source_120;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(Nuitka_Cell_GET(par_styles));
tmp_expression_value_25 = Nuitka_Cell_GET(par_styles);
tmp_assign_source_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_text_opacity);
if (tmp_assign_source_120 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto try_except_handler_32;
}
assert(tmp_assignment_expr_1__value == NULL);
tmp_assignment_expr_1__value = tmp_assign_source_120;
}
{
PyObject *tmp_assign_source_121;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_121 = tmp_assignment_expr_1__value;
assert(var_text_opacity == NULL);
Py_INCREF(tmp_assign_source_121);
var_text_opacity = tmp_assign_source_121;
}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_11 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_11);
goto try_return_handler_32;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_11 = const_float_1_0;
tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_122;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_49;
PyObject *tmp_args_element_value_50;
PyObject *tmp_args_element_value_51;
PyObject *tmp_args_element_value_52;
tmp_called_instance_5 = module_var_accessor_textual$_styles_cache$TextOpacity(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TextOpacity);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 461;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_line);
tmp_args_element_value_49 = var_line;
CHECK_OBJECT(var_text_opacity);
tmp_args_element_value_50 = var_text_opacity;
CHECK_OBJECT(par_ansi_theme);
tmp_args_element_value_51 = par_ansi_theme;
CHECK_OBJECT(par_native_ansi);
tmp_args_element_value_52 = par_native_ansi;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 461;
{
    PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52};
    tmp_assign_source_122 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_process_segments,
        call_args
    );
}

if (tmp_assign_source_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_122;
    Py_DECREF(old);
}

}
branch_no_10:;
{
nuitka_bool tmp_condition_result_18;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
int tmp_truth_name_17;
int tmp_truth_name_18;
CHECK_OBJECT(var_pad_left);
tmp_truth_name_17 = CHECK_IF_TRUE(var_pad_left);
if (tmp_truth_name_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_3 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_pad_right);
tmp_truth_name_18 = CHECK_IF_TRUE(var_pad_right);
if (tmp_truth_name_18 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_3 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_18 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_18 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_123;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_53;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_54;
PyObject *tmp_args_element_value_55;
PyObject *tmp_args_element_value_56;
PyObject *tmp_args_element_value_57;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(var_line_post);
tmp_called_value_18 = var_line_post;
tmp_called_value_19 = module_var_accessor_textual$_styles_cache$line_pad(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_line_pad);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 465;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_line);
tmp_args_element_value_54 = var_line;
CHECK_OBJECT(var_pad_left);
tmp_args_element_value_55 = var_pad_left;
CHECK_OBJECT(var_pad_right);
tmp_args_element_value_56 = var_pad_right;
CHECK_OBJECT(var_inner);
tmp_expression_value_26 = var_inner;
tmp_args_element_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_rich_style);
if (tmp_args_element_value_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 465;
{
    PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57};
    tmp_args_element_value_53 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_args_element_value_57);
Py_DECREF(tmp_args_element_value_57);
if (tmp_args_element_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 465;
tmp_assign_source_123 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_53);
CHECK_OBJECT(tmp_args_element_value_53);
Py_DECREF(tmp_args_element_value_53);
if (tmp_assign_source_123 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_123;
    Py_DECREF(old);
}

}
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_124;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_58;
CHECK_OBJECT(var_line_post);
tmp_called_value_20 = var_line_post;
CHECK_OBJECT(var_line);
tmp_args_element_value_58 = var_line;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 467;
tmp_assign_source_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_58);
if (tmp_assign_source_124 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_124;
    Py_DECREF(old);
}

}
branch_end_11:;
{
nuitka_bool tmp_condition_result_19;
int tmp_or_left_truth_4;
nuitka_bool tmp_or_left_value_4;
nuitka_bool tmp_or_right_value_4;
int tmp_truth_name_19;
int tmp_truth_name_20;
CHECK_OBJECT(var_border_left);
tmp_truth_name_19 = CHECK_IF_TRUE(var_border_left);
if (tmp_truth_name_19 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_4 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(var_border_right);
tmp_truth_name_20 = CHECK_IF_TRUE(var_border_right);
if (tmp_truth_name_20 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_4 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_19 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_condition_result_19 = tmp_or_left_value_4;
or_end_4:;
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_125;
PyObject *tmp_called_value_21;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_59;
tmp_called_value_21 = module_var_accessor_textual$_styles_cache$Style(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 471;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_base_background));
tmp_add_expr_left_7 = Nuitka_Cell_GET(par_base_background);
CHECK_OBJECT(var_border_left_color);
tmp_called_instance_6 = var_border_left_color;
CHECK_OBJECT(Nuitka_Cell_GET(par_opacity));
tmp_args_element_value_59 = Nuitka_Cell_GET(par_opacity);
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 473;
tmp_add_expr_right_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_multiply_alpha, tmp_args_element_value_59);
if (tmp_add_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_right_7);
Py_DECREF(tmp_add_expr_right_7);
if (tmp_kw_call_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 471;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

    tmp_assign_source_125 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_21, kw_values, mod_consts.const_tuple_str_plain_foreground_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_0_4);
if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_style == NULL);
var_left_style = tmp_assign_source_125;
}
{
PyObject *tmp_assign_source_126;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_60;
PyObject *tmp_args_element_value_61;
PyObject *tmp_args_element_value_62;
PyObject *tmp_args_element_value_63;
PyObject *tmp_subscript_value_6;
PyObject *tmp_subscript_value_7;
tmp_called_value_22 = module_var_accessor_textual$_styles_cache$get_box(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_box);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 475;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_border_left);
tmp_args_element_value_60 = var_border_left;
CHECK_OBJECT(var_inner);
tmp_args_element_value_61 = var_inner;
CHECK_OBJECT(var_outer);
tmp_args_element_value_62 = var_outer;
CHECK_OBJECT(var_left_style);
tmp_args_element_value_63 = var_left_style;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 475;
{
    PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63};
    tmp_expression_value_28 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_22, call_args);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = const_int_pos_1;
tmp_expression_value_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_6, 1);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_7 = const_int_0;
tmp_assign_source_126 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_7, 0);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_assign_source_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left == NULL);
var_left = tmp_assign_source_126;
}
{
PyObject *tmp_assign_source_127;
PyObject *tmp_called_value_23;
PyObject *tmp_kw_call_value_0_5;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_64;
tmp_called_value_23 = module_var_accessor_textual$_styles_cache$Style(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 476;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_base_background));
tmp_add_expr_left_8 = Nuitka_Cell_GET(par_base_background);
CHECK_OBJECT(var_border_right_color);
tmp_called_instance_7 = var_border_right_color;
CHECK_OBJECT(Nuitka_Cell_GET(par_opacity));
tmp_args_element_value_64 = Nuitka_Cell_GET(par_opacity);
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 478;
tmp_add_expr_right_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_multiply_alpha, tmp_args_element_value_64);
if (tmp_add_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
CHECK_OBJECT(tmp_add_expr_right_8);
Py_DECREF(tmp_add_expr_right_8);
if (tmp_kw_call_value_0_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 476;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_5};

    tmp_assign_source_127 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_23, kw_values, mod_consts.const_tuple_str_plain_foreground_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_0_5);
if (tmp_assign_source_127 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_style == NULL);
var_right_style = tmp_assign_source_127;
}
{
PyObject *tmp_assign_source_128;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_65;
PyObject *tmp_args_element_value_66;
PyObject *tmp_args_element_value_67;
PyObject *tmp_args_element_value_68;
PyObject *tmp_subscript_value_8;
PyObject *tmp_subscript_value_9;
tmp_called_value_24 = module_var_accessor_textual$_styles_cache$get_box(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_box);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 480;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_border_right);
tmp_args_element_value_65 = var_border_right;
CHECK_OBJECT(var_inner);
tmp_args_element_value_66 = var_inner;
CHECK_OBJECT(var_outer);
tmp_args_element_value_67 = var_outer;
CHECK_OBJECT(var_right_style);
tmp_args_element_value_68 = var_right_style;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 480;
{
    PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68};
    tmp_expression_value_30 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_24, call_args);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_8 = const_int_pos_1;
tmp_expression_value_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_8, 1);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_9 = mod_consts.const_int_pos_2;
tmp_assign_source_128 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_9, 2);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_assign_source_128 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right == NULL);
var_right = tmp_assign_source_128;
}
{
nuitka_bool tmp_condition_result_20;
int tmp_and_left_truth_6;
nuitka_bool tmp_and_left_value_6;
nuitka_bool tmp_and_right_value_6;
int tmp_truth_name_21;
int tmp_truth_name_22;
CHECK_OBJECT(var_border_left);
tmp_truth_name_21 = CHECK_IF_TRUE(var_border_left);
if (tmp_truth_name_21 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_6 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(var_border_right);
tmp_truth_name_22 = CHECK_IF_TRUE(var_border_right);
if (tmp_truth_name_22 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_6 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_20 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_condition_result_20 = tmp_and_left_value_6;
and_end_6:;
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_129;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_left);
tmp_tuple_element_3 = var_left;
tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_3);
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_4;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_line);
tmp_tuple_element_2 = var_line;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_right);
tmp_tuple_element_4 = var_right;
tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_4);
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 2, tmp_tuple_element_2);
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_129 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_assign_source_129 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_129;
    Py_DECREF(old);
}

}
goto branch_end_13;
branch_no_13:;
{
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_23;
CHECK_OBJECT(var_border_left);
tmp_truth_name_23 = CHECK_IF_TRUE(var_border_left);
if (tmp_truth_name_23 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_21 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_130;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_tuple_element_6;
CHECK_OBJECT(var_left);
tmp_tuple_element_6 = var_left;
tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_5, 0, tmp_tuple_element_6);
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_line);
tmp_tuple_element_5 = var_line;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_2, 1, tmp_tuple_element_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_130 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_assign_source_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_130;
    Py_DECREF(old);
}

}
goto branch_end_14;
branch_no_14:;
{
PyObject *tmp_assign_source_131;
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_tuple_element_7;
CHECK_OBJECT(var_line);
tmp_tuple_element_7 = var_line;
tmp_direct_call_arg1_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_8;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_3, 0, tmp_tuple_element_7);
CHECK_OBJECT(var_right);
tmp_tuple_element_8 = var_right;
tmp_tuple_element_7 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_7, 0, tmp_tuple_element_8);
PyTuple_SET_ITEM(tmp_direct_call_arg1_3, 1, tmp_tuple_element_7);
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_131 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_assign_source_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_131;
    Py_DECREF(old);
}

}
branch_end_14:;
branch_end_13:;
branch_no_12:;
branch_end_4:;
branch_end_1:;
{
nuitka_bool tmp_condition_result_22;
int tmp_or_left_truth_5;
nuitka_bool tmp_or_left_value_5;
nuitka_bool tmp_or_right_value_5;
int tmp_and_left_truth_7;
nuitka_bool tmp_and_left_value_7;
nuitka_bool tmp_and_right_value_7;
int tmp_truth_name_24;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
int tmp_and_left_truth_8;
nuitka_bool tmp_and_left_value_8;
nuitka_bool tmp_and_right_value_8;
int tmp_truth_name_25;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_sub_expr_left_9;
PyObject *tmp_sub_expr_right_9;
CHECK_OBJECT(var_outline_top);
tmp_truth_name_24 = CHECK_IF_TRUE(var_outline_top);
if (tmp_truth_name_24 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_7 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_12 = par_y;
tmp_cmp_expr_right_12 = const_int_0;
tmp_and_right_value_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_and_right_value_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_5 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
tmp_or_left_value_5 = tmp_and_left_value_7;
and_end_7:;
tmp_or_left_truth_5 = tmp_or_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_5 == 1) {
    goto or_left_5;
} else {
    goto or_right_5;
}
or_right_5:;
CHECK_OBJECT(var_outline_bottom);
tmp_truth_name_25 = CHECK_IF_TRUE(var_outline_bottom);
if (tmp_truth_name_25 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_8 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_8 = tmp_and_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_8 == 1) {
    goto and_right_8;
} else {
    goto and_left_8;
}
and_right_8:;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_13 = par_y;
CHECK_OBJECT(var_height);
tmp_sub_expr_left_9 = var_height;
tmp_sub_expr_right_9 = const_int_pos_1;
tmp_cmp_expr_right_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
if (tmp_cmp_expr_right_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
CHECK_OBJECT(tmp_cmp_expr_right_13);
Py_DECREF(tmp_cmp_expr_right_13);
if (tmp_and_right_value_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_5 = tmp_and_right_value_8;
goto and_end_8;
and_left_8:;
tmp_or_right_value_5 = tmp_and_left_value_8;
and_end_8:;
tmp_condition_result_22 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_condition_result_22 = tmp_or_left_value_5;
or_end_5:;
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_132;
nuitka_bool tmp_condition_result_23;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_14 = par_y;
tmp_cmp_expr_right_14 = const_int_0;
tmp_condition_result_23 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(var_outline_top_color);
tmp_assign_source_132 = var_outline_top_color;
goto condexpr_end_8;
condexpr_false_8:;
CHECK_OBJECT(var_outline_bottom_color);
tmp_assign_source_132 = var_outline_bottom_color;
condexpr_end_8:;
assert(var_outline_color == NULL);
Py_INCREF(tmp_assign_source_132);
var_outline_color = tmp_assign_source_132;
}
{
PyObject *tmp_assign_source_133;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_69;
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
PyObject *tmp_args_element_value_70;
PyObject *tmp_args_element_value_71;
PyObject *tmp_args_element_value_72;
PyObject *tmp_called_value_26;
PyObject *tmp_kw_call_value_0_6;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
tmp_called_value_25 = module_var_accessor_textual$_styles_cache$get_box(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_box);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 493;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_15 = par_y;
tmp_cmp_expr_right_15 = const_int_0;
tmp_condition_result_24 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(var_outline_top);
tmp_args_element_value_69 = var_outline_top;
goto condexpr_end_9;
condexpr_false_9:;
CHECK_OBJECT(var_outline_bottom);
tmp_args_element_value_69 = var_outline_bottom;
condexpr_end_9:;
CHECK_OBJECT(var_inner);
tmp_args_element_value_70 = var_inner;
CHECK_OBJECT(var_outer);
tmp_args_element_value_71 = var_outer;
tmp_called_value_26 = module_var_accessor_textual$_styles_cache$Style(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 497;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_base_background));
tmp_add_expr_left_9 = Nuitka_Cell_GET(par_base_background);
CHECK_OBJECT(var_outline_color);
tmp_add_expr_right_9 = var_outline_color;
tmp_kw_call_value_0_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
if (tmp_kw_call_value_0_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 497;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_6};

    tmp_args_element_value_72 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_26, kw_values, mod_consts.const_tuple_str_plain_foreground_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_6);
Py_DECREF(tmp_kw_call_value_0_6);
if (tmp_args_element_value_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 493;
{
    PyObject *call_args[] = {tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
    tmp_assign_source_133 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_25, call_args);
}

CHECK_OBJECT(tmp_args_element_value_72);
Py_DECREF(tmp_args_element_value_72);
if (tmp_assign_source_133 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_box_segments;
    var_box_segments = tmp_assign_source_133;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_134;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_73;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_10;
nuitka_bool tmp_condition_result_25;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
PyObject *tmp_args_element_value_74;
PyObject *tmp_args_element_value_75;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
PyObject *tmp_args_element_value_76;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
PyObject *tmp_args_element_value_77;
tmp_called_value_27 = module_var_accessor_textual$_styles_cache$render_row(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_render_row);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 499;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_box_segments);
tmp_expression_value_31 = var_box_segments;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_16 = par_y;
tmp_cmp_expr_right_16 = const_int_0;
tmp_condition_result_25 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
tmp_subscript_value_10 = const_int_0;
goto condexpr_end_10;
condexpr_false_10:;
tmp_subscript_value_10 = mod_consts.const_int_pos_2;
condexpr_end_10:;
tmp_args_element_value_73 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_10);
if (tmp_args_element_value_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_width);
tmp_args_element_value_74 = var_width;
CHECK_OBJECT(var_outline_left);
tmp_cmp_expr_left_17 = var_outline_left;
tmp_cmp_expr_right_17 = const_str_empty;
tmp_args_element_value_75 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_args_element_value_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_73);

exception_lineno = 502;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_outline_right);
tmp_cmp_expr_left_18 = var_outline_right;
tmp_cmp_expr_right_18 = const_str_empty;
tmp_args_element_value_76 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_args_element_value_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_73);
Py_DECREF(tmp_args_element_value_75);

exception_lineno = 503;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_77 = const_tuple_empty;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 499;
{
    PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77};
    tmp_assign_source_134 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_27, call_args);
}

CHECK_OBJECT(tmp_args_element_value_73);
Py_DECREF(tmp_args_element_value_73);
CHECK_OBJECT(tmp_args_element_value_75);
Py_DECREF(tmp_args_element_value_75);
CHECK_OBJECT(tmp_args_element_value_76);
Py_DECREF(tmp_args_element_value_76);
if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_134;
    Py_DECREF(old);
}

}
goto branch_end_15;
branch_no_15:;
{
nuitka_bool tmp_condition_result_26;
int tmp_or_left_truth_6;
nuitka_bool tmp_or_left_value_6;
nuitka_bool tmp_or_right_value_6;
int tmp_truth_name_26;
int tmp_truth_name_27;
CHECK_OBJECT(var_outline_left);
tmp_truth_name_26 = CHECK_IF_TRUE(var_outline_left);
if (tmp_truth_name_26 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_6 = tmp_truth_name_26 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_6 = tmp_or_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_6 == 1) {
    goto or_left_6;
} else {
    goto or_right_6;
}
or_right_6:;
CHECK_OBJECT(var_outline_right);
tmp_truth_name_27 = CHECK_IF_TRUE(var_outline_right);
if (tmp_truth_name_27 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_6 = tmp_truth_name_27 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_26 = tmp_or_right_value_6;
goto or_end_6;
or_left_6:;
tmp_condition_result_26 = tmp_or_left_value_6;
or_end_6:;
if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_135;
PyObject *tmp_called_value_28;
PyObject *tmp_kw_call_value_0_7;
PyObject *tmp_add_expr_left_10;
PyObject *tmp_add_expr_right_10;
tmp_called_value_28 = module_var_accessor_textual$_styles_cache$Style(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 509;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_base_background));
tmp_add_expr_left_10 = Nuitka_Cell_GET(par_base_background);
CHECK_OBJECT(var_outline_left_color);
tmp_add_expr_right_10 = var_outline_left_color;
tmp_kw_call_value_0_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
if (tmp_kw_call_value_0_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 509;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_7};

    tmp_assign_source_135 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_28, kw_values, mod_consts.const_tuple_str_plain_foreground_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_7);
Py_DECREF(tmp_kw_call_value_0_7);
if (tmp_assign_source_135 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_left_style;
    var_left_style = tmp_assign_source_135;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_136;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_78;
PyObject *tmp_args_element_value_79;
PyObject *tmp_args_element_value_80;
PyObject *tmp_args_element_value_81;
PyObject *tmp_subscript_value_11;
PyObject *tmp_subscript_value_12;
tmp_called_value_29 = module_var_accessor_textual$_styles_cache$get_box(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_box);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 510;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_outline_left);
tmp_args_element_value_78 = var_outline_left;
CHECK_OBJECT(var_inner);
tmp_args_element_value_79 = var_inner;
CHECK_OBJECT(var_outer);
tmp_args_element_value_80 = var_outer;
CHECK_OBJECT(var_left_style);
tmp_args_element_value_81 = var_left_style;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 510;
{
    PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
    tmp_expression_value_33 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_29, call_args);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_11 = const_int_pos_1;
tmp_expression_value_32 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_11, 1);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_12 = const_int_0;
tmp_assign_source_136 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_12, 0);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_assign_source_136 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_left;
    var_left = tmp_assign_source_136;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_137;
PyObject *tmp_called_value_30;
PyObject *tmp_kw_call_value_0_8;
PyObject *tmp_add_expr_left_11;
PyObject *tmp_add_expr_right_11;
tmp_called_value_30 = module_var_accessor_textual$_styles_cache$Style(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 511;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_base_background));
tmp_add_expr_left_11 = Nuitka_Cell_GET(par_base_background);
CHECK_OBJECT(var_outline_right_color);
tmp_add_expr_right_11 = var_outline_right_color;
tmp_kw_call_value_0_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
if (tmp_kw_call_value_0_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 511;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_8};

    tmp_assign_source_137 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_30, kw_values, mod_consts.const_tuple_str_plain_foreground_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_8);
Py_DECREF(tmp_kw_call_value_0_8);
if (tmp_assign_source_137 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_right_style;
    var_right_style = tmp_assign_source_137;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_138;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_82;
PyObject *tmp_args_element_value_83;
PyObject *tmp_args_element_value_84;
PyObject *tmp_args_element_value_85;
PyObject *tmp_subscript_value_13;
PyObject *tmp_subscript_value_14;
tmp_called_value_31 = module_var_accessor_textual$_styles_cache$get_box(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_box);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 512;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_outline_right);
tmp_args_element_value_82 = var_outline_right;
CHECK_OBJECT(var_inner);
tmp_args_element_value_83 = var_inner;
CHECK_OBJECT(var_outer);
tmp_args_element_value_84 = var_outer;
CHECK_OBJECT(var_right_style);
tmp_args_element_value_85 = var_right_style;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 512;
{
    PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_84, tmp_args_element_value_85};
    tmp_expression_value_35 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_31, call_args);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_13 = const_int_pos_1;
tmp_expression_value_34 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_13, 1);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_14 = mod_consts.const_int_pos_2;
tmp_assign_source_138 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_14, 2);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_assign_source_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_right;
    var_right = tmp_assign_source_138;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_139;
PyObject *tmp_called_value_32;
PyObject *tmp_args_element_value_86;
PyObject *tmp_list_arg_1;
PyObject *tmp_args_element_value_87;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
PyObject *tmp_args_element_value_88;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
tmp_called_value_32 = module_var_accessor_textual$_styles_cache$line_trim(tstate);
if (unlikely(tmp_called_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_line_trim);
}

if (tmp_called_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 513;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_line);
tmp_list_arg_1 = var_line;
tmp_args_element_value_86 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_args_element_value_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_outline_left);
tmp_cmp_expr_left_19 = var_outline_left;
tmp_cmp_expr_right_19 = const_str_empty;
tmp_args_element_value_87 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
if (tmp_args_element_value_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_86);

exception_lineno = 513;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_outline_right);
tmp_cmp_expr_left_20 = var_outline_right;
tmp_cmp_expr_right_20 = const_str_empty;
tmp_args_element_value_88 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
if (tmp_args_element_value_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_86);
Py_DECREF(tmp_args_element_value_87);

exception_lineno = 513;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 513;
{
    PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88};
    tmp_assign_source_139 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_32, call_args);
}

CHECK_OBJECT(tmp_args_element_value_86);
Py_DECREF(tmp_args_element_value_86);
CHECK_OBJECT(tmp_args_element_value_87);
Py_DECREF(tmp_args_element_value_87);
CHECK_OBJECT(tmp_args_element_value_88);
Py_DECREF(tmp_args_element_value_88);
if (tmp_assign_source_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_139;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_27;
int tmp_and_left_truth_9;
nuitka_bool tmp_and_left_value_9;
nuitka_bool tmp_and_right_value_9;
int tmp_truth_name_28;
int tmp_truth_name_29;
CHECK_OBJECT(var_outline_left);
tmp_truth_name_28 = CHECK_IF_TRUE(var_outline_left);
if (tmp_truth_name_28 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_9 = tmp_truth_name_28 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_9 = tmp_and_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_9 == 1) {
    goto and_right_9;
} else {
    goto and_left_9;
}
and_right_9:;
CHECK_OBJECT(var_outline_right);
tmp_truth_name_29 = CHECK_IF_TRUE(var_outline_right);
if (tmp_truth_name_29 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_9 = tmp_truth_name_29 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_27 = tmp_and_right_value_9;
goto and_end_9;
and_left_9:;
tmp_condition_result_27 = tmp_and_left_value_9;
and_end_9:;
if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assign_source_140;
PyObject *tmp_direct_call_arg1_4;
PyObject *tmp_tuple_element_9;
PyObject *tmp_tuple_element_10;
CHECK_OBJECT(var_left);
tmp_tuple_element_10 = var_left;
tmp_tuple_element_9 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_9, 0, tmp_tuple_element_10);
tmp_direct_call_arg1_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_11;
PyTuple_SET_ITEM(tmp_direct_call_arg1_4, 0, tmp_tuple_element_9);
CHECK_OBJECT(var_line);
tmp_tuple_element_9 = var_line;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_4, 1, tmp_tuple_element_9);
CHECK_OBJECT(var_right);
tmp_tuple_element_11 = var_right;
tmp_tuple_element_9 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_9, 0, tmp_tuple_element_11);
PyTuple_SET_ITEM(tmp_direct_call_arg1_4, 2, tmp_tuple_element_9);
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_140 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_assign_source_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_140;
    Py_DECREF(old);
}

}
goto branch_end_17;
branch_no_17:;
{
nuitka_bool tmp_condition_result_28;
int tmp_truth_name_30;
CHECK_OBJECT(var_outline_left);
tmp_truth_name_30 = CHECK_IF_TRUE(var_outline_left);
if (tmp_truth_name_30 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_28 = tmp_truth_name_30 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assign_source_141;
PyObject *tmp_direct_call_arg1_5;
PyObject *tmp_tuple_element_12;
PyObject *tmp_tuple_element_13;
CHECK_OBJECT(var_left);
tmp_tuple_element_13 = var_left;
tmp_tuple_element_12 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_12, 0, tmp_tuple_element_13);
tmp_direct_call_arg1_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_direct_call_arg1_5, 0, tmp_tuple_element_12);
CHECK_OBJECT(var_line);
tmp_tuple_element_12 = var_line;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_5, 1, tmp_tuple_element_12);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_141 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_assign_source_141 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_141;
    Py_DECREF(old);
}

}
goto branch_end_18;
branch_no_18:;
{
PyObject *tmp_assign_source_142;
PyObject *tmp_direct_call_arg1_6;
PyObject *tmp_tuple_element_14;
CHECK_OBJECT(var_line);
tmp_tuple_element_14 = var_line;
tmp_direct_call_arg1_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_15;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_6, 0, tmp_tuple_element_14);
CHECK_OBJECT(var_right);
tmp_tuple_element_15 = var_right;
tmp_tuple_element_14 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_14, 0, tmp_tuple_element_15);
PyTuple_SET_ITEM(tmp_direct_call_arg1_6, 1, tmp_tuple_element_14);
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_142 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_142;
    Py_DECREF(old);
}

}
branch_end_18:;
branch_end_17:;
branch_no_16:;
branch_end_15:;
{
PyObject *tmp_assign_source_143;
PyObject *tmp_called_value_33;
PyObject *tmp_args_element_value_89;
PyObject *tmp_called_value_34;
PyObject *tmp_args_element_value_90;
PyObject *tmp_args_element_value_91;
tmp_called_value_33 = module_var_accessor_textual$_styles_cache$Strip(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Strip);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 520;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_post);
tmp_called_value_34 = var_post;
CHECK_OBJECT(var_line);
tmp_args_element_value_90 = var_line;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 520;
tmp_args_element_value_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_90);
if (tmp_args_element_value_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_width);
tmp_args_element_value_91 = var_width;
frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame.f_lineno = 520;
{
    PyObject *call_args[] = {tmp_args_element_value_89, tmp_args_element_value_91};
    tmp_assign_source_143 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_33, call_args);
}

CHECK_OBJECT(tmp_args_element_value_89);
Py_DECREF(tmp_args_element_value_89);
if (tmp_assign_source_143 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_strip == NULL);
var_strip = tmp_assign_source_143;
}
{
bool tmp_condition_result_29;
assert(var_cache_simple_strip != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_29 = var_cache_simple_strip == NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_strip);
tmp_assattr_value_1 = var_strip;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__simple_strip, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "ocooooccooocooboooooooooooooooooooooooooocooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_19:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache$$$function__9_render_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_styles_cache$$$function__9_render_line->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache$$$function__9_render_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_styles_cache$$$function__9_render_line,
    type_description_1,
    par_self,
    par_styles,
    par_y,
    par_size,
    par_content_size,
    par_padding,
    par_base_background,
    par_background,
    par_render_content_line,
    par_border_title,
    par_border_subtitle,
    par_opacity,
    par_ansi_theme,
    par_native_ansi,
    (int)var_cache_simple_strip,
    var_line,
    var_gutter,
    var_width,
    var_height,
    var_content_width,
    var_content_height,
    var_pad_top,
    var_pad_right,
    var_pad_bottom,
    var_pad_left,
    var_border_top,
    var_border_top_color,
    var_border_right,
    var_border_right_color,
    var_border_bottom,
    var_border_bottom_color,
    var_border_left,
    var_border_left_color,
    var_outline_top,
    var_outline_top_color,
    var_outline_right,
    var_outline_right_color,
    var_outline_bottom,
    var_outline_bottom_color,
    var_outline_left,
    var_outline_left_color,
    var_from_color,
    var_inner,
    var_outer,
    var_line_post,
    var_post,
    var_is_top,
    var_border_color,
    var_border_color_as_style,
    var_border_edge_type,
    var_has_left,
    var_has_right,
    var_border_label,
    var_render_label,
    var_label,
    var_label_color,
    var_label_background,
    var_style,
    var_base_label_background,
    var_label_segments,
    var_box_segments,
    var_label_alignment,
    var_background_rich_style,
    var_left_style,
    var_left,
    var_right_style,
    var_right,
    var_content_y,
    var_text_opacity,
    var_outline_color,
    var_strip
);


// Release cached frame if used for exception.
if (frame_frame_textual$_styles_cache$$$function__9_render_line == cache_frame_frame_textual$_styles_cache$$$function__9_render_line) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_styles_cache$$$function__9_render_line);
    cache_frame_frame_textual$_styles_cache$$$function__9_render_line = NULL;
}

assertFrameObject(frame_frame_textual$_styles_cache$$$function__9_render_line);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_strip);
tmp_return_value = var_strip;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_styles);
CHECK_OBJECT(par_styles);
Py_DECREF(par_styles);
par_styles = NULL;
CHECK_OBJECT(par_base_background);
CHECK_OBJECT(par_base_background);
Py_DECREF(par_base_background);
par_base_background = NULL;
CHECK_OBJECT(par_background);
CHECK_OBJECT(par_background);
Py_DECREF(par_background);
par_background = NULL;
CHECK_OBJECT(par_opacity);
CHECK_OBJECT(par_opacity);
Py_DECREF(par_opacity);
par_opacity = NULL;
assert(var_cache_simple_strip != NUITKA_BOOL_UNASSIGNED);
var_cache_simple_strip = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_line);
var_line = NULL;
CHECK_OBJECT(var_gutter);
CHECK_OBJECT(var_gutter);
Py_DECREF(var_gutter);
var_gutter = NULL;
CHECK_OBJECT(var_width);
CHECK_OBJECT(var_width);
Py_DECREF(var_width);
var_width = NULL;
CHECK_OBJECT(var_height);
CHECK_OBJECT(var_height);
Py_DECREF(var_height);
var_height = NULL;
CHECK_OBJECT(var_content_width);
CHECK_OBJECT(var_content_width);
Py_DECREF(var_content_width);
var_content_width = NULL;
CHECK_OBJECT(var_content_height);
CHECK_OBJECT(var_content_height);
Py_DECREF(var_content_height);
var_content_height = NULL;
CHECK_OBJECT(var_pad_top);
CHECK_OBJECT(var_pad_top);
Py_DECREF(var_pad_top);
var_pad_top = NULL;
CHECK_OBJECT(var_pad_right);
CHECK_OBJECT(var_pad_right);
Py_DECREF(var_pad_right);
var_pad_right = NULL;
CHECK_OBJECT(var_pad_bottom);
CHECK_OBJECT(var_pad_bottom);
Py_DECREF(var_pad_bottom);
var_pad_bottom = NULL;
CHECK_OBJECT(var_pad_left);
CHECK_OBJECT(var_pad_left);
Py_DECREF(var_pad_left);
var_pad_left = NULL;
CHECK_OBJECT(var_border_top);
CHECK_OBJECT(var_border_top);
Py_DECREF(var_border_top);
var_border_top = NULL;
CHECK_OBJECT(var_border_top_color);
CHECK_OBJECT(var_border_top_color);
Py_DECREF(var_border_top_color);
var_border_top_color = NULL;
CHECK_OBJECT(var_border_right);
CHECK_OBJECT(var_border_right);
Py_DECREF(var_border_right);
var_border_right = NULL;
CHECK_OBJECT(var_border_right_color);
CHECK_OBJECT(var_border_right_color);
Py_DECREF(var_border_right_color);
var_border_right_color = NULL;
CHECK_OBJECT(var_border_bottom);
CHECK_OBJECT(var_border_bottom);
Py_DECREF(var_border_bottom);
var_border_bottom = NULL;
CHECK_OBJECT(var_border_bottom_color);
CHECK_OBJECT(var_border_bottom_color);
Py_DECREF(var_border_bottom_color);
var_border_bottom_color = NULL;
CHECK_OBJECT(var_border_left);
CHECK_OBJECT(var_border_left);
Py_DECREF(var_border_left);
var_border_left = NULL;
CHECK_OBJECT(var_border_left_color);
CHECK_OBJECT(var_border_left_color);
Py_DECREF(var_border_left_color);
var_border_left_color = NULL;
CHECK_OBJECT(var_outline_top);
CHECK_OBJECT(var_outline_top);
Py_DECREF(var_outline_top);
var_outline_top = NULL;
CHECK_OBJECT(var_outline_top_color);
CHECK_OBJECT(var_outline_top_color);
Py_DECREF(var_outline_top_color);
var_outline_top_color = NULL;
CHECK_OBJECT(var_outline_right);
CHECK_OBJECT(var_outline_right);
Py_DECREF(var_outline_right);
var_outline_right = NULL;
CHECK_OBJECT(var_outline_right_color);
CHECK_OBJECT(var_outline_right_color);
Py_DECREF(var_outline_right_color);
var_outline_right_color = NULL;
CHECK_OBJECT(var_outline_bottom);
CHECK_OBJECT(var_outline_bottom);
Py_DECREF(var_outline_bottom);
var_outline_bottom = NULL;
CHECK_OBJECT(var_outline_bottom_color);
CHECK_OBJECT(var_outline_bottom_color);
Py_DECREF(var_outline_bottom_color);
var_outline_bottom_color = NULL;
CHECK_OBJECT(var_outline_left);
CHECK_OBJECT(var_outline_left);
Py_DECREF(var_outline_left);
var_outline_left = NULL;
CHECK_OBJECT(var_outline_left_color);
CHECK_OBJECT(var_outline_left_color);
Py_DECREF(var_outline_left_color);
var_outline_left_color = NULL;
CHECK_OBJECT(var_from_color);
CHECK_OBJECT(var_from_color);
Py_DECREF(var_from_color);
var_from_color = NULL;
CHECK_OBJECT(var_inner);
CHECK_OBJECT(var_inner);
Py_DECREF(var_inner);
var_inner = NULL;
CHECK_OBJECT(var_outer);
CHECK_OBJECT(var_outer);
Py_DECREF(var_outer);
var_outer = NULL;
CHECK_OBJECT(var_line_post);
CHECK_OBJECT(var_line_post);
Py_DECREF(var_line_post);
var_line_post = NULL;
CHECK_OBJECT(var_post);
CHECK_OBJECT(var_post);
Py_DECREF(var_post);
var_post = NULL;
Py_XDECREF(var_is_top);
var_is_top = NULL;
Py_XDECREF(var_border_color);
var_border_color = NULL;
Py_XDECREF(var_border_color_as_style);
var_border_color_as_style = NULL;
Py_XDECREF(var_border_edge_type);
var_border_edge_type = NULL;
Py_XDECREF(var_has_left);
var_has_left = NULL;
Py_XDECREF(var_has_right);
var_has_right = NULL;
Py_XDECREF(var_border_label);
var_border_label = NULL;
Py_XDECREF(var_render_label);
var_render_label = NULL;
Py_XDECREF(var_label);
var_label = NULL;
Py_XDECREF(var_label_color);
var_label_color = NULL;
Py_XDECREF(var_label_background);
var_label_background = NULL;
Py_XDECREF(var_style);
var_style = NULL;
Py_XDECREF(var_base_label_background);
var_base_label_background = NULL;
Py_XDECREF(var_label_segments);
var_label_segments = NULL;
Py_XDECREF(var_box_segments);
var_box_segments = NULL;
Py_XDECREF(var_label_alignment);
var_label_alignment = NULL;
Py_XDECREF(var_background_rich_style);
var_background_rich_style = NULL;
Py_XDECREF(var_left_style);
var_left_style = NULL;
Py_XDECREF(var_left);
var_left = NULL;
Py_XDECREF(var_right_style);
var_right_style = NULL;
Py_XDECREF(var_right);
var_right = NULL;
Py_XDECREF(var_content_y);
var_content_y = NULL;
Py_XDECREF(var_text_opacity);
var_text_opacity = NULL;
Py_XDECREF(var_outline_color);
var_outline_color = NULL;
Py_XDECREF(var_strip);
var_strip = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_styles);
CHECK_OBJECT(par_styles);
Py_DECREF(par_styles);
par_styles = NULL;
CHECK_OBJECT(par_base_background);
CHECK_OBJECT(par_base_background);
Py_DECREF(par_base_background);
par_base_background = NULL;
CHECK_OBJECT(par_background);
CHECK_OBJECT(par_background);
Py_DECREF(par_background);
par_background = NULL;
CHECK_OBJECT(par_opacity);
CHECK_OBJECT(par_opacity);
Py_DECREF(par_opacity);
par_opacity = NULL;
var_cache_simple_strip = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_line);
var_line = NULL;
Py_XDECREF(var_gutter);
var_gutter = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_height);
var_height = NULL;
Py_XDECREF(var_content_width);
var_content_width = NULL;
Py_XDECREF(var_content_height);
var_content_height = NULL;
Py_XDECREF(var_pad_top);
var_pad_top = NULL;
Py_XDECREF(var_pad_right);
var_pad_right = NULL;
Py_XDECREF(var_pad_bottom);
var_pad_bottom = NULL;
Py_XDECREF(var_pad_left);
var_pad_left = NULL;
Py_XDECREF(var_border_top);
var_border_top = NULL;
Py_XDECREF(var_border_top_color);
var_border_top_color = NULL;
Py_XDECREF(var_border_right);
var_border_right = NULL;
Py_XDECREF(var_border_right_color);
var_border_right_color = NULL;
Py_XDECREF(var_border_bottom);
var_border_bottom = NULL;
Py_XDECREF(var_border_bottom_color);
var_border_bottom_color = NULL;
Py_XDECREF(var_border_left);
var_border_left = NULL;
Py_XDECREF(var_border_left_color);
var_border_left_color = NULL;
Py_XDECREF(var_outline_top);
var_outline_top = NULL;
Py_XDECREF(var_outline_top_color);
var_outline_top_color = NULL;
Py_XDECREF(var_outline_right);
var_outline_right = NULL;
Py_XDECREF(var_outline_right_color);
var_outline_right_color = NULL;
Py_XDECREF(var_outline_bottom);
var_outline_bottom = NULL;
Py_XDECREF(var_outline_bottom_color);
var_outline_bottom_color = NULL;
Py_XDECREF(var_outline_left);
var_outline_left = NULL;
Py_XDECREF(var_outline_left_color);
var_outline_left_color = NULL;
CHECK_OBJECT(var_from_color);
CHECK_OBJECT(var_from_color);
Py_DECREF(var_from_color);
var_from_color = NULL;
Py_XDECREF(var_inner);
var_inner = NULL;
Py_XDECREF(var_outer);
var_outer = NULL;
Py_XDECREF(var_line_post);
var_line_post = NULL;
Py_XDECREF(var_post);
var_post = NULL;
Py_XDECREF(var_is_top);
var_is_top = NULL;
Py_XDECREF(var_border_color);
var_border_color = NULL;
Py_XDECREF(var_border_color_as_style);
var_border_color_as_style = NULL;
Py_XDECREF(var_border_edge_type);
var_border_edge_type = NULL;
Py_XDECREF(var_has_left);
var_has_left = NULL;
Py_XDECREF(var_has_right);
var_has_right = NULL;
Py_XDECREF(var_border_label);
var_border_label = NULL;
Py_XDECREF(var_render_label);
var_render_label = NULL;
Py_XDECREF(var_label);
var_label = NULL;
Py_XDECREF(var_label_color);
var_label_color = NULL;
Py_XDECREF(var_label_background);
var_label_background = NULL;
Py_XDECREF(var_style);
var_style = NULL;
Py_XDECREF(var_base_label_background);
var_base_label_background = NULL;
Py_XDECREF(var_label_segments);
var_label_segments = NULL;
Py_XDECREF(var_box_segments);
var_box_segments = NULL;
Py_XDECREF(var_label_alignment);
var_label_alignment = NULL;
Py_XDECREF(var_background_rich_style);
var_background_rich_style = NULL;
Py_XDECREF(var_left_style);
var_left_style = NULL;
Py_XDECREF(var_left);
var_left = NULL;
Py_XDECREF(var_right_style);
var_right_style = NULL;
Py_XDECREF(var_right);
var_right = NULL;
Py_XDECREF(var_content_y);
var_content_y = NULL;
Py_XDECREF(var_text_opacity);
var_text_opacity = NULL;
Py_XDECREF(var_outline_color);
var_outline_color = NULL;
Py_XDECREF(var_strip);
var_strip = NULL;
// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
CHECK_OBJECT(par_content_size);
Py_DECREF(par_content_size);
CHECK_OBJECT(par_padding);
Py_DECREF(par_padding);
CHECK_OBJECT(par_render_content_line);
Py_DECREF(par_render_content_line);
CHECK_OBJECT(par_border_title);
Py_DECREF(par_border_title);
CHECK_OBJECT(par_border_subtitle);
Py_DECREF(par_border_subtitle);
CHECK_OBJECT(par_ansi_theme);
Py_DECREF(par_ansi_theme);
CHECK_OBJECT(par_native_ansi);
Py_DECREF(par_native_ansi);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
CHECK_OBJECT(par_content_size);
Py_DECREF(par_content_size);
CHECK_OBJECT(par_padding);
Py_DECREF(par_padding);
CHECK_OBJECT(par_render_content_line);
Py_DECREF(par_render_content_line);
CHECK_OBJECT(par_border_title);
Py_DECREF(par_border_title);
CHECK_OBJECT(par_border_subtitle);
Py_DECREF(par_border_subtitle);
CHECK_OBJECT(par_ansi_theme);
Py_DECREF(par_ansi_theme);
CHECK_OBJECT(par_native_ansi);
Py_DECREF(par_native_ansi);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_segments = python_pars[0];
PyObject *var_character = NULL;
PyObject *var_color = NULL;
PyObject *var_hatch_style = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post)) {
    Py_XDECREF(cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post = MAKE_FUNCTION_FRAME(tstate, code_objects_8d18eee0891f416fcc4f63d89785f31c, module_textual$_styles_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post->m_type_description == NULL);
frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post = cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post);
assert(Py_REFCNT(frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_styles);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 330;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[2]);
frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post->m_frame.f_lineno = 330;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_has_rule,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_hatch_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 330;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_styles);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 330;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_hatch);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_none;
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_styles);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 331;
type_description_1 = "ooooccc";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_hatch);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooccc";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooccc";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "ooooccc";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "ooooccc";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "ooooccc";
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
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_character == NULL);
Py_INCREF(tmp_assign_source_4);
var_character = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_color == NULL);
Py_INCREF(tmp_assign_source_5);
var_color = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_character);
tmp_cmp_expr_left_2 = var_character;
tmp_cmp_expr_right_2 = mod_consts.const_str_space;
tmp_and_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_color);
tmp_expression_value_3 = var_color;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_a);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_0;
tmp_and_right_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_2 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_from_color);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 333;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_background);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 334;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(var_color);
tmp_add_expr_right_1 = var_color;
tmp_expression_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_rich_color);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_background);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 334;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_rich_color);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 334;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post->m_frame.f_lineno = 333;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
assert(var_hatch_style == NULL);
var_hatch_style = tmp_assign_source_6;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_textual$_styles_cache$apply_hatch(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_apply_hatch);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 336;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_segments);
tmp_args_element_value_3 = par_segments;
CHECK_OBJECT(var_character);
tmp_args_element_value_4 = var_character;
CHECK_OBJECT(var_hatch_style);
tmp_args_element_value_5 = var_hatch_style;
frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post->m_frame.f_lineno = 336;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post,
    type_description_1,
    par_segments,
    var_character,
    var_color,
    var_hatch_style,
    self->m_closure[2],
    self->m_closure[1],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post == cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post);
    cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post = NULL;
}

assertFrameObject(frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_segments);
tmp_return_value = par_segments;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_character);
var_character = NULL;
Py_XDECREF(var_color);
var_color = NULL;
Py_XDECREF(var_hatch_style);
var_hatch_style = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_character);
var_character = NULL;
Py_XDECREF(var_color);
var_color = NULL;
Py_XDECREF(var_hatch_style);
var_hatch_style = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_segments);
Py_DECREF(par_segments);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_segments);
Py_DECREF(par_segments);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_styles_cache$$$function__9_render_line$$$function__2_post(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_segments = python_pars[0];
PyObject *var_app = NULL;
PyObject *var_ansi_theme = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post)) {
    Py_XDECREF(cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post = MAKE_FUNCTION_FRAME(tstate, code_objects_c3236fe118fcb40d8af70b3d41c841e8, module_textual$_styles_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post->m_type_description == NULL);
frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post = cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post);
assert(Py_REFCNT(frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_textual$_styles_cache$active_app(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_active_app);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 349;
type_description_1 = "ooocccc";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooocccc";
    goto try_except_handler_2;
}
frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post->m_frame.f_lineno = 349;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooocccc";
    goto try_except_handler_2;
}
assert(var_app == NULL);
var_app = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_app);
tmp_expression_value_2 = var_app;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ansi_theme);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooocccc";
    goto try_except_handler_2;
}
assert(var_ansi_theme == NULL);
var_ansi_theme = tmp_assign_source_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_LookupError;
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
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = module_var_accessor_textual$_styles_cache$DEFAULT_TERMINAL_THEME(tstate);
if (unlikely(tmp_assign_source_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "ooocccc";
    goto try_except_handler_3;
}
assert(var_ansi_theme == NULL);
Py_INCREF(tmp_assign_source_3);
var_ansi_theme = tmp_assign_source_3;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 348;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post->m_frame)) {
        frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooocccc";
goto try_except_handler_3;
branch_end_1:;
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_styles);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 354;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[3]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_tint);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_a);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 354;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_5 = module_var_accessor_textual$_styles_cache$Tint(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tint);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_process_segments);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_segments);
tmp_args_element_value_1 = par_segments;
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_styles);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 356;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[3]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_tint);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 356;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ansi_theme);
tmp_args_element_value_3 = var_ansi_theme;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_background);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 356;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post->m_frame.f_lineno = 355;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_segments;
    assert(old != NULL);
    par_segments = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_opacity);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 358;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(self->m_closure[2]);
tmp_cmp_expr_right_2 = const_float_1_0;
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "ooocccc";
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_textual$_styles_cache$_apply_opacity(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__apply_opacity);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_segments);
tmp_args_element_value_5 = par_segments;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_background);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 359;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(self->m_closure[1]);
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_opacity);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 359;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = Nuitka_Cell_GET(self->m_closure[2]);
frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post->m_frame.f_lineno = 359;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_segments;
    assert(old != NULL);
    par_segments = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post,
    type_description_1,
    par_segments,
    var_app,
    var_ansi_theme,
    self->m_closure[3],
    self->m_closure[0],
    self->m_closure[2],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post == cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post);
    cache_frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post = NULL;
}

assertFrameObject(frame_frame_textual$_styles_cache$$$function__9_render_line$$$function__2_post);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_segments);
tmp_return_value = par_segments;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_segments);
CHECK_OBJECT(par_segments);
Py_DECREF(par_segments);
par_segments = NULL;
Py_XDECREF(var_app);
var_app = NULL;
CHECK_OBJECT(var_ansi_theme);
CHECK_OBJECT(var_ansi_theme);
Py_DECREF(var_ansi_theme);
var_ansi_theme = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_segments);
par_segments = NULL;
Py_XDECREF(var_app);
var_app = NULL;
Py_XDECREF(var_ansi_theme);
var_ansi_theme = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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



static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_styles_cache$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2875329554abf2c87f2b3dadcd0225c5,
#endif
        code_objects_c4b6c6ee4f3d6d2d5a01b58fc74a6d3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_styles_cache,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__2___rich_repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_styles_cache$$$function__2___rich_repr__,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8b569b9ed02b35558a3ea393855bef90,
#endif
        code_objects_63e633d79c54cc00cff637e75d97e4be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_styles_cache,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__3_set_dirty(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_styles_cache$$$function__3_set_dirty,
        mod_consts.const_str_plain_set_dirty,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d9d4dcf9b61ab272611efb732e52142c,
#endif
        code_objects_e797a98e3fcfa9dac912cec82ce4ddb5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_styles_cache,
        mod_consts.const_str_digest_b15bc3e87f6992ed638dfe86b91a9c26,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__4_is_dirty(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_styles_cache$$$function__4_is_dirty,
        mod_consts.const_str_plain_is_dirty,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_106a0eabde66d934b6bafc5d770d5fa8,
#endif
        code_objects_273ab901c260e296a4704e0495cbb295,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_styles_cache,
        mod_consts.const_str_digest_31ecf960b3f0085146af18c4e8a258b9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__5_clear(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_styles_cache$$$function__5_clear,
        mod_consts.const_str_plain_clear,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2c3ca625ab972c4726e36976e2906b40,
#endif
        code_objects_0c29e162dd35c30afa76753034a129a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_styles_cache,
        mod_consts.const_str_digest_656c094f6a44236d4409589c0f60bd5c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__6_render_widget(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_styles_cache$$$function__6_render_widget,
        mod_consts.const_str_plain_render_widget,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e17f6d1d2c8e12e092d4d2ed7c66cac2,
#endif
        code_objects_17bed9361acde58a500e58c0bd6bed12,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_styles_cache,
        mod_consts.const_str_digest_6249f6c6b1e6628ece02a9fb540e225f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__7_render(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_styles_cache$$$function__7_render,
        mod_consts.const_str_plain_render,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f7b23307e1e2d99aff8684e6074e3d74,
#endif
        code_objects_97a0347e28ad0510e145fd26a3bd85cd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_styles_cache,
        mod_consts.const_str_digest_faab65a7c6d81b493fab24adbd1f3f21,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__8_get_inner_outer(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_styles_cache$$$function__8_get_inner_outer,
        mod_consts.const_str_plain_get_inner_outer,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a952b27f19a55818a7268c034d1eaacf,
#endif
        code_objects_10f2f63d8745bf944acfde49c5cea7c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_styles_cache,
        mod_consts.const_str_digest_0e774b25b570b813c375334101cf9656,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__9_render_line(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_styles_cache$$$function__9_render_line,
        mod_consts.const_str_plain_render_line,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a13d704d2413f56cedbb58b8676a7412,
#endif
        code_objects_fb110344d42693e7bf33514b2ff19ff2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_styles_cache,
        mod_consts.const_str_digest_a7c97a32bac9b026e4fc9d678bdec103,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post,
        mod_consts.const_str_plain_line_post,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_da5bd68fb25fe4736558b142ba8ad530,
#endif
        code_objects_8d18eee0891f416fcc4f63d89785f31c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_styles_cache,
        mod_consts.const_str_digest_ce5c86633ecfaf488f31a9eaceaa418a,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_styles_cache$$$function__9_render_line$$$function__2_post(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_styles_cache$$$function__9_render_line$$$function__2_post,
        mod_consts.const_str_plain_post,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d2e72f2c696d274d18c286ec44da05ee,
#endif
        code_objects_c3236fe118fcb40d8af70b3d41c841e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_styles_cache,
        mod_consts.const_str_digest_9f7f57a7c83d13801ee77ac9071120bf,
        closure,
        4
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

static function_impl_code const function_table_textual$_styles_cache[] = {
impl_textual$_styles_cache$$$function__9_render_line$$$function__1_line_post,
impl_textual$_styles_cache$$$function__9_render_line$$$function__2_post,
impl_textual$_styles_cache$$$function__1___init__,
impl_textual$_styles_cache$$$function__2___rich_repr__,
impl_textual$_styles_cache$$$function__3_set_dirty,
impl_textual$_styles_cache$$$function__4_is_dirty,
impl_textual$_styles_cache$$$function__5_clear,
impl_textual$_styles_cache$$$function__6_render_widget,
impl_textual$_styles_cache$$$function__7_render,
impl_textual$_styles_cache$$$function__8_get_inner_outer,
impl_textual$_styles_cache$$$function__9_render_line,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$_styles_cache);
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
        module_textual$_styles_cache,
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
        function_table_textual$_styles_cache,
        sizeof(function_table_textual$_styles_cache) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual._styles_cache";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$_styles_cache(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$_styles_cache");

    // Store the module for future use.
    module_textual$_styles_cache = module;

    moduledict_textual$_styles_cache = MODULE_DICT(module_textual$_styles_cache);

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
        PRINT_STRING("textual$_styles_cache: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$_styles_cache: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$_styles_cache: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._styles_cache" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$_styles_cache\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$_styles_cache,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$_styles_cache,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$_styles_cache,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_styles_cache,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_styles_cache,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$_styles_cache);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$_styles_cache);
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

        UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_styles_cache;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_textual$_styles_cache$$$class__1_StylesCache_37 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$_styles_cache$$$class__1_StylesCache_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$_styles_cache = MAKE_MODULE_FRAME(code_objects_68608dca278659b485010df6b6b4ae87, module_textual$_styles_cache);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_styles_cache);
assert(Py_REFCNT(frame_frame_textual$_styles_cache) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$_styles_cache$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$_styles_cache$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
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
        (PyObject *)moduledict_textual$_styles_cache,
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
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_6);
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
UPDATE_STRING_DICT0(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
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
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_9);
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
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_10);
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
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_11);
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
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 6;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_rich, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Segment_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 7;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Segment,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Segment);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Style_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 8;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Style,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Style);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_RichStyle, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_6bc791a702fe5b987b1341713efdae95;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_TerminalTheme_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 9;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_TerminalTheme,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_TerminalTheme);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_TerminalTheme, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_textual;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_log_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 11;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_log,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_log);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_1cdd5855134e079d01ba9fb92ab5d138;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_DEFAULT_TERMINAL_THEME_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 12;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_4e0b568455ee3fb882ea7ac876847eca;
tmp_globals_arg_value_7 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_92c442ba6a0709c0e1cb58493a087a2b_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 13;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_get_box,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_get_box);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_get_box, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_render_border_label,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_render_border_label);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_render_border_label, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_render_row,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_render_row);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_render_row, tmp_assign_source_21);
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
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_e220f34e12dcf8546d521c209fe637ec;
tmp_globals_arg_value_8 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_active_app_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 14;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_active_app,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_active_app);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_active_app, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_aae76b217d7bd36560c630adc947d154;
tmp_globals_arg_value_9 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain__apply_opacity_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 15;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain__apply_opacity,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain__apply_opacity);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain__apply_opacity, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_52f9c3d5d66d6c6c676fc33a28f09315;
tmp_globals_arg_value_10 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_5904e24242b287433ab0e06d821511ef_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 16;
tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_15 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_apply_hatch,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_apply_hatch);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_apply_hatch, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_16 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_line_pad,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_line_pad);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_line_pad, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_17 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_line_trim,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_line_trim);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_line_trim, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_18 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_make_blank,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_make_blank);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_make_blank, tmp_assign_source_28);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
tmp_globals_arg_value_11 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_TRANSPARENT_str_plain_Color_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 17;
tmp_assign_source_29 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_29;
}
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_19 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_TRANSPARENT,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_TRANSPARENT);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSPARENT, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_20 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Color,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_Color);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Color, tmp_assign_source_31);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_82c5f11adf7571555094c86b22e21a5a;
tmp_globals_arg_value_12 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_DEBUG_tuple;
tmp_level_value_12 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 18;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_DEBUG,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_DEBUG);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_DEBUG, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_ee92707a8e73d51481db58a75e3dd4cb;
tmp_globals_arg_value_13 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_Content_tuple;
tmp_level_value_13 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 19;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Content,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_Content);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Content, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_401890d7b50ad6ac5c9efdfbf3c55cc1;
tmp_globals_arg_value_14 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_LineFilter_tuple;
tmp_level_value_14 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 20;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_LineFilter,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_LineFilter);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_LineFilter, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25;
tmp_globals_arg_value_15 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_Region_str_plain_Size_str_plain_Spacing_tuple;
tmp_level_value_15 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 21;
tmp_assign_source_35 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_35;
}
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_24 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Region,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_Region);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Region, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_25 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Size,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_Size);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Size, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_26 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Spacing,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_Spacing);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Spacing, tmp_assign_source_38);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_digest_74a881b172fc2bdcd0fc440413d4f4dc;
tmp_globals_arg_value_16 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_TextOpacity_tuple;
tmp_level_value_16 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 22;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_TextOpacity,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_TextOpacity);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_TextOpacity, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_digest_061ce1e16f806c4a05639ac7db8a9c7d;
tmp_globals_arg_value_17 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_Tint_tuple;
tmp_level_value_17 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 23;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Tint,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_Tint);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Tint, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_29;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_digest_ffbdc977fd7566d9981a709ea52c386e;
tmp_globals_arg_value_18 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_Strip_tuple;
tmp_level_value_18 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 24;
tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Strip,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_Strip);
}

CHECK_OBJECT(tmp_import_name_from_29);
Py_DECREF(tmp_import_name_from_29);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_digest_bb07eb353e080f1046cea51976ebb87f;
tmp_globals_arg_value_19 = (PyObject *)moduledict_textual$_styles_cache;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_Style_tuple;
tmp_level_value_19 = const_int_0;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 25;
tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_textual$_styles_cache,
        mod_consts.const_str_plain_Style,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_Style);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_Style, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = module_var_accessor_textual$_styles_cache$Callable(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = MAKE_LIST1(tstate, (PyObject *)&PyLong_Type);
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$_styles_cache$Strip(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Strip);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_RenderLineCallback, tmp_assign_source_43);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_1 = module_var_accessor_textual$_styles_cache$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_RenderLineCallback;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_45;
}
// Tried code:
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
tmp_expression_value_3 = module_var_accessor_textual$_styles_cache$rich(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rich);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto try_except_handler_6;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_repr);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_auto);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
frame_frame_textual$_styles_cache->m_frame.f_lineno = 36;
tmp_called_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_angular_tuple);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$_styles_cache$$$class__1_StylesCache_37 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_22807285b18688b94f19a53e653f720d;
tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_538fa62b4c91127d76636006a9b92d36;
tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_StylesCache;
tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_37;
tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$_styles_cache$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);

tmp_dictset_value = MAKE_FUNCTION_textual$_styles_cache$$$function__2___rich_repr__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, mod_consts.const_str_plain___rich_repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_ca492a53f5c781aab87ac0f48113c92d);

tmp_dictset_value = MAKE_FUNCTION_textual$_styles_cache$$$function__3_set_dirty(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, mod_consts.const_str_plain_set_dirty, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_f93db501ea534de7fdafa0b0a384ded3);

tmp_dictset_value = MAKE_FUNCTION_textual$_styles_cache$$$function__4_is_dirty(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, mod_consts.const_str_plain_is_dirty, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$_styles_cache$$$function__5_clear(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, mod_consts.const_str_plain_clear, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_c91f0f0bc6b87737af41dd3f18ff4c0c);

tmp_dictset_value = MAKE_FUNCTION_textual$_styles_cache$$$function__6_render_widget(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, mod_consts.const_str_plain_render_widget, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_textual$_styles_cache$$$class__1_StylesCache_2 = MAKE_CLASS_FRAME(tstate, code_objects_e6e0975f172324bc5486291294bfa26e, module_textual$_styles_cache, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_styles_cache$$$class__1_StylesCache_2);
assert(Py_REFCNT(frame_frame_textual$_styles_cache$$$class__1_StylesCache_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_annotations_7;
tmp_tuple_element_2 = Py_None;
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 6);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = const_float_1_0;
PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$_styles_cache$DEFAULT_TERMINAL_THEME(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_1, 5, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_defaults_1);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_0cd90c513d3becea2969b8eb264eebb1);

tmp_dictset_value = MAKE_FUNCTION_textual$_styles_cache$$$function__7_render(tstate, tmp_defaults_1, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, mod_consts.const_str_plain_render, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_8;
tmp_called_value_4 = module_var_accessor_textual$_styles_cache$lru_cache(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_textual$_styles_cache$$$class__1_StylesCache_2->m_frame.f_lineno = 257;
tmp_called_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_int_pos_1024_tuple);

if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_afc2b216995ae52f339a62d70fe13930);

tmp_args_element_value_2 = MAKE_FUNCTION_textual$_styles_cache$$$function__8_get_inner_outer(tstate, tmp_annotations_8);

frame_frame_textual$_styles_cache$$$class__1_StylesCache_2->m_frame.f_lineno = 257;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, mod_consts.const_str_plain_get_inner_outer, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache$$$class__1_StylesCache_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_styles_cache$$$class__1_StylesCache_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache$$$class__1_StylesCache_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_styles_cache$$$class__1_StylesCache_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$_styles_cache$$$class__1_StylesCache_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_8;
skip_nested_handling_1:;
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_191bd8bb3d70f2f405a3f32aed680959);

tmp_dictset_value = MAKE_FUNCTION_textual$_styles_cache$$$function__9_render_line(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, mod_consts.const_str_plain_render_line, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_fb847c9e7bb3b85c21848c033094bd4b_tuple;
tmp_result = DICT_SET_ITEM(locals_textual$_styles_cache$$$class__1_StylesCache_37, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
tmp_called_value_5 = (PyObject *)&PyType_Type;
tmp_tuple_element_3 = mod_consts.const_str_plain_StylesCache;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_textual$_styles_cache$$$class__1_StylesCache_37;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 37;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_8;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_47;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_1 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_textual$_styles_cache$$$class__1_StylesCache_37);
locals_textual$_styles_cache$$$class__1_StylesCache_37 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$_styles_cache$$$class__1_StylesCache_37);
locals_textual$_styles_cache$$$class__1_StylesCache_37 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 37;
goto try_except_handler_6;
outline_result_2:;
frame_frame_textual$_styles_cache->m_frame.f_lineno = 36;
tmp_assign_source_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_textual$_styles_cache, (Nuitka_StringObject *)mod_consts.const_str_plain_StylesCache, tmp_assign_source_46);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_styles_cache, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_styles_cache->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_styles_cache, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$_styles_cache);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$_styles_cache", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._styles_cache" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$_styles_cache);
    return module_textual$_styles_cache;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_styles_cache, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$_styles_cache", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

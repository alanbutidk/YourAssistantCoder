/* Generated code for Python module 'textual$canvas'
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



/* The "module_textual$canvas" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$canvas;
PyDictObject *moduledict_textual$canvas;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_e164bde6caaf1840120d12dba4468ec6;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_height;
PyObject *const_str_plain_box;
PyObject *const_str_plain__LINE_TYPE_INDEX;
PyObject *const_str_plain_line_type;
PyObject *const_str_plain_combine_quads;
PyObject *const_str_plain_length;
PyObject *const_str_plain_x_range;
PyObject *const_str_plain__combine_quads;
PyObject *const_str_plain_box_line;
PyObject *const_str_plain_line_quad;
PyObject *const_str_plain_spans;
PyObject *const_str_plain_append;
PyObject *const_str_plain__Span;
PyObject *const_str_plain_color;
PyObject *const_str_plain_width;
PyObject *const_str_plain_y_range;
PyObject *const_str_plain_x;
PyObject *const_str_plain_span;
PyObject *const_str_plain_HorizontalLine;
PyObject *const_str_plain_render;
PyObject *const_str_plain_VerticalLine;
PyObject *const_str_plain__width;
PyObject *const_str_plain__height;
PyObject *const_str_space;
PyObject *const_str_plain_array;
PyObject *const_str_plain_array_type_code;
PyObject *const_str_plain_blank_line;
PyObject *const_str_plain_lines;
PyObject *const_str_plain_defaultdict;
PyObject *const_tuple_int_0_int_0_int_0_int_0_tuple;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_c823efebddf0bd1266efa8c4b13030a8;
PyObject *const_str_digest_803beceec554407a9a0cf268dfd60379;
PyObject *const_str_digest_275068eac133d305347639ce9c26b2d7;
PyObject *const_str_digest_247d920d15e371393ef6b125bd9432f5;
PyObject *const_str_plain_clamp;
PyObject *const_str_digest_6fda5906f34d420ad7487fa193426b2c;
PyObject *const_str_digest_63b7d4b0f395f38b3351ca27a80fb1bd;
PyObject *const_str_plain_self;
PyObject *const_str_plain_BOX_CHARACTERS;
PyObject *const_str_plain___getitem__;
PyObject *const_str_plain_items;
PyObject *const_str_plain_get_box;
PyObject *const_str_plain_line;
PyObject *const_str_plain_itemgetter;
PyObject *const_tuple_int_0_int_pos_1_tuple;
PyObject *const_str_plain_bgcolor;
PyObject *const_str_plain_Color;
PyObject *const_str_plain_from_rich_color;
PyObject *const_str_plain_parse;
PyObject *const_tuple_str_plain_transparent_tuple;
PyObject *const_str_plain_Segment;
PyObject *const_str_plain_tounicode;
PyObject *const_tuple_tuple_int_0_false_int_0_tuple_tuple;
PyObject *const_str_plain_sort;
PyObject *const_str_plain_span_sort_key;
PyObject *const_tuple_str_plain_key_tuple;
PyObject *const_str_plain_discard;
PyObject *const_str_plain_add;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain_color_remove;
PyObject *const_str_plain_color_add;
PyObject *const_str_plain_segments;
PyObject *const_str_plain__Segment;
PyObject *const_str_plain_base_style;
PyObject *const_str_plain_Style;
PyObject *const_str_plain_from_color;
PyObject *const_str_plain_max;
PyObject *const_str_plain_rich_color;
PyObject *const_str_plain_strips;
PyObject *const_str_plain_Strip;
PyObject *const_str_plain_StripRenderable;
PyObject *const_str_digest_82070527e93f2dcf6f08cc699982d140;
PyObject *const_str_plain_start;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_6ff816255890bb734d0db5206225565d;
PyObject *const_str_digest_72150616c4a0b05126df2ba6f26a61be;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_sys;
PyObject *const_tuple_str_plain_array_tuple;
PyObject *const_str_plain_collections;
PyObject *const_tuple_str_plain_defaultdict_tuple;
PyObject *const_str_plain_dataclasses;
PyObject *const_tuple_str_plain_dataclass_tuple;
PyObject *const_str_plain_dataclass;
PyObject *const_str_plain_operator;
PyObject *const_tuple_str_plain_itemgetter_tuple;
PyObject *const_str_plain_NamedTuple;
PyObject *const_str_plain_Sequence;
PyObject *const_str_digest_6ade9fb5040f26ac50721029664cef54;
PyObject *const_tuple_str_plain_Segment_tuple;
PyObject *const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
PyObject *const_tuple_str_plain_Style_tuple;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Literal_str_plain_TypeAlias_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_digest_36eae6ea288405973040c98f5a84d80d;
PyObject *const_tuple_de33e425e01ab48a3497b08a47d2dbd0_tuple;
PyObject *const_str_plain_Quad;
PyObject *const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
PyObject *const_tuple_str_plain_Color_tuple;
PyObject *const_str_digest_8b449230fefb53e14684626fc331fc25;
PyObject *const_tuple_str_plain_Offset_str_plain_clamp_tuple;
PyObject *const_str_plain_Offset;
PyObject *const_str_digest_ffbdc977fd7566d9981a709ea52c386e;
PyObject *const_tuple_str_plain_Strip_str_plain_StripRenderable_tuple;
PyObject *const_tuple_str_plain_thin_str_plain_heavy_str_plain_double_tuple;
PyObject *const_str_plain_CanvasLineType;
PyObject *const_dict_c50380055d571357ca259cc30a3c2804;
PyObject *const_str_plain___prepare__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_5a7893915922a0cb2056d200fc85ea72;
PyObject *const_str_digest_a6fc7a8426e17b63917289562c40c32b;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_33;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_93acea94fd2d3c48cf43d5671f226fa2;
PyObject *const_str_plain_Primitive;
PyObject *const_int_pos_41;
PyObject *const_dict_ab59c4541d2b3d37492a1a89e8c1b4fe;
PyObject *const_str_digest_77e88f2437bf6e7b2adc13c4ced38a51;
PyObject *const_str_digest_d37cc7904cfeab5adc219c6365673667;
PyObject *const_int_pos_54;
PyObject *const_str_plain_thin;
PyObject *const_str_digest_2dd0222ede90de555174951c338181f1;
PyObject *const_str_digest_842c27bed3ce93542182fe797f4a322c;
PyObject *const_int_pos_91;
PyObject *const_str_digest_9e749e96f1ab07daf633038baca5b8fe;
PyObject *const_str_plain_Rectangle;
PyObject *const_str_digest_a9a3a2faa616d1eb2b1eeee399e37500;
PyObject *const_int_pos_127;
PyObject *const_str_digest_589c6c01276dacb62faad89081de18b1;
PyObject *const_str_digest_8f9e9a141f728c8b86b160e6fd7b3e7e;
PyObject *const_str_plain_Canvas;
PyObject *const_int_pos_148;
PyObject *const_dict_90bd90a846772ae2d71c76b6a0340183;
PyObject *const_str_digest_f7a67097657d77c885f91de87222c77e;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_f40f39b1e85a7b9db6d17e1b44c6c7a1;
PyObject *const_str_digest_920426197330e4cdfb833b01f3b47186;
PyObject *const_dict_591bbadb8793c7aa036ab38e58e61b3f;
PyObject *const_str_digest_e2b1de5d752f773c52c56c4b86fdd3a1;
PyObject *const_str_digest_909f9c1f0c8e723e03167f5e883d5b44;
PyObject *const_dict_ea6868bf187931e50f5ae99f74ee712f;
PyObject *const_str_digest_5a276525b49d163f56fcb32bc69083af;
PyObject *const_tuple_5450a1eda27c0cc2f0c7add7e11b82e2_tuple;
PyObject *const_str_digest_27b2bf5f6eeb9918c0c93ebb14f07401;
PyObject *const_tuple_ab1b363f8f9348338a89a5ff81787f9e_tuple;
PyObject *const_str_digest_74997e4fdc1460a38c8cfd5986a8b678;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_9e604780d569303f4a2637e23821d3a5_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_c1150a604bafeaa409bdbb8517d92ffb_tuple;
PyObject *const_tuple_71cfbcb849caf571c893a8f380fdf3a6_tuple;
PyObject *const_tuple_str_plain_self_str_plain_canvas_tuple;
PyObject *const_tuple_d9f31cdd647bae1621850c43c4f2299d_tuple;
PyObject *const_tuple_bc0caa181117c1a0406a74c4196336a0_tuple;
PyObject *const_tuple_str_plain_self_str_plain_start_str_plain_end_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[165];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.canvas"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_e164bde6caaf1840120d12dba4468ec6);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_height);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_box);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__LINE_TYPE_INDEX);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_line_type);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_combine_quads);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_length);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_x_range);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__combine_quads);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_box_line);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_line_quad);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_spans);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__Span);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_color);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_y_range);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_span);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_HorizontalLine);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_render);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_VerticalLine);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__width);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__height);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_type_code);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_blank_line);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_lines);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_defaultdict);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_int_0_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_c823efebddf0bd1266efa8c4b13030a8);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_803beceec554407a9a0cf268dfd60379);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_275068eac133d305347639ce9c26b2d7);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_247d920d15e371393ef6b125bd9432f5);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_clamp);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_6fda5906f34d420ad7487fa193426b2c);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_63b7d4b0f395f38b3351ca27a80fb1bd);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOX_CHARACTERS);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_box);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_line);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_itemgetter);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_1_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_bgcolor);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_Color);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_rich_color);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_transparent_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_Segment);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_tounicode);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_tuple_int_0_false_int_0_tuple_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_sort);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_span_sort_key);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_discard);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_color_remove);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_color_add);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_segments);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__Segment);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_base_style);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_Style);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_color);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich_color);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_strips);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_Strip);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_StripRenderable);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_82070527e93f2dcf6f08cc699982d140);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ff816255890bb734d0db5206225565d);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_72150616c4a0b05126df2ba6f26a61be);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_array_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_defaultdict_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_operator);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_itemgetter_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_TypeAlias_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_36eae6ea288405973040c98f5a84d80d);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_de33e425e01ab48a3497b08a47d2dbd0_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_Quad);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Color_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Offset_str_plain_clamp_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_Offset);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffbdc977fd7566d9981a709ea52c386e);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Strip_str_plain_StripRenderable_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_thin_str_plain_heavy_str_plain_double_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_CanvasLineType);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_dict_c50380055d571357ca259cc30a3c2804);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a7893915922a0cb2056d200fc85ea72);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6fc7a8426e17b63917289562c40c32b);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_33);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_93acea94fd2d3c48cf43d5671f226fa2);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_Primitive);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_int_pos_41);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_dict_ab59c4541d2b3d37492a1a89e8c1b4fe);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_77e88f2437bf6e7b2adc13c4ced38a51);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_d37cc7904cfeab5adc219c6365673667);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_int_pos_54);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_thin);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_2dd0222ede90de555174951c338181f1);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_842c27bed3ce93542182fe797f4a322c);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_91);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e749e96f1ab07daf633038baca5b8fe);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_Rectangle);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9a3a2faa616d1eb2b1eeee399e37500);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_int_pos_127);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_589c6c01276dacb62faad89081de18b1);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f9e9a141f728c8b86b160e6fd7b3e7e);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_Canvas);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_int_pos_148);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_90bd90a846772ae2d71c76b6a0340183);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7a67097657d77c885f91de87222c77e);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_f40f39b1e85a7b9db6d17e1b44c6c7a1);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_920426197330e4cdfb833b01f3b47186);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_591bbadb8793c7aa036ab38e58e61b3f);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2b1de5d752f773c52c56c4b86fdd3a1);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_909f9c1f0c8e723e03167f5e883d5b44);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_ea6868bf187931e50f5ae99f74ee712f);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a276525b49d163f56fcb32bc69083af);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_5450a1eda27c0cc2f0c7add7e11b82e2_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_27b2bf5f6eeb9918c0c93ebb14f07401);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_ab1b363f8f9348338a89a5ff81787f9e_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_74997e4fdc1460a38c8cfd5986a8b678);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_9e604780d569303f4a2637e23821d3a5_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_c1150a604bafeaa409bdbb8517d92ffb_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_71cfbcb849caf571c893a8f380fdf3a6_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_canvas_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_d9f31cdd647bae1621850c43c4f2299d_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_bc0caa181117c1a0406a74c4196336a0_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_start_str_plain_end_tuple);
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
void checkModuleConstants_textual$canvas(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_e164bde6caaf1840120d12dba4468ec6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e164bde6caaf1840120d12dba4468ec6);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_height));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_height);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_box));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_box);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__LINE_TYPE_INDEX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LINE_TYPE_INDEX);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_line_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_line_type);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_combine_quads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_combine_quads);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_length);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_x_range));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x_range);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__combine_quads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__combine_quads);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_box_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_box_line);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_line_quad));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_line_quad);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_spans));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_spans);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__Span));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Span);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_color);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_width);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_y_range));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_y_range);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_span));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_span);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_HorizontalLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HorizontalLine);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_render));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_VerticalLine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VerticalLine);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__width);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__height));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__height);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_type_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_type_code);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_blank_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blank_line);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_lines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lines);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_defaultdict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_defaultdict);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_int_0_int_0_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_c823efebddf0bd1266efa8c4b13030a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c823efebddf0bd1266efa8c4b13030a8);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_803beceec554407a9a0cf268dfd60379));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_803beceec554407a9a0cf268dfd60379);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_275068eac133d305347639ce9c26b2d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_275068eac133d305347639ce9c26b2d7);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_247d920d15e371393ef6b125bd9432f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_247d920d15e371393ef6b125bd9432f5);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_clamp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clamp);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_6fda5906f34d420ad7487fa193426b2c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6fda5906f34d420ad7487fa193426b2c);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_63b7d4b0f395f38b3351ca27a80fb1bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_63b7d4b0f395f38b3351ca27a80fb1bd);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOX_CHARACTERS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOX_CHARACTERS);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_box));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_box);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_line);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_itemgetter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itemgetter);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_pos_1_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_bgcolor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bgcolor);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_Color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Color);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_rich_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_rich_color);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_transparent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_transparent_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_Segment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Segment);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_tounicode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tounicode);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_tuple_int_0_false_int_0_tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_tuple_int_0_false_int_0_tuple_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_sort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sort);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_span_sort_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_span_sort_key);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_discard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_discard);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_color_remove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_color_remove);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_color_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_color_add);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_segments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_segments);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__Segment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Segment);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_base_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base_style);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_Style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Style);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_color);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich_color);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_strips));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strips);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_Strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Strip);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_StripRenderable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StripRenderable);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_82070527e93f2dcf6f08cc699982d140));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_82070527e93f2dcf6f08cc699982d140);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ff816255890bb734d0db5206225565d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ff816255890bb734d0db5206225565d);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_72150616c4a0b05126df2ba6f26a61be));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72150616c4a0b05126df2ba6f26a61be);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_array_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_array_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collections);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_defaultdict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_defaultdict_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dataclass_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_operator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_operator);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_itemgetter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_itemgetter_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NamedTuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Segment_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Style_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_TypeAlias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Literal_str_plain_TypeAlias_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_36eae6ea288405973040c98f5a84d80d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36eae6ea288405973040c98f5a84d80d);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_de33e425e01ab48a3497b08a47d2dbd0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_de33e425e01ab48a3497b08a47d2dbd0_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_Quad));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Quad);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Color_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Offset_str_plain_clamp_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Offset_str_plain_clamp_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_Offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Offset);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffbdc977fd7566d9981a709ea52c386e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ffbdc977fd7566d9981a709ea52c386e);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Strip_str_plain_StripRenderable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Strip_str_plain_StripRenderable_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_thin_str_plain_heavy_str_plain_double_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_thin_str_plain_heavy_str_plain_double_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_CanvasLineType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CanvasLineType);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_dict_c50380055d571357ca259cc30a3c2804));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c50380055d571357ca259cc30a3c2804);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a7893915922a0cb2056d200fc85ea72));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a7893915922a0cb2056d200fc85ea72);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6fc7a8426e17b63917289562c40c32b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6fc7a8426e17b63917289562c40c32b);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_33));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_33);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_93acea94fd2d3c48cf43d5671f226fa2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93acea94fd2d3c48cf43d5671f226fa2);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_Primitive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Primitive);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_int_pos_41));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_41);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_dict_ab59c4541d2b3d37492a1a89e8c1b4fe));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ab59c4541d2b3d37492a1a89e8c1b4fe);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_77e88f2437bf6e7b2adc13c4ced38a51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77e88f2437bf6e7b2adc13c4ced38a51);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_d37cc7904cfeab5adc219c6365673667));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d37cc7904cfeab5adc219c6365673667);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_int_pos_54));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_54);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_thin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thin);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_2dd0222ede90de555174951c338181f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2dd0222ede90de555174951c338181f1);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_842c27bed3ce93542182fe797f4a322c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_842c27bed3ce93542182fe797f4a322c);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_91));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_91);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e749e96f1ab07daf633038baca5b8fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e749e96f1ab07daf633038baca5b8fe);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_Rectangle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Rectangle);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9a3a2faa616d1eb2b1eeee399e37500));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9a3a2faa616d1eb2b1eeee399e37500);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_int_pos_127));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_127);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_589c6c01276dacb62faad89081de18b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_589c6c01276dacb62faad89081de18b1);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f9e9a141f728c8b86b160e6fd7b3e7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f9e9a141f728c8b86b160e6fd7b3e7e);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_Canvas));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Canvas);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_int_pos_148));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_148);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_90bd90a846772ae2d71c76b6a0340183));
CHECK_OBJECT_DEEP(mod_consts.const_dict_90bd90a846772ae2d71c76b6a0340183);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7a67097657d77c885f91de87222c77e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7a67097657d77c885f91de87222c77e);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_f40f39b1e85a7b9db6d17e1b44c6c7a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f40f39b1e85a7b9db6d17e1b44c6c7a1);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_920426197330e4cdfb833b01f3b47186));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_920426197330e4cdfb833b01f3b47186);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_591bbadb8793c7aa036ab38e58e61b3f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_591bbadb8793c7aa036ab38e58e61b3f);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2b1de5d752f773c52c56c4b86fdd3a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2b1de5d752f773c52c56c4b86fdd3a1);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_909f9c1f0c8e723e03167f5e883d5b44));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_909f9c1f0c8e723e03167f5e883d5b44);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_ea6868bf187931e50f5ae99f74ee712f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ea6868bf187931e50f5ae99f74ee712f);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a276525b49d163f56fcb32bc69083af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a276525b49d163f56fcb32bc69083af);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_5450a1eda27c0cc2f0c7add7e11b82e2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5450a1eda27c0cc2f0c7add7e11b82e2_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_27b2bf5f6eeb9918c0c93ebb14f07401));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27b2bf5f6eeb9918c0c93ebb14f07401);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_ab1b363f8f9348338a89a5ff81787f9e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ab1b363f8f9348338a89a5ff81787f9e_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_74997e4fdc1460a38c8cfd5986a8b678));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74997e4fdc1460a38c8cfd5986a8b678);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_9e604780d569303f4a2637e23821d3a5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9e604780d569303f4a2637e23821d3a5_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_c1150a604bafeaa409bdbb8517d92ffb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c1150a604bafeaa409bdbb8517d92ffb_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_71cfbcb849caf571c893a8f380fdf3a6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_71cfbcb849caf571c893a8f380fdf3a6_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_canvas_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_canvas_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_d9f31cdd647bae1621850c43c4f2299d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d9f31cdd647bae1621850c43c4f2299d_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_bc0caa181117c1a0406a74c4196336a0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bc0caa181117c1a0406a74c4196336a0_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_start_str_plain_end_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_start_str_plain_end_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 21
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
static PyObject *module_var_accessor_textual$canvas$BOX_CHARACTERS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_BOX_CHARACTERS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOX_CHARACTERS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOX_CHARACTERS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOX_CHARACTERS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOX_CHARACTERS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_BOX_CHARACTERS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_BOX_CHARACTERS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BOX_CHARACTERS);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$Color(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$HorizontalLine(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_HorizontalLine);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HorizontalLine);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HorizontalLine, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HorizontalLine);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HorizontalLine, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_HorizontalLine);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_HorizontalLine);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HorizontalLine);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$Literal(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$NamedTuple(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NamedTuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NamedTuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NamedTuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NamedTuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$Primitive(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Primitive);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Primitive);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Primitive, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Primitive);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Primitive, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Primitive);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Primitive);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Primitive);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$Segment(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$Strip(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$StripRenderable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_StripRenderable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StripRenderable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StripRenderable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StripRenderable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StripRenderable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_StripRenderable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_StripRenderable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StripRenderable);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$Style(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$VerticalLine(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_VerticalLine);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VerticalLine);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VerticalLine, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VerticalLine);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VerticalLine, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_VerticalLine);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_VerticalLine);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VerticalLine);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$_LINE_TYPE_INDEX(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain__LINE_TYPE_INDEX);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LINE_TYPE_INDEX);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LINE_TYPE_INDEX, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LINE_TYPE_INDEX);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LINE_TYPE_INDEX, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain__LINE_TYPE_INDEX);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain__LINE_TYPE_INDEX);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LINE_TYPE_INDEX);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$_Span(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain__Span);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Span);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Span, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Span);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Span, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain__Span);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain__Span);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Span);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$array(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_array);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_array);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_array, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_array);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_array, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_array);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_array);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_array);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$clamp(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_clamp);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_clamp);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_clamp, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_clamp);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_clamp, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_clamp);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_clamp);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_clamp);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$combine_quads(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_combine_quads);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_combine_quads);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_combine_quads, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_combine_quads);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_combine_quads, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_combine_quads);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_combine_quads);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_combine_quads);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$dataclass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$defaultdict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_defaultdict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_defaultdict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_defaultdict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_defaultdict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
    }

    return result;
}

static PyObject *module_var_accessor_textual$canvas$itemgetter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$canvas->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$canvas->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_itemgetter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$canvas->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_itemgetter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_itemgetter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_itemgetter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_itemgetter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_itemgetter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_itemgetter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_itemgetter);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_810712f6e75de6b845b2d33591f09482;
static PyCodeObject *code_objects_4e6d9dd80c1be524bd9e6cb7db23d24e;
static PyCodeObject *code_objects_8fb2fac8a05f13fe70a4084a8e2c4302;
static PyCodeObject *code_objects_d38cd8035603f05d38a7ae10d405261f;
static PyCodeObject *code_objects_fce8a96c7268c5d90fefd6d7960a4829;
static PyCodeObject *code_objects_8fcc2ff404ea382ad41fbf5d2a852788;
static PyCodeObject *code_objects_e88f6e88104fac8ad916b50c1e89f6f5;
static PyCodeObject *code_objects_1d5afe738ecb6330db0f9868d1902121;
static PyCodeObject *code_objects_9f1e6b9e7759d1bf912579e6d22f3faa;
static PyCodeObject *code_objects_aab9ac77319188dc7dfe744b92020ef7;
static PyCodeObject *code_objects_57c76ce588f235d71f187cb347b613d9;
static PyCodeObject *code_objects_71b4884be0a34a9aa3ccc2122cd869aa;
static PyCodeObject *code_objects_ab2965809bb52c622a63bd6c376e57fa;
static PyCodeObject *code_objects_67e8afa2927a8e1830a65319ff7b319c;
static PyCodeObject *code_objects_69c47ad6d05c62955b02fc3c22a04664;
static PyCodeObject *code_objects_a72823dca6003a6531ecaf22529d9e81;
static PyCodeObject *code_objects_f539a8da30683e0496bdf311635ccc1f;
static PyCodeObject *code_objects_8c49e83d7123fcd30b59b71fefadef7f;
static PyCodeObject *code_objects_39fb2af3b4c52e210a2d0a91428967ee;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_27b2bf5f6eeb9918c0c93ebb14f07401); CHECK_OBJECT(module_filename_obj);
code_objects_810712f6e75de6b845b2d33591f09482 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_6ff816255890bb734d0db5206225565d, mod_consts.const_tuple_ab1b363f8f9348338a89a5ff81787f9e_tuple, NULL, 1, 0, 0);
code_objects_4e6d9dd80c1be524bd9e6cb7db23d24e = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_6ff816255890bb734d0db5206225565d, mod_consts.const_tuple_ab1b363f8f9348338a89a5ff81787f9e_tuple, NULL, 1, 0, 0);
code_objects_8fb2fac8a05f13fe70a4084a8e2c4302 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_c823efebddf0bd1266efa8c4b13030a8, NULL, NULL, 0, 0, 0);
code_objects_d38cd8035603f05d38a7ae10d405261f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_74997e4fdc1460a38c8cfd5986a8b678, mod_consts.const_str_digest_74997e4fdc1460a38c8cfd5986a8b678, NULL, NULL, 0, 0, 0);
code_objects_fce8a96c7268c5d90fefd6d7960a4829 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Canvas, mod_consts.const_str_plain_Canvas, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8fcc2ff404ea382ad41fbf5d2a852788 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HorizontalLine, mod_consts.const_str_plain_HorizontalLine, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e88f6e88104fac8ad916b50c1e89f6f5 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Rectangle, mod_consts.const_str_plain_Rectangle, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1d5afe738ecb6330db0f9868d1902121 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_VerticalLine, mod_consts.const_str_plain_VerticalLine, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9f1e6b9e7759d1bf912579e6d22f3faa = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__Span, mod_consts.const_str_plain__Span, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_aab9ac77319188dc7dfe744b92020ef7 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_f7a67097657d77c885f91de87222c77e, mod_consts.const_tuple_9e604780d569303f4a2637e23821d3a5_tuple, NULL, 3, 0, 0);
code_objects_57c76ce588f235d71f187cb347b613d9 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_height, mod_consts.const_str_digest_920426197330e4cdfb833b01f3b47186, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_71b4884be0a34a9aa3ccc2122cd869aa = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render, mod_consts.const_str_digest_5a276525b49d163f56fcb32bc69083af, mod_consts.const_tuple_c1150a604bafeaa409bdbb8517d92ffb_tuple, NULL, 3, 0, 0);
code_objects_ab2965809bb52c622a63bd6c376e57fa = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render, mod_consts.const_str_digest_2dd0222ede90de555174951c338181f1, mod_consts.const_tuple_71cfbcb849caf571c893a8f380fdf3a6_tuple, NULL, 2, 0, 0);
code_objects_67e8afa2927a8e1830a65319ff7b319c = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render, mod_consts.const_str_digest_77e88f2437bf6e7b2adc13c4ced38a51, mod_consts.const_tuple_str_plain_self_str_plain_canvas_tuple, NULL, 2, 0, 0);
code_objects_69c47ad6d05c62955b02fc3c22a04664 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render, mod_consts.const_str_digest_589c6c01276dacb62faad89081de18b1, mod_consts.const_tuple_d9f31cdd647bae1621850c43c4f2299d_tuple, NULL, 2, 0, 0);
code_objects_a72823dca6003a6531ecaf22529d9e81 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render, mod_consts.const_str_digest_9e749e96f1ab07daf633038baca5b8fe, mod_consts.const_tuple_bc0caa181117c1a0406a74c4196336a0_tuple, NULL, 2, 0, 0);
code_objects_f539a8da30683e0496bdf311635ccc1f = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_width, mod_consts.const_str_digest_f40f39b1e85a7b9db6d17e1b44c6c7a1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8c49e83d7123fcd30b59b71fefadef7f = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_x_range, mod_consts.const_str_digest_e2b1de5d752f773c52c56c4b86fdd3a1, mod_consts.const_tuple_str_plain_self_str_plain_start_str_plain_end_tuple, NULL, 3, 0, 0);
code_objects_39fb2af3b4c52e210a2d0a91428967ee = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_y_range, mod_consts.const_str_digest_909f9c1f0c8e723e03167f5e883d5b44, mod_consts.const_tuple_str_plain_self_str_plain_start_str_plain_end_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$canvas$$$function__10_render$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_textual$canvas$$$function__10_render$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$canvas$$$function__10_render(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$canvas$$$function__1_render(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$canvas$$$function__2_render(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$canvas$$$function__3_render(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$canvas$$$function__4_render(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$canvas$$$function__5___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$canvas$$$function__5___init__$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_textual$canvas$$$function__6_width(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$canvas$$$function__7_height(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$canvas$$$function__8_x_range(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$canvas$$$function__9_y_range(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$canvas$$$function__1_render(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_canvas = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$function__1_render;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$canvas$$$function__1_render = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$canvas$$$function__1_render)) {
    Py_XDECREF(cache_frame_frame_textual$canvas$$$function__1_render);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$canvas$$$function__1_render == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$canvas$$$function__1_render = MAKE_FUNCTION_FRAME(tstate, code_objects_67e8afa2927a8e1830a65319ff7b319c, module_textual$canvas, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$canvas$$$function__1_render->m_type_description == NULL);
frame_frame_textual$canvas$$$function__1_render = cache_frame_frame_textual$canvas$$$function__1_render;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$function__1_render);
assert(Py_REFCNT(frame_frame_textual$canvas$$$function__1_render) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
frame_frame_textual$canvas$$$function__1_render->m_frame.f_lineno = 50;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 50;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$function__1_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$function__1_render->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$function__1_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$function__1_render,
    type_description_1,
    par_self,
    par_canvas
);


// Release cached frame if used for exception.
if (frame_frame_textual$canvas$$$function__1_render == cache_frame_frame_textual$canvas$$$function__1_render) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$canvas$$$function__1_render);
    cache_frame_frame_textual$canvas$$$function__1_render = NULL;
}

assertFrameObject(frame_frame_textual$canvas$$$function__1_render);

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
CHECK_OBJECT(par_canvas);
Py_DECREF(par_canvas);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_textual$canvas$$$function__2_render(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_canvas = python_pars[1];
PyObject *var_x = NULL;
PyObject *var_y = NULL;
PyObject *var_box = NULL;
PyObject *var_box_line = NULL;
PyObject *var_line_type_index = NULL;
PyObject *var__combine_quads = NULL;
PyObject *var_right = NULL;
PyObject *var_x_range = NULL;
PyObject *var_line_quad = NULL;
PyObject *var_box_x = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$function__2_render;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$canvas$$$function__2_render = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$canvas$$$function__2_render)) {
    Py_XDECREF(cache_frame_frame_textual$canvas$$$function__2_render);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$canvas$$$function__2_render == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$canvas$$$function__2_render = MAKE_FUNCTION_FRAME(tstate, code_objects_ab2965809bb52c622a63bd6c376e57fa, module_textual$canvas, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$canvas$$$function__2_render->m_type_description == NULL);
frame_frame_textual$canvas$$$function__2_render = cache_frame_frame_textual$canvas$$$function__2_render;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$function__2_render);
assert(Py_REFCNT(frame_frame_textual$canvas$$$function__2_render) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_origin);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooo";
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



exception_lineno = 63;
type_description_1 = "oooooooooooo";
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



exception_lineno = 63;
type_description_1 = "oooooooooooo";
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



exception_lineno = 63;
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_x == NULL);
Py_INCREF(tmp_assign_source_4);
var_x = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_y == NULL);
Py_INCREF(tmp_assign_source_5);
var_y = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_y);
tmp_cmp_expr_left_1 = var_y;
tmp_cmp_expr_right_1 = const_int_0;
tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_y);
tmp_cmp_expr_left_2 = var_y;
CHECK_OBJECT(par_canvas);
tmp_expression_value_2 = par_canvas;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_height);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_cmp_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_canvas);
tmp_expression_value_3 = par_canvas;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_box);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_box == NULL);
var_box = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_box);
tmp_expression_value_4 = var_box;
CHECK_OBJECT(var_y);
tmp_subscript_value_1 = var_y;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_box_line == NULL);
var_box_line = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = module_var_accessor_textual$canvas$_LINE_TYPE_INDEX(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LINE_TYPE_INDEX);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_line_type);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_line_type_index == NULL);
var_line_type_index = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = module_var_accessor_textual$canvas$combine_quads(tstate);
if (unlikely(tmp_assign_source_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_combine_quads);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__combine_quads == NULL);
Py_INCREF(tmp_assign_source_9);
var__combine_quads = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_x);
tmp_add_expr_left_1 = var_x;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_length);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_assign_source_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right == NULL);
var_right = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_canvas);
tmp_expression_value_8 = par_canvas;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_x_range);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_1 = var_x;
CHECK_OBJECT(var_x);
tmp_add_expr_left_2 = var_x;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_length);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 74;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 74;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__2_render->m_frame.f_lineno = 74;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_x_range == NULL);
var_x_range = tmp_assign_source_11;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_x);
tmp_cmp_expr_left_3 = var_x;
CHECK_OBJECT(var_x_range);
tmp_cmp_expr_right_3 = var_x_range;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_tuple_element_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var__combine_quads);
tmp_called_value_2 = var__combine_quads;
CHECK_OBJECT(var_box_line);
tmp_expression_value_10 = var_box_line;
CHECK_OBJECT(var_x);
tmp_subscript_value_3 = var_x;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_3);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = const_int_0;
tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_line_type_index);
tmp_tuple_element_1 = var_line_type_index;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = const_int_0;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = const_int_0;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 3, tmp_tuple_element_1);
frame_frame_textual$canvas$$$function__2_render->m_frame.f_lineno = 77;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_box_line);
tmp_ass_subscribed_1 = var_box_line;
CHECK_OBJECT(var_x);
tmp_ass_subscript_1 = var_x;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_right);
tmp_cmp_expr_left_4 = var_right;
CHECK_OBJECT(var_x_range);
tmp_cmp_expr_right_4 = var_x_range;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_tuple_element_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var__combine_quads);
tmp_called_value_3 = var__combine_quads;
CHECK_OBJECT(var_box_line);
tmp_expression_value_11 = var_box_line;
CHECK_OBJECT(var_right);
tmp_subscript_value_4 = var_right;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_4);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = const_int_0;
tmp_args_element_value_6 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_args_element_value_6, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_int_0;
PyTuple_SET_ITEM0(tmp_args_element_value_6, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = const_int_0;
PyTuple_SET_ITEM0(tmp_args_element_value_6, 2, tmp_tuple_element_2);
CHECK_OBJECT(var_line_type_index);
tmp_tuple_element_2 = var_line_type_index;
PyTuple_SET_ITEM0(tmp_args_element_value_6, 3, tmp_tuple_element_2);
frame_frame_textual$canvas$$$function__2_render->m_frame.f_lineno = 79;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_box_line);
tmp_ass_subscribed_2 = var_box_line;
CHECK_OBJECT(var_right);
tmp_ass_subscript_2 = var_right;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = const_int_0;
tmp_assign_source_12 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_assign_source_12, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_line_type_index);
tmp_tuple_element_3 = var_line_type_index;
PyTuple_SET_ITEM0(tmp_assign_source_12, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = const_int_0;
PyTuple_SET_ITEM0(tmp_assign_source_12, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_line_type_index);
tmp_tuple_element_3 = var_line_type_index;
PyTuple_SET_ITEM0(tmp_assign_source_12, 3, tmp_tuple_element_3);
assert(var_line_quad == NULL);
var_line_quad = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_7;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_args_element_value_8;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_canvas);
tmp_expression_value_12 = par_canvas;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_x_range);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_add_expr_left_3 = var_x;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 84;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_add_expr_left_4 = var_x;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_add_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_length);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 84;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 84;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_args_element_value_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 84;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__2_render->m_frame.f_lineno = 84;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooooooo";
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
type_description_1 = "oooooooooooo";
exception_lineno = 84;
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
    PyObject *old = var_box_x;
    var_box_x = tmp_assign_source_15;
    Py_INCREF(var_box_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
if (var__combine_quads == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__combine_quads);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_5 = var__combine_quads;
if (var_box_line == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_box_line);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_14 = var_box_line;
CHECK_OBJECT(var_box_x);
tmp_subscript_value_5 = var_box_x;
tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_5);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
if (var_line_quad == NULL) {
Py_DECREF(tmp_args_element_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_line_quad);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_10 = var_line_quad;
frame_frame_textual$canvas$$$function__2_render->m_frame.f_lineno = 85;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
if (var_box_line == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_box_line);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}

tmp_ass_subscribed_3 = var_box_line;
CHECK_OBJECT(var_box_x);
tmp_ass_subscript_3 = var_box_x;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(par_canvas);
tmp_expression_value_17 = par_canvas;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_spans);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_y);
tmp_subscript_value_6 = var_y;
tmp_expression_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_textual$canvas$_Span(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Span);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 87;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_12 = var_x;
CHECK_OBJECT(var_x);
tmp_add_expr_left_5 = var_x;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_add_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_length);
if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 87;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 87;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_color);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 87;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__2_render->m_frame.f_lineno = 87;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 87;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__2_render->m_frame.f_lineno = 87;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$function__2_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$function__2_render->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$function__2_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$function__2_render,
    type_description_1,
    par_self,
    par_canvas,
    var_x,
    var_y,
    var_box,
    var_box_line,
    var_line_type_index,
    var__combine_quads,
    var_right,
    var_x_range,
    var_line_quad,
    var_box_x
);


// Release cached frame if used for exception.
if (frame_frame_textual$canvas$$$function__2_render == cache_frame_frame_textual$canvas$$$function__2_render) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$canvas$$$function__2_render);
    cache_frame_frame_textual$canvas$$$function__2_render = NULL;
}

assertFrameObject(frame_frame_textual$canvas$$$function__2_render);

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
CHECK_OBJECT(var_x);
CHECK_OBJECT(var_x);
Py_DECREF(var_x);
var_x = NULL;
CHECK_OBJECT(var_y);
CHECK_OBJECT(var_y);
Py_DECREF(var_y);
var_y = NULL;
Py_XDECREF(var_box);
var_box = NULL;
Py_XDECREF(var_box_line);
var_box_line = NULL;
Py_XDECREF(var_line_type_index);
var_line_type_index = NULL;
Py_XDECREF(var__combine_quads);
var__combine_quads = NULL;
Py_XDECREF(var_right);
var_right = NULL;
Py_XDECREF(var_x_range);
var_x_range = NULL;
Py_XDECREF(var_line_quad);
var_line_quad = NULL;
Py_XDECREF(var_box_x);
var_box_x = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_y);
var_y = NULL;
Py_XDECREF(var_box);
var_box = NULL;
Py_XDECREF(var_box_line);
var_box_line = NULL;
Py_XDECREF(var_line_type_index);
var_line_type_index = NULL;
Py_XDECREF(var__combine_quads);
var__combine_quads = NULL;
Py_XDECREF(var_right);
var_right = NULL;
Py_XDECREF(var_x_range);
var_x_range = NULL;
Py_XDECREF(var_line_quad);
var_line_quad = NULL;
Py_XDECREF(var_box_x);
var_box_x = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_canvas);
Py_DECREF(par_canvas);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_canvas);
Py_DECREF(par_canvas);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$canvas$$$function__3_render(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_canvas = python_pars[1];
PyObject *var_x = NULL;
PyObject *var_y = NULL;
PyObject *var_line_type_index = NULL;
PyObject *var_box = NULL;
PyObject *var__combine_quads = NULL;
PyObject *var_y_range = NULL;
PyObject *var_bottom = NULL;
PyObject *var_line_quad = NULL;
PyObject *var_box_y = NULL;
PyObject *var_spans = NULL;
PyObject *var_span = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$function__3_render;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_textual$canvas$$$function__3_render = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$canvas$$$function__3_render)) {
    Py_XDECREF(cache_frame_frame_textual$canvas$$$function__3_render);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$canvas$$$function__3_render == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$canvas$$$function__3_render = MAKE_FUNCTION_FRAME(tstate, code_objects_a72823dca6003a6531ecaf22529d9e81, module_textual$canvas, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$canvas$$$function__3_render->m_type_description == NULL);
frame_frame_textual$canvas$$$function__3_render = cache_frame_frame_textual$canvas$$$function__3_render;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$function__3_render);
assert(Py_REFCNT(frame_frame_textual$canvas$$$function__3_render) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_origin);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooooo";
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



exception_lineno = 100;
type_description_1 = "ooooooooooooo";
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



exception_lineno = 100;
type_description_1 = "ooooooooooooo";
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



exception_lineno = 100;
type_description_1 = "ooooooooooooo";
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
assert(var_x == NULL);
Py_INCREF(tmp_assign_source_4);
var_x = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_y == NULL);
Py_INCREF(tmp_assign_source_5);
var_y = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_x);
tmp_cmp_expr_left_1 = var_x;
tmp_cmp_expr_right_1 = const_int_0;
tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_x);
tmp_cmp_expr_left_2 = var_x;
CHECK_OBJECT(par_canvas);
tmp_expression_value_2 = par_canvas;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_width);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = module_var_accessor_textual$canvas$_LINE_TYPE_INDEX(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LINE_TYPE_INDEX);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_line_type);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_line_type_index == NULL);
var_line_type_index = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_canvas);
tmp_expression_value_5 = par_canvas;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_box);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_box == NULL);
var_box = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = module_var_accessor_textual$canvas$combine_quads(tstate);
if (unlikely(tmp_assign_source_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_combine_quads);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__combine_quads == NULL);
Py_INCREF(tmp_assign_source_8);
var__combine_quads = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_canvas);
tmp_expression_value_6 = par_canvas;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_y_range);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_y);
tmp_args_element_value_1 = var_y;
CHECK_OBJECT(var_y);
tmp_add_expr_left_1 = var_y;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_length);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 107;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 107;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__3_render->m_frame.f_lineno = 107;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_y_range == NULL);
var_y_range = tmp_assign_source_9;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_y);
tmp_cmp_expr_left_3 = var_y;
CHECK_OBJECT(var_y_range);
tmp_cmp_expr_right_3 = var_y_range;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
PyObject *tmp_subscript_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_tuple_element_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_4;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var__combine_quads);
tmp_called_value_2 = var__combine_quads;
CHECK_OBJECT(var_box);
tmp_expression_value_9 = var_box;
CHECK_OBJECT(var_y);
tmp_subscript_value_2 = var_y;
tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_2);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_subscript_value_3 = var_x;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = const_int_0;
tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_int_0;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_line_type_index);
tmp_tuple_element_1 = var_line_type_index;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = const_int_0;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 3, tmp_tuple_element_1);
frame_frame_textual$canvas$$$function__3_render->m_frame.f_lineno = 110;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_box);
tmp_expression_value_10 = var_box;
CHECK_OBJECT(var_y);
tmp_subscript_value_4 = var_y;
tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_4);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 110;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_ass_subscript_1 = var_x;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_y);
tmp_add_expr_left_2 = var_y;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_length);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_assign_source_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_bottom == NULL);
var_bottom = tmp_assign_source_10;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_bottom);
tmp_cmp_expr_left_4 = var_bottom;
CHECK_OBJECT(var_y_range);
tmp_cmp_expr_right_4 = var_y_range;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_5;
PyObject *tmp_subscript_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_tuple_element_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_7;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var__combine_quads);
tmp_called_value_3 = var__combine_quads;
CHECK_OBJECT(var_box);
tmp_expression_value_13 = var_box;
CHECK_OBJECT(var_bottom);
tmp_subscript_value_5 = var_bottom;
tmp_expression_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_5);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_subscript_value_6 = var_x;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_line_type_index);
tmp_tuple_element_2 = var_line_type_index;
tmp_args_element_value_6 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_args_element_value_6, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_int_0;
PyTuple_SET_ITEM0(tmp_args_element_value_6, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = const_int_0;
PyTuple_SET_ITEM0(tmp_args_element_value_6, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = const_int_0;
PyTuple_SET_ITEM0(tmp_args_element_value_6, 3, tmp_tuple_element_2);
frame_frame_textual$canvas$$$function__3_render->m_frame.f_lineno = 114;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_box);
tmp_expression_value_14 = var_box;
CHECK_OBJECT(var_bottom);
tmp_subscript_value_7 = var_bottom;
tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_7);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 114;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_ass_subscript_2 = var_x;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_line_type_index);
tmp_tuple_element_3 = var_line_type_index;
tmp_assign_source_11 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_assign_source_11, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = const_int_0;
PyTuple_SET_ITEM0(tmp_assign_source_11, 1, tmp_tuple_element_3);
CHECK_OBJECT(var_line_type_index);
tmp_tuple_element_3 = var_line_type_index;
PyTuple_SET_ITEM0(tmp_assign_source_11, 2, tmp_tuple_element_3);
tmp_tuple_element_3 = const_int_0;
PyTuple_SET_ITEM0(tmp_assign_source_11, 3, tmp_tuple_element_3);
assert(var_line_quad == NULL);
var_line_quad = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_7;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_args_element_value_8;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(par_canvas);
tmp_expression_value_15 = par_canvas;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_y_range);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_y);
tmp_add_expr_left_3 = var_y;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_y);
tmp_add_expr_left_4 = var_y;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_add_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_length);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_args_element_value_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__3_render->m_frame.f_lineno = 117;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooooooo";
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
type_description_1 = "ooooooooooooo";
exception_lineno = 117;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_14 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_box_y;
    var_box_y = tmp_assign_source_14;
    Py_INCREF(var_box_y);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_8;
PyObject *tmp_subscript_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_10;
PyObject *tmp_ass_subscript_3;
if (var__combine_quads == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__combine_quads);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_5 = var__combine_quads;
CHECK_OBJECT(var_box);
tmp_expression_value_18 = var_box;
CHECK_OBJECT(var_box_y);
tmp_subscript_value_8 = var_box_y;
tmp_expression_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_8);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
if (var_x == NULL) {
Py_DECREF(tmp_expression_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_subscript_value_9 = var_x;
tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
if (var_line_quad == NULL) {
Py_DECREF(tmp_args_element_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_line_quad);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_10 = var_line_quad;
frame_frame_textual$canvas$$$function__3_render->m_frame.f_lineno = 118;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_box);
tmp_expression_value_19 = var_box;
CHECK_OBJECT(var_box_y);
tmp_subscript_value_10 = var_box_y;
tmp_ass_subscribed_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_10);
if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
if (var_x == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subscribed_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_ass_subscript_3 = var_x;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(par_canvas);
tmp_expression_value_20 = par_canvas;
tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_spans);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_spans == NULL);
var_spans = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_21;
tmp_called_value_6 = module_var_accessor_textual$canvas$_Span(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Span);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 121;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = var_x;
if (var_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 121;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_5 = var_x;
tmp_add_expr_right_5 = const_int_pos_1;
tmp_args_element_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_21 = par_self;
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_color);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_12);

exception_lineno = 121;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__3_render->m_frame.f_lineno = 121;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_span == NULL);
var_span = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_y_range);
tmp_iter_arg_3 = var_y_range;
tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_17;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_18 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 122;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_19 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_y;
    var_y = tmp_assign_source_19;
    Py_INCREF(var_y);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_11;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_14;
CHECK_OBJECT(var_spans);
tmp_expression_value_23 = var_spans;
CHECK_OBJECT(var_y);
tmp_subscript_value_11 = var_y;
tmp_expression_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_11);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
if (var_span == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_span);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_14 = var_span;
frame_frame_textual$canvas$$$function__3_render->m_frame.f_lineno = 123;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooooooo";
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

goto frame_exception_exit_1;
// End of try:
try_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$function__3_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$function__3_render->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$function__3_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$function__3_render,
    type_description_1,
    par_self,
    par_canvas,
    var_x,
    var_y,
    var_line_type_index,
    var_box,
    var__combine_quads,
    var_y_range,
    var_bottom,
    var_line_quad,
    var_box_y,
    var_spans,
    var_span
);


// Release cached frame if used for exception.
if (frame_frame_textual$canvas$$$function__3_render == cache_frame_frame_textual$canvas$$$function__3_render) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$canvas$$$function__3_render);
    cache_frame_frame_textual$canvas$$$function__3_render = NULL;
}

assertFrameObject(frame_frame_textual$canvas$$$function__3_render);

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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_y);
var_y = NULL;
Py_XDECREF(var_line_type_index);
var_line_type_index = NULL;
Py_XDECREF(var_box);
var_box = NULL;
Py_XDECREF(var__combine_quads);
var__combine_quads = NULL;
Py_XDECREF(var_y_range);
var_y_range = NULL;
Py_XDECREF(var_bottom);
var_bottom = NULL;
Py_XDECREF(var_line_quad);
var_line_quad = NULL;
Py_XDECREF(var_box_y);
var_box_y = NULL;
Py_XDECREF(var_spans);
var_spans = NULL;
Py_XDECREF(var_span);
var_span = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_y);
var_y = NULL;
Py_XDECREF(var_line_type_index);
var_line_type_index = NULL;
Py_XDECREF(var_box);
var_box = NULL;
Py_XDECREF(var__combine_quads);
var__combine_quads = NULL;
Py_XDECREF(var_y_range);
var_y_range = NULL;
Py_XDECREF(var_bottom);
var_bottom = NULL;
Py_XDECREF(var_line_quad);
var_line_quad = NULL;
Py_XDECREF(var_box_y);
var_box_y = NULL;
Py_XDECREF(var_spans);
var_spans = NULL;
Py_XDECREF(var_span);
var_span = NULL;
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
CHECK_OBJECT(par_canvas);
Py_DECREF(par_canvas);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_canvas);
Py_DECREF(par_canvas);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$canvas$$$function__4_render(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_canvas = python_pars[1];
PyObject *var_origin = NULL;
PyObject *var_width = NULL;
PyObject *var_height = NULL;
PyObject *var_color = NULL;
PyObject *var_line_type = NULL;
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$function__4_render;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$canvas$$$function__4_render = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$canvas$$$function__4_render)) {
    Py_XDECREF(cache_frame_frame_textual$canvas$$$function__4_render);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$canvas$$$function__4_render == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$canvas$$$function__4_render = MAKE_FUNCTION_FRAME(tstate, code_objects_69c47ad6d05c62955b02fc3c22a04664, module_textual$canvas, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$canvas$$$function__4_render->m_type_description == NULL);
frame_frame_textual$canvas$$$function__4_render = cache_frame_frame_textual$canvas$$$function__4_render;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$function__4_render);
assert(Py_REFCNT(frame_frame_textual$canvas$$$function__4_render) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_origin);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_origin == NULL);
var_origin = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_width);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_width == NULL);
var_width = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_height);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_height == NULL);
var_height = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_color);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_color == NULL);
var_color = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_line_type);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_line_type == NULL);
var_line_type = tmp_assign_source_5;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
tmp_called_value_1 = module_var_accessor_textual$canvas$HorizontalLine(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HorizontalLine);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_origin);
tmp_args_element_value_1 = var_origin;
CHECK_OBJECT(var_width);
tmp_args_element_value_2 = var_width;
CHECK_OBJECT(var_color);
tmp_args_element_value_3 = var_color;
CHECK_OBJECT(var_line_type);
tmp_args_element_value_4 = var_line_type;
frame_frame_textual$canvas$$$function__4_render->m_frame.f_lineno = 142;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_canvas);
tmp_args_element_value_5 = par_canvas;
frame_frame_textual$canvas$$$function__4_render->m_frame.f_lineno = 142;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_render, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
tmp_called_value_2 = module_var_accessor_textual$canvas$HorizontalLine(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HorizontalLine);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_origin);
tmp_add_expr_left_1 = var_origin;
tmp_tuple_element_1 = const_int_0;
tmp_add_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyTuple_SET_ITEM0(tmp_add_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_height);
tmp_sub_expr_left_1 = var_height;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_add_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_add_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_width);
tmp_args_element_value_7 = var_width;
CHECK_OBJECT(var_color);
tmp_args_element_value_8 = var_color;
CHECK_OBJECT(var_line_type);
tmp_args_element_value_9 = var_line_type;
frame_frame_textual$canvas$$$function__4_render->m_frame.f_lineno = 143;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_canvas);
tmp_args_element_value_10 = par_canvas;
frame_frame_textual$canvas$$$function__4_render->m_frame.f_lineno = 143;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_render, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_15;
tmp_called_value_3 = module_var_accessor_textual$canvas$VerticalLine(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VerticalLine);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_origin);
tmp_args_element_value_11 = var_origin;
CHECK_OBJECT(var_height);
tmp_args_element_value_12 = var_height;
CHECK_OBJECT(var_color);
tmp_args_element_value_13 = var_color;
CHECK_OBJECT(var_line_type);
tmp_args_element_value_14 = var_line_type;
frame_frame_textual$canvas$$$function__4_render->m_frame.f_lineno = 144;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_canvas);
tmp_args_element_value_15 = par_canvas;
frame_frame_textual$canvas$$$function__4_render->m_frame.f_lineno = 144;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_render, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_16;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_20;
tmp_called_value_4 = module_var_accessor_textual$canvas$VerticalLine(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VerticalLine);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_origin);
tmp_add_expr_left_2 = var_origin;
CHECK_OBJECT(var_width);
tmp_sub_expr_left_2 = var_width;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_add_expr_right_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_int_0;
PyTuple_SET_ITEM0(tmp_add_expr_right_2, 1, tmp_tuple_element_2);
tmp_args_element_value_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_height);
tmp_args_element_value_17 = var_height;
CHECK_OBJECT(var_color);
tmp_args_element_value_18 = var_color;
CHECK_OBJECT(var_line_type);
tmp_args_element_value_19 = var_line_type;
frame_frame_textual$canvas$$$function__4_render->m_frame.f_lineno = 145;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_called_instance_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_canvas);
tmp_args_element_value_20 = par_canvas;
frame_frame_textual$canvas$$$function__4_render->m_frame.f_lineno = 145;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_render, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$function__4_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$function__4_render->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$function__4_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$function__4_render,
    type_description_1,
    par_self,
    par_canvas,
    var_origin,
    var_width,
    var_height,
    var_color,
    var_line_type
);


// Release cached frame if used for exception.
if (frame_frame_textual$canvas$$$function__4_render == cache_frame_frame_textual$canvas$$$function__4_render) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$canvas$$$function__4_render);
    cache_frame_frame_textual$canvas$$$function__4_render = NULL;
}

assertFrameObject(frame_frame_textual$canvas$$$function__4_render);

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
CHECK_OBJECT(var_origin);
CHECK_OBJECT(var_origin);
Py_DECREF(var_origin);
var_origin = NULL;
CHECK_OBJECT(var_width);
CHECK_OBJECT(var_width);
Py_DECREF(var_width);
var_width = NULL;
CHECK_OBJECT(var_height);
CHECK_OBJECT(var_height);
Py_DECREF(var_height);
var_height = NULL;
CHECK_OBJECT(var_color);
CHECK_OBJECT(var_color);
Py_DECREF(var_color);
var_color = NULL;
CHECK_OBJECT(var_line_type);
CHECK_OBJECT(var_line_type);
Py_DECREF(var_line_type);
var_line_type = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_origin);
var_origin = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_height);
var_height = NULL;
Py_XDECREF(var_color);
var_color = NULL;
Py_XDECREF(var_line_type);
var_line_type = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_canvas);
Py_DECREF(par_canvas);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_canvas);
Py_DECREF(par_canvas);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$canvas$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_width = python_pars[1];
PyObject *par_height = python_pars[2];
PyObject *var_blank_line = NULL;
PyObject *var_array_type_code = NULL;
PyObject *outline_0_var__ = NULL;
PyObject *outline_1_var__ = NULL;
PyObject *outline_2_var__ = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_listcomp_3__$0 = NULL;
PyObject *tmp_listcomp_3__contraction = NULL;
PyObject *tmp_listcomp_3__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$function__5___init__;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_textual$canvas$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$canvas$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_textual$canvas$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$canvas$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$canvas$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_aab9ac77319188dc7dfe744b92020ef7, module_textual$canvas, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$canvas$$$function__5___init__->m_type_description == NULL);
frame_frame_textual$canvas$$$function__5___init__ = cache_frame_frame_textual$canvas$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$function__5___init__);
assert(Py_REFCNT(frame_frame_textual$canvas$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_width);
tmp_assattr_value_1 = par_width;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__width, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_height);
tmp_assattr_value_2 = par_height;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__height, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
tmp_mult_expr_left_1 = mod_consts.const_str_space;
CHECK_OBJECT(par_width);
tmp_mult_expr_right_1 = par_width;
tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_blank_line == NULL);
var_blank_line = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_str_plain_w;
assert(var_array_type_code == NULL);
Py_INCREF(tmp_assign_source_2);
var_array_type_code = tmp_assign_source_2;
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(par_height);
tmp_xrange_low_1 = par_height;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_5 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 162;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var__;
    outline_0_var__ = tmp_assign_source_6;
    Py_INCREF(outline_0_var__);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_1 = module_var_accessor_textual$canvas$array(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
if (var_array_type_code == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_type_code);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 163;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_1 = var_array_type_code;
if (var_blank_line == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_blank_line);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 163;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_2 = var_blank_line;
frame_frame_textual$canvas$$$function__5___init__->m_frame.f_lineno = 163;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assattr_value_3 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assattr_value_3);
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
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var__);
outline_0_var__ = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var__);
outline_0_var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 162;
goto frame_exception_exit_1;
outline_result_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_lines, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_2;
CHECK_OBJECT(par_height);
tmp_xrange_low_2 = par_height;
tmp_iter_arg_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_8;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_9 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 165;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_10 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var__;
    outline_1_var__ = tmp_assign_source_10;
    Py_INCREF(outline_1_var__);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
tmp_called_value_2 = module_var_accessor_textual$canvas$defaultdict(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_defaultdict);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_3 = MAKE_FUNCTION_textual$canvas$$$function__5___init__$$$function__1_lambda(tstate);

frame_frame_textual$canvas$$$function__5___init__->m_frame.f_lineno = 166;
tmp_append_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_assattr_value_4 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_assattr_value_4);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
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
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_1_var__);
outline_1_var__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var__);
outline_1_var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 165;
goto frame_exception_exit_1;
outline_result_2:;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_box, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_3;
PyObject *tmp_xrange_low_3;
CHECK_OBJECT(par_height);
tmp_xrange_low_3 = par_height;
tmp_iter_arg_3 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_3);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
assert(tmp_listcomp_3__$0 == NULL);
tmp_listcomp_3__$0 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_3__contraction == NULL);
tmp_listcomp_3__contraction = tmp_assign_source_12;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp_3__$0);
tmp_next_source_3 = tmp_listcomp_3__$0;
tmp_assign_source_13 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 168;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_listcomp_3__iter_value_0;
    tmp_listcomp_3__iter_value_0 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
tmp_assign_source_14 = tmp_listcomp_3__iter_value_0;
{
    PyObject *old = outline_2_var__;
    outline_2_var__ = tmp_assign_source_14;
    Py_INCREF(outline_2_var__);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_3;
PyObject *tmp_append_value_3;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_append_list_3 = tmp_listcomp_3__contraction;
tmp_append_value_3 = MAKE_LIST_EMPTY(tstate, 0);
tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_assattr_value_5 = tmp_listcomp_3__contraction;
Py_INCREF(tmp_assattr_value_5);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(outline_2_var__);
outline_2_var__ = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_2_var__);
outline_2_var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 168;
goto frame_exception_exit_1;
outline_result_3:;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_spans, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$function__5___init__,
    type_description_1,
    par_self,
    par_width,
    par_height,
    var_blank_line,
    var_array_type_code
);


// Release cached frame if used for exception.
if (frame_frame_textual$canvas$$$function__5___init__ == cache_frame_frame_textual$canvas$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$canvas$$$function__5___init__);
    cache_frame_frame_textual$canvas$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_textual$canvas$$$function__5___init__);

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
Py_XDECREF(var_blank_line);
var_blank_line = NULL;
Py_XDECREF(var_array_type_code);
var_array_type_code = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_blank_line);
var_blank_line = NULL;
Py_XDECREF(var_array_type_code);
var_array_type_code = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_height);
Py_DECREF(par_height);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_height);
Py_DECREF(par_height);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$canvas$$$function__6_width(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$function__6_width;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$canvas$$$function__6_width = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$canvas$$$function__6_width)) {
    Py_XDECREF(cache_frame_frame_textual$canvas$$$function__6_width);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$canvas$$$function__6_width == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$canvas$$$function__6_width = MAKE_FUNCTION_FRAME(tstate, code_objects_f539a8da30683e0496bdf311635ccc1f, module_textual$canvas, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$canvas$$$function__6_width->m_type_description == NULL);
frame_frame_textual$canvas$$$function__6_width = cache_frame_frame_textual$canvas$$$function__6_width;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$function__6_width);
assert(Py_REFCNT(frame_frame_textual$canvas$$$function__6_width) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__width);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$function__6_width, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$function__6_width->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$function__6_width, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$function__6_width,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$canvas$$$function__6_width == cache_frame_frame_textual$canvas$$$function__6_width) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$canvas$$$function__6_width);
    cache_frame_frame_textual$canvas$$$function__6_width = NULL;
}

assertFrameObject(frame_frame_textual$canvas$$$function__6_width);

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


static PyObject *impl_textual$canvas$$$function__7_height(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$function__7_height;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$canvas$$$function__7_height = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$canvas$$$function__7_height)) {
    Py_XDECREF(cache_frame_frame_textual$canvas$$$function__7_height);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$canvas$$$function__7_height == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$canvas$$$function__7_height = MAKE_FUNCTION_FRAME(tstate, code_objects_57c76ce588f235d71f187cb347b613d9, module_textual$canvas, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$canvas$$$function__7_height->m_type_description == NULL);
frame_frame_textual$canvas$$$function__7_height = cache_frame_frame_textual$canvas$$$function__7_height;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$function__7_height);
assert(Py_REFCNT(frame_frame_textual$canvas$$$function__7_height) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__height);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$function__7_height, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$function__7_height->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$function__7_height, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$function__7_height,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$canvas$$$function__7_height == cache_frame_frame_textual$canvas$$$function__7_height) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$canvas$$$function__7_height);
    cache_frame_frame_textual$canvas$$$function__7_height = NULL;
}

assertFrameObject(frame_frame_textual$canvas$$$function__7_height);

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


static PyObject *impl_textual$canvas$$$function__8_x_range(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_start = python_pars[1];
PyObject *par_end = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$function__8_x_range;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$canvas$$$function__8_x_range = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$canvas$$$function__8_x_range)) {
    Py_XDECREF(cache_frame_frame_textual$canvas$$$function__8_x_range);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$canvas$$$function__8_x_range == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$canvas$$$function__8_x_range = MAKE_FUNCTION_FRAME(tstate, code_objects_8c49e83d7123fcd30b59b71fefadef7f, module_textual$canvas, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$canvas$$$function__8_x_range->m_type_description == NULL);
frame_frame_textual$canvas$$$function__8_x_range = cache_frame_frame_textual$canvas$$$function__8_x_range;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$function__8_x_range);
assert(Py_REFCNT(frame_frame_textual$canvas$$$function__8_x_range) == 2);

// Framed code:
{
PyObject *tmp_xrange_low_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_textual$canvas$clamp(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_clamp);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_start);
tmp_args_element_value_1 = par_start;
tmp_args_element_value_2 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__width);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__8_x_range->m_frame.f_lineno = 191;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_xrange_low_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_textual$canvas$clamp(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_clamp);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_xrange_low_1);

exception_lineno = 192;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_end);
tmp_args_element_value_4 = par_end;
tmp_args_element_value_5 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__width);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_xrange_low_1);

exception_lineno = 192;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__8_x_range->m_frame.f_lineno = 192;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_xrange_high_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_xrange_high_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_xrange_low_1);

exception_lineno = 192;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$function__8_x_range, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$function__8_x_range->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$function__8_x_range, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$function__8_x_range,
    type_description_1,
    par_self,
    par_start,
    par_end
);


// Release cached frame if used for exception.
if (frame_frame_textual$canvas$$$function__8_x_range == cache_frame_frame_textual$canvas$$$function__8_x_range) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$canvas$$$function__8_x_range);
    cache_frame_frame_textual$canvas$$$function__8_x_range = NULL;
}

assertFrameObject(frame_frame_textual$canvas$$$function__8_x_range);

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
CHECK_OBJECT(par_start);
Py_DECREF(par_start);
CHECK_OBJECT(par_end);
Py_DECREF(par_end);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_start);
Py_DECREF(par_start);
CHECK_OBJECT(par_end);
Py_DECREF(par_end);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$canvas$$$function__9_y_range(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_start = python_pars[1];
PyObject *par_end = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$function__9_y_range;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$canvas$$$function__9_y_range = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$canvas$$$function__9_y_range)) {
    Py_XDECREF(cache_frame_frame_textual$canvas$$$function__9_y_range);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$canvas$$$function__9_y_range == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$canvas$$$function__9_y_range = MAKE_FUNCTION_FRAME(tstate, code_objects_39fb2af3b4c52e210a2d0a91428967ee, module_textual$canvas, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$canvas$$$function__9_y_range->m_type_description == NULL);
frame_frame_textual$canvas$$$function__9_y_range = cache_frame_frame_textual$canvas$$$function__9_y_range;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$function__9_y_range);
assert(Py_REFCNT(frame_frame_textual$canvas$$$function__9_y_range) == 2);

// Framed code:
{
PyObject *tmp_xrange_low_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_textual$canvas$clamp(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_clamp);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_start);
tmp_args_element_value_1 = par_start;
tmp_args_element_value_2 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__height);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__9_y_range->m_frame.f_lineno = 206;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_xrange_low_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_textual$canvas$clamp(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_clamp);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_xrange_low_1);

exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_end);
tmp_args_element_value_4 = par_end;
tmp_args_element_value_5 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__height);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_xrange_low_1);

exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__9_y_range->m_frame.f_lineno = 207;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_xrange_high_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_xrange_high_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_xrange_low_1);

exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$function__9_y_range, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$function__9_y_range->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$function__9_y_range, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$function__9_y_range,
    type_description_1,
    par_self,
    par_start,
    par_end
);


// Release cached frame if used for exception.
if (frame_frame_textual$canvas$$$function__9_y_range == cache_frame_frame_textual$canvas$$$function__9_y_range) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$canvas$$$function__9_y_range);
    cache_frame_frame_textual$canvas$$$function__9_y_range = NULL;
}

assertFrameObject(frame_frame_textual$canvas$$$function__9_y_range);

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
CHECK_OBJECT(par_start);
Py_DECREF(par_start);
CHECK_OBJECT(par_end);
Py_DECREF(par_end);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_start);
Py_DECREF(par_start);
CHECK_OBJECT(par_end);
Py_DECREF(par_end);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$canvas$$$function__10_render(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_primitives = python_pars[1];
PyObject *par_base_style = python_pars[2];
PyObject *var_strips = NULL;
PyObject *var_segments = NULL;
PyObject *var_color_indices = NULL;
PyObject *var_primitive = NULL;
PyObject *var_get_box = NULL;
PyObject *var_box = NULL;
PyObject *var_line = NULL;
PyObject *var_offset = NULL;
PyObject *var_quad = NULL;
PyObject *var_width = NULL;
PyObject *var_span_sort_key = NULL;
PyObject *var_color = NULL;
PyObject *var__Segment = NULL;
PyObject *var_raw_spans = NULL;
PyObject *var_text = NULL;
PyObject *var_colors = NULL;
PyObject *var_spans = NULL;
PyObject *var_color_remove = NULL;
PyObject *var_color_add = NULL;
PyObject *var_leaving = NULL;
PyObject *var_style_id = NULL;
PyObject *var_next_offset = NULL;
PyObject *var__ = NULL;
PyObject *outline_0_var_span = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_for_loop_4__for_iterator = NULL;
PyObject *tmp_for_loop_4__iter_value = NULL;
PyObject *tmp_for_loop_5__for_iterator = NULL;
PyObject *tmp_for_loop_5__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_genexpr_2__$0 = NULL;
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
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
PyObject *tmp_tuple_unpack_4__element_1 = NULL;
PyObject *tmp_tuple_unpack_4__element_2 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
PyObject *tmp_tuple_unpack_5__element_1 = NULL;
PyObject *tmp_tuple_unpack_5__element_2 = NULL;
PyObject *tmp_tuple_unpack_5__element_3 = NULL;
PyObject *tmp_tuple_unpack_5__source_iter = NULL;
PyObject *tmp_tuple_unpack_6__element_1 = NULL;
PyObject *tmp_tuple_unpack_6__element_2 = NULL;
PyObject *tmp_tuple_unpack_6__element_3 = NULL;
PyObject *tmp_tuple_unpack_6__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$function__10_render;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$canvas$$$function__10_render = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$canvas$$$function__10_render)) {
    Py_XDECREF(cache_frame_frame_textual$canvas$$$function__10_render);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$canvas$$$function__10_render == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$canvas$$$function__10_render = MAKE_FUNCTION_FRAME(tstate, code_objects_71b4884be0a34a9aa3ccc2122cd869aa, module_textual$canvas, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$canvas$$$function__10_render->m_type_description == NULL);
frame_frame_textual$canvas$$$function__10_render = cache_frame_frame_textual$canvas$$$function__10_render;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$function__10_render);
assert(Py_REFCNT(frame_frame_textual$canvas$$$function__10_render) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_primitives);
tmp_iter_arg_1 = par_primitives;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooooooooooooooooooooooo";
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
type_description_1 = "oooooooooooooooooooooooooo";
exception_lineno = 222;
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
    PyObject *old = var_primitive;
    var_primitive = tmp_assign_source_3;
    Py_INCREF(var_primitive);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_primitive);
tmp_expression_value_1 = var_primitive;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_render);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 223;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = par_self;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 223;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_textual$canvas$BOX_CHARACTERS(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOX_CHARACTERS);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 225;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___getitem__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_get_box == NULL);
var_get_box = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
tmp_called_value_2 = (PyObject *)&PyZip_Type;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_box);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_lines);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooo";
exception_lineno = 226;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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



exception_lineno = 226;
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

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_box;
    var_box = tmp_assign_source_10;
    Py_INCREF(var_box);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_line;
    var_line = tmp_assign_source_11;
    Py_INCREF(var_line);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_box);
tmp_expression_value_5 = var_box;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_items);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 227;
tmp_iter_arg_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooo";
exception_lineno = 227;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_iter_arg_5 = tmp_for_loop_3__iter_value;
tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
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



exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_7;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_17 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_17;
    Py_INCREF(var_offset);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_quad;
    var_quad = tmp_assign_source_18;
    Py_INCREF(var_quad);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
if (var_get_box == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_box);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_called_value_4 = var_get_box;
CHECK_OBJECT(var_quad);
tmp_args_element_value_4 = var_quad;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 228;
tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
if (var_line == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_line);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_ass_subscribed_1 = var_line;
CHECK_OBJECT(var_offset);
tmp_ass_subscript_1 = var_offset;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_3;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_7;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_6;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 230;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = par_self;
tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__width);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_width == NULL);
var_width = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_textual$canvas$itemgetter(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_itemgetter);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 231;
tmp_assign_source_20 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_int_0_int_pos_1_tuple);

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_span_sort_key == NULL);
var_span_sort_key = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_strips == NULL);
var_strips = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_base_style);
tmp_expression_value_7 = par_base_style;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_bgcolor);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 235;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_expression_value_8 = module_var_accessor_textual$canvas$Color(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Color);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_from_rich_color);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_base_style);
tmp_expression_value_9 = par_base_style;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_bgcolor);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 234;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 234;
tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_instance_1 = module_var_accessor_textual$canvas$Color(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Color);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 236;
tmp_assign_source_22 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_parse,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_transparent_tuple, 0)
);

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_color == NULL);
var_color = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = module_var_accessor_textual$canvas$Segment(tstate);
if (unlikely(tmp_assign_source_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__Segment == NULL);
Py_INCREF(tmp_assign_source_23);
var__Segment = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iter_arg_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_11;
tmp_called_value_7 = (PyObject *)&PyZip_Type;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_spans);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_args_element_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = par_self;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_lines);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 239;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_24 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_4__for_iterator == NULL);
tmp_for_loop_4__for_iterator = tmp_assign_source_24;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
tmp_next_source_4 = tmp_for_loop_4__for_iterator;
tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_25 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooo";
exception_lineno = 239;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_for_loop_4__iter_value;
    tmp_for_loop_4__iter_value = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(tmp_for_loop_4__iter_value);
tmp_iter_arg_7 = tmp_for_loop_4__iter_value;
tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_27 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooo";
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

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_9;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_29 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_raw_spans;
    var_raw_spans = tmp_assign_source_29;
    Py_INCREF(var_raw_spans);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_30 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_line;
    var_line = tmp_assign_source_30;
    Py_INCREF(var_line);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_line);
tmp_called_instance_2 = var_line;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 240;
tmp_assign_source_31 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_tounicode);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_raw_spans);
tmp_truth_name_2 = CHECK_IF_TRUE(var_raw_spans);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_segments;
    var_segments = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_list_element_1;
CHECK_OBJECT(var_color);
tmp_list_element_1 = var_color;
tmp_add_expr_left_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_add_expr_left_1, 0, tmp_list_element_1);
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_iter_arg_8;
CHECK_OBJECT(var_raw_spans);
tmp_iter_arg_8 = var_raw_spans;
tmp_assign_source_34 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_35;
}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_36;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_5 = tmp_listcomp_1__$0;
tmp_assign_source_36 = ITERATOR_NEXT(tmp_next_source_5);
if (tmp_assign_source_36 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooo";
exception_lineno = 244;
        goto try_except_handler_13;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_37 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_span;
    outline_0_var_span = tmp_assign_source_37;
    Py_INCREF(outline_0_var_span);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_span);
tmp_expression_value_12 = outline_0_var_span;
tmp_append_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_color);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
goto loop_start_5;
loop_end_5:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_add_expr_right_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_add_expr_right_1);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
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
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_XDECREF(outline_0_var_span);
outline_0_var_span = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_span);
outline_0_var_span = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 244;
goto try_except_handler_9;
outline_result_1:;
tmp_assign_source_33 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_colors;
    var_colors = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_tuple_tuple_int_0_false_int_0_tuple_tuple;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_tuple_element_3;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
{
PyObject *tmp_assign_source_39;
PyObject *tmp_iter_arg_9;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_8 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(var_raw_spans);
tmp_args_element_value_8 = var_raw_spans;
tmp_args_element_value_9 = const_int_pos_1;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 249;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_iter_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_assign_source_39 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
CHECK_OBJECT(tmp_iter_arg_9);
Py_DECREF(tmp_iter_arg_9);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_tuple_element_1 = MAKE_GENERATOR_textual$canvas$$$function__10_render$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_14;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
{
PyObject *tmp_assign_source_40;
PyObject *tmp_iter_arg_10;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_9 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(var_raw_spans);
tmp_args_element_value_10 = var_raw_spans;
tmp_args_element_value_11 = const_int_pos_1;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 253;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_iter_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_assign_source_40 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
CHECK_OBJECT(tmp_iter_arg_10);
Py_DECREF(tmp_iter_arg_10);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
{
    PyObject *old = tmp_genexpr_2__$0;
    tmp_genexpr_2__$0 = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);
tmp_tuple_element_1 = MAKE_GENERATOR_textual$canvas$$$function__10_render$$$genexpr__2_genexpr(tstate, tmp_closure_2);

goto try_return_handler_15;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(tmp_genexpr_2__$0);
CHECK_OBJECT(tmp_genexpr_2__$0);
Py_DECREF(tmp_genexpr_2__$0);
tmp_genexpr_2__$0 = NULL;
goto outline_result_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 2, tmp_tuple_element_1);
if (var_width == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "oooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_3 = var_width;
tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_True;
PyTuple_SET_ITEM0(tmp_tuple_element_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = const_int_0;
PyTuple_SET_ITEM0(tmp_tuple_element_2, 2, tmp_tuple_element_3);
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_38 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_spans;
    var_spans = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(var_spans);
tmp_expression_value_13 = var_spans;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_sort);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (var_span_sort_key == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_span_sort_key);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 257;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_kw_call_value_0_1 = var_span_sort_key;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 257;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_10, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = PySet_New(NULL);
{
    PyObject *old = var_color_indices;
    var_color_indices = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_color_indices);
tmp_expression_value_14 = var_color_indices;
tmp_assign_source_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_discard);
assert(!(tmp_assign_source_42 == NULL));
{
    PyObject *old = var_color_remove;
    var_color_remove = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(var_color_indices);
tmp_expression_value_15 = var_color_indices;
tmp_assign_source_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_add);
assert(!(tmp_assign_source_43 == NULL));
{
    PyObject *old = var_color_add;
    var_color_add = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_iter_arg_11;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_1;
tmp_called_value_11 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var_spans);
tmp_args_element_value_12 = var_spans;
CHECK_OBJECT(var_spans);
tmp_expression_value_16 = var_spans;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_1_none_none;
tmp_args_element_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_1);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 261;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_iter_arg_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_iter_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_assign_source_44 = MAKE_ITERATOR(tstate, tmp_iter_arg_11);
CHECK_OBJECT(tmp_iter_arg_11);
Py_DECREF(tmp_iter_arg_11);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_for_loop_5__for_iterator;
    tmp_for_loop_5__for_iterator = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_6;
PyObject *tmp_assign_source_45;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
tmp_next_source_6 = tmp_for_loop_5__for_iterator;
tmp_assign_source_45 = ITERATOR_NEXT(tmp_next_source_6);
if (tmp_assign_source_45 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooo";
exception_lineno = 261;
        goto try_except_handler_16;
    }
}

{
    PyObject *old = tmp_for_loop_5__iter_value;
    tmp_for_loop_5__iter_value = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_46;
PyObject *tmp_iter_arg_12;
CHECK_OBJECT(tmp_for_loop_5__iter_value);
tmp_iter_arg_12 = tmp_for_loop_5__iter_value;
tmp_assign_source_46 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = tmp_tuple_unpack_4__source_iter;
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_47 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_1;
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_48 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_2;
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_48;
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



exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
}
goto try_end_10;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_17;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
// Tried code:
{
PyObject *tmp_assign_source_49;
PyObject *tmp_iter_arg_13;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_iter_arg_13 = tmp_tuple_unpack_4__element_1;
tmp_assign_source_49 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
{
    PyObject *old = tmp_tuple_unpack_5__source_iter;
    tmp_tuple_unpack_5__source_iter = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_50;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_50 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 3);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_20;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_1;
    tmp_tuple_unpack_5__element_1 = tmp_assign_source_50;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_51 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 3);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_20;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_2;
    tmp_tuple_unpack_5__element_2 = tmp_assign_source_51;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_unpack_11;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_52 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 2, 3);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_20;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_3;
    tmp_tuple_unpack_5__element_3 = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_5;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_20;
}
}
goto try_end_11;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_19;
// End of try:
try_end_11:;
goto try_end_12;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_3);
tmp_tuple_unpack_5__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_17;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
{
PyObject *tmp_assign_source_53;
CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
tmp_assign_source_53 = tmp_tuple_unpack_5__element_1;
{
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_53;
    Py_INCREF(var_offset);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;

{
PyObject *tmp_assign_source_54;
CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
tmp_assign_source_54 = tmp_tuple_unpack_5__element_2;
{
    PyObject *old = var_leaving;
    var_leaving = tmp_assign_source_54;
    Py_INCREF(var_leaving);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;

{
PyObject *tmp_assign_source_55;
CHECK_OBJECT(tmp_tuple_unpack_5__element_3);
tmp_assign_source_55 = tmp_tuple_unpack_5__element_3;
{
    PyObject *old = var_style_id;
    var_style_id = tmp_assign_source_55;
    Py_INCREF(var_style_id);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_3);
tmp_tuple_unpack_5__element_3 = NULL;

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_56;
PyObject *tmp_iter_arg_14;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_iter_arg_14 = tmp_tuple_unpack_4__element_2;
tmp_assign_source_56 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_14);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
{
    PyObject *old = tmp_tuple_unpack_6__source_iter;
    tmp_tuple_unpack_6__source_iter = tmp_assign_source_56;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_57;
PyObject *tmp_unpack_12;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_57 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 0, 3);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_1;
    tmp_tuple_unpack_6__element_1 = tmp_assign_source_57;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_unpack_13;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_58 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 1, 3);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_2;
    tmp_tuple_unpack_6__element_2 = tmp_assign_source_58;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_unpack_14;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_14 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_59 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 2, 3);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_3;
    tmp_tuple_unpack_6__element_3 = tmp_assign_source_59;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_6;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_6, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
}
goto try_end_13;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_21;
// End of try:
try_end_13:;
goto try_end_14;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_6__element_3);
tmp_tuple_unpack_6__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_17;
// End of try:
try_end_14:;
goto try_end_15;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_16;
// End of try:
try_end_15:;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
{
PyObject *tmp_assign_source_60;
CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
tmp_assign_source_60 = tmp_tuple_unpack_6__element_1;
{
    PyObject *old = var_next_offset;
    var_next_offset = tmp_assign_source_60;
    Py_INCREF(var_next_offset);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;

{
PyObject *tmp_assign_source_61;
CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
tmp_assign_source_61 = tmp_tuple_unpack_6__element_2;
{
    PyObject *old = var__;
    var__ = tmp_assign_source_61;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;

{
PyObject *tmp_assign_source_62;
CHECK_OBJECT(tmp_tuple_unpack_6__element_3);
tmp_assign_source_62 = tmp_tuple_unpack_6__element_3;
{
    PyObject *old = var__;
    assert(old != NULL);
    var__ = tmp_assign_source_62;
    Py_INCREF(var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_3);
tmp_tuple_unpack_6__element_3 = NULL;

Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_3;
CHECK_OBJECT(var_leaving);
tmp_truth_name_3 = CHECK_IF_TRUE(var_leaving);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_14;
if (var_color_remove == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_color_remove);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}

tmp_called_value_12 = var_color_remove;
CHECK_OBJECT(var_style_id);
tmp_args_element_value_14 = var_style_id;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 265;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_14);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_15;
if (var_color_add == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_color_add);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 267;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}

tmp_called_value_13 = var_color_add;
CHECK_OBJECT(var_style_id);
tmp_args_element_value_15 = var_style_id;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 267;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_15);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_next_offset);
tmp_cmp_expr_left_1 = var_next_offset;
CHECK_OBJECT(var_offset);
tmp_cmp_expr_right_1 = var_offset;
tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_args_element_value_17;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_3;
bool tmp_condition_result_5;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_19;
if (var_segments == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_segments);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 269;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}

tmp_list_arg_value_1 = var_segments;
if (var__Segment == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Segment);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 270;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}

tmp_called_value_14 = var__Segment;
CHECK_OBJECT(var_text);
tmp_expression_value_17 = var_text;
CHECK_OBJECT(var_offset);
tmp_start_value_1 = var_offset;
CHECK_OBJECT(var_next_offset);
tmp_stop_value_1 = var_next_offset;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_args_element_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
if (par_base_style == NULL) {
Py_DECREF(tmp_args_element_value_16);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_style);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 272;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}

tmp_add_expr_left_2 = par_base_style;
tmp_expression_value_18 = module_var_accessor_textual$canvas$Style(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_16);

exception_lineno = 273;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_from_color);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_16);

exception_lineno = 273;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
CHECK_OBJECT(var_colors);
tmp_expression_value_20 = var_colors;
CHECK_OBJECT(var_color_indices);
tmp_condition_result_5 = CHECK_IF_TRUE(var_color_indices) == 1;
if (tmp_condition_result_5 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_called_value_16 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_16 != NULL);
CHECK_OBJECT(var_color_indices);
tmp_args_element_value_19 = var_color_indices;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 275;
tmp_subscript_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_19);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_called_value_15);

exception_lineno = 275;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_subscript_value_3 = const_int_0;
Py_INCREF(tmp_subscript_value_3);
condexpr_end_2:;
tmp_expression_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_called_value_15);

exception_lineno = 275;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_rich_color);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_called_value_15);

exception_lineno = 274;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 273;
tmp_add_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_16);

exception_lineno = 273;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
tmp_args_element_value_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_16);

exception_lineno = 273;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 270;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_item_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
goto loop_start_6;
loop_end_6:;
goto try_end_16;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_9;
// End of try:
try_end_16:;
Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
if (var_strips == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strips);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_list_arg_value_2 = var_strips;
tmp_called_value_17 = module_var_accessor_textual$canvas$Strip(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Strip);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (var_segments == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_segments);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_20 = var_segments;
if (var_width == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_21 = var_width;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 280;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_item_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_22;
PyObject *tmp_list_element_2;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
if (var_strips == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strips);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_list_arg_value_3 = var_strips;
tmp_called_value_18 = module_var_accessor_textual$canvas$Strip(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Strip);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (var__Segment == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Segment);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_called_value_19 = var__Segment;
CHECK_OBJECT(var_text);
tmp_args_element_value_23 = var_text;
if (par_base_style == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_style);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_24 = par_base_style;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 282;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_args_element_value_22 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_22, 0, tmp_list_element_2);
if (var_width == NULL) {
Py_DECREF(tmp_args_element_value_22);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_25 = var_width;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 282;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_25};
    tmp_item_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_item_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
goto loop_start_4;
loop_end_4:;
goto try_end_17;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
tmp_called_value_20 = module_var_accessor_textual$canvas$StripRenderable(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StripRenderable);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_strips == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strips);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 284;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_26 = var_strips;
if (var_width == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 284;
type_description_1 = "oooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_27 = var_width;
frame_frame_textual$canvas$$$function__10_render->m_frame.f_lineno = 284;
{
    PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$function__10_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$function__10_render->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$function__10_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$function__10_render,
    type_description_1,
    par_self,
    par_primitives,
    par_base_style,
    var_strips,
    var_segments,
    var_color_indices,
    var_primitive,
    var_get_box,
    var_box,
    var_line,
    var_offset,
    var_quad,
    var_width,
    var_span_sort_key,
    var_color,
    var__Segment,
    var_raw_spans,
    var_text,
    var_colors,
    var_spans,
    var_color_remove,
    var_color_add,
    var_leaving,
    var_style_id,
    var_next_offset,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_textual$canvas$$$function__10_render == cache_frame_frame_textual$canvas$$$function__10_render) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$canvas$$$function__10_render);
    cache_frame_frame_textual$canvas$$$function__10_render = NULL;
}

assertFrameObject(frame_frame_textual$canvas$$$function__10_render);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_strips);
var_strips = NULL;
Py_XDECREF(var_segments);
var_segments = NULL;
Py_XDECREF(var_color_indices);
var_color_indices = NULL;
Py_XDECREF(var_primitive);
var_primitive = NULL;
Py_XDECREF(var_get_box);
var_get_box = NULL;
Py_XDECREF(var_box);
var_box = NULL;
Py_XDECREF(var_line);
var_line = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_quad);
var_quad = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_span_sort_key);
var_span_sort_key = NULL;
CHECK_OBJECT(var_color);
CHECK_OBJECT(var_color);
Py_DECREF(var_color);
var_color = NULL;
Py_XDECREF(var__Segment);
var__Segment = NULL;
Py_XDECREF(var_raw_spans);
var_raw_spans = NULL;
Py_XDECREF(var_text);
var_text = NULL;
Py_XDECREF(var_colors);
var_colors = NULL;
Py_XDECREF(var_spans);
var_spans = NULL;
Py_XDECREF(var_color_remove);
var_color_remove = NULL;
Py_XDECREF(var_color_add);
var_color_add = NULL;
Py_XDECREF(var_leaving);
var_leaving = NULL;
Py_XDECREF(var_style_id);
var_style_id = NULL;
Py_XDECREF(var_next_offset);
var_next_offset = NULL;
Py_XDECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_strips);
var_strips = NULL;
Py_XDECREF(var_segments);
var_segments = NULL;
Py_XDECREF(var_color_indices);
var_color_indices = NULL;
Py_XDECREF(var_primitive);
var_primitive = NULL;
Py_XDECREF(var_get_box);
var_get_box = NULL;
Py_XDECREF(var_box);
var_box = NULL;
Py_XDECREF(var_line);
var_line = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_quad);
var_quad = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_span_sort_key);
var_span_sort_key = NULL;
Py_XDECREF(var_color);
var_color = NULL;
Py_XDECREF(var__Segment);
var__Segment = NULL;
Py_XDECREF(var_raw_spans);
var_raw_spans = NULL;
Py_XDECREF(var_text);
var_text = NULL;
Py_XDECREF(var_colors);
var_colors = NULL;
Py_XDECREF(var_spans);
var_spans = NULL;
Py_XDECREF(var_color_remove);
var_color_remove = NULL;
Py_XDECREF(var_color_add);
var_color_add = NULL;
Py_XDECREF(var_leaving);
var_leaving = NULL;
Py_XDECREF(var_style_id);
var_style_id = NULL;
Py_XDECREF(var_next_offset);
var_next_offset = NULL;
Py_XDECREF(var__);
var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_primitives);
Py_DECREF(par_primitives);
CHECK_OBJECT(par_base_style);
Py_DECREF(par_base_style);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_primitives);
Py_DECREF(par_primitives);
CHECK_OBJECT(par_base_style);
Py_DECREF(par_base_style);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct textual$canvas$$$function__10_render$$$genexpr__1_genexpr_locals {
PyObject *var_index;
PyObject *var_span;
PyObject *tmp_iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *textual$canvas$$$function__10_render$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$canvas$$$function__10_render$$$genexpr__1_genexpr_locals *generator_heap = (struct textual$canvas$$$function__10_render$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_index = NULL;
generator_heap->var_span = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_810712f6e75de6b845b2d33591f09482, module_textual$canvas, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noo";
generator_heap->exception_lineno = 247;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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



generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
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
{
    PyObject *old = generator_heap->var_index;
    generator_heap->var_index = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_span;
    generator_heap->var_span = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_span);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_span);
tmp_expression_value_2 = generator_heap->var_span;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_start);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_expression_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_expression_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_False;
PyTuple_SET_ITEM0(tmp_expression_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_index);
tmp_tuple_element_1 = generator_heap->var_index;
PyTuple_SET_ITEM0(tmp_expression_value_1, 2, tmp_tuple_element_1);
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 247;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

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
    generator_heap->var_index,
    generator_heap->var_span
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
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_index);
generator_heap->var_index = NULL;
Py_XDECREF(generator_heap->var_span);
generator_heap->var_span = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_index);
generator_heap->var_index = NULL;
Py_XDECREF(generator_heap->var_span);
generator_heap->var_span = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$canvas$$$function__10_render$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$canvas$$$function__10_render$$$genexpr__1_genexpr_context,
        module_textual$canvas,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_6ff816255890bb734d0db5206225565d,
#endif
        code_objects_810712f6e75de6b845b2d33591f09482,
        closure,
        1,
#if 1
        sizeof(struct textual$canvas$$$function__10_render$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct textual$canvas$$$function__10_render$$$genexpr__2_genexpr_locals {
PyObject *var_index;
PyObject *var_span;
PyObject *tmp_iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *textual$canvas$$$function__10_render$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$canvas$$$function__10_render$$$genexpr__2_genexpr_locals *generator_heap = (struct textual$canvas$$$function__10_render$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_index = NULL;
generator_heap->var_span = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_4e6d9dd80c1be524bd9e6cb7db23d24e, module_textual$canvas, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noo";
generator_heap->exception_lineno = 251;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 253;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 253;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 253;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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



generator_heap->exception_lineno = 253;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
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
{
    PyObject *old = generator_heap->var_index;
    generator_heap->var_index = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_span;
    generator_heap->var_span = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_span);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_span);
tmp_expression_value_2 = generator_heap->var_span;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_end);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 252;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_expression_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_expression_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_True;
PyTuple_SET_ITEM0(tmp_expression_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_index);
tmp_tuple_element_1 = generator_heap->var_index;
PyTuple_SET_ITEM0(tmp_expression_value_1, 2, tmp_tuple_element_1);
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 252;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 251;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

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
    generator_heap->var_index,
    generator_heap->var_span
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
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_index);
generator_heap->var_index = NULL;
Py_XDECREF(generator_heap->var_span);
generator_heap->var_span = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_index);
generator_heap->var_index = NULL;
Py_XDECREF(generator_heap->var_span);
generator_heap->var_span = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$canvas$$$function__10_render$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$canvas$$$function__10_render$$$genexpr__2_genexpr_context,
        module_textual$canvas,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_6ff816255890bb734d0db5206225565d,
#endif
        code_objects_4e6d9dd80c1be524bd9e6cb7db23d24e,
        closure,
        1,
#if 1
        sizeof(struct textual$canvas$$$function__10_render$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_textual$canvas$$$function__10_render(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$canvas$$$function__10_render,
        mod_consts.const_str_plain_render,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5a276525b49d163f56fcb32bc69083af,
#endif
        code_objects_71b4884be0a34a9aa3ccc2122cd869aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$canvas,
        mod_consts.const_str_digest_82070527e93f2dcf6f08cc699982d140,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$canvas$$$function__1_render(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$canvas$$$function__1_render,
        mod_consts.const_str_plain_render,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_77e88f2437bf6e7b2adc13c4ced38a51,
#endif
        code_objects_67e8afa2927a8e1830a65319ff7b319c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$canvas,
        mod_consts.const_str_digest_e164bde6caaf1840120d12dba4468ec6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$canvas$$$function__2_render(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$canvas$$$function__2_render,
        mod_consts.const_str_plain_render,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2dd0222ede90de555174951c338181f1,
#endif
        code_objects_ab2965809bb52c622a63bd6c376e57fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$canvas,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$canvas$$$function__3_render(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$canvas$$$function__3_render,
        mod_consts.const_str_plain_render,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9e749e96f1ab07daf633038baca5b8fe,
#endif
        code_objects_a72823dca6003a6531ecaf22529d9e81,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$canvas,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$canvas$$$function__4_render(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$canvas$$$function__4_render,
        mod_consts.const_str_plain_render,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_589c6c01276dacb62faad89081de18b1,
#endif
        code_objects_69c47ad6d05c62955b02fc3c22a04664,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$canvas,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$canvas$$$function__5___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$canvas$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f7a67097657d77c885f91de87222c77e,
#endif
        code_objects_aab9ac77319188dc7dfe744b92020ef7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$canvas,
        mod_consts.const_str_digest_803beceec554407a9a0cf268dfd60379,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$canvas$$$function__5___init__$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c823efebddf0bd1266efa8c4b13030a8,
#endif
        code_objects_8fb2fac8a05f13fe70a4084a8e2c4302,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_textual$canvas,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnGeneric(result, mod_consts.const_tuple_int_0_int_0_int_0_int_0_tuple);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$canvas$$$function__6_width(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$canvas$$$function__6_width,
        mod_consts.const_str_plain_width,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f40f39b1e85a7b9db6d17e1b44c6c7a1,
#endif
        code_objects_f539a8da30683e0496bdf311635ccc1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$canvas,
        mod_consts.const_str_digest_275068eac133d305347639ce9c26b2d7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$canvas$$$function__7_height(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$canvas$$$function__7_height,
        mod_consts.const_str_plain_height,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_920426197330e4cdfb833b01f3b47186,
#endif
        code_objects_57c76ce588f235d71f187cb347b613d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$canvas,
        mod_consts.const_str_digest_247d920d15e371393ef6b125bd9432f5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$canvas$$$function__8_x_range(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$canvas$$$function__8_x_range,
        mod_consts.const_str_plain_x_range,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e2b1de5d752f773c52c56c4b86fdd3a1,
#endif
        code_objects_8c49e83d7123fcd30b59b71fefadef7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$canvas,
        mod_consts.const_str_digest_6fda5906f34d420ad7487fa193426b2c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$canvas$$$function__9_y_range(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$canvas$$$function__9_y_range,
        mod_consts.const_str_plain_y_range,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_909f9c1f0c8e723e03167f5e883d5b44,
#endif
        code_objects_39fb2af3b4c52e210a2d0a91428967ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$canvas,
        mod_consts.const_str_digest_63b7d4b0f395f38b3351ca27a80fb1bd,
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

static function_impl_code const function_table_textual$canvas[] = {
impl_textual$canvas$$$function__1_render,
impl_textual$canvas$$$function__2_render,
impl_textual$canvas$$$function__3_render,
impl_textual$canvas$$$function__4_render,
impl_textual$canvas$$$function__5___init__,
impl_textual$canvas$$$function__6_width,
impl_textual$canvas$$$function__7_height,
impl_textual$canvas$$$function__8_x_range,
impl_textual$canvas$$$function__9_y_range,
impl_textual$canvas$$$function__10_render,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$canvas);
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
        module_textual$canvas,
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
        function_table_textual$canvas,
        sizeof(function_table_textual$canvas) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.canvas";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$canvas(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$canvas");

    // Store the module for future use.
    module_textual$canvas = module;

    moduledict_textual$canvas = MODULE_DICT(module_textual$canvas);

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
        PRINT_STRING("textual$canvas: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$canvas: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$canvas: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.canvas" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$canvas\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$canvas,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$canvas,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$canvas,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$canvas,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$canvas,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$canvas);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$canvas);
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

        UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$canvas;
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
int tmp_res;
PyObject *locals_textual$canvas$$$class__1__Span_33 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$class__1__Span_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_textual$canvas$$$class__2_Primitive_41 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_textual$canvas$$$class__3_HorizontalLine_54 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$class__3_HorizontalLine_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_textual$canvas$$$class__4_VerticalLine_91 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$class__4_VerticalLine_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_textual$canvas$$$class__5_Rectangle_127 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$class__5_Rectangle_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_textual$canvas$$$class__6_Canvas_148 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$canvas$$$class__6_Canvas_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_72150616c4a0b05126df2ba6f26a61be;
UPDATE_STRING_DICT0(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$canvas = MAKE_MODULE_FRAME(code_objects_d38cd8035603f05d38a7ae10d405261f, module_textual$canvas);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas);
assert(Py_REFCNT(frame_frame_textual$canvas) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$canvas$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$canvas$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_array;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$canvas;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_array_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$canvas->m_frame.f_lineno = 12;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_array,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_array);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_array, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_collections;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$canvas;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_defaultdict_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$canvas->m_frame.f_lineno = 13;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_defaultdict,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_defaultdict);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$canvas;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_dataclass_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$canvas->m_frame.f_lineno = 14;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_dataclass);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_operator;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$canvas;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_itemgetter_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$canvas->m_frame.f_lineno = 15;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_itemgetter,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_itemgetter);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_itemgetter, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_11 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_11);
tmp_import_from_1__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_NamedTuple,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_NamedTuple);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$canvas;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Segment_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$canvas->m_frame.f_lineno = 18;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_Segment,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Segment);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$canvas;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_Style_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$canvas->m_frame.f_lineno = 19;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_Style,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Style);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Style, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_7 = (PyObject *)moduledict_textual$canvas;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_Literal_str_plain_TypeAlias_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_textual$canvas->m_frame.f_lineno = 20;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_18);
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
PyObject *tmp_assign_source_19;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_36eae6ea288405973040c98f5a84d80d;
tmp_globals_arg_value_8 = (PyObject *)moduledict_textual$canvas;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_de33e425e01ab48a3497b08a47d2dbd0_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_textual$canvas->m_frame.f_lineno = 22;
tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_BOX_CHARACTERS,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_BOX_CHARACTERS);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_BOX_CHARACTERS, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_Quad,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Quad);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Quad, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_combine_quads,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_combine_quads);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_combine_quads, tmp_assign_source_22);
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
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
tmp_globals_arg_value_9 = (PyObject *)moduledict_textual$canvas;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_Color_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_textual$canvas->m_frame.f_lineno = 23;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_Color,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Color);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Color, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25;
tmp_globals_arg_value_10 = (PyObject *)moduledict_textual$canvas;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_Offset_str_plain_clamp_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_textual$canvas->m_frame.f_lineno = 24;
tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_15 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_Offset,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_Offset);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Offset, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_clamp,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_clamp);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_clamp, tmp_assign_source_26);
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
PyObject *tmp_assign_source_27;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_ffbdc977fd7566d9981a709ea52c386e;
tmp_globals_arg_value_11 = (PyObject *)moduledict_textual$canvas;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_Strip_str_plain_StripRenderable_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_textual$canvas->m_frame.f_lineno = 25;
tmp_assign_source_27 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_27;
}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_17 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_Strip,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_Strip);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_18 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_textual$canvas,
        mod_consts.const_str_plain_StripRenderable,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_StripRenderable);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_StripRenderable, tmp_assign_source_29);
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
PyObject *tmp_assign_source_30;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_textual$canvas$Literal(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_str_plain_thin_str_plain_heavy_str_plain_double_tuple;
tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_CanvasLineType, tmp_assign_source_30);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_1 = module_var_accessor_textual$canvas$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_CanvasLineType;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = DICT_COPY(tstate, mod_consts.const_dict_c50380055d571357ca259cc30a3c2804);
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain__LINE_TYPE_INDEX, tmp_assign_source_31);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_textual$canvas$NamedTuple(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NamedTuple);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto try_except_handler_6;
}
tmp_assign_source_32 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_32, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_33 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_35 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_35;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
tmp_tuple_element_2 = mod_consts.const_str_plain__Span;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$canvas->m_frame.f_lineno = 33;
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_36;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_12, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
frame_frame_textual$canvas->m_frame.f_lineno = 33;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 33;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_37;
}
branch_end_1:;
{
PyObject *tmp_assign_source_38;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$canvas$$$class__1__Span_33 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5a7893915922a0cb2056d200fc85ea72;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__1__Span_33, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_a6fc7a8426e17b63917289562c40c32b;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__1__Span_33, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain__Span;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__1__Span_33, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_33;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__1__Span_33, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__1__Span_33, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
frame_frame_textual$canvas$$$class__1__Span_2 = MAKE_CLASS_FRAME(tstate, code_objects_9f1e6b9e7759d1bf912579e6d22f3faa, module_textual$canvas, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$class__1__Span_2);
assert(Py_REFCNT(frame_frame_textual$canvas$$$class__1__Span_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = const_str_plain_int;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_textual$canvas$$$class__1__Span_33, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_start;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = const_str_plain_int;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_textual$canvas$$$class__1__Span_33, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = const_str_plain_end;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_plain_Color;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_textual$canvas$$$class__1__Span_33, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_color;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$class__1__Span_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$class__1__Span_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$class__1__Span_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$class__1__Span_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$canvas$$$class__1__Span_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_8;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__1__Span_33, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__1__Span_33, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
branch_no_3:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain__Span;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$canvas$$$class__1__Span_33;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$canvas->m_frame.f_lineno = 33;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_8;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_39;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_38 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_38);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_textual$canvas$$$class__1__Span_33);
locals_textual$canvas$$$class__1__Span_33 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$canvas$$$class__1__Span_33);
locals_textual$canvas$$$class__1__Span_33 = NULL;
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
exception_lineno = 33;
goto try_except_handler_6;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain__Span, tmp_assign_source_38);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
Py_DECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
Py_DECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
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
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_41;
}
// Tried code:
{
PyObject *tmp_assign_source_42;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_textual$canvas$$$class__2_Primitive_41 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_5a7893915922a0cb2056d200fc85ea72;
tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__2_Primitive_41, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_93acea94fd2d3c48cf43d5671f226fa2;
tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__2_Primitive_41, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Primitive;
tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__2_Primitive_41, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_41;
tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__2_Primitive_41, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_ab59c4541d2b3d37492a1a89e8c1b4fe);

tmp_dictset_value = MAKE_FUNCTION_textual$canvas$$$function__1_render(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__2_Primitive_41, mod_consts.const_str_plain_render, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__2_Primitive_41, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
tmp_called_value_3 = (PyObject *)&PyType_Type;
tmp_tuple_element_5 = mod_consts.const_str_plain_Primitive;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_textual$canvas$$$class__2_Primitive_41;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$canvas->m_frame.f_lineno = 41;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_11;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_43;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_42 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_42);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_textual$canvas$$$class__2_Primitive_41);
locals_textual$canvas$$$class__2_Primitive_41 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$canvas$$$class__2_Primitive_41);
locals_textual$canvas$$$class__2_Primitive_41 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 41;
goto try_except_handler_9;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Primitive, tmp_assign_source_42);
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
tmp_outline_return_value_2 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_2);
goto outline_result_3;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
}
{
PyObject *tmp_outline_return_value_3;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = module_var_accessor_textual$canvas$Primitive(tstate);
assert(!(tmp_tuple_element_6 == NULL));
tmp_assign_source_44 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_6);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_44;
}
// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_45 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_12;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_8 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_12;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_12;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_47 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_47;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_12;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_12;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_HorizontalLine;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$canvas->m_frame.f_lineno = 54;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_48;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_12;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_13, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_12;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_12;
}
frame_frame_textual$canvas->m_frame.f_lineno = 54;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 54;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_49;
}
branch_end_4:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
tmp_called_value_5 = module_var_accessor_textual$canvas$dataclass(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto try_except_handler_12;
}
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_textual$canvas$$$class__3_HorizontalLine_54 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5a7893915922a0cb2056d200fc85ea72;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_d37cc7904cfeab5adc219c6365673667;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_HorizontalLine;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_54;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_14;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_14;
}
frame_frame_textual$canvas$$$class__3_HorizontalLine_3 = MAKE_CLASS_FRAME(tstate, code_objects_8fcc2ff404ea382ad41fbf5d2a852788, module_textual$canvas, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$class__3_HorizontalLine_3);
assert(Py_REFCNT(frame_frame_textual$canvas$$$class__3_HorizontalLine_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_plain_Offset;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_origin;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = const_str_plain_int;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_length;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_plain_Color;
tmp_ass_subscribed_7 = PyObject_GetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_color;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = mod_consts.const_str_plain_thin;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, mod_consts.const_str_plain_line_type, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_plain_CanvasLineType;
tmp_ass_subscribed_8 = PyObject_GetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_line_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_ab59c4541d2b3d37492a1a89e8c1b4fe);

tmp_dictset_value = MAKE_FUNCTION_textual$canvas$$$function__2_render(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, mod_consts.const_str_plain_render, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$class__3_HorizontalLine_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$class__3_HorizontalLine_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$class__3_HorizontalLine_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$class__3_HorizontalLine_3,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_textual$canvas$$$class__3_HorizontalLine_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_14;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_14;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__3_HorizontalLine_54, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_14;
}
branch_no_6:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_9 = mod_consts.const_str_plain_HorizontalLine;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_textual$canvas$$$class__3_HorizontalLine_54;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$canvas->m_frame.f_lineno = 54;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_14;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_51;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_args_element_value_1 = outline_2_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_textual$canvas$$$class__3_HorizontalLine_54);
locals_textual$canvas$$$class__3_HorizontalLine_54 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$canvas$$$class__3_HorizontalLine_54);
locals_textual$canvas$$$class__3_HorizontalLine_54 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 54;
goto try_except_handler_12;
outline_result_6:;
frame_frame_textual$canvas->m_frame.f_lineno = 53;
tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_HorizontalLine, tmp_assign_source_50);
}
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
Py_DECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
Py_DECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
tmp_outline_return_value_3 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_3);
goto outline_result_5;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
}
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_52;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = module_var_accessor_textual$canvas$Primitive(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Primitive);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto try_except_handler_15;
}
tmp_assign_source_52 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_52, 0, tmp_tuple_element_10);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_53 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_15;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_14 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_4, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_15;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_15;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_55 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_55;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_15;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_15;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_VerticalLine;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_textual$canvas->m_frame.f_lineno = 91;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_56;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_17 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_15;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_18;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_14, tmp_default_value_3);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_15;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_19;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_19 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_15;
}
frame_frame_textual$canvas->m_frame.f_lineno = 91;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 91;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_57;
}
branch_end_7:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_2;
tmp_called_value_8 = module_var_accessor_textual$canvas$dataclass(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto try_except_handler_15;
}
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_textual$canvas$$$class__4_VerticalLine_91 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5a7893915922a0cb2056d200fc85ea72;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__4_VerticalLine_91, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_digest_842c27bed3ce93542182fe797f4a322c;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__4_VerticalLine_91, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain_VerticalLine;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__4_VerticalLine_91, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_91;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__4_VerticalLine_91, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_17;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__4_VerticalLine_91, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_17;
}
frame_frame_textual$canvas$$$class__4_VerticalLine_4 = MAKE_CLASS_FRAME(tstate, code_objects_1d5afe738ecb6330db0f9868d1902121, module_textual$canvas, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$class__4_VerticalLine_4);
assert(Py_REFCNT(frame_frame_textual$canvas$$$class__4_VerticalLine_4) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_plain_Offset;
tmp_ass_subscribed_9 = PyObject_GetItem(locals_textual$canvas$$$class__4_VerticalLine_91, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_origin;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = const_str_plain_int;
tmp_ass_subscribed_10 = PyObject_GetItem(locals_textual$canvas$$$class__4_VerticalLine_91, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_length;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = mod_consts.const_str_plain_Color;
tmp_ass_subscribed_11 = PyObject_GetItem(locals_textual$canvas$$$class__4_VerticalLine_91, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 96;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_color;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
tmp_dictset_value = mod_consts.const_str_plain_thin;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__4_VerticalLine_91, mod_consts.const_str_plain_line_type, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_ass_subvalue_12 = mod_consts.const_str_plain_CanvasLineType;
tmp_ass_subscribed_12 = PyObject_GetItem(locals_textual$canvas$$$class__4_VerticalLine_91, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_line_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_ab59c4541d2b3d37492a1a89e8c1b4fe);

tmp_dictset_value = MAKE_FUNCTION_textual$canvas$$$function__3_render(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__4_VerticalLine_91, mod_consts.const_str_plain_render, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$class__4_VerticalLine_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$class__4_VerticalLine_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$class__4_VerticalLine_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$class__4_VerticalLine_4,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_textual$canvas$$$class__4_VerticalLine_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_17;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__4_VerticalLine_91, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_17;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_17;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__4_VerticalLine_91, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_17;
}
branch_no_9:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain_VerticalLine;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_textual$canvas$$$class__4_VerticalLine_91;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_textual$canvas->m_frame.f_lineno = 91;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_17;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_59;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_args_element_value_2 = outline_3_var___class__;
Py_INCREF(tmp_args_element_value_2);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_textual$canvas$$$class__4_VerticalLine_91);
locals_textual$canvas$$$class__4_VerticalLine_91 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$canvas$$$class__4_VerticalLine_91);
locals_textual$canvas$$$class__4_VerticalLine_91 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 91;
goto try_except_handler_15;
outline_result_8:;
frame_frame_textual$canvas->m_frame.f_lineno = 90;
tmp_assign_source_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_15;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_VerticalLine, tmp_assign_source_58);
}
goto try_end_9;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
Py_DECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
Py_DECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_60;
PyObject *tmp_tuple_element_14;
tmp_tuple_element_14 = module_var_accessor_textual$canvas$Primitive(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Primitive);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto try_except_handler_18;
}
tmp_assign_source_60 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_60, 0, tmp_tuple_element_14);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_61 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_18;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_20 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_5, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_18;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_18;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_63 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_63;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_18;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_18;
}
tmp_tuple_element_15 = mod_consts.const_str_plain_Rectangle;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_textual$canvas->m_frame.f_lineno = 127;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_64;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_23 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_18;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_24;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_15, tmp_default_value_4);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_18;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_25;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_25 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_18;
}
frame_frame_textual$canvas->m_frame.f_lineno = 127;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 127;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_65;
}
branch_end_10:;
{
PyObject *tmp_assign_source_66;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_3;
tmp_called_value_11 = module_var_accessor_textual$canvas$dataclass(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto try_except_handler_18;
}
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_textual$canvas$$$class__5_Rectangle_127 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5a7893915922a0cb2056d200fc85ea72;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__5_Rectangle_127, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_digest_a9a3a2faa616d1eb2b1eeee399e37500;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__5_Rectangle_127, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_plain_Rectangle;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__5_Rectangle_127, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_127;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__5_Rectangle_127, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_20;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__5_Rectangle_127, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_20;
}
frame_frame_textual$canvas$$$class__5_Rectangle_5 = MAKE_CLASS_FRAME(tstate, code_objects_e88f6e88104fac8ad916b50c1e89f6f5, module_textual$canvas, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$class__5_Rectangle_5);
assert(Py_REFCNT(frame_frame_textual$canvas$$$class__5_Rectangle_5) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_ass_subvalue_13 = mod_consts.const_str_plain_Offset;
tmp_ass_subscribed_13 = PyObject_GetItem(locals_textual$canvas$$$class__5_Rectangle_127, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_origin;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
CHECK_OBJECT(tmp_ass_subscribed_13);
Py_DECREF(tmp_ass_subscribed_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_ass_subvalue_14 = const_str_plain_int;
tmp_ass_subscribed_14 = PyObject_GetItem(locals_textual$canvas$$$class__5_Rectangle_127, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_width;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
CHECK_OBJECT(tmp_ass_subscribed_14);
Py_DECREF(tmp_ass_subscribed_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_ass_subscript_15;
tmp_ass_subvalue_15 = const_str_plain_int;
tmp_ass_subscribed_15 = PyObject_GetItem(locals_textual$canvas$$$class__5_Rectangle_127, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_15 = mod_consts.const_str_plain_height;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
CHECK_OBJECT(tmp_ass_subscribed_15);
Py_DECREF(tmp_ass_subscribed_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_16;
PyObject *tmp_ass_subscribed_16;
PyObject *tmp_ass_subscript_16;
tmp_ass_subvalue_16 = mod_consts.const_str_plain_Color;
tmp_ass_subscribed_16 = PyObject_GetItem(locals_textual$canvas$$$class__5_Rectangle_127, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_16 = mod_consts.const_str_plain_color;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
CHECK_OBJECT(tmp_ass_subscribed_16);
Py_DECREF(tmp_ass_subscribed_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = mod_consts.const_str_plain_thin;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__5_Rectangle_127, mod_consts.const_str_plain_line_type, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_17;
PyObject *tmp_ass_subscribed_17;
PyObject *tmp_ass_subscript_17;
tmp_ass_subvalue_17 = mod_consts.const_str_plain_CanvasLineType;
tmp_ass_subscribed_17 = PyObject_GetItem(locals_textual$canvas$$$class__5_Rectangle_127, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_17 = mod_consts.const_str_plain_line_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
CHECK_OBJECT(tmp_ass_subscribed_17);
Py_DECREF(tmp_ass_subscribed_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_ab59c4541d2b3d37492a1a89e8c1b4fe);

tmp_dictset_value = MAKE_FUNCTION_textual$canvas$$$function__4_render(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__5_Rectangle_127, mod_consts.const_str_plain_render, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$class__5_Rectangle_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$class__5_Rectangle_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$class__5_Rectangle_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$class__5_Rectangle_5,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_textual$canvas$$$class__5_Rectangle_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_20;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__5_Rectangle_127, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_20;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_20;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$canvas$$$class__5_Rectangle_127, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_20;
}
branch_no_12:;
{
PyObject *tmp_assign_source_67;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_17 = mod_consts.const_str_plain_Rectangle;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = locals_textual$canvas$$$class__5_Rectangle_127;
PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_textual$canvas->m_frame.f_lineno = 127;
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_20;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_67;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_args_element_value_3 = outline_4_var___class__;
Py_INCREF(tmp_args_element_value_3);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_textual$canvas$$$class__5_Rectangle_127);
locals_textual$canvas$$$class__5_Rectangle_127 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$canvas$$$class__5_Rectangle_127);
locals_textual$canvas$$$class__5_Rectangle_127 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 127;
goto try_except_handler_18;
outline_result_10:;
frame_frame_textual$canvas->m_frame.f_lineno = 126;
tmp_assign_source_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_18;
}
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Rectangle, tmp_assign_source_66);
}
goto try_end_10;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_outline_return_value_6;
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_69;
}
// Tried code:
{
PyObject *tmp_assign_source_70;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_textual$canvas$$$class__6_Canvas_148 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
tmp_dictset_value = mod_consts.const_str_digest_5a7893915922a0cb2056d200fc85ea72;
tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__6_Canvas_148, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_8f9e9a141f728c8b86b160e6fd7b3e7e;
tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__6_Canvas_148, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Canvas;
tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__6_Canvas_148, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_148;
tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__6_Canvas_148, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_90bd90a846772ae2d71c76b6a0340183);

tmp_dictset_value = MAKE_FUNCTION_textual$canvas$$$function__5___init__(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__6_Canvas_148, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_textual$canvas$$$class__6_Canvas_6 = MAKE_CLASS_FRAME(tstate, code_objects_fce8a96c7268c5d90fefd6d7960a4829, module_textual$canvas, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$canvas$$$class__6_Canvas_6);
assert(Py_REFCNT(frame_frame_textual$canvas$$$class__6_Canvas_6) == 2);

// Framed code:
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_6;
tmp_called_value_13 = (PyObject *)&PyProperty_Type;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_4 = MAKE_FUNCTION_textual$canvas$$$function__6_width(tstate, tmp_annotations_6);

frame_frame_textual$canvas$$$class__6_Canvas_6->m_frame.f_lineno = 170;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__6_Canvas_148, mod_consts.const_str_plain_width, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_7;
tmp_called_value_14 = (PyObject *)&PyProperty_Type;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_5 = MAKE_FUNCTION_textual$canvas$$$function__7_height(tstate, tmp_annotations_7);

frame_frame_textual$canvas$$$class__6_Canvas_6->m_frame.f_lineno = 175;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__6_Canvas_148, mod_consts.const_str_plain_height, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas$$$class__6_Canvas_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas$$$class__6_Canvas_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas$$$class__6_Canvas_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$canvas$$$class__6_Canvas_6,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_textual$canvas$$$class__6_Canvas_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_23;
skip_nested_handling_5:;
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_591bbadb8793c7aa036ab38e58e61b3f);

tmp_dictset_value = MAKE_FUNCTION_textual$canvas$$$function__8_x_range(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__6_Canvas_148, mod_consts.const_str_plain_x_range, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_591bbadb8793c7aa036ab38e58e61b3f);

tmp_dictset_value = MAKE_FUNCTION_textual$canvas$$$function__9_y_range(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__6_Canvas_148, mod_consts.const_str_plain_y_range, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_ea6868bf187931e50f5ae99f74ee712f);

tmp_dictset_value = MAKE_FUNCTION_textual$canvas$$$function__10_render(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__6_Canvas_148, mod_consts.const_str_plain_render, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_5450a1eda27c0cc2f0c7add7e11b82e2_tuple;
tmp_result = DICT_SET_ITEM(locals_textual$canvas$$$class__6_Canvas_148, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_71;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_10;
tmp_called_value_15 = (PyObject *)&PyType_Type;
tmp_tuple_element_18 = mod_consts.const_str_plain_Canvas;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_18);
tmp_tuple_element_18 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = locals_textual$canvas$$$class__6_Canvas_148;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_textual$canvas->m_frame.f_lineno = 148;
tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_23;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_71;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_70 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_70);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_textual$canvas$$$class__6_Canvas_148);
locals_textual$canvas$$$class__6_Canvas_148 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$canvas$$$class__6_Canvas_148);
locals_textual$canvas$$$class__6_Canvas_148 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_22;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 148;
goto try_except_handler_21;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_textual$canvas, (Nuitka_StringObject *)mod_consts.const_str_plain_Canvas, tmp_assign_source_70);
}
goto try_end_11;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$canvas, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$canvas->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$canvas, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$canvas);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$canvas", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.canvas" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$canvas);
    return module_textual$canvas;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$canvas, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$canvas", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
